#!/usr/bin/env sh

# find version number
export VERSION_NUM=$(grep AWS_SDK_VERSION_STRING ./aws-cpp-sdk-core/include/aws/core/VersionConfig.h | cut -d ' ' -f3)
sed -i "s/PROJECT_NUMBER .*/PROJECT_NUMBER         = $VERSION_NUM/" ./doxygen/modules/static/root.config
sed -i "s/PROJECT_NUMBER .*/PROJECT_NUMBER         = $VERSION_NUM/" ./doxygen/modules/template/module-template.config

# run doc generation
python doxygen/modules/scripts/run-doc-generation.py

# move everything into place
cp LICENSE ./doxygen/output/root/html
mkdir s3-artifact/"$VERSION_NUM"
mkdir s3-artifact/LATEST
cp -r ./doxygen/output s3-artifact/"$VERSION_NUM"
cp -r ./doxygen/output s3-artifact/LATEST

# create cross links
python doc_crosslinks/generate_cross_link_data.py --apiDefinitionsPath ./code-generation/api-descriptions/ --templatePath ./doc_crosslinks/crosslink_redirect.html --outputPath ./crosslink_redirect.html
cp ./doxygen/modules/static/index.html s3-artifact/
cp crosslink_redirect.html s3-artifact/
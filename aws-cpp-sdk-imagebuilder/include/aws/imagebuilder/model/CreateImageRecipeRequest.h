/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
#include <aws/imagebuilder/ImagebuilderRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/imagebuilder/model/AdditionalInstanceConfiguration.h>
#include <aws/imagebuilder/model/ComponentConfiguration.h>
#include <aws/imagebuilder/model/InstanceBlockDeviceMapping.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace imagebuilder
{
namespace Model
{

  /**
   */
  class CreateImageRecipeRequest : public ImagebuilderRequest
  {
  public:
    AWS_IMAGEBUILDER_API CreateImageRecipeRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateImageRecipe"; }

    AWS_IMAGEBUILDER_API Aws::String SerializePayload() const override;


    /**
     * <p> The name of the image recipe.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p> The name of the image recipe.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p> The name of the image recipe.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p> The name of the image recipe.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p> The name of the image recipe.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p> The name of the image recipe.</p>
     */
    inline CreateImageRecipeRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p> The name of the image recipe.</p>
     */
    inline CreateImageRecipeRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p> The name of the image recipe.</p>
     */
    inline CreateImageRecipeRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p> The description of the image recipe.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p> The description of the image recipe.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p> The description of the image recipe.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p> The description of the image recipe.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p> The description of the image recipe.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p> The description of the image recipe.</p>
     */
    inline CreateImageRecipeRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p> The description of the image recipe.</p>
     */
    inline CreateImageRecipeRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p> The description of the image recipe.</p>
     */
    inline CreateImageRecipeRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The semantic version of the image recipe. This version follows the semantic
     * version syntax.</p>  <p>The semantic version has four nodes:
     * &lt;major&gt;.&lt;minor&gt;.&lt;patch&gt;/&lt;build&gt;. You can assign values
     * for the first three, and can filter on all of them.</p> <p> <b>Assignment:</b>
     * For the first three nodes you can assign any positive integer value, including
     * zero, with an upper limit of 2^30-1, or 1073741823 for each node. Image Builder
     * automatically assigns the build number to the fourth node.</p> <p>
     * <b>Patterns:</b> You can use any numeric pattern that adheres to the assignment
     * requirements for the nodes that you can assign. For example, you might choose a
     * software version pattern, such as 1.0.0, or a date, such as 2021.01.01.</p>
     * 
     */
    inline const Aws::String& GetSemanticVersion() const{ return m_semanticVersion; }

    /**
     * <p>The semantic version of the image recipe. This version follows the semantic
     * version syntax.</p>  <p>The semantic version has four nodes:
     * &lt;major&gt;.&lt;minor&gt;.&lt;patch&gt;/&lt;build&gt;. You can assign values
     * for the first three, and can filter on all of them.</p> <p> <b>Assignment:</b>
     * For the first three nodes you can assign any positive integer value, including
     * zero, with an upper limit of 2^30-1, or 1073741823 for each node. Image Builder
     * automatically assigns the build number to the fourth node.</p> <p>
     * <b>Patterns:</b> You can use any numeric pattern that adheres to the assignment
     * requirements for the nodes that you can assign. For example, you might choose a
     * software version pattern, such as 1.0.0, or a date, such as 2021.01.01.</p>
     * 
     */
    inline bool SemanticVersionHasBeenSet() const { return m_semanticVersionHasBeenSet; }

    /**
     * <p>The semantic version of the image recipe. This version follows the semantic
     * version syntax.</p>  <p>The semantic version has four nodes:
     * &lt;major&gt;.&lt;minor&gt;.&lt;patch&gt;/&lt;build&gt;. You can assign values
     * for the first three, and can filter on all of them.</p> <p> <b>Assignment:</b>
     * For the first three nodes you can assign any positive integer value, including
     * zero, with an upper limit of 2^30-1, or 1073741823 for each node. Image Builder
     * automatically assigns the build number to the fourth node.</p> <p>
     * <b>Patterns:</b> You can use any numeric pattern that adheres to the assignment
     * requirements for the nodes that you can assign. For example, you might choose a
     * software version pattern, such as 1.0.0, or a date, such as 2021.01.01.</p>
     * 
     */
    inline void SetSemanticVersion(const Aws::String& value) { m_semanticVersionHasBeenSet = true; m_semanticVersion = value; }

    /**
     * <p>The semantic version of the image recipe. This version follows the semantic
     * version syntax.</p>  <p>The semantic version has four nodes:
     * &lt;major&gt;.&lt;minor&gt;.&lt;patch&gt;/&lt;build&gt;. You can assign values
     * for the first three, and can filter on all of them.</p> <p> <b>Assignment:</b>
     * For the first three nodes you can assign any positive integer value, including
     * zero, with an upper limit of 2^30-1, or 1073741823 for each node. Image Builder
     * automatically assigns the build number to the fourth node.</p> <p>
     * <b>Patterns:</b> You can use any numeric pattern that adheres to the assignment
     * requirements for the nodes that you can assign. For example, you might choose a
     * software version pattern, such as 1.0.0, or a date, such as 2021.01.01.</p>
     * 
     */
    inline void SetSemanticVersion(Aws::String&& value) { m_semanticVersionHasBeenSet = true; m_semanticVersion = std::move(value); }

    /**
     * <p>The semantic version of the image recipe. This version follows the semantic
     * version syntax.</p>  <p>The semantic version has four nodes:
     * &lt;major&gt;.&lt;minor&gt;.&lt;patch&gt;/&lt;build&gt;. You can assign values
     * for the first three, and can filter on all of them.</p> <p> <b>Assignment:</b>
     * For the first three nodes you can assign any positive integer value, including
     * zero, with an upper limit of 2^30-1, or 1073741823 for each node. Image Builder
     * automatically assigns the build number to the fourth node.</p> <p>
     * <b>Patterns:</b> You can use any numeric pattern that adheres to the assignment
     * requirements for the nodes that you can assign. For example, you might choose a
     * software version pattern, such as 1.0.0, or a date, such as 2021.01.01.</p>
     * 
     */
    inline void SetSemanticVersion(const char* value) { m_semanticVersionHasBeenSet = true; m_semanticVersion.assign(value); }

    /**
     * <p>The semantic version of the image recipe. This version follows the semantic
     * version syntax.</p>  <p>The semantic version has four nodes:
     * &lt;major&gt;.&lt;minor&gt;.&lt;patch&gt;/&lt;build&gt;. You can assign values
     * for the first three, and can filter on all of them.</p> <p> <b>Assignment:</b>
     * For the first three nodes you can assign any positive integer value, including
     * zero, with an upper limit of 2^30-1, or 1073741823 for each node. Image Builder
     * automatically assigns the build number to the fourth node.</p> <p>
     * <b>Patterns:</b> You can use any numeric pattern that adheres to the assignment
     * requirements for the nodes that you can assign. For example, you might choose a
     * software version pattern, such as 1.0.0, or a date, such as 2021.01.01.</p>
     * 
     */
    inline CreateImageRecipeRequest& WithSemanticVersion(const Aws::String& value) { SetSemanticVersion(value); return *this;}

    /**
     * <p>The semantic version of the image recipe. This version follows the semantic
     * version syntax.</p>  <p>The semantic version has four nodes:
     * &lt;major&gt;.&lt;minor&gt;.&lt;patch&gt;/&lt;build&gt;. You can assign values
     * for the first three, and can filter on all of them.</p> <p> <b>Assignment:</b>
     * For the first three nodes you can assign any positive integer value, including
     * zero, with an upper limit of 2^30-1, or 1073741823 for each node. Image Builder
     * automatically assigns the build number to the fourth node.</p> <p>
     * <b>Patterns:</b> You can use any numeric pattern that adheres to the assignment
     * requirements for the nodes that you can assign. For example, you might choose a
     * software version pattern, such as 1.0.0, or a date, such as 2021.01.01.</p>
     * 
     */
    inline CreateImageRecipeRequest& WithSemanticVersion(Aws::String&& value) { SetSemanticVersion(std::move(value)); return *this;}

    /**
     * <p>The semantic version of the image recipe. This version follows the semantic
     * version syntax.</p>  <p>The semantic version has four nodes:
     * &lt;major&gt;.&lt;minor&gt;.&lt;patch&gt;/&lt;build&gt;. You can assign values
     * for the first three, and can filter on all of them.</p> <p> <b>Assignment:</b>
     * For the first three nodes you can assign any positive integer value, including
     * zero, with an upper limit of 2^30-1, or 1073741823 for each node. Image Builder
     * automatically assigns the build number to the fourth node.</p> <p>
     * <b>Patterns:</b> You can use any numeric pattern that adheres to the assignment
     * requirements for the nodes that you can assign. For example, you might choose a
     * software version pattern, such as 1.0.0, or a date, such as 2021.01.01.</p>
     * 
     */
    inline CreateImageRecipeRequest& WithSemanticVersion(const char* value) { SetSemanticVersion(value); return *this;}


    /**
     * <p>The components of the image recipe.</p>
     */
    inline const Aws::Vector<ComponentConfiguration>& GetComponents() const{ return m_components; }

    /**
     * <p>The components of the image recipe.</p>
     */
    inline bool ComponentsHasBeenSet() const { return m_componentsHasBeenSet; }

    /**
     * <p>The components of the image recipe.</p>
     */
    inline void SetComponents(const Aws::Vector<ComponentConfiguration>& value) { m_componentsHasBeenSet = true; m_components = value; }

    /**
     * <p>The components of the image recipe.</p>
     */
    inline void SetComponents(Aws::Vector<ComponentConfiguration>&& value) { m_componentsHasBeenSet = true; m_components = std::move(value); }

    /**
     * <p>The components of the image recipe.</p>
     */
    inline CreateImageRecipeRequest& WithComponents(const Aws::Vector<ComponentConfiguration>& value) { SetComponents(value); return *this;}

    /**
     * <p>The components of the image recipe.</p>
     */
    inline CreateImageRecipeRequest& WithComponents(Aws::Vector<ComponentConfiguration>&& value) { SetComponents(std::move(value)); return *this;}

    /**
     * <p>The components of the image recipe.</p>
     */
    inline CreateImageRecipeRequest& AddComponents(const ComponentConfiguration& value) { m_componentsHasBeenSet = true; m_components.push_back(value); return *this; }

    /**
     * <p>The components of the image recipe.</p>
     */
    inline CreateImageRecipeRequest& AddComponents(ComponentConfiguration&& value) { m_componentsHasBeenSet = true; m_components.push_back(std::move(value)); return *this; }


    /**
     * <p>The base image of the image recipe. The value of the string can be the ARN of
     * the base image or an AMI ID. The format for the ARN follows this example:
     * <code>arn:aws:imagebuilder:us-west-2:aws:image/windows-server-2016-english-full-base-x86/x.x.x</code>.
     * You can provide the specific version that you want to use, or you can use a
     * wildcard in all of the fields. If you enter an AMI ID for the string value, you
     * must have access to the AMI, and the AMI must be in the same Region in which you
     * are using Image Builder.</p>
     */
    inline const Aws::String& GetParentImage() const{ return m_parentImage; }

    /**
     * <p>The base image of the image recipe. The value of the string can be the ARN of
     * the base image or an AMI ID. The format for the ARN follows this example:
     * <code>arn:aws:imagebuilder:us-west-2:aws:image/windows-server-2016-english-full-base-x86/x.x.x</code>.
     * You can provide the specific version that you want to use, or you can use a
     * wildcard in all of the fields. If you enter an AMI ID for the string value, you
     * must have access to the AMI, and the AMI must be in the same Region in which you
     * are using Image Builder.</p>
     */
    inline bool ParentImageHasBeenSet() const { return m_parentImageHasBeenSet; }

    /**
     * <p>The base image of the image recipe. The value of the string can be the ARN of
     * the base image or an AMI ID. The format for the ARN follows this example:
     * <code>arn:aws:imagebuilder:us-west-2:aws:image/windows-server-2016-english-full-base-x86/x.x.x</code>.
     * You can provide the specific version that you want to use, or you can use a
     * wildcard in all of the fields. If you enter an AMI ID for the string value, you
     * must have access to the AMI, and the AMI must be in the same Region in which you
     * are using Image Builder.</p>
     */
    inline void SetParentImage(const Aws::String& value) { m_parentImageHasBeenSet = true; m_parentImage = value; }

    /**
     * <p>The base image of the image recipe. The value of the string can be the ARN of
     * the base image or an AMI ID. The format for the ARN follows this example:
     * <code>arn:aws:imagebuilder:us-west-2:aws:image/windows-server-2016-english-full-base-x86/x.x.x</code>.
     * You can provide the specific version that you want to use, or you can use a
     * wildcard in all of the fields. If you enter an AMI ID for the string value, you
     * must have access to the AMI, and the AMI must be in the same Region in which you
     * are using Image Builder.</p>
     */
    inline void SetParentImage(Aws::String&& value) { m_parentImageHasBeenSet = true; m_parentImage = std::move(value); }

    /**
     * <p>The base image of the image recipe. The value of the string can be the ARN of
     * the base image or an AMI ID. The format for the ARN follows this example:
     * <code>arn:aws:imagebuilder:us-west-2:aws:image/windows-server-2016-english-full-base-x86/x.x.x</code>.
     * You can provide the specific version that you want to use, or you can use a
     * wildcard in all of the fields. If you enter an AMI ID for the string value, you
     * must have access to the AMI, and the AMI must be in the same Region in which you
     * are using Image Builder.</p>
     */
    inline void SetParentImage(const char* value) { m_parentImageHasBeenSet = true; m_parentImage.assign(value); }

    /**
     * <p>The base image of the image recipe. The value of the string can be the ARN of
     * the base image or an AMI ID. The format for the ARN follows this example:
     * <code>arn:aws:imagebuilder:us-west-2:aws:image/windows-server-2016-english-full-base-x86/x.x.x</code>.
     * You can provide the specific version that you want to use, or you can use a
     * wildcard in all of the fields. If you enter an AMI ID for the string value, you
     * must have access to the AMI, and the AMI must be in the same Region in which you
     * are using Image Builder.</p>
     */
    inline CreateImageRecipeRequest& WithParentImage(const Aws::String& value) { SetParentImage(value); return *this;}

    /**
     * <p>The base image of the image recipe. The value of the string can be the ARN of
     * the base image or an AMI ID. The format for the ARN follows this example:
     * <code>arn:aws:imagebuilder:us-west-2:aws:image/windows-server-2016-english-full-base-x86/x.x.x</code>.
     * You can provide the specific version that you want to use, or you can use a
     * wildcard in all of the fields. If you enter an AMI ID for the string value, you
     * must have access to the AMI, and the AMI must be in the same Region in which you
     * are using Image Builder.</p>
     */
    inline CreateImageRecipeRequest& WithParentImage(Aws::String&& value) { SetParentImage(std::move(value)); return *this;}

    /**
     * <p>The base image of the image recipe. The value of the string can be the ARN of
     * the base image or an AMI ID. The format for the ARN follows this example:
     * <code>arn:aws:imagebuilder:us-west-2:aws:image/windows-server-2016-english-full-base-x86/x.x.x</code>.
     * You can provide the specific version that you want to use, or you can use a
     * wildcard in all of the fields. If you enter an AMI ID for the string value, you
     * must have access to the AMI, and the AMI must be in the same Region in which you
     * are using Image Builder.</p>
     */
    inline CreateImageRecipeRequest& WithParentImage(const char* value) { SetParentImage(value); return *this;}


    /**
     * <p>The block device mappings of the image recipe.</p>
     */
    inline const Aws::Vector<InstanceBlockDeviceMapping>& GetBlockDeviceMappings() const{ return m_blockDeviceMappings; }

    /**
     * <p>The block device mappings of the image recipe.</p>
     */
    inline bool BlockDeviceMappingsHasBeenSet() const { return m_blockDeviceMappingsHasBeenSet; }

    /**
     * <p>The block device mappings of the image recipe.</p>
     */
    inline void SetBlockDeviceMappings(const Aws::Vector<InstanceBlockDeviceMapping>& value) { m_blockDeviceMappingsHasBeenSet = true; m_blockDeviceMappings = value; }

    /**
     * <p>The block device mappings of the image recipe.</p>
     */
    inline void SetBlockDeviceMappings(Aws::Vector<InstanceBlockDeviceMapping>&& value) { m_blockDeviceMappingsHasBeenSet = true; m_blockDeviceMappings = std::move(value); }

    /**
     * <p>The block device mappings of the image recipe.</p>
     */
    inline CreateImageRecipeRequest& WithBlockDeviceMappings(const Aws::Vector<InstanceBlockDeviceMapping>& value) { SetBlockDeviceMappings(value); return *this;}

    /**
     * <p>The block device mappings of the image recipe.</p>
     */
    inline CreateImageRecipeRequest& WithBlockDeviceMappings(Aws::Vector<InstanceBlockDeviceMapping>&& value) { SetBlockDeviceMappings(std::move(value)); return *this;}

    /**
     * <p>The block device mappings of the image recipe.</p>
     */
    inline CreateImageRecipeRequest& AddBlockDeviceMappings(const InstanceBlockDeviceMapping& value) { m_blockDeviceMappingsHasBeenSet = true; m_blockDeviceMappings.push_back(value); return *this; }

    /**
     * <p>The block device mappings of the image recipe.</p>
     */
    inline CreateImageRecipeRequest& AddBlockDeviceMappings(InstanceBlockDeviceMapping&& value) { m_blockDeviceMappingsHasBeenSet = true; m_blockDeviceMappings.push_back(std::move(value)); return *this; }


    /**
     * <p> The tags of the image recipe.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p> The tags of the image recipe.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p> The tags of the image recipe.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p> The tags of the image recipe.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p> The tags of the image recipe.</p>
     */
    inline CreateImageRecipeRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p> The tags of the image recipe.</p>
     */
    inline CreateImageRecipeRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p> The tags of the image recipe.</p>
     */
    inline CreateImageRecipeRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p> The tags of the image recipe.</p>
     */
    inline CreateImageRecipeRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p> The tags of the image recipe.</p>
     */
    inline CreateImageRecipeRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p> The tags of the image recipe.</p>
     */
    inline CreateImageRecipeRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p> The tags of the image recipe.</p>
     */
    inline CreateImageRecipeRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p> The tags of the image recipe.</p>
     */
    inline CreateImageRecipeRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p> The tags of the image recipe.</p>
     */
    inline CreateImageRecipeRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }


    /**
     * <p>The working directory used during build and test workflows.</p>
     */
    inline const Aws::String& GetWorkingDirectory() const{ return m_workingDirectory; }

    /**
     * <p>The working directory used during build and test workflows.</p>
     */
    inline bool WorkingDirectoryHasBeenSet() const { return m_workingDirectoryHasBeenSet; }

    /**
     * <p>The working directory used during build and test workflows.</p>
     */
    inline void SetWorkingDirectory(const Aws::String& value) { m_workingDirectoryHasBeenSet = true; m_workingDirectory = value; }

    /**
     * <p>The working directory used during build and test workflows.</p>
     */
    inline void SetWorkingDirectory(Aws::String&& value) { m_workingDirectoryHasBeenSet = true; m_workingDirectory = std::move(value); }

    /**
     * <p>The working directory used during build and test workflows.</p>
     */
    inline void SetWorkingDirectory(const char* value) { m_workingDirectoryHasBeenSet = true; m_workingDirectory.assign(value); }

    /**
     * <p>The working directory used during build and test workflows.</p>
     */
    inline CreateImageRecipeRequest& WithWorkingDirectory(const Aws::String& value) { SetWorkingDirectory(value); return *this;}

    /**
     * <p>The working directory used during build and test workflows.</p>
     */
    inline CreateImageRecipeRequest& WithWorkingDirectory(Aws::String&& value) { SetWorkingDirectory(std::move(value)); return *this;}

    /**
     * <p>The working directory used during build and test workflows.</p>
     */
    inline CreateImageRecipeRequest& WithWorkingDirectory(const char* value) { SetWorkingDirectory(value); return *this;}


    /**
     * <p>Specify additional settings and launch scripts for your build instances.</p>
     */
    inline const AdditionalInstanceConfiguration& GetAdditionalInstanceConfiguration() const{ return m_additionalInstanceConfiguration; }

    /**
     * <p>Specify additional settings and launch scripts for your build instances.</p>
     */
    inline bool AdditionalInstanceConfigurationHasBeenSet() const { return m_additionalInstanceConfigurationHasBeenSet; }

    /**
     * <p>Specify additional settings and launch scripts for your build instances.</p>
     */
    inline void SetAdditionalInstanceConfiguration(const AdditionalInstanceConfiguration& value) { m_additionalInstanceConfigurationHasBeenSet = true; m_additionalInstanceConfiguration = value; }

    /**
     * <p>Specify additional settings and launch scripts for your build instances.</p>
     */
    inline void SetAdditionalInstanceConfiguration(AdditionalInstanceConfiguration&& value) { m_additionalInstanceConfigurationHasBeenSet = true; m_additionalInstanceConfiguration = std::move(value); }

    /**
     * <p>Specify additional settings and launch scripts for your build instances.</p>
     */
    inline CreateImageRecipeRequest& WithAdditionalInstanceConfiguration(const AdditionalInstanceConfiguration& value) { SetAdditionalInstanceConfiguration(value); return *this;}

    /**
     * <p>Specify additional settings and launch scripts for your build instances.</p>
     */
    inline CreateImageRecipeRequest& WithAdditionalInstanceConfiguration(AdditionalInstanceConfiguration&& value) { SetAdditionalInstanceConfiguration(std::move(value)); return *this;}


    /**
     * <p>The idempotency token used to make this request idempotent.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>The idempotency token used to make this request idempotent.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>The idempotency token used to make this request idempotent.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>The idempotency token used to make this request idempotent.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>The idempotency token used to make this request idempotent.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>The idempotency token used to make this request idempotent.</p>
     */
    inline CreateImageRecipeRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>The idempotency token used to make this request idempotent.</p>
     */
    inline CreateImageRecipeRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>The idempotency token used to make this request idempotent.</p>
     */
    inline CreateImageRecipeRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_semanticVersion;
    bool m_semanticVersionHasBeenSet = false;

    Aws::Vector<ComponentConfiguration> m_components;
    bool m_componentsHasBeenSet = false;

    Aws::String m_parentImage;
    bool m_parentImageHasBeenSet = false;

    Aws::Vector<InstanceBlockDeviceMapping> m_blockDeviceMappings;
    bool m_blockDeviceMappingsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_workingDirectory;
    bool m_workingDirectoryHasBeenSet = false;

    AdditionalInstanceConfiguration m_additionalInstanceConfiguration;
    bool m_additionalInstanceConfigurationHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws

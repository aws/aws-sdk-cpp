﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codebuild/CodeBuild_EXPORTS.h>
#include <aws/codebuild/model/ArtifactsType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codebuild/model/ArtifactNamespace.h>
#include <aws/codebuild/model/ArtifactPackaging.h>
#include <aws/codebuild/model/BucketOwnerAccess.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace CodeBuild
{
namespace Model
{

  /**
   * <p>Information about the build output artifacts for the build
   * project.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/ProjectArtifacts">AWS
   * API Reference</a></p>
   */
  class ProjectArtifacts
  {
  public:
    AWS_CODEBUILD_API ProjectArtifacts();
    AWS_CODEBUILD_API ProjectArtifacts(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEBUILD_API ProjectArtifacts& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEBUILD_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of build output artifact. Valid values include:</p> <ul> <li> <p>
     * <code>CODEPIPELINE</code>: The build project has build output generated through
     * CodePipeline. </p>  <p>The <code>CODEPIPELINE</code> type is not supported
     * for <code>secondaryArtifacts</code>.</p>  </li> <li> <p>
     * <code>NO_ARTIFACTS</code>: The build project does not produce any build
     * output.</p> </li> <li> <p> <code>S3</code>: The build project stores build
     * output in Amazon S3.</p> </li> </ul>
     */
    inline const ArtifactsType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const ArtifactsType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(ArtifactsType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline ProjectArtifacts& WithType(const ArtifactsType& value) { SetType(value); return *this;}
    inline ProjectArtifacts& WithType(ArtifactsType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the build output artifact location:</p> <ul> <li> <p>If
     * <code>type</code> is set to <code>CODEPIPELINE</code>, CodePipeline ignores this
     * value if specified. This is because CodePipeline manages its build output
     * locations instead of CodeBuild.</p> </li> <li> <p>If <code>type</code> is set to
     * <code>NO_ARTIFACTS</code>, this value is ignored if specified, because no build
     * output is produced.</p> </li> <li> <p>If <code>type</code> is set to
     * <code>S3</code>, this is the name of the output bucket.</p> </li> </ul>
     */
    inline const Aws::String& GetLocation() const{ return m_location; }
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }
    inline void SetLocation(const Aws::String& value) { m_locationHasBeenSet = true; m_location = value; }
    inline void SetLocation(Aws::String&& value) { m_locationHasBeenSet = true; m_location = std::move(value); }
    inline void SetLocation(const char* value) { m_locationHasBeenSet = true; m_location.assign(value); }
    inline ProjectArtifacts& WithLocation(const Aws::String& value) { SetLocation(value); return *this;}
    inline ProjectArtifacts& WithLocation(Aws::String&& value) { SetLocation(std::move(value)); return *this;}
    inline ProjectArtifacts& WithLocation(const char* value) { SetLocation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Along with <code>namespaceType</code> and <code>name</code>, the pattern that
     * CodeBuild uses to name and store the output artifact:</p> <ul> <li> <p>If
     * <code>type</code> is set to <code>CODEPIPELINE</code>, CodePipeline ignores this
     * value if specified. This is because CodePipeline manages its build output names
     * instead of CodeBuild.</p> </li> <li> <p>If <code>type</code> is set to
     * <code>NO_ARTIFACTS</code>, this value is ignored if specified, because no build
     * output is produced.</p> </li> <li> <p>If <code>type</code> is set to
     * <code>S3</code>, this is the path to the output artifact. If <code>path</code>
     * is not specified, <code>path</code> is not used.</p> </li> </ul> <p>For example,
     * if <code>path</code> is set to <code>MyArtifacts</code>,
     * <code>namespaceType</code> is set to <code>NONE</code>, and <code>name</code> is
     * set to <code>MyArtifact.zip</code>, the output artifact is stored in the output
     * bucket at <code>MyArtifacts/MyArtifact.zip</code>.</p>
     */
    inline const Aws::String& GetPath() const{ return m_path; }
    inline bool PathHasBeenSet() const { return m_pathHasBeenSet; }
    inline void SetPath(const Aws::String& value) { m_pathHasBeenSet = true; m_path = value; }
    inline void SetPath(Aws::String&& value) { m_pathHasBeenSet = true; m_path = std::move(value); }
    inline void SetPath(const char* value) { m_pathHasBeenSet = true; m_path.assign(value); }
    inline ProjectArtifacts& WithPath(const Aws::String& value) { SetPath(value); return *this;}
    inline ProjectArtifacts& WithPath(Aws::String&& value) { SetPath(std::move(value)); return *this;}
    inline ProjectArtifacts& WithPath(const char* value) { SetPath(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Along with <code>path</code> and <code>name</code>, the pattern that
     * CodeBuild uses to determine the name and location to store the output
     * artifact:</p> <ul> <li> <p>If <code>type</code> is set to
     * <code>CODEPIPELINE</code>, CodePipeline ignores this value if specified. This is
     * because CodePipeline manages its build output names instead of CodeBuild.</p>
     * </li> <li> <p>If <code>type</code> is set to <code>NO_ARTIFACTS</code>, this
     * value is ignored if specified, because no build output is produced.</p> </li>
     * <li> <p>If <code>type</code> is set to <code>S3</code>, valid values
     * include:</p> <ul> <li> <p> <code>BUILD_ID</code>: Include the build ID in the
     * location of the build output artifact.</p> </li> <li> <p> <code>NONE</code>: Do
     * not include the build ID. This is the default if <code>namespaceType</code> is
     * not specified.</p> </li> </ul> </li> </ul> <p>For example, if <code>path</code>
     * is set to <code>MyArtifacts</code>, <code>namespaceType</code> is set to
     * <code>BUILD_ID</code>, and <code>name</code> is set to
     * <code>MyArtifact.zip</code>, the output artifact is stored in
     * <code>MyArtifacts/&lt;build-ID&gt;/MyArtifact.zip</code>.</p>
     */
    inline const ArtifactNamespace& GetNamespaceType() const{ return m_namespaceType; }
    inline bool NamespaceTypeHasBeenSet() const { return m_namespaceTypeHasBeenSet; }
    inline void SetNamespaceType(const ArtifactNamespace& value) { m_namespaceTypeHasBeenSet = true; m_namespaceType = value; }
    inline void SetNamespaceType(ArtifactNamespace&& value) { m_namespaceTypeHasBeenSet = true; m_namespaceType = std::move(value); }
    inline ProjectArtifacts& WithNamespaceType(const ArtifactNamespace& value) { SetNamespaceType(value); return *this;}
    inline ProjectArtifacts& WithNamespaceType(ArtifactNamespace&& value) { SetNamespaceType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Along with <code>path</code> and <code>namespaceType</code>, the pattern that
     * CodeBuild uses to name and store the output artifact:</p> <ul> <li> <p>If
     * <code>type</code> is set to <code>CODEPIPELINE</code>, CodePipeline ignores this
     * value if specified. This is because CodePipeline manages its build output names
     * instead of CodeBuild.</p> </li> <li> <p>If <code>type</code> is set to
     * <code>NO_ARTIFACTS</code>, this value is ignored if specified, because no build
     * output is produced.</p> </li> <li> <p>If <code>type</code> is set to
     * <code>S3</code>, this is the name of the output artifact object. If you set the
     * name to be a forward slash ("/"), the artifact is stored in the root of the
     * output bucket.</p> </li> </ul> <p>For example:</p> <ul> <li> <p> If
     * <code>path</code> is set to <code>MyArtifacts</code>, <code>namespaceType</code>
     * is set to <code>BUILD_ID</code>, and <code>name</code> is set to
     * <code>MyArtifact.zip</code>, then the output artifact is stored in
     * <code>MyArtifacts/&lt;build-ID&gt;/MyArtifact.zip</code>. </p> </li> <li> <p> If
     * <code>path</code> is empty, <code>namespaceType</code> is set to
     * <code>NONE</code>, and <code>name</code> is set to "<code>/</code>", the output
     * artifact is stored in the root of the output bucket. </p> </li> <li> <p> If
     * <code>path</code> is set to <code>MyArtifacts</code>, <code>namespaceType</code>
     * is set to <code>BUILD_ID</code>, and <code>name</code> is set to
     * "<code>/</code>", the output artifact is stored in
     * <code>MyArtifacts/&lt;build-ID&gt;</code>. </p> </li> </ul>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline ProjectArtifacts& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline ProjectArtifacts& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline ProjectArtifacts& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of build output artifact to create:</p> <ul> <li> <p>If
     * <code>type</code> is set to <code>CODEPIPELINE</code>, CodePipeline ignores this
     * value if specified. This is because CodePipeline manages its build output
     * artifacts instead of CodeBuild.</p> </li> <li> <p>If <code>type</code> is set to
     * <code>NO_ARTIFACTS</code>, this value is ignored if specified, because no build
     * output is produced.</p> </li> <li> <p>If <code>type</code> is set to
     * <code>S3</code>, valid values include:</p> <ul> <li> <p> <code>NONE</code>:
     * CodeBuild creates in the output bucket a folder that contains the build output.
     * This is the default if <code>packaging</code> is not specified.</p> </li> <li>
     * <p> <code>ZIP</code>: CodeBuild creates in the output bucket a ZIP file that
     * contains the build output.</p> </li> </ul> </li> </ul>
     */
    inline const ArtifactPackaging& GetPackaging() const{ return m_packaging; }
    inline bool PackagingHasBeenSet() const { return m_packagingHasBeenSet; }
    inline void SetPackaging(const ArtifactPackaging& value) { m_packagingHasBeenSet = true; m_packaging = value; }
    inline void SetPackaging(ArtifactPackaging&& value) { m_packagingHasBeenSet = true; m_packaging = std::move(value); }
    inline ProjectArtifacts& WithPackaging(const ArtifactPackaging& value) { SetPackaging(value); return *this;}
    inline ProjectArtifacts& WithPackaging(ArtifactPackaging&& value) { SetPackaging(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> If this flag is set, a name specified in the buildspec file overrides the
     * artifact name. The name specified in a buildspec file is calculated at build
     * time and uses the Shell Command Language. For example, you can append a date and
     * time to your artifact name so that it is always unique. </p>
     */
    inline bool GetOverrideArtifactName() const{ return m_overrideArtifactName; }
    inline bool OverrideArtifactNameHasBeenSet() const { return m_overrideArtifactNameHasBeenSet; }
    inline void SetOverrideArtifactName(bool value) { m_overrideArtifactNameHasBeenSet = true; m_overrideArtifactName = value; }
    inline ProjectArtifacts& WithOverrideArtifactName(bool value) { SetOverrideArtifactName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Set to true if you do not want your output artifacts encrypted. This option
     * is valid only if your artifacts type is Amazon S3. If this is set with another
     * artifacts type, an invalidInputException is thrown. </p>
     */
    inline bool GetEncryptionDisabled() const{ return m_encryptionDisabled; }
    inline bool EncryptionDisabledHasBeenSet() const { return m_encryptionDisabledHasBeenSet; }
    inline void SetEncryptionDisabled(bool value) { m_encryptionDisabledHasBeenSet = true; m_encryptionDisabled = value; }
    inline ProjectArtifacts& WithEncryptionDisabled(bool value) { SetEncryptionDisabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> An identifier for this artifact definition. </p>
     */
    inline const Aws::String& GetArtifactIdentifier() const{ return m_artifactIdentifier; }
    inline bool ArtifactIdentifierHasBeenSet() const { return m_artifactIdentifierHasBeenSet; }
    inline void SetArtifactIdentifier(const Aws::String& value) { m_artifactIdentifierHasBeenSet = true; m_artifactIdentifier = value; }
    inline void SetArtifactIdentifier(Aws::String&& value) { m_artifactIdentifierHasBeenSet = true; m_artifactIdentifier = std::move(value); }
    inline void SetArtifactIdentifier(const char* value) { m_artifactIdentifierHasBeenSet = true; m_artifactIdentifier.assign(value); }
    inline ProjectArtifacts& WithArtifactIdentifier(const Aws::String& value) { SetArtifactIdentifier(value); return *this;}
    inline ProjectArtifacts& WithArtifactIdentifier(Aws::String&& value) { SetArtifactIdentifier(std::move(value)); return *this;}
    inline ProjectArtifacts& WithArtifactIdentifier(const char* value) { SetArtifactIdentifier(value); return *this;}
    ///@}

    ///@{
    
    inline const BucketOwnerAccess& GetBucketOwnerAccess() const{ return m_bucketOwnerAccess; }
    inline bool BucketOwnerAccessHasBeenSet() const { return m_bucketOwnerAccessHasBeenSet; }
    inline void SetBucketOwnerAccess(const BucketOwnerAccess& value) { m_bucketOwnerAccessHasBeenSet = true; m_bucketOwnerAccess = value; }
    inline void SetBucketOwnerAccess(BucketOwnerAccess&& value) { m_bucketOwnerAccessHasBeenSet = true; m_bucketOwnerAccess = std::move(value); }
    inline ProjectArtifacts& WithBucketOwnerAccess(const BucketOwnerAccess& value) { SetBucketOwnerAccess(value); return *this;}
    inline ProjectArtifacts& WithBucketOwnerAccess(BucketOwnerAccess&& value) { SetBucketOwnerAccess(std::move(value)); return *this;}
    ///@}
  private:

    ArtifactsType m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_location;
    bool m_locationHasBeenSet = false;

    Aws::String m_path;
    bool m_pathHasBeenSet = false;

    ArtifactNamespace m_namespaceType;
    bool m_namespaceTypeHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    ArtifactPackaging m_packaging;
    bool m_packagingHasBeenSet = false;

    bool m_overrideArtifactName;
    bool m_overrideArtifactNameHasBeenSet = false;

    bool m_encryptionDisabled;
    bool m_encryptionDisabledHasBeenSet = false;

    Aws::String m_artifactIdentifier;
    bool m_artifactIdentifierHasBeenSet = false;

    BucketOwnerAccess m_bucketOwnerAccess;
    bool m_bucketOwnerAccessHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws

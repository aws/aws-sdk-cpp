/**
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
    AWS_CODEBUILD_API ProjectArtifacts() = default;
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
    inline ArtifactsType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(ArtifactsType value) { m_typeHasBeenSet = true; m_type = value; }
    inline ProjectArtifacts& WithType(ArtifactsType value) { SetType(value); return *this;}
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
    inline const Aws::String& GetLocation() const { return m_location; }
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }
    template<typename LocationT = Aws::String>
    void SetLocation(LocationT&& value) { m_locationHasBeenSet = true; m_location = std::forward<LocationT>(value); }
    template<typename LocationT = Aws::String>
    ProjectArtifacts& WithLocation(LocationT&& value) { SetLocation(std::forward<LocationT>(value)); return *this;}
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
    inline const Aws::String& GetPath() const { return m_path; }
    inline bool PathHasBeenSet() const { return m_pathHasBeenSet; }
    template<typename PathT = Aws::String>
    void SetPath(PathT&& value) { m_pathHasBeenSet = true; m_path = std::forward<PathT>(value); }
    template<typename PathT = Aws::String>
    ProjectArtifacts& WithPath(PathT&& value) { SetPath(std::forward<PathT>(value)); return *this;}
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
    inline ArtifactNamespace GetNamespaceType() const { return m_namespaceType; }
    inline bool NamespaceTypeHasBeenSet() const { return m_namespaceTypeHasBeenSet; }
    inline void SetNamespaceType(ArtifactNamespace value) { m_namespaceTypeHasBeenSet = true; m_namespaceType = value; }
    inline ProjectArtifacts& WithNamespaceType(ArtifactNamespace value) { SetNamespaceType(value); return *this;}
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
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    ProjectArtifacts& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
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
    inline ArtifactPackaging GetPackaging() const { return m_packaging; }
    inline bool PackagingHasBeenSet() const { return m_packagingHasBeenSet; }
    inline void SetPackaging(ArtifactPackaging value) { m_packagingHasBeenSet = true; m_packaging = value; }
    inline ProjectArtifacts& WithPackaging(ArtifactPackaging value) { SetPackaging(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> If this flag is set, a name specified in the buildspec file overrides the
     * artifact name. The name specified in a buildspec file is calculated at build
     * time and uses the Shell Command Language. For example, you can append a date and
     * time to your artifact name so that it is always unique. </p>
     */
    inline bool GetOverrideArtifactName() const { return m_overrideArtifactName; }
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
    inline bool GetEncryptionDisabled() const { return m_encryptionDisabled; }
    inline bool EncryptionDisabledHasBeenSet() const { return m_encryptionDisabledHasBeenSet; }
    inline void SetEncryptionDisabled(bool value) { m_encryptionDisabledHasBeenSet = true; m_encryptionDisabled = value; }
    inline ProjectArtifacts& WithEncryptionDisabled(bool value) { SetEncryptionDisabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> An identifier for this artifact definition. </p>
     */
    inline const Aws::String& GetArtifactIdentifier() const { return m_artifactIdentifier; }
    inline bool ArtifactIdentifierHasBeenSet() const { return m_artifactIdentifierHasBeenSet; }
    template<typename ArtifactIdentifierT = Aws::String>
    void SetArtifactIdentifier(ArtifactIdentifierT&& value) { m_artifactIdentifierHasBeenSet = true; m_artifactIdentifier = std::forward<ArtifactIdentifierT>(value); }
    template<typename ArtifactIdentifierT = Aws::String>
    ProjectArtifacts& WithArtifactIdentifier(ArtifactIdentifierT&& value) { SetArtifactIdentifier(std::forward<ArtifactIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    
    inline BucketOwnerAccess GetBucketOwnerAccess() const { return m_bucketOwnerAccess; }
    inline bool BucketOwnerAccessHasBeenSet() const { return m_bucketOwnerAccessHasBeenSet; }
    inline void SetBucketOwnerAccess(BucketOwnerAccess value) { m_bucketOwnerAccessHasBeenSet = true; m_bucketOwnerAccess = value; }
    inline ProjectArtifacts& WithBucketOwnerAccess(BucketOwnerAccess value) { SetBucketOwnerAccess(value); return *this;}
    ///@}
  private:

    ArtifactsType m_type{ArtifactsType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::String m_location;
    bool m_locationHasBeenSet = false;

    Aws::String m_path;
    bool m_pathHasBeenSet = false;

    ArtifactNamespace m_namespaceType{ArtifactNamespace::NOT_SET};
    bool m_namespaceTypeHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    ArtifactPackaging m_packaging{ArtifactPackaging::NOT_SET};
    bool m_packagingHasBeenSet = false;

    bool m_overrideArtifactName{false};
    bool m_overrideArtifactNameHasBeenSet = false;

    bool m_encryptionDisabled{false};
    bool m_encryptionDisabledHasBeenSet = false;

    Aws::String m_artifactIdentifier;
    bool m_artifactIdentifierHasBeenSet = false;

    BucketOwnerAccess m_bucketOwnerAccess{BucketOwnerAccess::NOT_SET};
    bool m_bucketOwnerAccessHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws

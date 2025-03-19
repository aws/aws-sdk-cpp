/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codebuild/CodeBuild_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Information about build output artifacts.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/BuildArtifacts">AWS
   * API Reference</a></p>
   */
  class BuildArtifacts
  {
  public:
    AWS_CODEBUILD_API BuildArtifacts() = default;
    AWS_CODEBUILD_API BuildArtifacts(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEBUILD_API BuildArtifacts& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEBUILD_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Information about the location of the build artifacts.</p>
     */
    inline const Aws::String& GetLocation() const { return m_location; }
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }
    template<typename LocationT = Aws::String>
    void SetLocation(LocationT&& value) { m_locationHasBeenSet = true; m_location = std::forward<LocationT>(value); }
    template<typename LocationT = Aws::String>
    BuildArtifacts& WithLocation(LocationT&& value) { SetLocation(std::forward<LocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The SHA-256 hash of the build artifact.</p> <p>You can use this hash along
     * with a checksum tool to confirm file integrity and authenticity.</p> 
     * <p>This value is available only if the build project's <code>packaging</code>
     * value is set to <code>ZIP</code>.</p> 
     */
    inline const Aws::String& GetSha256sum() const { return m_sha256sum; }
    inline bool Sha256sumHasBeenSet() const { return m_sha256sumHasBeenSet; }
    template<typename Sha256sumT = Aws::String>
    void SetSha256sum(Sha256sumT&& value) { m_sha256sumHasBeenSet = true; m_sha256sum = std::forward<Sha256sumT>(value); }
    template<typename Sha256sumT = Aws::String>
    BuildArtifacts& WithSha256sum(Sha256sumT&& value) { SetSha256sum(std::forward<Sha256sumT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The MD5 hash of the build artifact.</p> <p>You can use this hash along with a
     * checksum tool to confirm file integrity and authenticity.</p>  <p>This
     * value is available only if the build project's <code>packaging</code> value is
     * set to <code>ZIP</code>.</p> 
     */
    inline const Aws::String& GetMd5sum() const { return m_md5sum; }
    inline bool Md5sumHasBeenSet() const { return m_md5sumHasBeenSet; }
    template<typename Md5sumT = Aws::String>
    void SetMd5sum(Md5sumT&& value) { m_md5sumHasBeenSet = true; m_md5sum = std::forward<Md5sumT>(value); }
    template<typename Md5sumT = Aws::String>
    BuildArtifacts& WithMd5sum(Md5sumT&& value) { SetMd5sum(std::forward<Md5sumT>(value)); return *this;}
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
    inline BuildArtifacts& WithOverrideArtifactName(bool value) { SetOverrideArtifactName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Information that tells you if encryption for build artifacts is disabled.
     * </p>
     */
    inline bool GetEncryptionDisabled() const { return m_encryptionDisabled; }
    inline bool EncryptionDisabledHasBeenSet() const { return m_encryptionDisabledHasBeenSet; }
    inline void SetEncryptionDisabled(bool value) { m_encryptionDisabledHasBeenSet = true; m_encryptionDisabled = value; }
    inline BuildArtifacts& WithEncryptionDisabled(bool value) { SetEncryptionDisabled(value); return *this;}
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
    BuildArtifacts& WithArtifactIdentifier(ArtifactIdentifierT&& value) { SetArtifactIdentifier(std::forward<ArtifactIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    
    inline BucketOwnerAccess GetBucketOwnerAccess() const { return m_bucketOwnerAccess; }
    inline bool BucketOwnerAccessHasBeenSet() const { return m_bucketOwnerAccessHasBeenSet; }
    inline void SetBucketOwnerAccess(BucketOwnerAccess value) { m_bucketOwnerAccessHasBeenSet = true; m_bucketOwnerAccess = value; }
    inline BuildArtifacts& WithBucketOwnerAccess(BucketOwnerAccess value) { SetBucketOwnerAccess(value); return *this;}
    ///@}
  private:

    Aws::String m_location;
    bool m_locationHasBeenSet = false;

    Aws::String m_sha256sum;
    bool m_sha256sumHasBeenSet = false;

    Aws::String m_md5sum;
    bool m_md5sumHasBeenSet = false;

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

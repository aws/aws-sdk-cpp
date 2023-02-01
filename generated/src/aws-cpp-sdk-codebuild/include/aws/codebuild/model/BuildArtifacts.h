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
    AWS_CODEBUILD_API BuildArtifacts();
    AWS_CODEBUILD_API BuildArtifacts(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEBUILD_API BuildArtifacts& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEBUILD_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Information about the location of the build artifacts.</p>
     */
    inline const Aws::String& GetLocation() const{ return m_location; }

    /**
     * <p>Information about the location of the build artifacts.</p>
     */
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }

    /**
     * <p>Information about the location of the build artifacts.</p>
     */
    inline void SetLocation(const Aws::String& value) { m_locationHasBeenSet = true; m_location = value; }

    /**
     * <p>Information about the location of the build artifacts.</p>
     */
    inline void SetLocation(Aws::String&& value) { m_locationHasBeenSet = true; m_location = std::move(value); }

    /**
     * <p>Information about the location of the build artifacts.</p>
     */
    inline void SetLocation(const char* value) { m_locationHasBeenSet = true; m_location.assign(value); }

    /**
     * <p>Information about the location of the build artifacts.</p>
     */
    inline BuildArtifacts& WithLocation(const Aws::String& value) { SetLocation(value); return *this;}

    /**
     * <p>Information about the location of the build artifacts.</p>
     */
    inline BuildArtifacts& WithLocation(Aws::String&& value) { SetLocation(std::move(value)); return *this;}

    /**
     * <p>Information about the location of the build artifacts.</p>
     */
    inline BuildArtifacts& WithLocation(const char* value) { SetLocation(value); return *this;}


    /**
     * <p>The SHA-256 hash of the build artifact.</p> <p>You can use this hash along
     * with a checksum tool to confirm file integrity and authenticity.</p> 
     * <p>This value is available only if the build project's <code>packaging</code>
     * value is set to <code>ZIP</code>.</p> 
     */
    inline const Aws::String& GetSha256sum() const{ return m_sha256sum; }

    /**
     * <p>The SHA-256 hash of the build artifact.</p> <p>You can use this hash along
     * with a checksum tool to confirm file integrity and authenticity.</p> 
     * <p>This value is available only if the build project's <code>packaging</code>
     * value is set to <code>ZIP</code>.</p> 
     */
    inline bool Sha256sumHasBeenSet() const { return m_sha256sumHasBeenSet; }

    /**
     * <p>The SHA-256 hash of the build artifact.</p> <p>You can use this hash along
     * with a checksum tool to confirm file integrity and authenticity.</p> 
     * <p>This value is available only if the build project's <code>packaging</code>
     * value is set to <code>ZIP</code>.</p> 
     */
    inline void SetSha256sum(const Aws::String& value) { m_sha256sumHasBeenSet = true; m_sha256sum = value; }

    /**
     * <p>The SHA-256 hash of the build artifact.</p> <p>You can use this hash along
     * with a checksum tool to confirm file integrity and authenticity.</p> 
     * <p>This value is available only if the build project's <code>packaging</code>
     * value is set to <code>ZIP</code>.</p> 
     */
    inline void SetSha256sum(Aws::String&& value) { m_sha256sumHasBeenSet = true; m_sha256sum = std::move(value); }

    /**
     * <p>The SHA-256 hash of the build artifact.</p> <p>You can use this hash along
     * with a checksum tool to confirm file integrity and authenticity.</p> 
     * <p>This value is available only if the build project's <code>packaging</code>
     * value is set to <code>ZIP</code>.</p> 
     */
    inline void SetSha256sum(const char* value) { m_sha256sumHasBeenSet = true; m_sha256sum.assign(value); }

    /**
     * <p>The SHA-256 hash of the build artifact.</p> <p>You can use this hash along
     * with a checksum tool to confirm file integrity and authenticity.</p> 
     * <p>This value is available only if the build project's <code>packaging</code>
     * value is set to <code>ZIP</code>.</p> 
     */
    inline BuildArtifacts& WithSha256sum(const Aws::String& value) { SetSha256sum(value); return *this;}

    /**
     * <p>The SHA-256 hash of the build artifact.</p> <p>You can use this hash along
     * with a checksum tool to confirm file integrity and authenticity.</p> 
     * <p>This value is available only if the build project's <code>packaging</code>
     * value is set to <code>ZIP</code>.</p> 
     */
    inline BuildArtifacts& WithSha256sum(Aws::String&& value) { SetSha256sum(std::move(value)); return *this;}

    /**
     * <p>The SHA-256 hash of the build artifact.</p> <p>You can use this hash along
     * with a checksum tool to confirm file integrity and authenticity.</p> 
     * <p>This value is available only if the build project's <code>packaging</code>
     * value is set to <code>ZIP</code>.</p> 
     */
    inline BuildArtifacts& WithSha256sum(const char* value) { SetSha256sum(value); return *this;}


    /**
     * <p>The MD5 hash of the build artifact.</p> <p>You can use this hash along with a
     * checksum tool to confirm file integrity and authenticity.</p>  <p>This
     * value is available only if the build project's <code>packaging</code> value is
     * set to <code>ZIP</code>.</p> 
     */
    inline const Aws::String& GetMd5sum() const{ return m_md5sum; }

    /**
     * <p>The MD5 hash of the build artifact.</p> <p>You can use this hash along with a
     * checksum tool to confirm file integrity and authenticity.</p>  <p>This
     * value is available only if the build project's <code>packaging</code> value is
     * set to <code>ZIP</code>.</p> 
     */
    inline bool Md5sumHasBeenSet() const { return m_md5sumHasBeenSet; }

    /**
     * <p>The MD5 hash of the build artifact.</p> <p>You can use this hash along with a
     * checksum tool to confirm file integrity and authenticity.</p>  <p>This
     * value is available only if the build project's <code>packaging</code> value is
     * set to <code>ZIP</code>.</p> 
     */
    inline void SetMd5sum(const Aws::String& value) { m_md5sumHasBeenSet = true; m_md5sum = value; }

    /**
     * <p>The MD5 hash of the build artifact.</p> <p>You can use this hash along with a
     * checksum tool to confirm file integrity and authenticity.</p>  <p>This
     * value is available only if the build project's <code>packaging</code> value is
     * set to <code>ZIP</code>.</p> 
     */
    inline void SetMd5sum(Aws::String&& value) { m_md5sumHasBeenSet = true; m_md5sum = std::move(value); }

    /**
     * <p>The MD5 hash of the build artifact.</p> <p>You can use this hash along with a
     * checksum tool to confirm file integrity and authenticity.</p>  <p>This
     * value is available only if the build project's <code>packaging</code> value is
     * set to <code>ZIP</code>.</p> 
     */
    inline void SetMd5sum(const char* value) { m_md5sumHasBeenSet = true; m_md5sum.assign(value); }

    /**
     * <p>The MD5 hash of the build artifact.</p> <p>You can use this hash along with a
     * checksum tool to confirm file integrity and authenticity.</p>  <p>This
     * value is available only if the build project's <code>packaging</code> value is
     * set to <code>ZIP</code>.</p> 
     */
    inline BuildArtifacts& WithMd5sum(const Aws::String& value) { SetMd5sum(value); return *this;}

    /**
     * <p>The MD5 hash of the build artifact.</p> <p>You can use this hash along with a
     * checksum tool to confirm file integrity and authenticity.</p>  <p>This
     * value is available only if the build project's <code>packaging</code> value is
     * set to <code>ZIP</code>.</p> 
     */
    inline BuildArtifacts& WithMd5sum(Aws::String&& value) { SetMd5sum(std::move(value)); return *this;}

    /**
     * <p>The MD5 hash of the build artifact.</p> <p>You can use this hash along with a
     * checksum tool to confirm file integrity and authenticity.</p>  <p>This
     * value is available only if the build project's <code>packaging</code> value is
     * set to <code>ZIP</code>.</p> 
     */
    inline BuildArtifacts& WithMd5sum(const char* value) { SetMd5sum(value); return *this;}


    /**
     * <p> If this flag is set, a name specified in the buildspec file overrides the
     * artifact name. The name specified in a buildspec file is calculated at build
     * time and uses the Shell Command Language. For example, you can append a date and
     * time to your artifact name so that it is always unique. </p>
     */
    inline bool GetOverrideArtifactName() const{ return m_overrideArtifactName; }

    /**
     * <p> If this flag is set, a name specified in the buildspec file overrides the
     * artifact name. The name specified in a buildspec file is calculated at build
     * time and uses the Shell Command Language. For example, you can append a date and
     * time to your artifact name so that it is always unique. </p>
     */
    inline bool OverrideArtifactNameHasBeenSet() const { return m_overrideArtifactNameHasBeenSet; }

    /**
     * <p> If this flag is set, a name specified in the buildspec file overrides the
     * artifact name. The name specified in a buildspec file is calculated at build
     * time and uses the Shell Command Language. For example, you can append a date and
     * time to your artifact name so that it is always unique. </p>
     */
    inline void SetOverrideArtifactName(bool value) { m_overrideArtifactNameHasBeenSet = true; m_overrideArtifactName = value; }

    /**
     * <p> If this flag is set, a name specified in the buildspec file overrides the
     * artifact name. The name specified in a buildspec file is calculated at build
     * time and uses the Shell Command Language. For example, you can append a date and
     * time to your artifact name so that it is always unique. </p>
     */
    inline BuildArtifacts& WithOverrideArtifactName(bool value) { SetOverrideArtifactName(value); return *this;}


    /**
     * <p> Information that tells you if encryption for build artifacts is disabled.
     * </p>
     */
    inline bool GetEncryptionDisabled() const{ return m_encryptionDisabled; }

    /**
     * <p> Information that tells you if encryption for build artifacts is disabled.
     * </p>
     */
    inline bool EncryptionDisabledHasBeenSet() const { return m_encryptionDisabledHasBeenSet; }

    /**
     * <p> Information that tells you if encryption for build artifacts is disabled.
     * </p>
     */
    inline void SetEncryptionDisabled(bool value) { m_encryptionDisabledHasBeenSet = true; m_encryptionDisabled = value; }

    /**
     * <p> Information that tells you if encryption for build artifacts is disabled.
     * </p>
     */
    inline BuildArtifacts& WithEncryptionDisabled(bool value) { SetEncryptionDisabled(value); return *this;}


    /**
     * <p> An identifier for this artifact definition. </p>
     */
    inline const Aws::String& GetArtifactIdentifier() const{ return m_artifactIdentifier; }

    /**
     * <p> An identifier for this artifact definition. </p>
     */
    inline bool ArtifactIdentifierHasBeenSet() const { return m_artifactIdentifierHasBeenSet; }

    /**
     * <p> An identifier for this artifact definition. </p>
     */
    inline void SetArtifactIdentifier(const Aws::String& value) { m_artifactIdentifierHasBeenSet = true; m_artifactIdentifier = value; }

    /**
     * <p> An identifier for this artifact definition. </p>
     */
    inline void SetArtifactIdentifier(Aws::String&& value) { m_artifactIdentifierHasBeenSet = true; m_artifactIdentifier = std::move(value); }

    /**
     * <p> An identifier for this artifact definition. </p>
     */
    inline void SetArtifactIdentifier(const char* value) { m_artifactIdentifierHasBeenSet = true; m_artifactIdentifier.assign(value); }

    /**
     * <p> An identifier for this artifact definition. </p>
     */
    inline BuildArtifacts& WithArtifactIdentifier(const Aws::String& value) { SetArtifactIdentifier(value); return *this;}

    /**
     * <p> An identifier for this artifact definition. </p>
     */
    inline BuildArtifacts& WithArtifactIdentifier(Aws::String&& value) { SetArtifactIdentifier(std::move(value)); return *this;}

    /**
     * <p> An identifier for this artifact definition. </p>
     */
    inline BuildArtifacts& WithArtifactIdentifier(const char* value) { SetArtifactIdentifier(value); return *this;}


    
    inline const BucketOwnerAccess& GetBucketOwnerAccess() const{ return m_bucketOwnerAccess; }

    
    inline bool BucketOwnerAccessHasBeenSet() const { return m_bucketOwnerAccessHasBeenSet; }

    
    inline void SetBucketOwnerAccess(const BucketOwnerAccess& value) { m_bucketOwnerAccessHasBeenSet = true; m_bucketOwnerAccess = value; }

    
    inline void SetBucketOwnerAccess(BucketOwnerAccess&& value) { m_bucketOwnerAccessHasBeenSet = true; m_bucketOwnerAccess = std::move(value); }

    
    inline BuildArtifacts& WithBucketOwnerAccess(const BucketOwnerAccess& value) { SetBucketOwnerAccess(value); return *this;}

    
    inline BuildArtifacts& WithBucketOwnerAccess(BucketOwnerAccess&& value) { SetBucketOwnerAccess(std::move(value)); return *this;}

  private:

    Aws::String m_location;
    bool m_locationHasBeenSet = false;

    Aws::String m_sha256sum;
    bool m_sha256sumHasBeenSet = false;

    Aws::String m_md5sum;
    bool m_md5sumHasBeenSet = false;

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

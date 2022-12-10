/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/synthetics/Synthetics_EXPORTS.h>
#include <aws/synthetics/model/S3EncryptionConfig.h>
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
namespace Synthetics
{
namespace Model
{

  /**
   * <p>A structure that contains the configuration for canary artifacts, including
   * the encryption-at-rest settings for artifacts that the canary uploads to Amazon
   * S3.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/synthetics-2017-10-11/ArtifactConfigOutput">AWS
   * API Reference</a></p>
   */
  class ArtifactConfigOutput
  {
  public:
    AWS_SYNTHETICS_API ArtifactConfigOutput();
    AWS_SYNTHETICS_API ArtifactConfigOutput(Aws::Utils::Json::JsonView jsonValue);
    AWS_SYNTHETICS_API ArtifactConfigOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SYNTHETICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A structure that contains the configuration of encryption settings for canary
     * artifacts that are stored in Amazon S3. </p>
     */
    inline const S3EncryptionConfig& GetS3Encryption() const{ return m_s3Encryption; }

    /**
     * <p>A structure that contains the configuration of encryption settings for canary
     * artifacts that are stored in Amazon S3. </p>
     */
    inline bool S3EncryptionHasBeenSet() const { return m_s3EncryptionHasBeenSet; }

    /**
     * <p>A structure that contains the configuration of encryption settings for canary
     * artifacts that are stored in Amazon S3. </p>
     */
    inline void SetS3Encryption(const S3EncryptionConfig& value) { m_s3EncryptionHasBeenSet = true; m_s3Encryption = value; }

    /**
     * <p>A structure that contains the configuration of encryption settings for canary
     * artifacts that are stored in Amazon S3. </p>
     */
    inline void SetS3Encryption(S3EncryptionConfig&& value) { m_s3EncryptionHasBeenSet = true; m_s3Encryption = std::move(value); }

    /**
     * <p>A structure that contains the configuration of encryption settings for canary
     * artifacts that are stored in Amazon S3. </p>
     */
    inline ArtifactConfigOutput& WithS3Encryption(const S3EncryptionConfig& value) { SetS3Encryption(value); return *this;}

    /**
     * <p>A structure that contains the configuration of encryption settings for canary
     * artifacts that are stored in Amazon S3. </p>
     */
    inline ArtifactConfigOutput& WithS3Encryption(S3EncryptionConfig&& value) { SetS3Encryption(std::move(value)); return *this;}

  private:

    S3EncryptionConfig m_s3Encryption;
    bool m_s3EncryptionHasBeenSet = false;
  };

} // namespace Model
} // namespace Synthetics
} // namespace Aws

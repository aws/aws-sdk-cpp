/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/healthlake/HealthLake_EXPORTS.h>
#include <aws/healthlake/model/KmsEncryptionConfig.h>
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
namespace HealthLake
{
namespace Model
{

  /**
   * <p> The server-side encryption key configuration for a customer provided
   * encryption key. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/healthlake-2017-07-01/SseConfiguration">AWS
   * API Reference</a></p>
   */
  class SseConfiguration
  {
  public:
    AWS_HEALTHLAKE_API SseConfiguration();
    AWS_HEALTHLAKE_API SseConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_HEALTHLAKE_API SseConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_HEALTHLAKE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The KMS encryption configuration used to provide details for data
     * encryption. </p>
     */
    inline const KmsEncryptionConfig& GetKmsEncryptionConfig() const{ return m_kmsEncryptionConfig; }

    /**
     * <p> The KMS encryption configuration used to provide details for data
     * encryption. </p>
     */
    inline bool KmsEncryptionConfigHasBeenSet() const { return m_kmsEncryptionConfigHasBeenSet; }

    /**
     * <p> The KMS encryption configuration used to provide details for data
     * encryption. </p>
     */
    inline void SetKmsEncryptionConfig(const KmsEncryptionConfig& value) { m_kmsEncryptionConfigHasBeenSet = true; m_kmsEncryptionConfig = value; }

    /**
     * <p> The KMS encryption configuration used to provide details for data
     * encryption. </p>
     */
    inline void SetKmsEncryptionConfig(KmsEncryptionConfig&& value) { m_kmsEncryptionConfigHasBeenSet = true; m_kmsEncryptionConfig = std::move(value); }

    /**
     * <p> The KMS encryption configuration used to provide details for data
     * encryption. </p>
     */
    inline SseConfiguration& WithKmsEncryptionConfig(const KmsEncryptionConfig& value) { SetKmsEncryptionConfig(value); return *this;}

    /**
     * <p> The KMS encryption configuration used to provide details for data
     * encryption. </p>
     */
    inline SseConfiguration& WithKmsEncryptionConfig(KmsEncryptionConfig&& value) { SetKmsEncryptionConfig(std::move(value)); return *this;}

  private:

    KmsEncryptionConfig m_kmsEncryptionConfig;
    bool m_kmsEncryptionConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace HealthLake
} // namespace Aws

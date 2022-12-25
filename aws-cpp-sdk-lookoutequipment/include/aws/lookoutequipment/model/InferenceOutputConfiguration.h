/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutequipment/LookoutEquipment_EXPORTS.h>
#include <aws/lookoutequipment/model/InferenceS3OutputConfiguration.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace LookoutEquipment
{
namespace Model
{

  /**
   * <p> Specifies configuration information for the output results from for the
   * inference, including KMS key ID and output S3 location. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutequipment-2020-12-15/InferenceOutputConfiguration">AWS
   * API Reference</a></p>
   */
  class InferenceOutputConfiguration
  {
  public:
    AWS_LOOKOUTEQUIPMENT_API InferenceOutputConfiguration();
    AWS_LOOKOUTEQUIPMENT_API InferenceOutputConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTEQUIPMENT_API InferenceOutputConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTEQUIPMENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> Specifies configuration information for the output results from for the
     * inference, output S3 location. </p>
     */
    inline const InferenceS3OutputConfiguration& GetS3OutputConfiguration() const{ return m_s3OutputConfiguration; }

    /**
     * <p> Specifies configuration information for the output results from for the
     * inference, output S3 location. </p>
     */
    inline bool S3OutputConfigurationHasBeenSet() const { return m_s3OutputConfigurationHasBeenSet; }

    /**
     * <p> Specifies configuration information for the output results from for the
     * inference, output S3 location. </p>
     */
    inline void SetS3OutputConfiguration(const InferenceS3OutputConfiguration& value) { m_s3OutputConfigurationHasBeenSet = true; m_s3OutputConfiguration = value; }

    /**
     * <p> Specifies configuration information for the output results from for the
     * inference, output S3 location. </p>
     */
    inline void SetS3OutputConfiguration(InferenceS3OutputConfiguration&& value) { m_s3OutputConfigurationHasBeenSet = true; m_s3OutputConfiguration = std::move(value); }

    /**
     * <p> Specifies configuration information for the output results from for the
     * inference, output S3 location. </p>
     */
    inline InferenceOutputConfiguration& WithS3OutputConfiguration(const InferenceS3OutputConfiguration& value) { SetS3OutputConfiguration(value); return *this;}

    /**
     * <p> Specifies configuration information for the output results from for the
     * inference, output S3 location. </p>
     */
    inline InferenceOutputConfiguration& WithS3OutputConfiguration(InferenceS3OutputConfiguration&& value) { SetS3OutputConfiguration(std::move(value)); return *this;}


    /**
     * <p>The ID number for the AWS KMS key used to encrypt the inference output. </p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }

    /**
     * <p>The ID number for the AWS KMS key used to encrypt the inference output. </p>
     */
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }

    /**
     * <p>The ID number for the AWS KMS key used to encrypt the inference output. </p>
     */
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }

    /**
     * <p>The ID number for the AWS KMS key used to encrypt the inference output. </p>
     */
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }

    /**
     * <p>The ID number for the AWS KMS key used to encrypt the inference output. </p>
     */
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }

    /**
     * <p>The ID number for the AWS KMS key used to encrypt the inference output. </p>
     */
    inline InferenceOutputConfiguration& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>The ID number for the AWS KMS key used to encrypt the inference output. </p>
     */
    inline InferenceOutputConfiguration& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>The ID number for the AWS KMS key used to encrypt the inference output. </p>
     */
    inline InferenceOutputConfiguration& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}

  private:

    InferenceS3OutputConfiguration m_s3OutputConfiguration;
    bool m_s3OutputConfigurationHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutEquipment
} // namespace Aws

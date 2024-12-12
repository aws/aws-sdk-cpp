/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/DataQualityEncryptionMode.h>
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
namespace Glue
{
namespace Model
{

  /**
   * <p>Specifies how Data Quality assets in your account should be
   * encrypted.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/DataQualityEncryption">AWS
   * API Reference</a></p>
   */
  class DataQualityEncryption
  {
  public:
    AWS_GLUE_API DataQualityEncryption();
    AWS_GLUE_API DataQualityEncryption(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API DataQualityEncryption& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The encryption mode to use for encrypting Data Quality assets. These assets
     * include data quality rulesets, results, statistics, anomaly detection models and
     * observations.</p> <p>Valid values are <code>SSEKMS</code> for encryption using a
     * customer-managed KMS key, or <code>DISABLED</code>.</p>
     */
    inline const DataQualityEncryptionMode& GetDataQualityEncryptionMode() const{ return m_dataQualityEncryptionMode; }
    inline bool DataQualityEncryptionModeHasBeenSet() const { return m_dataQualityEncryptionModeHasBeenSet; }
    inline void SetDataQualityEncryptionMode(const DataQualityEncryptionMode& value) { m_dataQualityEncryptionModeHasBeenSet = true; m_dataQualityEncryptionMode = value; }
    inline void SetDataQualityEncryptionMode(DataQualityEncryptionMode&& value) { m_dataQualityEncryptionModeHasBeenSet = true; m_dataQualityEncryptionMode = std::move(value); }
    inline DataQualityEncryption& WithDataQualityEncryptionMode(const DataQualityEncryptionMode& value) { SetDataQualityEncryptionMode(value); return *this;}
    inline DataQualityEncryption& WithDataQualityEncryptionMode(DataQualityEncryptionMode&& value) { SetDataQualityEncryptionMode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the KMS key to be used to encrypt the
     * data.</p>
     */
    inline const Aws::String& GetKmsKeyArn() const{ return m_kmsKeyArn; }
    inline bool KmsKeyArnHasBeenSet() const { return m_kmsKeyArnHasBeenSet; }
    inline void SetKmsKeyArn(const Aws::String& value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn = value; }
    inline void SetKmsKeyArn(Aws::String&& value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn = std::move(value); }
    inline void SetKmsKeyArn(const char* value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn.assign(value); }
    inline DataQualityEncryption& WithKmsKeyArn(const Aws::String& value) { SetKmsKeyArn(value); return *this;}
    inline DataQualityEncryption& WithKmsKeyArn(Aws::String&& value) { SetKmsKeyArn(std::move(value)); return *this;}
    inline DataQualityEncryption& WithKmsKeyArn(const char* value) { SetKmsKeyArn(value); return *this;}
    ///@}
  private:

    DataQualityEncryptionMode m_dataQualityEncryptionMode;
    bool m_dataQualityEncryptionModeHasBeenSet = false;

    Aws::String m_kmsKeyArn;
    bool m_kmsKeyArnHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws

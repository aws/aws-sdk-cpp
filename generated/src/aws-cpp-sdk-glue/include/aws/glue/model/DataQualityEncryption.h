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
    AWS_GLUE_API DataQualityEncryption() = default;
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
    inline DataQualityEncryptionMode GetDataQualityEncryptionMode() const { return m_dataQualityEncryptionMode; }
    inline bool DataQualityEncryptionModeHasBeenSet() const { return m_dataQualityEncryptionModeHasBeenSet; }
    inline void SetDataQualityEncryptionMode(DataQualityEncryptionMode value) { m_dataQualityEncryptionModeHasBeenSet = true; m_dataQualityEncryptionMode = value; }
    inline DataQualityEncryption& WithDataQualityEncryptionMode(DataQualityEncryptionMode value) { SetDataQualityEncryptionMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the KMS key to be used to encrypt the
     * data.</p>
     */
    inline const Aws::String& GetKmsKeyArn() const { return m_kmsKeyArn; }
    inline bool KmsKeyArnHasBeenSet() const { return m_kmsKeyArnHasBeenSet; }
    template<typename KmsKeyArnT = Aws::String>
    void SetKmsKeyArn(KmsKeyArnT&& value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn = std::forward<KmsKeyArnT>(value); }
    template<typename KmsKeyArnT = Aws::String>
    DataQualityEncryption& WithKmsKeyArn(KmsKeyArnT&& value) { SetKmsKeyArn(std::forward<KmsKeyArnT>(value)); return *this;}
    ///@}
  private:

    DataQualityEncryptionMode m_dataQualityEncryptionMode{DataQualityEncryptionMode::NOT_SET};
    bool m_dataQualityEncryptionModeHasBeenSet = false;

    Aws::String m_kmsKeyArn;
    bool m_kmsKeyArnHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws

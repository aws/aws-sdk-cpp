/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutequipment/LookoutEquipment_EXPORTS.h>
#include <aws/lookoutequipment/model/ModelDiagnosticsS3OutputConfiguration.h>
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
   * <p>Output configuration information for the pointwise model diagnostics for an
   * Amazon Lookout for Equipment model.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutequipment-2020-12-15/ModelDiagnosticsOutputConfiguration">AWS
   * API Reference</a></p>
   */
  class ModelDiagnosticsOutputConfiguration
  {
  public:
    AWS_LOOKOUTEQUIPMENT_API ModelDiagnosticsOutputConfiguration() = default;
    AWS_LOOKOUTEQUIPMENT_API ModelDiagnosticsOutputConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTEQUIPMENT_API ModelDiagnosticsOutputConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTEQUIPMENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon S3 location for the pointwise model diagnostics. </p>
     */
    inline const ModelDiagnosticsS3OutputConfiguration& GetS3OutputConfiguration() const { return m_s3OutputConfiguration; }
    inline bool S3OutputConfigurationHasBeenSet() const { return m_s3OutputConfigurationHasBeenSet; }
    template<typename S3OutputConfigurationT = ModelDiagnosticsS3OutputConfiguration>
    void SetS3OutputConfiguration(S3OutputConfigurationT&& value) { m_s3OutputConfigurationHasBeenSet = true; m_s3OutputConfiguration = std::forward<S3OutputConfigurationT>(value); }
    template<typename S3OutputConfigurationT = ModelDiagnosticsS3OutputConfiguration>
    ModelDiagnosticsOutputConfiguration& WithS3OutputConfiguration(S3OutputConfigurationT&& value) { SetS3OutputConfiguration(std::forward<S3OutputConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Key Management Service (KMS) key identifier to
     * encrypt the pointwise model diagnostics files.</p>
     */
    inline const Aws::String& GetKmsKeyId() const { return m_kmsKeyId; }
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
    template<typename KmsKeyIdT = Aws::String>
    void SetKmsKeyId(KmsKeyIdT&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::forward<KmsKeyIdT>(value); }
    template<typename KmsKeyIdT = Aws::String>
    ModelDiagnosticsOutputConfiguration& WithKmsKeyId(KmsKeyIdT&& value) { SetKmsKeyId(std::forward<KmsKeyIdT>(value)); return *this;}
    ///@}
  private:

    ModelDiagnosticsS3OutputConfiguration m_s3OutputConfiguration;
    bool m_s3OutputConfigurationHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutEquipment
} // namespace Aws

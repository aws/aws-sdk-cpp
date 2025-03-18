/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutmetrics/LookoutMetrics_EXPORTS.h>
#include <aws/lookoutmetrics/LookoutMetricsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lookoutmetrics/model/AnomalyDetectorConfig.h>
#include <utility>

namespace Aws
{
namespace LookoutMetrics
{
namespace Model
{

  /**
   */
  class UpdateAnomalyDetectorRequest : public LookoutMetricsRequest
  {
  public:
    AWS_LOOKOUTMETRICS_API UpdateAnomalyDetectorRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateAnomalyDetector"; }

    AWS_LOOKOUTMETRICS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ARN of the detector to update.</p>
     */
    inline const Aws::String& GetAnomalyDetectorArn() const { return m_anomalyDetectorArn; }
    inline bool AnomalyDetectorArnHasBeenSet() const { return m_anomalyDetectorArnHasBeenSet; }
    template<typename AnomalyDetectorArnT = Aws::String>
    void SetAnomalyDetectorArn(AnomalyDetectorArnT&& value) { m_anomalyDetectorArnHasBeenSet = true; m_anomalyDetectorArn = std::forward<AnomalyDetectorArnT>(value); }
    template<typename AnomalyDetectorArnT = Aws::String>
    UpdateAnomalyDetectorRequest& WithAnomalyDetectorArn(AnomalyDetectorArnT&& value) { SetAnomalyDetectorArn(std::forward<AnomalyDetectorArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of an AWS KMS encryption key.</p>
     */
    inline const Aws::String& GetKmsKeyArn() const { return m_kmsKeyArn; }
    inline bool KmsKeyArnHasBeenSet() const { return m_kmsKeyArnHasBeenSet; }
    template<typename KmsKeyArnT = Aws::String>
    void SetKmsKeyArn(KmsKeyArnT&& value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn = std::forward<KmsKeyArnT>(value); }
    template<typename KmsKeyArnT = Aws::String>
    UpdateAnomalyDetectorRequest& WithKmsKeyArn(KmsKeyArnT&& value) { SetKmsKeyArn(std::forward<KmsKeyArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The updated detector description.</p>
     */
    inline const Aws::String& GetAnomalyDetectorDescription() const { return m_anomalyDetectorDescription; }
    inline bool AnomalyDetectorDescriptionHasBeenSet() const { return m_anomalyDetectorDescriptionHasBeenSet; }
    template<typename AnomalyDetectorDescriptionT = Aws::String>
    void SetAnomalyDetectorDescription(AnomalyDetectorDescriptionT&& value) { m_anomalyDetectorDescriptionHasBeenSet = true; m_anomalyDetectorDescription = std::forward<AnomalyDetectorDescriptionT>(value); }
    template<typename AnomalyDetectorDescriptionT = Aws::String>
    UpdateAnomalyDetectorRequest& WithAnomalyDetectorDescription(AnomalyDetectorDescriptionT&& value) { SetAnomalyDetectorDescription(std::forward<AnomalyDetectorDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains information about the configuration to which the detector will be
     * updated.</p>
     */
    inline const AnomalyDetectorConfig& GetAnomalyDetectorConfig() const { return m_anomalyDetectorConfig; }
    inline bool AnomalyDetectorConfigHasBeenSet() const { return m_anomalyDetectorConfigHasBeenSet; }
    template<typename AnomalyDetectorConfigT = AnomalyDetectorConfig>
    void SetAnomalyDetectorConfig(AnomalyDetectorConfigT&& value) { m_anomalyDetectorConfigHasBeenSet = true; m_anomalyDetectorConfig = std::forward<AnomalyDetectorConfigT>(value); }
    template<typename AnomalyDetectorConfigT = AnomalyDetectorConfig>
    UpdateAnomalyDetectorRequest& WithAnomalyDetectorConfig(AnomalyDetectorConfigT&& value) { SetAnomalyDetectorConfig(std::forward<AnomalyDetectorConfigT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_anomalyDetectorArn;
    bool m_anomalyDetectorArnHasBeenSet = false;

    Aws::String m_kmsKeyArn;
    bool m_kmsKeyArnHasBeenSet = false;

    Aws::String m_anomalyDetectorDescription;
    bool m_anomalyDetectorDescriptionHasBeenSet = false;

    AnomalyDetectorConfig m_anomalyDetectorConfig;
    bool m_anomalyDetectorConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutMetrics
} // namespace Aws

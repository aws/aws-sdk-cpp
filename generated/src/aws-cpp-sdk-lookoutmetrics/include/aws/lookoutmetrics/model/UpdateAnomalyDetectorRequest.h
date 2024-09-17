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
    AWS_LOOKOUTMETRICS_API UpdateAnomalyDetectorRequest();

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
    inline const Aws::String& GetAnomalyDetectorArn() const{ return m_anomalyDetectorArn; }
    inline bool AnomalyDetectorArnHasBeenSet() const { return m_anomalyDetectorArnHasBeenSet; }
    inline void SetAnomalyDetectorArn(const Aws::String& value) { m_anomalyDetectorArnHasBeenSet = true; m_anomalyDetectorArn = value; }
    inline void SetAnomalyDetectorArn(Aws::String&& value) { m_anomalyDetectorArnHasBeenSet = true; m_anomalyDetectorArn = std::move(value); }
    inline void SetAnomalyDetectorArn(const char* value) { m_anomalyDetectorArnHasBeenSet = true; m_anomalyDetectorArn.assign(value); }
    inline UpdateAnomalyDetectorRequest& WithAnomalyDetectorArn(const Aws::String& value) { SetAnomalyDetectorArn(value); return *this;}
    inline UpdateAnomalyDetectorRequest& WithAnomalyDetectorArn(Aws::String&& value) { SetAnomalyDetectorArn(std::move(value)); return *this;}
    inline UpdateAnomalyDetectorRequest& WithAnomalyDetectorArn(const char* value) { SetAnomalyDetectorArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of an AWS KMS encryption key.</p>
     */
    inline const Aws::String& GetKmsKeyArn() const{ return m_kmsKeyArn; }
    inline bool KmsKeyArnHasBeenSet() const { return m_kmsKeyArnHasBeenSet; }
    inline void SetKmsKeyArn(const Aws::String& value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn = value; }
    inline void SetKmsKeyArn(Aws::String&& value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn = std::move(value); }
    inline void SetKmsKeyArn(const char* value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn.assign(value); }
    inline UpdateAnomalyDetectorRequest& WithKmsKeyArn(const Aws::String& value) { SetKmsKeyArn(value); return *this;}
    inline UpdateAnomalyDetectorRequest& WithKmsKeyArn(Aws::String&& value) { SetKmsKeyArn(std::move(value)); return *this;}
    inline UpdateAnomalyDetectorRequest& WithKmsKeyArn(const char* value) { SetKmsKeyArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The updated detector description.</p>
     */
    inline const Aws::String& GetAnomalyDetectorDescription() const{ return m_anomalyDetectorDescription; }
    inline bool AnomalyDetectorDescriptionHasBeenSet() const { return m_anomalyDetectorDescriptionHasBeenSet; }
    inline void SetAnomalyDetectorDescription(const Aws::String& value) { m_anomalyDetectorDescriptionHasBeenSet = true; m_anomalyDetectorDescription = value; }
    inline void SetAnomalyDetectorDescription(Aws::String&& value) { m_anomalyDetectorDescriptionHasBeenSet = true; m_anomalyDetectorDescription = std::move(value); }
    inline void SetAnomalyDetectorDescription(const char* value) { m_anomalyDetectorDescriptionHasBeenSet = true; m_anomalyDetectorDescription.assign(value); }
    inline UpdateAnomalyDetectorRequest& WithAnomalyDetectorDescription(const Aws::String& value) { SetAnomalyDetectorDescription(value); return *this;}
    inline UpdateAnomalyDetectorRequest& WithAnomalyDetectorDescription(Aws::String&& value) { SetAnomalyDetectorDescription(std::move(value)); return *this;}
    inline UpdateAnomalyDetectorRequest& WithAnomalyDetectorDescription(const char* value) { SetAnomalyDetectorDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains information about the configuration to which the detector will be
     * updated.</p>
     */
    inline const AnomalyDetectorConfig& GetAnomalyDetectorConfig() const{ return m_anomalyDetectorConfig; }
    inline bool AnomalyDetectorConfigHasBeenSet() const { return m_anomalyDetectorConfigHasBeenSet; }
    inline void SetAnomalyDetectorConfig(const AnomalyDetectorConfig& value) { m_anomalyDetectorConfigHasBeenSet = true; m_anomalyDetectorConfig = value; }
    inline void SetAnomalyDetectorConfig(AnomalyDetectorConfig&& value) { m_anomalyDetectorConfigHasBeenSet = true; m_anomalyDetectorConfig = std::move(value); }
    inline UpdateAnomalyDetectorRequest& WithAnomalyDetectorConfig(const AnomalyDetectorConfig& value) { SetAnomalyDetectorConfig(value); return *this;}
    inline UpdateAnomalyDetectorRequest& WithAnomalyDetectorConfig(AnomalyDetectorConfig&& value) { SetAnomalyDetectorConfig(std::move(value)); return *this;}
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

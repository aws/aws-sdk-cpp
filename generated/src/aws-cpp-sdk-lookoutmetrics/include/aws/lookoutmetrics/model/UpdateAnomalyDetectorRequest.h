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


    /**
     * <p>The ARN of the detector to update.</p>
     */
    inline const Aws::String& GetAnomalyDetectorArn() const{ return m_anomalyDetectorArn; }

    /**
     * <p>The ARN of the detector to update.</p>
     */
    inline bool AnomalyDetectorArnHasBeenSet() const { return m_anomalyDetectorArnHasBeenSet; }

    /**
     * <p>The ARN of the detector to update.</p>
     */
    inline void SetAnomalyDetectorArn(const Aws::String& value) { m_anomalyDetectorArnHasBeenSet = true; m_anomalyDetectorArn = value; }

    /**
     * <p>The ARN of the detector to update.</p>
     */
    inline void SetAnomalyDetectorArn(Aws::String&& value) { m_anomalyDetectorArnHasBeenSet = true; m_anomalyDetectorArn = std::move(value); }

    /**
     * <p>The ARN of the detector to update.</p>
     */
    inline void SetAnomalyDetectorArn(const char* value) { m_anomalyDetectorArnHasBeenSet = true; m_anomalyDetectorArn.assign(value); }

    /**
     * <p>The ARN of the detector to update.</p>
     */
    inline UpdateAnomalyDetectorRequest& WithAnomalyDetectorArn(const Aws::String& value) { SetAnomalyDetectorArn(value); return *this;}

    /**
     * <p>The ARN of the detector to update.</p>
     */
    inline UpdateAnomalyDetectorRequest& WithAnomalyDetectorArn(Aws::String&& value) { SetAnomalyDetectorArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the detector to update.</p>
     */
    inline UpdateAnomalyDetectorRequest& WithAnomalyDetectorArn(const char* value) { SetAnomalyDetectorArn(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of an AWS KMS encryption key.</p>
     */
    inline const Aws::String& GetKmsKeyArn() const{ return m_kmsKeyArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of an AWS KMS encryption key.</p>
     */
    inline bool KmsKeyArnHasBeenSet() const { return m_kmsKeyArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of an AWS KMS encryption key.</p>
     */
    inline void SetKmsKeyArn(const Aws::String& value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of an AWS KMS encryption key.</p>
     */
    inline void SetKmsKeyArn(Aws::String&& value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of an AWS KMS encryption key.</p>
     */
    inline void SetKmsKeyArn(const char* value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of an AWS KMS encryption key.</p>
     */
    inline UpdateAnomalyDetectorRequest& WithKmsKeyArn(const Aws::String& value) { SetKmsKeyArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an AWS KMS encryption key.</p>
     */
    inline UpdateAnomalyDetectorRequest& WithKmsKeyArn(Aws::String&& value) { SetKmsKeyArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an AWS KMS encryption key.</p>
     */
    inline UpdateAnomalyDetectorRequest& WithKmsKeyArn(const char* value) { SetKmsKeyArn(value); return *this;}


    /**
     * <p>The updated detector description.</p>
     */
    inline const Aws::String& GetAnomalyDetectorDescription() const{ return m_anomalyDetectorDescription; }

    /**
     * <p>The updated detector description.</p>
     */
    inline bool AnomalyDetectorDescriptionHasBeenSet() const { return m_anomalyDetectorDescriptionHasBeenSet; }

    /**
     * <p>The updated detector description.</p>
     */
    inline void SetAnomalyDetectorDescription(const Aws::String& value) { m_anomalyDetectorDescriptionHasBeenSet = true; m_anomalyDetectorDescription = value; }

    /**
     * <p>The updated detector description.</p>
     */
    inline void SetAnomalyDetectorDescription(Aws::String&& value) { m_anomalyDetectorDescriptionHasBeenSet = true; m_anomalyDetectorDescription = std::move(value); }

    /**
     * <p>The updated detector description.</p>
     */
    inline void SetAnomalyDetectorDescription(const char* value) { m_anomalyDetectorDescriptionHasBeenSet = true; m_anomalyDetectorDescription.assign(value); }

    /**
     * <p>The updated detector description.</p>
     */
    inline UpdateAnomalyDetectorRequest& WithAnomalyDetectorDescription(const Aws::String& value) { SetAnomalyDetectorDescription(value); return *this;}

    /**
     * <p>The updated detector description.</p>
     */
    inline UpdateAnomalyDetectorRequest& WithAnomalyDetectorDescription(Aws::String&& value) { SetAnomalyDetectorDescription(std::move(value)); return *this;}

    /**
     * <p>The updated detector description.</p>
     */
    inline UpdateAnomalyDetectorRequest& WithAnomalyDetectorDescription(const char* value) { SetAnomalyDetectorDescription(value); return *this;}


    /**
     * <p>Contains information about the configuration to which the detector will be
     * updated.</p>
     */
    inline const AnomalyDetectorConfig& GetAnomalyDetectorConfig() const{ return m_anomalyDetectorConfig; }

    /**
     * <p>Contains information about the configuration to which the detector will be
     * updated.</p>
     */
    inline bool AnomalyDetectorConfigHasBeenSet() const { return m_anomalyDetectorConfigHasBeenSet; }

    /**
     * <p>Contains information about the configuration to which the detector will be
     * updated.</p>
     */
    inline void SetAnomalyDetectorConfig(const AnomalyDetectorConfig& value) { m_anomalyDetectorConfigHasBeenSet = true; m_anomalyDetectorConfig = value; }

    /**
     * <p>Contains information about the configuration to which the detector will be
     * updated.</p>
     */
    inline void SetAnomalyDetectorConfig(AnomalyDetectorConfig&& value) { m_anomalyDetectorConfigHasBeenSet = true; m_anomalyDetectorConfig = std::move(value); }

    /**
     * <p>Contains information about the configuration to which the detector will be
     * updated.</p>
     */
    inline UpdateAnomalyDetectorRequest& WithAnomalyDetectorConfig(const AnomalyDetectorConfig& value) { SetAnomalyDetectorConfig(value); return *this;}

    /**
     * <p>Contains information about the configuration to which the detector will be
     * updated.</p>
     */
    inline UpdateAnomalyDetectorRequest& WithAnomalyDetectorConfig(AnomalyDetectorConfig&& value) { SetAnomalyDetectorConfig(std::move(value)); return *this;}

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

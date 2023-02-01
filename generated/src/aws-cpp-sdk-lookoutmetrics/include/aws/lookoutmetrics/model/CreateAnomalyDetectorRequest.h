/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutmetrics/LookoutMetrics_EXPORTS.h>
#include <aws/lookoutmetrics/LookoutMetricsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lookoutmetrics/model/AnomalyDetectorConfig.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace LookoutMetrics
{
namespace Model
{

  /**
   */
  class CreateAnomalyDetectorRequest : public LookoutMetricsRequest
  {
  public:
    AWS_LOOKOUTMETRICS_API CreateAnomalyDetectorRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateAnomalyDetector"; }

    AWS_LOOKOUTMETRICS_API Aws::String SerializePayload() const override;


    /**
     * <p>The name of the detector.</p>
     */
    inline const Aws::String& GetAnomalyDetectorName() const{ return m_anomalyDetectorName; }

    /**
     * <p>The name of the detector.</p>
     */
    inline bool AnomalyDetectorNameHasBeenSet() const { return m_anomalyDetectorNameHasBeenSet; }

    /**
     * <p>The name of the detector.</p>
     */
    inline void SetAnomalyDetectorName(const Aws::String& value) { m_anomalyDetectorNameHasBeenSet = true; m_anomalyDetectorName = value; }

    /**
     * <p>The name of the detector.</p>
     */
    inline void SetAnomalyDetectorName(Aws::String&& value) { m_anomalyDetectorNameHasBeenSet = true; m_anomalyDetectorName = std::move(value); }

    /**
     * <p>The name of the detector.</p>
     */
    inline void SetAnomalyDetectorName(const char* value) { m_anomalyDetectorNameHasBeenSet = true; m_anomalyDetectorName.assign(value); }

    /**
     * <p>The name of the detector.</p>
     */
    inline CreateAnomalyDetectorRequest& WithAnomalyDetectorName(const Aws::String& value) { SetAnomalyDetectorName(value); return *this;}

    /**
     * <p>The name of the detector.</p>
     */
    inline CreateAnomalyDetectorRequest& WithAnomalyDetectorName(Aws::String&& value) { SetAnomalyDetectorName(std::move(value)); return *this;}

    /**
     * <p>The name of the detector.</p>
     */
    inline CreateAnomalyDetectorRequest& WithAnomalyDetectorName(const char* value) { SetAnomalyDetectorName(value); return *this;}


    /**
     * <p>A description of the detector.</p>
     */
    inline const Aws::String& GetAnomalyDetectorDescription() const{ return m_anomalyDetectorDescription; }

    /**
     * <p>A description of the detector.</p>
     */
    inline bool AnomalyDetectorDescriptionHasBeenSet() const { return m_anomalyDetectorDescriptionHasBeenSet; }

    /**
     * <p>A description of the detector.</p>
     */
    inline void SetAnomalyDetectorDescription(const Aws::String& value) { m_anomalyDetectorDescriptionHasBeenSet = true; m_anomalyDetectorDescription = value; }

    /**
     * <p>A description of the detector.</p>
     */
    inline void SetAnomalyDetectorDescription(Aws::String&& value) { m_anomalyDetectorDescriptionHasBeenSet = true; m_anomalyDetectorDescription = std::move(value); }

    /**
     * <p>A description of the detector.</p>
     */
    inline void SetAnomalyDetectorDescription(const char* value) { m_anomalyDetectorDescriptionHasBeenSet = true; m_anomalyDetectorDescription.assign(value); }

    /**
     * <p>A description of the detector.</p>
     */
    inline CreateAnomalyDetectorRequest& WithAnomalyDetectorDescription(const Aws::String& value) { SetAnomalyDetectorDescription(value); return *this;}

    /**
     * <p>A description of the detector.</p>
     */
    inline CreateAnomalyDetectorRequest& WithAnomalyDetectorDescription(Aws::String&& value) { SetAnomalyDetectorDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the detector.</p>
     */
    inline CreateAnomalyDetectorRequest& WithAnomalyDetectorDescription(const char* value) { SetAnomalyDetectorDescription(value); return *this;}


    /**
     * <p>Contains information about the configuration of the anomaly detector.</p>
     */
    inline const AnomalyDetectorConfig& GetAnomalyDetectorConfig() const{ return m_anomalyDetectorConfig; }

    /**
     * <p>Contains information about the configuration of the anomaly detector.</p>
     */
    inline bool AnomalyDetectorConfigHasBeenSet() const { return m_anomalyDetectorConfigHasBeenSet; }

    /**
     * <p>Contains information about the configuration of the anomaly detector.</p>
     */
    inline void SetAnomalyDetectorConfig(const AnomalyDetectorConfig& value) { m_anomalyDetectorConfigHasBeenSet = true; m_anomalyDetectorConfig = value; }

    /**
     * <p>Contains information about the configuration of the anomaly detector.</p>
     */
    inline void SetAnomalyDetectorConfig(AnomalyDetectorConfig&& value) { m_anomalyDetectorConfigHasBeenSet = true; m_anomalyDetectorConfig = std::move(value); }

    /**
     * <p>Contains information about the configuration of the anomaly detector.</p>
     */
    inline CreateAnomalyDetectorRequest& WithAnomalyDetectorConfig(const AnomalyDetectorConfig& value) { SetAnomalyDetectorConfig(value); return *this;}

    /**
     * <p>Contains information about the configuration of the anomaly detector.</p>
     */
    inline CreateAnomalyDetectorRequest& WithAnomalyDetectorConfig(AnomalyDetectorConfig&& value) { SetAnomalyDetectorConfig(std::move(value)); return *this;}


    /**
     * <p>The ARN of the KMS key to use to encrypt your data.</p>
     */
    inline const Aws::String& GetKmsKeyArn() const{ return m_kmsKeyArn; }

    /**
     * <p>The ARN of the KMS key to use to encrypt your data.</p>
     */
    inline bool KmsKeyArnHasBeenSet() const { return m_kmsKeyArnHasBeenSet; }

    /**
     * <p>The ARN of the KMS key to use to encrypt your data.</p>
     */
    inline void SetKmsKeyArn(const Aws::String& value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn = value; }

    /**
     * <p>The ARN of the KMS key to use to encrypt your data.</p>
     */
    inline void SetKmsKeyArn(Aws::String&& value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn = std::move(value); }

    /**
     * <p>The ARN of the KMS key to use to encrypt your data.</p>
     */
    inline void SetKmsKeyArn(const char* value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn.assign(value); }

    /**
     * <p>The ARN of the KMS key to use to encrypt your data.</p>
     */
    inline CreateAnomalyDetectorRequest& WithKmsKeyArn(const Aws::String& value) { SetKmsKeyArn(value); return *this;}

    /**
     * <p>The ARN of the KMS key to use to encrypt your data.</p>
     */
    inline CreateAnomalyDetectorRequest& WithKmsKeyArn(Aws::String&& value) { SetKmsKeyArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the KMS key to use to encrypt your data.</p>
     */
    inline CreateAnomalyDetectorRequest& WithKmsKeyArn(const char* value) { SetKmsKeyArn(value); return *this;}


    /**
     * <p>A list of <a
     * href="https://docs.aws.amazon.com/lookoutmetrics/latest/dev/detectors-tags.html">tags</a>
     * to apply to the anomaly detector.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>A list of <a
     * href="https://docs.aws.amazon.com/lookoutmetrics/latest/dev/detectors-tags.html">tags</a>
     * to apply to the anomaly detector.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A list of <a
     * href="https://docs.aws.amazon.com/lookoutmetrics/latest/dev/detectors-tags.html">tags</a>
     * to apply to the anomaly detector.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A list of <a
     * href="https://docs.aws.amazon.com/lookoutmetrics/latest/dev/detectors-tags.html">tags</a>
     * to apply to the anomaly detector.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A list of <a
     * href="https://docs.aws.amazon.com/lookoutmetrics/latest/dev/detectors-tags.html">tags</a>
     * to apply to the anomaly detector.</p>
     */
    inline CreateAnomalyDetectorRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>A list of <a
     * href="https://docs.aws.amazon.com/lookoutmetrics/latest/dev/detectors-tags.html">tags</a>
     * to apply to the anomaly detector.</p>
     */
    inline CreateAnomalyDetectorRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A list of <a
     * href="https://docs.aws.amazon.com/lookoutmetrics/latest/dev/detectors-tags.html">tags</a>
     * to apply to the anomaly detector.</p>
     */
    inline CreateAnomalyDetectorRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>A list of <a
     * href="https://docs.aws.amazon.com/lookoutmetrics/latest/dev/detectors-tags.html">tags</a>
     * to apply to the anomaly detector.</p>
     */
    inline CreateAnomalyDetectorRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A list of <a
     * href="https://docs.aws.amazon.com/lookoutmetrics/latest/dev/detectors-tags.html">tags</a>
     * to apply to the anomaly detector.</p>
     */
    inline CreateAnomalyDetectorRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A list of <a
     * href="https://docs.aws.amazon.com/lookoutmetrics/latest/dev/detectors-tags.html">tags</a>
     * to apply to the anomaly detector.</p>
     */
    inline CreateAnomalyDetectorRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A list of <a
     * href="https://docs.aws.amazon.com/lookoutmetrics/latest/dev/detectors-tags.html">tags</a>
     * to apply to the anomaly detector.</p>
     */
    inline CreateAnomalyDetectorRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A list of <a
     * href="https://docs.aws.amazon.com/lookoutmetrics/latest/dev/detectors-tags.html">tags</a>
     * to apply to the anomaly detector.</p>
     */
    inline CreateAnomalyDetectorRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A list of <a
     * href="https://docs.aws.amazon.com/lookoutmetrics/latest/dev/detectors-tags.html">tags</a>
     * to apply to the anomaly detector.</p>
     */
    inline CreateAnomalyDetectorRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_anomalyDetectorName;
    bool m_anomalyDetectorNameHasBeenSet = false;

    Aws::String m_anomalyDetectorDescription;
    bool m_anomalyDetectorDescriptionHasBeenSet = false;

    AnomalyDetectorConfig m_anomalyDetectorConfig;
    bool m_anomalyDetectorConfigHasBeenSet = false;

    Aws::String m_kmsKeyArn;
    bool m_kmsKeyArnHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutMetrics
} // namespace Aws

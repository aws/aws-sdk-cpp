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
    AWS_LOOKOUTMETRICS_API CreateAnomalyDetectorRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateAnomalyDetector"; }

    AWS_LOOKOUTMETRICS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the detector.</p>
     */
    inline const Aws::String& GetAnomalyDetectorName() const { return m_anomalyDetectorName; }
    inline bool AnomalyDetectorNameHasBeenSet() const { return m_anomalyDetectorNameHasBeenSet; }
    template<typename AnomalyDetectorNameT = Aws::String>
    void SetAnomalyDetectorName(AnomalyDetectorNameT&& value) { m_anomalyDetectorNameHasBeenSet = true; m_anomalyDetectorName = std::forward<AnomalyDetectorNameT>(value); }
    template<typename AnomalyDetectorNameT = Aws::String>
    CreateAnomalyDetectorRequest& WithAnomalyDetectorName(AnomalyDetectorNameT&& value) { SetAnomalyDetectorName(std::forward<AnomalyDetectorNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the detector.</p>
     */
    inline const Aws::String& GetAnomalyDetectorDescription() const { return m_anomalyDetectorDescription; }
    inline bool AnomalyDetectorDescriptionHasBeenSet() const { return m_anomalyDetectorDescriptionHasBeenSet; }
    template<typename AnomalyDetectorDescriptionT = Aws::String>
    void SetAnomalyDetectorDescription(AnomalyDetectorDescriptionT&& value) { m_anomalyDetectorDescriptionHasBeenSet = true; m_anomalyDetectorDescription = std::forward<AnomalyDetectorDescriptionT>(value); }
    template<typename AnomalyDetectorDescriptionT = Aws::String>
    CreateAnomalyDetectorRequest& WithAnomalyDetectorDescription(AnomalyDetectorDescriptionT&& value) { SetAnomalyDetectorDescription(std::forward<AnomalyDetectorDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains information about the configuration of the anomaly detector.</p>
     */
    inline const AnomalyDetectorConfig& GetAnomalyDetectorConfig() const { return m_anomalyDetectorConfig; }
    inline bool AnomalyDetectorConfigHasBeenSet() const { return m_anomalyDetectorConfigHasBeenSet; }
    template<typename AnomalyDetectorConfigT = AnomalyDetectorConfig>
    void SetAnomalyDetectorConfig(AnomalyDetectorConfigT&& value) { m_anomalyDetectorConfigHasBeenSet = true; m_anomalyDetectorConfig = std::forward<AnomalyDetectorConfigT>(value); }
    template<typename AnomalyDetectorConfigT = AnomalyDetectorConfig>
    CreateAnomalyDetectorRequest& WithAnomalyDetectorConfig(AnomalyDetectorConfigT&& value) { SetAnomalyDetectorConfig(std::forward<AnomalyDetectorConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the KMS key to use to encrypt your data.</p>
     */
    inline const Aws::String& GetKmsKeyArn() const { return m_kmsKeyArn; }
    inline bool KmsKeyArnHasBeenSet() const { return m_kmsKeyArnHasBeenSet; }
    template<typename KmsKeyArnT = Aws::String>
    void SetKmsKeyArn(KmsKeyArnT&& value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn = std::forward<KmsKeyArnT>(value); }
    template<typename KmsKeyArnT = Aws::String>
    CreateAnomalyDetectorRequest& WithKmsKeyArn(KmsKeyArnT&& value) { SetKmsKeyArn(std::forward<KmsKeyArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of <a
     * href="https://docs.aws.amazon.com/lookoutmetrics/latest/dev/detectors-tags.html">tags</a>
     * to apply to the anomaly detector.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CreateAnomalyDetectorRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateAnomalyDetectorRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}
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

﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutmetrics/LookoutMetrics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace LookoutMetrics
{
namespace Model
{

  /**
   * <p>Contains information about a dataset.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutmetrics-2017-07-25/MetricSetSummary">AWS
   * API Reference</a></p>
   */
  class MetricSetSummary
  {
  public:
    AWS_LOOKOUTMETRICS_API MetricSetSummary();
    AWS_LOOKOUTMETRICS_API MetricSetSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTMETRICS_API MetricSetSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTMETRICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the dataset.</p>
     */
    inline const Aws::String& GetMetricSetArn() const{ return m_metricSetArn; }
    inline bool MetricSetArnHasBeenSet() const { return m_metricSetArnHasBeenSet; }
    inline void SetMetricSetArn(const Aws::String& value) { m_metricSetArnHasBeenSet = true; m_metricSetArn = value; }
    inline void SetMetricSetArn(Aws::String&& value) { m_metricSetArnHasBeenSet = true; m_metricSetArn = std::move(value); }
    inline void SetMetricSetArn(const char* value) { m_metricSetArnHasBeenSet = true; m_metricSetArn.assign(value); }
    inline MetricSetSummary& WithMetricSetArn(const Aws::String& value) { SetMetricSetArn(value); return *this;}
    inline MetricSetSummary& WithMetricSetArn(Aws::String&& value) { SetMetricSetArn(std::move(value)); return *this;}
    inline MetricSetSummary& WithMetricSetArn(const char* value) { SetMetricSetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the detector to which the dataset belongs.</p>
     */
    inline const Aws::String& GetAnomalyDetectorArn() const{ return m_anomalyDetectorArn; }
    inline bool AnomalyDetectorArnHasBeenSet() const { return m_anomalyDetectorArnHasBeenSet; }
    inline void SetAnomalyDetectorArn(const Aws::String& value) { m_anomalyDetectorArnHasBeenSet = true; m_anomalyDetectorArn = value; }
    inline void SetAnomalyDetectorArn(Aws::String&& value) { m_anomalyDetectorArnHasBeenSet = true; m_anomalyDetectorArn = std::move(value); }
    inline void SetAnomalyDetectorArn(const char* value) { m_anomalyDetectorArnHasBeenSet = true; m_anomalyDetectorArn.assign(value); }
    inline MetricSetSummary& WithAnomalyDetectorArn(const Aws::String& value) { SetAnomalyDetectorArn(value); return *this;}
    inline MetricSetSummary& WithAnomalyDetectorArn(Aws::String&& value) { SetAnomalyDetectorArn(std::move(value)); return *this;}
    inline MetricSetSummary& WithAnomalyDetectorArn(const char* value) { SetAnomalyDetectorArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the dataset.</p>
     */
    inline const Aws::String& GetMetricSetDescription() const{ return m_metricSetDescription; }
    inline bool MetricSetDescriptionHasBeenSet() const { return m_metricSetDescriptionHasBeenSet; }
    inline void SetMetricSetDescription(const Aws::String& value) { m_metricSetDescriptionHasBeenSet = true; m_metricSetDescription = value; }
    inline void SetMetricSetDescription(Aws::String&& value) { m_metricSetDescriptionHasBeenSet = true; m_metricSetDescription = std::move(value); }
    inline void SetMetricSetDescription(const char* value) { m_metricSetDescriptionHasBeenSet = true; m_metricSetDescription.assign(value); }
    inline MetricSetSummary& WithMetricSetDescription(const Aws::String& value) { SetMetricSetDescription(value); return *this;}
    inline MetricSetSummary& WithMetricSetDescription(Aws::String&& value) { SetMetricSetDescription(std::move(value)); return *this;}
    inline MetricSetSummary& WithMetricSetDescription(const char* value) { SetMetricSetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the dataset.</p>
     */
    inline const Aws::String& GetMetricSetName() const{ return m_metricSetName; }
    inline bool MetricSetNameHasBeenSet() const { return m_metricSetNameHasBeenSet; }
    inline void SetMetricSetName(const Aws::String& value) { m_metricSetNameHasBeenSet = true; m_metricSetName = value; }
    inline void SetMetricSetName(Aws::String&& value) { m_metricSetNameHasBeenSet = true; m_metricSetName = std::move(value); }
    inline void SetMetricSetName(const char* value) { m_metricSetNameHasBeenSet = true; m_metricSetName.assign(value); }
    inline MetricSetSummary& WithMetricSetName(const Aws::String& value) { SetMetricSetName(value); return *this;}
    inline MetricSetSummary& WithMetricSetName(Aws::String&& value) { SetMetricSetName(std::move(value)); return *this;}
    inline MetricSetSummary& WithMetricSetName(const char* value) { SetMetricSetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the dataset was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }
    inline MetricSetSummary& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline MetricSetSummary& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the dataset was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModificationTime() const{ return m_lastModificationTime; }
    inline bool LastModificationTimeHasBeenSet() const { return m_lastModificationTimeHasBeenSet; }
    inline void SetLastModificationTime(const Aws::Utils::DateTime& value) { m_lastModificationTimeHasBeenSet = true; m_lastModificationTime = value; }
    inline void SetLastModificationTime(Aws::Utils::DateTime&& value) { m_lastModificationTimeHasBeenSet = true; m_lastModificationTime = std::move(value); }
    inline MetricSetSummary& WithLastModificationTime(const Aws::Utils::DateTime& value) { SetLastModificationTime(value); return *this;}
    inline MetricSetSummary& WithLastModificationTime(Aws::Utils::DateTime&& value) { SetLastModificationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The dataset's <a
     * href="https://docs.aws.amazon.com/lookoutmetrics/latest/dev/detectors-tags.html">tags</a>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline MetricSetSummary& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline MetricSetSummary& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline MetricSetSummary& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline MetricSetSummary& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline MetricSetSummary& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline MetricSetSummary& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline MetricSetSummary& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline MetricSetSummary& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline MetricSetSummary& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}
  private:

    Aws::String m_metricSetArn;
    bool m_metricSetArnHasBeenSet = false;

    Aws::String m_anomalyDetectorArn;
    bool m_anomalyDetectorArnHasBeenSet = false;

    Aws::String m_metricSetDescription;
    bool m_metricSetDescriptionHasBeenSet = false;

    Aws::String m_metricSetName;
    bool m_metricSetNameHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModificationTime;
    bool m_lastModificationTimeHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutMetrics
} // namespace Aws

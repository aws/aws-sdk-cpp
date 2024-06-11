/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotanalytics/IoTAnalytics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/iotanalytics/model/PipelineActivity.h>
#include <aws/iotanalytics/model/ReprocessingSummary.h>
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
namespace IoTAnalytics
{
namespace Model
{

  /**
   * <p>Contains information about a pipeline.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/Pipeline">AWS
   * API Reference</a></p>
   */
  class Pipeline
  {
  public:
    AWS_IOTANALYTICS_API Pipeline();
    AWS_IOTANALYTICS_API Pipeline(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTANALYTICS_API Pipeline& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTANALYTICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the pipeline.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline Pipeline& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline Pipeline& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline Pipeline& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the pipeline.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline Pipeline& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline Pipeline& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline Pipeline& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The activities that perform transformations on the messages.</p>
     */
    inline const Aws::Vector<PipelineActivity>& GetActivities() const{ return m_activities; }
    inline bool ActivitiesHasBeenSet() const { return m_activitiesHasBeenSet; }
    inline void SetActivities(const Aws::Vector<PipelineActivity>& value) { m_activitiesHasBeenSet = true; m_activities = value; }
    inline void SetActivities(Aws::Vector<PipelineActivity>&& value) { m_activitiesHasBeenSet = true; m_activities = std::move(value); }
    inline Pipeline& WithActivities(const Aws::Vector<PipelineActivity>& value) { SetActivities(value); return *this;}
    inline Pipeline& WithActivities(Aws::Vector<PipelineActivity>&& value) { SetActivities(std::move(value)); return *this;}
    inline Pipeline& AddActivities(const PipelineActivity& value) { m_activitiesHasBeenSet = true; m_activities.push_back(value); return *this; }
    inline Pipeline& AddActivities(PipelineActivity&& value) { m_activitiesHasBeenSet = true; m_activities.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A summary of information about the pipeline reprocessing.</p>
     */
    inline const Aws::Vector<ReprocessingSummary>& GetReprocessingSummaries() const{ return m_reprocessingSummaries; }
    inline bool ReprocessingSummariesHasBeenSet() const { return m_reprocessingSummariesHasBeenSet; }
    inline void SetReprocessingSummaries(const Aws::Vector<ReprocessingSummary>& value) { m_reprocessingSummariesHasBeenSet = true; m_reprocessingSummaries = value; }
    inline void SetReprocessingSummaries(Aws::Vector<ReprocessingSummary>&& value) { m_reprocessingSummariesHasBeenSet = true; m_reprocessingSummaries = std::move(value); }
    inline Pipeline& WithReprocessingSummaries(const Aws::Vector<ReprocessingSummary>& value) { SetReprocessingSummaries(value); return *this;}
    inline Pipeline& WithReprocessingSummaries(Aws::Vector<ReprocessingSummary>&& value) { SetReprocessingSummaries(std::move(value)); return *this;}
    inline Pipeline& AddReprocessingSummaries(const ReprocessingSummary& value) { m_reprocessingSummariesHasBeenSet = true; m_reprocessingSummaries.push_back(value); return *this; }
    inline Pipeline& AddReprocessingSummaries(ReprocessingSummary&& value) { m_reprocessingSummariesHasBeenSet = true; m_reprocessingSummaries.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>When the pipeline was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }
    inline Pipeline& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline Pipeline& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last time the pipeline was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdateTime() const{ return m_lastUpdateTime; }
    inline bool LastUpdateTimeHasBeenSet() const { return m_lastUpdateTimeHasBeenSet; }
    inline void SetLastUpdateTime(const Aws::Utils::DateTime& value) { m_lastUpdateTimeHasBeenSet = true; m_lastUpdateTime = value; }
    inline void SetLastUpdateTime(Aws::Utils::DateTime&& value) { m_lastUpdateTimeHasBeenSet = true; m_lastUpdateTime = std::move(value); }
    inline Pipeline& WithLastUpdateTime(const Aws::Utils::DateTime& value) { SetLastUpdateTime(value); return *this;}
    inline Pipeline& WithLastUpdateTime(Aws::Utils::DateTime&& value) { SetLastUpdateTime(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Vector<PipelineActivity> m_activities;
    bool m_activitiesHasBeenSet = false;

    Aws::Vector<ReprocessingSummary> m_reprocessingSummaries;
    bool m_reprocessingSummariesHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdateTime;
    bool m_lastUpdateTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws

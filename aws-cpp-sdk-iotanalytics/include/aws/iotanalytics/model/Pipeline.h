/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_IOTANALYTICS_API Pipeline
  {
  public:
    Pipeline();
    Pipeline(Aws::Utils::Json::JsonView jsonValue);
    Pipeline& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the pipeline.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the pipeline.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the pipeline.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the pipeline.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the pipeline.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the pipeline.</p>
     */
    inline Pipeline& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the pipeline.</p>
     */
    inline Pipeline& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the pipeline.</p>
     */
    inline Pipeline& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The ARN of the pipeline.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The ARN of the pipeline.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The ARN of the pipeline.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The ARN of the pipeline.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The ARN of the pipeline.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The ARN of the pipeline.</p>
     */
    inline Pipeline& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The ARN of the pipeline.</p>
     */
    inline Pipeline& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the pipeline.</p>
     */
    inline Pipeline& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The activities that perform transformations on the messages.</p>
     */
    inline const Aws::Vector<PipelineActivity>& GetActivities() const{ return m_activities; }

    /**
     * <p>The activities that perform transformations on the messages.</p>
     */
    inline bool ActivitiesHasBeenSet() const { return m_activitiesHasBeenSet; }

    /**
     * <p>The activities that perform transformations on the messages.</p>
     */
    inline void SetActivities(const Aws::Vector<PipelineActivity>& value) { m_activitiesHasBeenSet = true; m_activities = value; }

    /**
     * <p>The activities that perform transformations on the messages.</p>
     */
    inline void SetActivities(Aws::Vector<PipelineActivity>&& value) { m_activitiesHasBeenSet = true; m_activities = std::move(value); }

    /**
     * <p>The activities that perform transformations on the messages.</p>
     */
    inline Pipeline& WithActivities(const Aws::Vector<PipelineActivity>& value) { SetActivities(value); return *this;}

    /**
     * <p>The activities that perform transformations on the messages.</p>
     */
    inline Pipeline& WithActivities(Aws::Vector<PipelineActivity>&& value) { SetActivities(std::move(value)); return *this;}

    /**
     * <p>The activities that perform transformations on the messages.</p>
     */
    inline Pipeline& AddActivities(const PipelineActivity& value) { m_activitiesHasBeenSet = true; m_activities.push_back(value); return *this; }

    /**
     * <p>The activities that perform transformations on the messages.</p>
     */
    inline Pipeline& AddActivities(PipelineActivity&& value) { m_activitiesHasBeenSet = true; m_activities.push_back(std::move(value)); return *this; }


    /**
     * <p>A summary of information about the pipeline reprocessing.</p>
     */
    inline const Aws::Vector<ReprocessingSummary>& GetReprocessingSummaries() const{ return m_reprocessingSummaries; }

    /**
     * <p>A summary of information about the pipeline reprocessing.</p>
     */
    inline bool ReprocessingSummariesHasBeenSet() const { return m_reprocessingSummariesHasBeenSet; }

    /**
     * <p>A summary of information about the pipeline reprocessing.</p>
     */
    inline void SetReprocessingSummaries(const Aws::Vector<ReprocessingSummary>& value) { m_reprocessingSummariesHasBeenSet = true; m_reprocessingSummaries = value; }

    /**
     * <p>A summary of information about the pipeline reprocessing.</p>
     */
    inline void SetReprocessingSummaries(Aws::Vector<ReprocessingSummary>&& value) { m_reprocessingSummariesHasBeenSet = true; m_reprocessingSummaries = std::move(value); }

    /**
     * <p>A summary of information about the pipeline reprocessing.</p>
     */
    inline Pipeline& WithReprocessingSummaries(const Aws::Vector<ReprocessingSummary>& value) { SetReprocessingSummaries(value); return *this;}

    /**
     * <p>A summary of information about the pipeline reprocessing.</p>
     */
    inline Pipeline& WithReprocessingSummaries(Aws::Vector<ReprocessingSummary>&& value) { SetReprocessingSummaries(std::move(value)); return *this;}

    /**
     * <p>A summary of information about the pipeline reprocessing.</p>
     */
    inline Pipeline& AddReprocessingSummaries(const ReprocessingSummary& value) { m_reprocessingSummariesHasBeenSet = true; m_reprocessingSummaries.push_back(value); return *this; }

    /**
     * <p>A summary of information about the pipeline reprocessing.</p>
     */
    inline Pipeline& AddReprocessingSummaries(ReprocessingSummary&& value) { m_reprocessingSummariesHasBeenSet = true; m_reprocessingSummaries.push_back(std::move(value)); return *this; }


    /**
     * <p>When the pipeline was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>When the pipeline was created.</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>When the pipeline was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>When the pipeline was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>When the pipeline was created.</p>
     */
    inline Pipeline& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>When the pipeline was created.</p>
     */
    inline Pipeline& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The last time the pipeline was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdateTime() const{ return m_lastUpdateTime; }

    /**
     * <p>The last time the pipeline was updated.</p>
     */
    inline bool LastUpdateTimeHasBeenSet() const { return m_lastUpdateTimeHasBeenSet; }

    /**
     * <p>The last time the pipeline was updated.</p>
     */
    inline void SetLastUpdateTime(const Aws::Utils::DateTime& value) { m_lastUpdateTimeHasBeenSet = true; m_lastUpdateTime = value; }

    /**
     * <p>The last time the pipeline was updated.</p>
     */
    inline void SetLastUpdateTime(Aws::Utils::DateTime&& value) { m_lastUpdateTimeHasBeenSet = true; m_lastUpdateTime = std::move(value); }

    /**
     * <p>The last time the pipeline was updated.</p>
     */
    inline Pipeline& WithLastUpdateTime(const Aws::Utils::DateTime& value) { SetLastUpdateTime(value); return *this;}

    /**
     * <p>The last time the pipeline was updated.</p>
     */
    inline Pipeline& WithLastUpdateTime(Aws::Utils::DateTime&& value) { SetLastUpdateTime(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_arn;
    bool m_arnHasBeenSet;

    Aws::Vector<PipelineActivity> m_activities;
    bool m_activitiesHasBeenSet;

    Aws::Vector<ReprocessingSummary> m_reprocessingSummaries;
    bool m_reprocessingSummariesHasBeenSet;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet;

    Aws::Utils::DateTime m_lastUpdateTime;
    bool m_lastUpdateTimeHasBeenSet;
  };

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws

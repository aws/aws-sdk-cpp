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
    AWS_IOTANALYTICS_API Pipeline() = default;
    AWS_IOTANALYTICS_API Pipeline(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTANALYTICS_API Pipeline& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTANALYTICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the pipeline.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    Pipeline& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the pipeline.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    Pipeline& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The activities that perform transformations on the messages.</p>
     */
    inline const Aws::Vector<PipelineActivity>& GetActivities() const { return m_activities; }
    inline bool ActivitiesHasBeenSet() const { return m_activitiesHasBeenSet; }
    template<typename ActivitiesT = Aws::Vector<PipelineActivity>>
    void SetActivities(ActivitiesT&& value) { m_activitiesHasBeenSet = true; m_activities = std::forward<ActivitiesT>(value); }
    template<typename ActivitiesT = Aws::Vector<PipelineActivity>>
    Pipeline& WithActivities(ActivitiesT&& value) { SetActivities(std::forward<ActivitiesT>(value)); return *this;}
    template<typename ActivitiesT = PipelineActivity>
    Pipeline& AddActivities(ActivitiesT&& value) { m_activitiesHasBeenSet = true; m_activities.emplace_back(std::forward<ActivitiesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A summary of information about the pipeline reprocessing.</p>
     */
    inline const Aws::Vector<ReprocessingSummary>& GetReprocessingSummaries() const { return m_reprocessingSummaries; }
    inline bool ReprocessingSummariesHasBeenSet() const { return m_reprocessingSummariesHasBeenSet; }
    template<typename ReprocessingSummariesT = Aws::Vector<ReprocessingSummary>>
    void SetReprocessingSummaries(ReprocessingSummariesT&& value) { m_reprocessingSummariesHasBeenSet = true; m_reprocessingSummaries = std::forward<ReprocessingSummariesT>(value); }
    template<typename ReprocessingSummariesT = Aws::Vector<ReprocessingSummary>>
    Pipeline& WithReprocessingSummaries(ReprocessingSummariesT&& value) { SetReprocessingSummaries(std::forward<ReprocessingSummariesT>(value)); return *this;}
    template<typename ReprocessingSummariesT = ReprocessingSummary>
    Pipeline& AddReprocessingSummaries(ReprocessingSummariesT&& value) { m_reprocessingSummariesHasBeenSet = true; m_reprocessingSummaries.emplace_back(std::forward<ReprocessingSummariesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>When the pipeline was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    Pipeline& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last time the pipeline was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdateTime() const { return m_lastUpdateTime; }
    inline bool LastUpdateTimeHasBeenSet() const { return m_lastUpdateTimeHasBeenSet; }
    template<typename LastUpdateTimeT = Aws::Utils::DateTime>
    void SetLastUpdateTime(LastUpdateTimeT&& value) { m_lastUpdateTimeHasBeenSet = true; m_lastUpdateTime = std::forward<LastUpdateTimeT>(value); }
    template<typename LastUpdateTimeT = Aws::Utils::DateTime>
    Pipeline& WithLastUpdateTime(LastUpdateTimeT&& value) { SetLastUpdateTime(std::forward<LastUpdateTimeT>(value)); return *this;}
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

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdateTime{};
    bool m_lastUpdateTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws

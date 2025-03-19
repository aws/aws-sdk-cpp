/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/databrew/GlueDataBrew_EXPORTS.h>
#include <aws/databrew/GlueDataBrewRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace GlueDataBrew
{
namespace Model
{

  /**
   */
  class CreateScheduleRequest : public GlueDataBrewRequest
  {
  public:
    AWS_GLUEDATABREW_API CreateScheduleRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateSchedule"; }

    AWS_GLUEDATABREW_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name or names of one or more jobs to be run.</p>
     */
    inline const Aws::Vector<Aws::String>& GetJobNames() const { return m_jobNames; }
    inline bool JobNamesHasBeenSet() const { return m_jobNamesHasBeenSet; }
    template<typename JobNamesT = Aws::Vector<Aws::String>>
    void SetJobNames(JobNamesT&& value) { m_jobNamesHasBeenSet = true; m_jobNames = std::forward<JobNamesT>(value); }
    template<typename JobNamesT = Aws::Vector<Aws::String>>
    CreateScheduleRequest& WithJobNames(JobNamesT&& value) { SetJobNames(std::forward<JobNamesT>(value)); return *this;}
    template<typename JobNamesT = Aws::String>
    CreateScheduleRequest& AddJobNames(JobNamesT&& value) { m_jobNamesHasBeenSet = true; m_jobNames.emplace_back(std::forward<JobNamesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The date or dates and time or times when the jobs are to be run. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/databrew/latest/dg/jobs.cron.html">Cron
     * expressions</a> in the <i>Glue DataBrew Developer Guide</i>.</p>
     */
    inline const Aws::String& GetCronExpression() const { return m_cronExpression; }
    inline bool CronExpressionHasBeenSet() const { return m_cronExpressionHasBeenSet; }
    template<typename CronExpressionT = Aws::String>
    void SetCronExpression(CronExpressionT&& value) { m_cronExpressionHasBeenSet = true; m_cronExpression = std::forward<CronExpressionT>(value); }
    template<typename CronExpressionT = Aws::String>
    CreateScheduleRequest& WithCronExpression(CronExpressionT&& value) { SetCronExpression(std::forward<CronExpressionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Metadata tags to apply to this schedule.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CreateScheduleRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateScheduleRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>A unique name for the schedule. Valid characters are alphanumeric (A-Z, a-z,
     * 0-9), hyphen (-), period (.), and space.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateScheduleRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_jobNames;
    bool m_jobNamesHasBeenSet = false;

    Aws::String m_cronExpression;
    bool m_cronExpressionHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace GlueDataBrew
} // namespace Aws

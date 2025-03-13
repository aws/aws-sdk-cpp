/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/databrew/GlueDataBrew_EXPORTS.h>
#include <aws/databrew/GlueDataBrewRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace GlueDataBrew
{
namespace Model
{

  /**
   */
  class UpdateScheduleRequest : public GlueDataBrewRequest
  {
  public:
    AWS_GLUEDATABREW_API UpdateScheduleRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateSchedule"; }

    AWS_GLUEDATABREW_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name or names of one or more jobs to be run for this schedule.</p>
     */
    inline const Aws::Vector<Aws::String>& GetJobNames() const { return m_jobNames; }
    inline bool JobNamesHasBeenSet() const { return m_jobNamesHasBeenSet; }
    template<typename JobNamesT = Aws::Vector<Aws::String>>
    void SetJobNames(JobNamesT&& value) { m_jobNamesHasBeenSet = true; m_jobNames = std::forward<JobNamesT>(value); }
    template<typename JobNamesT = Aws::Vector<Aws::String>>
    UpdateScheduleRequest& WithJobNames(JobNamesT&& value) { SetJobNames(std::forward<JobNamesT>(value)); return *this;}
    template<typename JobNamesT = Aws::String>
    UpdateScheduleRequest& AddJobNames(JobNamesT&& value) { m_jobNamesHasBeenSet = true; m_jobNames.emplace_back(std::forward<JobNamesT>(value)); return *this; }
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
    UpdateScheduleRequest& WithCronExpression(CronExpressionT&& value) { SetCronExpression(std::forward<CronExpressionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the schedule to update.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    UpdateScheduleRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_jobNames;
    bool m_jobNamesHasBeenSet = false;

    Aws::String m_cronExpression;
    bool m_cronExpressionHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace GlueDataBrew
} // namespace Aws

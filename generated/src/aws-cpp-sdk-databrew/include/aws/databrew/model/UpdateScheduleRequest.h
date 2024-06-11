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
    AWS_GLUEDATABREW_API UpdateScheduleRequest();

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
    inline const Aws::Vector<Aws::String>& GetJobNames() const{ return m_jobNames; }
    inline bool JobNamesHasBeenSet() const { return m_jobNamesHasBeenSet; }
    inline void SetJobNames(const Aws::Vector<Aws::String>& value) { m_jobNamesHasBeenSet = true; m_jobNames = value; }
    inline void SetJobNames(Aws::Vector<Aws::String>&& value) { m_jobNamesHasBeenSet = true; m_jobNames = std::move(value); }
    inline UpdateScheduleRequest& WithJobNames(const Aws::Vector<Aws::String>& value) { SetJobNames(value); return *this;}
    inline UpdateScheduleRequest& WithJobNames(Aws::Vector<Aws::String>&& value) { SetJobNames(std::move(value)); return *this;}
    inline UpdateScheduleRequest& AddJobNames(const Aws::String& value) { m_jobNamesHasBeenSet = true; m_jobNames.push_back(value); return *this; }
    inline UpdateScheduleRequest& AddJobNames(Aws::String&& value) { m_jobNamesHasBeenSet = true; m_jobNames.push_back(std::move(value)); return *this; }
    inline UpdateScheduleRequest& AddJobNames(const char* value) { m_jobNamesHasBeenSet = true; m_jobNames.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The date or dates and time or times when the jobs are to be run. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/databrew/latest/dg/jobs.cron.html">Cron
     * expressions</a> in the <i>Glue DataBrew Developer Guide</i>.</p>
     */
    inline const Aws::String& GetCronExpression() const{ return m_cronExpression; }
    inline bool CronExpressionHasBeenSet() const { return m_cronExpressionHasBeenSet; }
    inline void SetCronExpression(const Aws::String& value) { m_cronExpressionHasBeenSet = true; m_cronExpression = value; }
    inline void SetCronExpression(Aws::String&& value) { m_cronExpressionHasBeenSet = true; m_cronExpression = std::move(value); }
    inline void SetCronExpression(const char* value) { m_cronExpressionHasBeenSet = true; m_cronExpression.assign(value); }
    inline UpdateScheduleRequest& WithCronExpression(const Aws::String& value) { SetCronExpression(value); return *this;}
    inline UpdateScheduleRequest& WithCronExpression(Aws::String&& value) { SetCronExpression(std::move(value)); return *this;}
    inline UpdateScheduleRequest& WithCronExpression(const char* value) { SetCronExpression(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the schedule to update.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline UpdateScheduleRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline UpdateScheduleRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline UpdateScheduleRequest& WithName(const char* value) { SetName(value); return *this;}
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

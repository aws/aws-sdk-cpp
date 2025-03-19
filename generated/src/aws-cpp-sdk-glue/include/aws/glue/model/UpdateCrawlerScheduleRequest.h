/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/GlueRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Glue
{
namespace Model
{

  /**
   */
  class UpdateCrawlerScheduleRequest : public GlueRequest
  {
  public:
    AWS_GLUE_API UpdateCrawlerScheduleRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateCrawlerSchedule"; }

    AWS_GLUE_API Aws::String SerializePayload() const override;

    AWS_GLUE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the crawler whose schedule to update.</p>
     */
    inline const Aws::String& GetCrawlerName() const { return m_crawlerName; }
    inline bool CrawlerNameHasBeenSet() const { return m_crawlerNameHasBeenSet; }
    template<typename CrawlerNameT = Aws::String>
    void SetCrawlerName(CrawlerNameT&& value) { m_crawlerNameHasBeenSet = true; m_crawlerName = std::forward<CrawlerNameT>(value); }
    template<typename CrawlerNameT = Aws::String>
    UpdateCrawlerScheduleRequest& WithCrawlerName(CrawlerNameT&& value) { SetCrawlerName(std::forward<CrawlerNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The updated <code>cron</code> expression used to specify the schedule (see <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/monitor-data-warehouse-schedule.html">Time-Based
     * Schedules for Jobs and Crawlers</a>. For example, to run something every day at
     * 12:15 UTC, you would specify: <code>cron(15 12 * * ? *)</code>.</p>
     */
    inline const Aws::String& GetSchedule() const { return m_schedule; }
    inline bool ScheduleHasBeenSet() const { return m_scheduleHasBeenSet; }
    template<typename ScheduleT = Aws::String>
    void SetSchedule(ScheduleT&& value) { m_scheduleHasBeenSet = true; m_schedule = std::forward<ScheduleT>(value); }
    template<typename ScheduleT = Aws::String>
    UpdateCrawlerScheduleRequest& WithSchedule(ScheduleT&& value) { SetSchedule(std::forward<ScheduleT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_crawlerName;
    bool m_crawlerNameHasBeenSet = false;

    Aws::String m_schedule;
    bool m_scheduleHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws

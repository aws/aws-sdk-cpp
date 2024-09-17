/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/LogicalOperator.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/JobRunState.h>
#include <aws/glue/model/CrawlState.h>
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
namespace Glue
{
namespace Model
{

  /**
   * <p>Defines a condition under which a trigger fires.</p><p><h3>See Also:</h3>  
   * <a href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/Condition">AWS
   * API Reference</a></p>
   */
  class Condition
  {
  public:
    AWS_GLUE_API Condition();
    AWS_GLUE_API Condition(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Condition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A logical operator.</p>
     */
    inline const LogicalOperator& GetLogicalOperator() const{ return m_logicalOperator; }
    inline bool LogicalOperatorHasBeenSet() const { return m_logicalOperatorHasBeenSet; }
    inline void SetLogicalOperator(const LogicalOperator& value) { m_logicalOperatorHasBeenSet = true; m_logicalOperator = value; }
    inline void SetLogicalOperator(LogicalOperator&& value) { m_logicalOperatorHasBeenSet = true; m_logicalOperator = std::move(value); }
    inline Condition& WithLogicalOperator(const LogicalOperator& value) { SetLogicalOperator(value); return *this;}
    inline Condition& WithLogicalOperator(LogicalOperator&& value) { SetLogicalOperator(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the job whose <code>JobRuns</code> this condition applies to, and
     * on which this trigger waits.</p>
     */
    inline const Aws::String& GetJobName() const{ return m_jobName; }
    inline bool JobNameHasBeenSet() const { return m_jobNameHasBeenSet; }
    inline void SetJobName(const Aws::String& value) { m_jobNameHasBeenSet = true; m_jobName = value; }
    inline void SetJobName(Aws::String&& value) { m_jobNameHasBeenSet = true; m_jobName = std::move(value); }
    inline void SetJobName(const char* value) { m_jobNameHasBeenSet = true; m_jobName.assign(value); }
    inline Condition& WithJobName(const Aws::String& value) { SetJobName(value); return *this;}
    inline Condition& WithJobName(Aws::String&& value) { SetJobName(std::move(value)); return *this;}
    inline Condition& WithJobName(const char* value) { SetJobName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The condition state. Currently, the only job states that a trigger can listen
     * for are <code>SUCCEEDED</code>, <code>STOPPED</code>, <code>FAILED</code>, and
     * <code>TIMEOUT</code>. The only crawler states that a trigger can listen for are
     * <code>SUCCEEDED</code>, <code>FAILED</code>, and <code>CANCELLED</code>.</p>
     */
    inline const JobRunState& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const JobRunState& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(JobRunState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline Condition& WithState(const JobRunState& value) { SetState(value); return *this;}
    inline Condition& WithState(JobRunState&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the crawler to which this condition applies.</p>
     */
    inline const Aws::String& GetCrawlerName() const{ return m_crawlerName; }
    inline bool CrawlerNameHasBeenSet() const { return m_crawlerNameHasBeenSet; }
    inline void SetCrawlerName(const Aws::String& value) { m_crawlerNameHasBeenSet = true; m_crawlerName = value; }
    inline void SetCrawlerName(Aws::String&& value) { m_crawlerNameHasBeenSet = true; m_crawlerName = std::move(value); }
    inline void SetCrawlerName(const char* value) { m_crawlerNameHasBeenSet = true; m_crawlerName.assign(value); }
    inline Condition& WithCrawlerName(const Aws::String& value) { SetCrawlerName(value); return *this;}
    inline Condition& WithCrawlerName(Aws::String&& value) { SetCrawlerName(std::move(value)); return *this;}
    inline Condition& WithCrawlerName(const char* value) { SetCrawlerName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the crawler to which this condition applies.</p>
     */
    inline const CrawlState& GetCrawlState() const{ return m_crawlState; }
    inline bool CrawlStateHasBeenSet() const { return m_crawlStateHasBeenSet; }
    inline void SetCrawlState(const CrawlState& value) { m_crawlStateHasBeenSet = true; m_crawlState = value; }
    inline void SetCrawlState(CrawlState&& value) { m_crawlStateHasBeenSet = true; m_crawlState = std::move(value); }
    inline Condition& WithCrawlState(const CrawlState& value) { SetCrawlState(value); return *this;}
    inline Condition& WithCrawlState(CrawlState&& value) { SetCrawlState(std::move(value)); return *this;}
    ///@}
  private:

    LogicalOperator m_logicalOperator;
    bool m_logicalOperatorHasBeenSet = false;

    Aws::String m_jobName;
    bool m_jobNameHasBeenSet = false;

    JobRunState m_state;
    bool m_stateHasBeenSet = false;

    Aws::String m_crawlerName;
    bool m_crawlerNameHasBeenSet = false;

    CrawlState m_crawlState;
    bool m_crawlStateHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws

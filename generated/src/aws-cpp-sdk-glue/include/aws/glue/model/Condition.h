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
    AWS_GLUE_API Condition() = default;
    AWS_GLUE_API Condition(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Condition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A logical operator.</p>
     */
    inline LogicalOperator GetLogicalOperator() const { return m_logicalOperator; }
    inline bool LogicalOperatorHasBeenSet() const { return m_logicalOperatorHasBeenSet; }
    inline void SetLogicalOperator(LogicalOperator value) { m_logicalOperatorHasBeenSet = true; m_logicalOperator = value; }
    inline Condition& WithLogicalOperator(LogicalOperator value) { SetLogicalOperator(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the job whose <code>JobRuns</code> this condition applies to, and
     * on which this trigger waits.</p>
     */
    inline const Aws::String& GetJobName() const { return m_jobName; }
    inline bool JobNameHasBeenSet() const { return m_jobNameHasBeenSet; }
    template<typename JobNameT = Aws::String>
    void SetJobName(JobNameT&& value) { m_jobNameHasBeenSet = true; m_jobName = std::forward<JobNameT>(value); }
    template<typename JobNameT = Aws::String>
    Condition& WithJobName(JobNameT&& value) { SetJobName(std::forward<JobNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The condition state. Currently, the only job states that a trigger can listen
     * for are <code>SUCCEEDED</code>, <code>STOPPED</code>, <code>FAILED</code>, and
     * <code>TIMEOUT</code>. The only crawler states that a trigger can listen for are
     * <code>SUCCEEDED</code>, <code>FAILED</code>, and <code>CANCELLED</code>.</p>
     */
    inline JobRunState GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(JobRunState value) { m_stateHasBeenSet = true; m_state = value; }
    inline Condition& WithState(JobRunState value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the crawler to which this condition applies.</p>
     */
    inline const Aws::String& GetCrawlerName() const { return m_crawlerName; }
    inline bool CrawlerNameHasBeenSet() const { return m_crawlerNameHasBeenSet; }
    template<typename CrawlerNameT = Aws::String>
    void SetCrawlerName(CrawlerNameT&& value) { m_crawlerNameHasBeenSet = true; m_crawlerName = std::forward<CrawlerNameT>(value); }
    template<typename CrawlerNameT = Aws::String>
    Condition& WithCrawlerName(CrawlerNameT&& value) { SetCrawlerName(std::forward<CrawlerNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the crawler to which this condition applies.</p>
     */
    inline CrawlState GetCrawlState() const { return m_crawlState; }
    inline bool CrawlStateHasBeenSet() const { return m_crawlStateHasBeenSet; }
    inline void SetCrawlState(CrawlState value) { m_crawlStateHasBeenSet = true; m_crawlState = value; }
    inline Condition& WithCrawlState(CrawlState value) { SetCrawlState(value); return *this;}
    ///@}
  private:

    LogicalOperator m_logicalOperator{LogicalOperator::NOT_SET};
    bool m_logicalOperatorHasBeenSet = false;

    Aws::String m_jobName;
    bool m_jobNameHasBeenSet = false;

    JobRunState m_state{JobRunState::NOT_SET};
    bool m_stateHasBeenSet = false;

    Aws::String m_crawlerName;
    bool m_crawlerNameHasBeenSet = false;

    CrawlState m_crawlState{CrawlState::NOT_SET};
    bool m_crawlStateHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws

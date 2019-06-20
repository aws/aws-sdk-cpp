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

#include <aws/glue/model/Condition.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Glue
{
namespace Model
{

Condition::Condition() : 
    m_logicalOperator(LogicalOperator::NOT_SET),
    m_logicalOperatorHasBeenSet(false),
    m_jobNameHasBeenSet(false),
    m_state(JobRunState::NOT_SET),
    m_stateHasBeenSet(false),
    m_crawlerNameHasBeenSet(false),
    m_crawlState(CrawlState::NOT_SET),
    m_crawlStateHasBeenSet(false)
{
}

Condition::Condition(JsonView jsonValue) : 
    m_logicalOperator(LogicalOperator::NOT_SET),
    m_logicalOperatorHasBeenSet(false),
    m_jobNameHasBeenSet(false),
    m_state(JobRunState::NOT_SET),
    m_stateHasBeenSet(false),
    m_crawlerNameHasBeenSet(false),
    m_crawlState(CrawlState::NOT_SET),
    m_crawlStateHasBeenSet(false)
{
  *this = jsonValue;
}

Condition& Condition::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("LogicalOperator"))
  {
    m_logicalOperator = LogicalOperatorMapper::GetLogicalOperatorForName(jsonValue.GetString("LogicalOperator"));

    m_logicalOperatorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("JobName"))
  {
    m_jobName = jsonValue.GetString("JobName");

    m_jobNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("State"))
  {
    m_state = JobRunStateMapper::GetJobRunStateForName(jsonValue.GetString("State"));

    m_stateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CrawlerName"))
  {
    m_crawlerName = jsonValue.GetString("CrawlerName");

    m_crawlerNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CrawlState"))
  {
    m_crawlState = CrawlStateMapper::GetCrawlStateForName(jsonValue.GetString("CrawlState"));

    m_crawlStateHasBeenSet = true;
  }

  return *this;
}

JsonValue Condition::Jsonize() const
{
  JsonValue payload;

  if(m_logicalOperatorHasBeenSet)
  {
   payload.WithString("LogicalOperator", LogicalOperatorMapper::GetNameForLogicalOperator(m_logicalOperator));
  }

  if(m_jobNameHasBeenSet)
  {
   payload.WithString("JobName", m_jobName);

  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("State", JobRunStateMapper::GetNameForJobRunState(m_state));
  }

  if(m_crawlerNameHasBeenSet)
  {
   payload.WithString("CrawlerName", m_crawlerName);

  }

  if(m_crawlStateHasBeenSet)
  {
   payload.WithString("CrawlState", CrawlStateMapper::GetNameForCrawlState(m_crawlState));
  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws

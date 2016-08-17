/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/codepipeline/model/ExecutionDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodePipeline
{
namespace Model
{

ExecutionDetails::ExecutionDetails() : 
    m_summaryHasBeenSet(false),
    m_externalExecutionIdHasBeenSet(false),
    m_percentComplete(0),
    m_percentCompleteHasBeenSet(false)
{
}

ExecutionDetails::ExecutionDetails(const JsonValue& jsonValue) : 
    m_summaryHasBeenSet(false),
    m_externalExecutionIdHasBeenSet(false),
    m_percentComplete(0),
    m_percentCompleteHasBeenSet(false)
{
  *this = jsonValue;
}

ExecutionDetails& ExecutionDetails::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("summary"))
  {
    m_summary = jsonValue.GetString("summary");

    m_summaryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("externalExecutionId"))
  {
    m_externalExecutionId = jsonValue.GetString("externalExecutionId");

    m_externalExecutionIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("percentComplete"))
  {
    m_percentComplete = jsonValue.GetInteger("percentComplete");

    m_percentCompleteHasBeenSet = true;
  }

  return *this;
}

JsonValue ExecutionDetails::Jsonize() const
{
  JsonValue payload;

  if(m_summaryHasBeenSet)
  {
   payload.WithString("summary", m_summary);

  }

  if(m_externalExecutionIdHasBeenSet)
  {
   payload.WithString("externalExecutionId", m_externalExecutionId);

  }

  if(m_percentCompleteHasBeenSet)
  {
   payload.WithInteger("percentComplete", m_percentComplete);

  }

  return payload;
}

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
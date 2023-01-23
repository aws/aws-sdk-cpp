/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

ExecutionDetails::ExecutionDetails(JsonView jsonValue) : 
    m_summaryHasBeenSet(false),
    m_externalExecutionIdHasBeenSet(false),
    m_percentComplete(0),
    m_percentCompleteHasBeenSet(false)
{
  *this = jsonValue;
}

ExecutionDetails& ExecutionDetails::operator =(JsonView jsonValue)
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

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
#include <aws/codepipeline/model/ApprovalResult.h>
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

ApprovalResult::ApprovalResult() : 
    m_summaryHasBeenSet(false),
    m_status(ApprovalStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
}

ApprovalResult::ApprovalResult(const JsonValue& jsonValue) : 
    m_summaryHasBeenSet(false),
    m_status(ApprovalStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
  *this = jsonValue;
}

ApprovalResult& ApprovalResult::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("summary"))
  {
    m_summary = jsonValue.GetString("summary");

    m_summaryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = ApprovalStatusMapper::GetApprovalStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  return *this;
}

JsonValue ApprovalResult::Jsonize() const
{
  JsonValue payload;

  if(m_summaryHasBeenSet)
  {
   payload.WithString("summary", m_summary);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", ApprovalStatusMapper::GetNameForApprovalStatus(m_status));
  }

  return payload;
}

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
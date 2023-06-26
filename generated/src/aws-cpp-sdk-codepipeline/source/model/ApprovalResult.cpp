/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

ApprovalResult::ApprovalResult(JsonView jsonValue) : 
    m_summaryHasBeenSet(false),
    m_status(ApprovalStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
  *this = jsonValue;
}

ApprovalResult& ApprovalResult::operator =(JsonView jsonValue)
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

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codebuild/model/BuildBatchFilter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodeBuild
{
namespace Model
{

BuildBatchFilter::BuildBatchFilter() : 
    m_status(StatusType::NOT_SET),
    m_statusHasBeenSet(false)
{
}

BuildBatchFilter::BuildBatchFilter(JsonView jsonValue) : 
    m_status(StatusType::NOT_SET),
    m_statusHasBeenSet(false)
{
  *this = jsonValue;
}

BuildBatchFilter& BuildBatchFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("status"))
  {
    m_status = StatusTypeMapper::GetStatusTypeForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  return *this;
}

JsonValue BuildBatchFilter::Jsonize() const
{
  JsonValue payload;

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", StatusTypeMapper::GetNameForStatusType(m_status));
  }

  return payload;
}

} // namespace Model
} // namespace CodeBuild
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codebuild/model/ReportFilter.h>
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

ReportFilter::ReportFilter() : 
    m_status(ReportStatusType::NOT_SET),
    m_statusHasBeenSet(false)
{
}

ReportFilter::ReportFilter(JsonView jsonValue) : 
    m_status(ReportStatusType::NOT_SET),
    m_statusHasBeenSet(false)
{
  *this = jsonValue;
}

ReportFilter& ReportFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("status"))
  {
    m_status = ReportStatusTypeMapper::GetReportStatusTypeForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  return *this;
}

JsonValue ReportFilter::Jsonize() const
{
  JsonValue payload;

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", ReportStatusTypeMapper::GetNameForReportStatusType(m_status));
  }

  return payload;
}

} // namespace Model
} // namespace CodeBuild
} // namespace Aws

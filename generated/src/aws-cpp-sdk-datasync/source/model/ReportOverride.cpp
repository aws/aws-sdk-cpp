/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datasync/model/ReportOverride.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DataSync
{
namespace Model
{

ReportOverride::ReportOverride() : 
    m_reportLevel(ReportLevel::NOT_SET),
    m_reportLevelHasBeenSet(false)
{
}

ReportOverride::ReportOverride(JsonView jsonValue) : 
    m_reportLevel(ReportLevel::NOT_SET),
    m_reportLevelHasBeenSet(false)
{
  *this = jsonValue;
}

ReportOverride& ReportOverride::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ReportLevel"))
  {
    m_reportLevel = ReportLevelMapper::GetReportLevelForName(jsonValue.GetString("ReportLevel"));

    m_reportLevelHasBeenSet = true;
  }

  return *this;
}

JsonValue ReportOverride::Jsonize() const
{
  JsonValue payload;

  if(m_reportLevelHasBeenSet)
  {
   payload.WithString("ReportLevel", ReportLevelMapper::GetNameForReportLevel(m_reportLevel));
  }

  return payload;
}

} // namespace Model
} // namespace DataSync
} // namespace Aws

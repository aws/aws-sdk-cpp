/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datasync/model/TaskReportConfig.h>
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

TaskReportConfig::TaskReportConfig() : 
    m_destinationHasBeenSet(false),
    m_outputType(ReportOutputType::NOT_SET),
    m_outputTypeHasBeenSet(false),
    m_reportLevel(ReportLevel::NOT_SET),
    m_reportLevelHasBeenSet(false),
    m_objectVersionIds(ObjectVersionIds::NOT_SET),
    m_objectVersionIdsHasBeenSet(false),
    m_overridesHasBeenSet(false)
{
}

TaskReportConfig::TaskReportConfig(JsonView jsonValue) : 
    m_destinationHasBeenSet(false),
    m_outputType(ReportOutputType::NOT_SET),
    m_outputTypeHasBeenSet(false),
    m_reportLevel(ReportLevel::NOT_SET),
    m_reportLevelHasBeenSet(false),
    m_objectVersionIds(ObjectVersionIds::NOT_SET),
    m_objectVersionIdsHasBeenSet(false),
    m_overridesHasBeenSet(false)
{
  *this = jsonValue;
}

TaskReportConfig& TaskReportConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Destination"))
  {
    m_destination = jsonValue.GetObject("Destination");

    m_destinationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OutputType"))
  {
    m_outputType = ReportOutputTypeMapper::GetReportOutputTypeForName(jsonValue.GetString("OutputType"));

    m_outputTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReportLevel"))
  {
    m_reportLevel = ReportLevelMapper::GetReportLevelForName(jsonValue.GetString("ReportLevel"));

    m_reportLevelHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ObjectVersionIds"))
  {
    m_objectVersionIds = ObjectVersionIdsMapper::GetObjectVersionIdsForName(jsonValue.GetString("ObjectVersionIds"));

    m_objectVersionIdsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Overrides"))
  {
    m_overrides = jsonValue.GetObject("Overrides");

    m_overridesHasBeenSet = true;
  }

  return *this;
}

JsonValue TaskReportConfig::Jsonize() const
{
  JsonValue payload;

  if(m_destinationHasBeenSet)
  {
   payload.WithObject("Destination", m_destination.Jsonize());

  }

  if(m_outputTypeHasBeenSet)
  {
   payload.WithString("OutputType", ReportOutputTypeMapper::GetNameForReportOutputType(m_outputType));
  }

  if(m_reportLevelHasBeenSet)
  {
   payload.WithString("ReportLevel", ReportLevelMapper::GetNameForReportLevel(m_reportLevel));
  }

  if(m_objectVersionIdsHasBeenSet)
  {
   payload.WithString("ObjectVersionIds", ObjectVersionIdsMapper::GetNameForObjectVersionIds(m_objectVersionIds));
  }

  if(m_overridesHasBeenSet)
  {
   payload.WithObject("Overrides", m_overrides.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace DataSync
} // namespace Aws

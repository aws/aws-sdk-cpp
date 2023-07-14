/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ce/model/AnomalyMonitor.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CostExplorer
{
namespace Model
{

AnomalyMonitor::AnomalyMonitor() : 
    m_monitorArnHasBeenSet(false),
    m_monitorNameHasBeenSet(false),
    m_creationDateHasBeenSet(false),
    m_lastUpdatedDateHasBeenSet(false),
    m_lastEvaluatedDateHasBeenSet(false),
    m_monitorType(MonitorType::NOT_SET),
    m_monitorTypeHasBeenSet(false),
    m_monitorDimension(MonitorDimension::NOT_SET),
    m_monitorDimensionHasBeenSet(false),
    m_monitorSpecificationHasBeenSet(false),
    m_dimensionalValueCount(0),
    m_dimensionalValueCountHasBeenSet(false)
{
}

AnomalyMonitor::AnomalyMonitor(JsonView jsonValue) : 
    m_monitorArnHasBeenSet(false),
    m_monitorNameHasBeenSet(false),
    m_creationDateHasBeenSet(false),
    m_lastUpdatedDateHasBeenSet(false),
    m_lastEvaluatedDateHasBeenSet(false),
    m_monitorType(MonitorType::NOT_SET),
    m_monitorTypeHasBeenSet(false),
    m_monitorDimension(MonitorDimension::NOT_SET),
    m_monitorDimensionHasBeenSet(false),
    m_monitorSpecificationHasBeenSet(false),
    m_dimensionalValueCount(0),
    m_dimensionalValueCountHasBeenSet(false)
{
  *this = jsonValue;
}

AnomalyMonitor& AnomalyMonitor::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MonitorArn"))
  {
    m_monitorArn = jsonValue.GetString("MonitorArn");

    m_monitorArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MonitorName"))
  {
    m_monitorName = jsonValue.GetString("MonitorName");

    m_monitorNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationDate"))
  {
    m_creationDate = jsonValue.GetString("CreationDate");

    m_creationDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastUpdatedDate"))
  {
    m_lastUpdatedDate = jsonValue.GetString("LastUpdatedDate");

    m_lastUpdatedDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastEvaluatedDate"))
  {
    m_lastEvaluatedDate = jsonValue.GetString("LastEvaluatedDate");

    m_lastEvaluatedDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MonitorType"))
  {
    m_monitorType = MonitorTypeMapper::GetMonitorTypeForName(jsonValue.GetString("MonitorType"));

    m_monitorTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MonitorDimension"))
  {
    m_monitorDimension = MonitorDimensionMapper::GetMonitorDimensionForName(jsonValue.GetString("MonitorDimension"));

    m_monitorDimensionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MonitorSpecification"))
  {
    m_monitorSpecification = jsonValue.GetObject("MonitorSpecification");

    m_monitorSpecificationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DimensionalValueCount"))
  {
    m_dimensionalValueCount = jsonValue.GetInteger("DimensionalValueCount");

    m_dimensionalValueCountHasBeenSet = true;
  }

  return *this;
}

JsonValue AnomalyMonitor::Jsonize() const
{
  JsonValue payload;

  if(m_monitorArnHasBeenSet)
  {
   payload.WithString("MonitorArn", m_monitorArn);

  }

  if(m_monitorNameHasBeenSet)
  {
   payload.WithString("MonitorName", m_monitorName);

  }

  if(m_creationDateHasBeenSet)
  {
   payload.WithString("CreationDate", m_creationDate);

  }

  if(m_lastUpdatedDateHasBeenSet)
  {
   payload.WithString("LastUpdatedDate", m_lastUpdatedDate);

  }

  if(m_lastEvaluatedDateHasBeenSet)
  {
   payload.WithString("LastEvaluatedDate", m_lastEvaluatedDate);

  }

  if(m_monitorTypeHasBeenSet)
  {
   payload.WithString("MonitorType", MonitorTypeMapper::GetNameForMonitorType(m_monitorType));
  }

  if(m_monitorDimensionHasBeenSet)
  {
   payload.WithString("MonitorDimension", MonitorDimensionMapper::GetNameForMonitorDimension(m_monitorDimension));
  }

  if(m_monitorSpecificationHasBeenSet)
  {
   payload.WithObject("MonitorSpecification", m_monitorSpecification.Jsonize());

  }

  if(m_dimensionalValueCountHasBeenSet)
  {
   payload.WithInteger("DimensionalValueCount", m_dimensionalValueCount);

  }

  return payload;
}

} // namespace Model
} // namespace CostExplorer
} // namespace Aws

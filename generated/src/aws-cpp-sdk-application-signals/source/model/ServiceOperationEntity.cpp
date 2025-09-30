/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/application-signals/model/ServiceOperationEntity.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ApplicationSignals
{
namespace Model
{

ServiceOperationEntity::ServiceOperationEntity(JsonView jsonValue)
{
  *this = jsonValue;
}

ServiceOperationEntity& ServiceOperationEntity::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Service"))
  {
    m_service = jsonValue.GetObject("Service");
    m_serviceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Operation"))
  {
    m_operation = jsonValue.GetString("Operation");
    m_operationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MetricType"))
  {
    m_metricType = jsonValue.GetString("MetricType");
    m_metricTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue ServiceOperationEntity::Jsonize() const
{
  JsonValue payload;

  if(m_serviceHasBeenSet)
  {
   payload.WithObject("Service", m_service.Jsonize());

  }

  if(m_operationHasBeenSet)
  {
   payload.WithString("Operation", m_operation);

  }

  if(m_metricTypeHasBeenSet)
  {
   payload.WithString("MetricType", m_metricType);

  }

  return payload;
}

} // namespace Model
} // namespace ApplicationSignals
} // namespace Aws

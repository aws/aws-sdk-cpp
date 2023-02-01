/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/devops-guru/model/ServiceHealth.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DevOpsGuru
{
namespace Model
{

ServiceHealth::ServiceHealth() : 
    m_serviceName(ServiceName::NOT_SET),
    m_serviceNameHasBeenSet(false),
    m_insightHasBeenSet(false),
    m_analyzedResourceCount(0),
    m_analyzedResourceCountHasBeenSet(false)
{
}

ServiceHealth::ServiceHealth(JsonView jsonValue) : 
    m_serviceName(ServiceName::NOT_SET),
    m_serviceNameHasBeenSet(false),
    m_insightHasBeenSet(false),
    m_analyzedResourceCount(0),
    m_analyzedResourceCountHasBeenSet(false)
{
  *this = jsonValue;
}

ServiceHealth& ServiceHealth::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ServiceName"))
  {
    m_serviceName = ServiceNameMapper::GetServiceNameForName(jsonValue.GetString("ServiceName"));

    m_serviceNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Insight"))
  {
    m_insight = jsonValue.GetObject("Insight");

    m_insightHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AnalyzedResourceCount"))
  {
    m_analyzedResourceCount = jsonValue.GetInt64("AnalyzedResourceCount");

    m_analyzedResourceCountHasBeenSet = true;
  }

  return *this;
}

JsonValue ServiceHealth::Jsonize() const
{
  JsonValue payload;

  if(m_serviceNameHasBeenSet)
  {
   payload.WithString("ServiceName", ServiceNameMapper::GetNameForServiceName(m_serviceName));
  }

  if(m_insightHasBeenSet)
  {
   payload.WithObject("Insight", m_insight.Jsonize());

  }

  if(m_analyzedResourceCountHasBeenSet)
  {
   payload.WithInt64("AnalyzedResourceCount", m_analyzedResourceCount);

  }

  return payload;
}

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-incidents/model/PagerDutyIncidentConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSMIncidents
{
namespace Model
{

PagerDutyIncidentConfiguration::PagerDutyIncidentConfiguration() : 
    m_serviceIdHasBeenSet(false)
{
}

PagerDutyIncidentConfiguration::PagerDutyIncidentConfiguration(JsonView jsonValue) : 
    m_serviceIdHasBeenSet(false)
{
  *this = jsonValue;
}

PagerDutyIncidentConfiguration& PagerDutyIncidentConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("serviceId"))
  {
    m_serviceId = jsonValue.GetString("serviceId");

    m_serviceIdHasBeenSet = true;
  }

  return *this;
}

JsonValue PagerDutyIncidentConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_serviceIdHasBeenSet)
  {
   payload.WithString("serviceId", m_serviceId);

  }

  return payload;
}

} // namespace Model
} // namespace SSMIncidents
} // namespace Aws

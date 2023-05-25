/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apprunner/model/ServiceSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppRunner
{
namespace Model
{

ServiceSummary::ServiceSummary() : 
    m_serviceNameHasBeenSet(false),
    m_serviceIdHasBeenSet(false),
    m_serviceArnHasBeenSet(false),
    m_serviceUrlHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_updatedAtHasBeenSet(false),
    m_status(ServiceStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
}

ServiceSummary::ServiceSummary(JsonView jsonValue) : 
    m_serviceNameHasBeenSet(false),
    m_serviceIdHasBeenSet(false),
    m_serviceArnHasBeenSet(false),
    m_serviceUrlHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_updatedAtHasBeenSet(false),
    m_status(ServiceStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
  *this = jsonValue;
}

ServiceSummary& ServiceSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ServiceName"))
  {
    m_serviceName = jsonValue.GetString("ServiceName");

    m_serviceNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ServiceId"))
  {
    m_serviceId = jsonValue.GetString("ServiceId");

    m_serviceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ServiceArn"))
  {
    m_serviceArn = jsonValue.GetString("ServiceArn");

    m_serviceArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ServiceUrl"))
  {
    m_serviceUrl = jsonValue.GetString("ServiceUrl");

    m_serviceUrlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedAt"))
  {
    m_createdAt = jsonValue.GetDouble("CreatedAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UpdatedAt"))
  {
    m_updatedAt = jsonValue.GetDouble("UpdatedAt");

    m_updatedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = ServiceStatusMapper::GetServiceStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  return *this;
}

JsonValue ServiceSummary::Jsonize() const
{
  JsonValue payload;

  if(m_serviceNameHasBeenSet)
  {
   payload.WithString("ServiceName", m_serviceName);

  }

  if(m_serviceIdHasBeenSet)
  {
   payload.WithString("ServiceId", m_serviceId);

  }

  if(m_serviceArnHasBeenSet)
  {
   payload.WithString("ServiceArn", m_serviceArn);

  }

  if(m_serviceUrlHasBeenSet)
  {
   payload.WithString("ServiceUrl", m_serviceUrl);

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("CreatedAt", m_createdAt.SecondsWithMSPrecision());
  }

  if(m_updatedAtHasBeenSet)
  {
   payload.WithDouble("UpdatedAt", m_updatedAt.SecondsWithMSPrecision());
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", ServiceStatusMapper::GetNameForServiceStatus(m_status));
  }

  return payload;
}

} // namespace Model
} // namespace AppRunner
} // namespace Aws

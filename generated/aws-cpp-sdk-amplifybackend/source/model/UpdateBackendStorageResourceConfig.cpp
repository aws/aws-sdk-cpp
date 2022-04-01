/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amplifybackend/model/UpdateBackendStorageResourceConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AmplifyBackend
{
namespace Model
{

UpdateBackendStorageResourceConfig::UpdateBackendStorageResourceConfig() : 
    m_permissionsHasBeenSet(false),
    m_serviceName(ServiceName::NOT_SET),
    m_serviceNameHasBeenSet(false)
{
}

UpdateBackendStorageResourceConfig::UpdateBackendStorageResourceConfig(JsonView jsonValue) : 
    m_permissionsHasBeenSet(false),
    m_serviceName(ServiceName::NOT_SET),
    m_serviceNameHasBeenSet(false)
{
  *this = jsonValue;
}

UpdateBackendStorageResourceConfig& UpdateBackendStorageResourceConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("permissions"))
  {
    m_permissions = jsonValue.GetObject("permissions");

    m_permissionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("serviceName"))
  {
    m_serviceName = ServiceNameMapper::GetServiceNameForName(jsonValue.GetString("serviceName"));

    m_serviceNameHasBeenSet = true;
  }

  return *this;
}

JsonValue UpdateBackendStorageResourceConfig::Jsonize() const
{
  JsonValue payload;

  if(m_permissionsHasBeenSet)
  {
   payload.WithObject("permissions", m_permissions.Jsonize());

  }

  if(m_serviceNameHasBeenSet)
  {
   payload.WithString("serviceName", ServiceNameMapper::GetNameForServiceName(m_serviceName));
  }

  return payload;
}

} // namespace Model
} // namespace AmplifyBackend
} // namespace Aws

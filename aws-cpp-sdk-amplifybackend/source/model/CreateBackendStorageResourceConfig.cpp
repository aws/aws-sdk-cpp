/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amplifybackend/model/CreateBackendStorageResourceConfig.h>
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

CreateBackendStorageResourceConfig::CreateBackendStorageResourceConfig() : 
    m_bucketNameHasBeenSet(false),
    m_permissionsHasBeenSet(false),
    m_serviceName(ServiceName::NOT_SET),
    m_serviceNameHasBeenSet(false)
{
}

CreateBackendStorageResourceConfig::CreateBackendStorageResourceConfig(JsonView jsonValue) : 
    m_bucketNameHasBeenSet(false),
    m_permissionsHasBeenSet(false),
    m_serviceName(ServiceName::NOT_SET),
    m_serviceNameHasBeenSet(false)
{
  *this = jsonValue;
}

CreateBackendStorageResourceConfig& CreateBackendStorageResourceConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("bucketName"))
  {
    m_bucketName = jsonValue.GetString("bucketName");

    m_bucketNameHasBeenSet = true;
  }

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

JsonValue CreateBackendStorageResourceConfig::Jsonize() const
{
  JsonValue payload;

  if(m_bucketNameHasBeenSet)
  {
   payload.WithString("bucketName", m_bucketName);

  }

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

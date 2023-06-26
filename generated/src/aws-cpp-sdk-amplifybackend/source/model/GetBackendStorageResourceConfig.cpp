/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amplifybackend/model/GetBackendStorageResourceConfig.h>
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

GetBackendStorageResourceConfig::GetBackendStorageResourceConfig() : 
    m_bucketNameHasBeenSet(false),
    m_imported(false),
    m_importedHasBeenSet(false),
    m_permissionsHasBeenSet(false),
    m_serviceName(ServiceName::NOT_SET),
    m_serviceNameHasBeenSet(false)
{
}

GetBackendStorageResourceConfig::GetBackendStorageResourceConfig(JsonView jsonValue) : 
    m_bucketNameHasBeenSet(false),
    m_imported(false),
    m_importedHasBeenSet(false),
    m_permissionsHasBeenSet(false),
    m_serviceName(ServiceName::NOT_SET),
    m_serviceNameHasBeenSet(false)
{
  *this = jsonValue;
}

GetBackendStorageResourceConfig& GetBackendStorageResourceConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("bucketName"))
  {
    m_bucketName = jsonValue.GetString("bucketName");

    m_bucketNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("imported"))
  {
    m_imported = jsonValue.GetBool("imported");

    m_importedHasBeenSet = true;
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

JsonValue GetBackendStorageResourceConfig::Jsonize() const
{
  JsonValue payload;

  if(m_bucketNameHasBeenSet)
  {
   payload.WithString("bucketName", m_bucketName);

  }

  if(m_importedHasBeenSet)
  {
   payload.WithBool("imported", m_imported);

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

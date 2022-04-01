/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotanalytics/model/ServiceManagedDatastoreS3Storage.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTAnalytics
{
namespace Model
{

ServiceManagedDatastoreS3Storage::ServiceManagedDatastoreS3Storage()
{
}

ServiceManagedDatastoreS3Storage::ServiceManagedDatastoreS3Storage(JsonView jsonValue)
{
  *this = jsonValue;
}

ServiceManagedDatastoreS3Storage& ServiceManagedDatastoreS3Storage::operator =(JsonView jsonValue)
{
  AWS_UNREFERENCED_PARAM(jsonValue);
  return *this;
}

JsonValue ServiceManagedDatastoreS3Storage::Jsonize() const
{
  JsonValue payload;

  return payload;
}

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws

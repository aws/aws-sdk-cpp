/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotanalytics/model/ServiceManagedChannelS3Storage.h>
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

ServiceManagedChannelS3Storage::ServiceManagedChannelS3Storage()
{
}

ServiceManagedChannelS3Storage::ServiceManagedChannelS3Storage(JsonView jsonValue)
{
  *this = jsonValue;
}

ServiceManagedChannelS3Storage& ServiceManagedChannelS3Storage::operator =(JsonView jsonValue)
{
  AWS_UNREFERENCED_PARAM(jsonValue);
  return *this;
}

JsonValue ServiceManagedChannelS3Storage::Jsonize() const
{
  JsonValue payload;

  return payload;
}

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws

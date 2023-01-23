/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotanalytics/model/ServiceManagedChannelS3StorageSummary.h>
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

ServiceManagedChannelS3StorageSummary::ServiceManagedChannelS3StorageSummary()
{
}

ServiceManagedChannelS3StorageSummary::ServiceManagedChannelS3StorageSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

ServiceManagedChannelS3StorageSummary& ServiceManagedChannelS3StorageSummary::operator =(JsonView jsonValue)
{
  AWS_UNREFERENCED_PARAM(jsonValue);
  return *this;
}

JsonValue ServiceManagedChannelS3StorageSummary::Jsonize() const
{
  JsonValue payload;

  return payload;
}

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws

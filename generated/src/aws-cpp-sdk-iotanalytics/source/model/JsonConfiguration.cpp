/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotanalytics/model/JsonConfiguration.h>
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

JsonConfiguration::JsonConfiguration()
{
}

JsonConfiguration::JsonConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

JsonConfiguration& JsonConfiguration::operator =(JsonView jsonValue)
{
  AWS_UNREFERENCED_PARAM(jsonValue);
  return *this;
}

JsonValue JsonConfiguration::Jsonize() const
{
  JsonValue payload;

  return payload;
}

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws

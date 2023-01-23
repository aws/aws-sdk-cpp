/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot1click-devices/model/Attributes.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoT1ClickDevicesService
{
namespace Model
{

Attributes::Attributes()
{
}

Attributes::Attributes(JsonView jsonValue)
{
  *this = jsonValue;
}

Attributes& Attributes::operator =(JsonView jsonValue)
{
  AWS_UNREFERENCED_PARAM(jsonValue);
  return *this;
}

JsonValue Attributes::Jsonize() const
{
  JsonValue payload;

  return payload;
}

} // namespace Model
} // namespace IoT1ClickDevicesService
} // namespace Aws

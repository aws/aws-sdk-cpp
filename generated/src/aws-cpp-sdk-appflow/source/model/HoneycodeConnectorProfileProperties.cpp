/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appflow/model/HoneycodeConnectorProfileProperties.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Appflow
{
namespace Model
{

HoneycodeConnectorProfileProperties::HoneycodeConnectorProfileProperties()
{
}

HoneycodeConnectorProfileProperties::HoneycodeConnectorProfileProperties(JsonView jsonValue)
{
  *this = jsonValue;
}

HoneycodeConnectorProfileProperties& HoneycodeConnectorProfileProperties::operator =(JsonView jsonValue)
{
  AWS_UNREFERENCED_PARAM(jsonValue);
  return *this;
}

JsonValue HoneycodeConnectorProfileProperties::Jsonize() const
{
  JsonValue payload;

  return payload;
}

} // namespace Model
} // namespace Appflow
} // namespace Aws

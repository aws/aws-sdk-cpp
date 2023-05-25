/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appflow/model/SingularConnectorProfileProperties.h>
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

SingularConnectorProfileProperties::SingularConnectorProfileProperties()
{
}

SingularConnectorProfileProperties::SingularConnectorProfileProperties(JsonView jsonValue)
{
  *this = jsonValue;
}

SingularConnectorProfileProperties& SingularConnectorProfileProperties::operator =(JsonView jsonValue)
{
  AWS_UNREFERENCED_PARAM(jsonValue);
  return *this;
}

JsonValue SingularConnectorProfileProperties::Jsonize() const
{
  JsonValue payload;

  return payload;
}

} // namespace Model
} // namespace Appflow
} // namespace Aws

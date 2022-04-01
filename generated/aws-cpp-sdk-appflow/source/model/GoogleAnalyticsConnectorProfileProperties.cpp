/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appflow/model/GoogleAnalyticsConnectorProfileProperties.h>
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

GoogleAnalyticsConnectorProfileProperties::GoogleAnalyticsConnectorProfileProperties()
{
}

GoogleAnalyticsConnectorProfileProperties::GoogleAnalyticsConnectorProfileProperties(JsonView jsonValue)
{
  *this = jsonValue;
}

GoogleAnalyticsConnectorProfileProperties& GoogleAnalyticsConnectorProfileProperties::operator =(JsonView jsonValue)
{
  AWS_UNREFERENCED_PARAM(jsonValue);
  return *this;
}

JsonValue GoogleAnalyticsConnectorProfileProperties::Jsonize() const
{
  JsonValue payload;

  return payload;
}

} // namespace Model
} // namespace Appflow
} // namespace Aws

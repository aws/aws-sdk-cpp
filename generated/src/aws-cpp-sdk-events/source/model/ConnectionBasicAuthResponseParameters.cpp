/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/events/model/ConnectionBasicAuthResponseParameters.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudWatchEvents
{
namespace Model
{

ConnectionBasicAuthResponseParameters::ConnectionBasicAuthResponseParameters() : 
    m_usernameHasBeenSet(false)
{
}

ConnectionBasicAuthResponseParameters::ConnectionBasicAuthResponseParameters(JsonView jsonValue) : 
    m_usernameHasBeenSet(false)
{
  *this = jsonValue;
}

ConnectionBasicAuthResponseParameters& ConnectionBasicAuthResponseParameters::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Username"))
  {
    m_username = jsonValue.GetString("Username");

    m_usernameHasBeenSet = true;
  }

  return *this;
}

JsonValue ConnectionBasicAuthResponseParameters::Jsonize() const
{
  JsonValue payload;

  if(m_usernameHasBeenSet)
  {
   payload.WithString("Username", m_username);

  }

  return payload;
}

} // namespace Model
} // namespace CloudWatchEvents
} // namespace Aws

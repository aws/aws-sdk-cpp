/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/discovery/model/FailedConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ApplicationDiscoveryService
{
namespace Model
{

FailedConfiguration::FailedConfiguration() : 
    m_configurationIdHasBeenSet(false),
    m_errorStatusCode(0),
    m_errorStatusCodeHasBeenSet(false),
    m_errorMessageHasBeenSet(false)
{
}

FailedConfiguration::FailedConfiguration(JsonView jsonValue) : 
    m_configurationIdHasBeenSet(false),
    m_errorStatusCode(0),
    m_errorStatusCodeHasBeenSet(false),
    m_errorMessageHasBeenSet(false)
{
  *this = jsonValue;
}

FailedConfiguration& FailedConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("configurationId"))
  {
    m_configurationId = jsonValue.GetString("configurationId");

    m_configurationIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("errorStatusCode"))
  {
    m_errorStatusCode = jsonValue.GetInteger("errorStatusCode");

    m_errorStatusCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("errorMessage"))
  {
    m_errorMessage = jsonValue.GetString("errorMessage");

    m_errorMessageHasBeenSet = true;
  }

  return *this;
}

JsonValue FailedConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_configurationIdHasBeenSet)
  {
   payload.WithString("configurationId", m_configurationId);

  }

  if(m_errorStatusCodeHasBeenSet)
  {
   payload.WithInteger("errorStatusCode", m_errorStatusCode);

  }

  if(m_errorMessageHasBeenSet)
  {
   payload.WithString("errorMessage", m_errorMessage);

  }

  return payload;
}

} // namespace Model
} // namespace ApplicationDiscoveryService
} // namespace Aws

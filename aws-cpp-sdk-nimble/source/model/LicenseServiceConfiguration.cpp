/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/nimble/model/LicenseServiceConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace NimbleStudio
{
namespace Model
{

LicenseServiceConfiguration::LicenseServiceConfiguration() : 
    m_endpointHasBeenSet(false)
{
}

LicenseServiceConfiguration::LicenseServiceConfiguration(JsonView jsonValue) : 
    m_endpointHasBeenSet(false)
{
  *this = jsonValue;
}

LicenseServiceConfiguration& LicenseServiceConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("endpoint"))
  {
    m_endpoint = jsonValue.GetString("endpoint");

    m_endpointHasBeenSet = true;
  }

  return *this;
}

JsonValue LicenseServiceConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_endpointHasBeenSet)
  {
   payload.WithString("endpoint", m_endpoint);

  }

  return payload;
}

} // namespace Model
} // namespace NimbleStudio
} // namespace Aws

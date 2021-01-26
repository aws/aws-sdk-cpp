/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/groundstation/model/EndpointDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GroundStation
{
namespace Model
{

EndpointDetails::EndpointDetails() : 
    m_endpointHasBeenSet(false),
    m_securityDetailsHasBeenSet(false)
{
}

EndpointDetails::EndpointDetails(JsonView jsonValue) : 
    m_endpointHasBeenSet(false),
    m_securityDetailsHasBeenSet(false)
{
  *this = jsonValue;
}

EndpointDetails& EndpointDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("endpoint"))
  {
    m_endpoint = jsonValue.GetObject("endpoint");

    m_endpointHasBeenSet = true;
  }

  if(jsonValue.ValueExists("securityDetails"))
  {
    m_securityDetails = jsonValue.GetObject("securityDetails");

    m_securityDetailsHasBeenSet = true;
  }

  return *this;
}

JsonValue EndpointDetails::Jsonize() const
{
  JsonValue payload;

  if(m_endpointHasBeenSet)
  {
   payload.WithObject("endpoint", m_endpoint.Jsonize());

  }

  if(m_securityDetailsHasBeenSet)
  {
   payload.WithObject("securityDetails", m_securityDetails.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace GroundStation
} // namespace Aws

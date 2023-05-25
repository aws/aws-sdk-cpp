/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/globalaccelerator/model/EndpointIdentifier.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GlobalAccelerator
{
namespace Model
{

EndpointIdentifier::EndpointIdentifier() : 
    m_endpointIdHasBeenSet(false),
    m_clientIPPreservationEnabled(false),
    m_clientIPPreservationEnabledHasBeenSet(false)
{
}

EndpointIdentifier::EndpointIdentifier(JsonView jsonValue) : 
    m_endpointIdHasBeenSet(false),
    m_clientIPPreservationEnabled(false),
    m_clientIPPreservationEnabledHasBeenSet(false)
{
  *this = jsonValue;
}

EndpointIdentifier& EndpointIdentifier::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EndpointId"))
  {
    m_endpointId = jsonValue.GetString("EndpointId");

    m_endpointIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ClientIPPreservationEnabled"))
  {
    m_clientIPPreservationEnabled = jsonValue.GetBool("ClientIPPreservationEnabled");

    m_clientIPPreservationEnabledHasBeenSet = true;
  }

  return *this;
}

JsonValue EndpointIdentifier::Jsonize() const
{
  JsonValue payload;

  if(m_endpointIdHasBeenSet)
  {
   payload.WithString("EndpointId", m_endpointId);

  }

  if(m_clientIPPreservationEnabledHasBeenSet)
  {
   payload.WithBool("ClientIPPreservationEnabled", m_clientIPPreservationEnabled);

  }

  return payload;
}

} // namespace Model
} // namespace GlobalAccelerator
} // namespace Aws

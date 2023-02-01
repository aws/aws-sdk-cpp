/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/ExperienceEndpoint.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace kendra
{
namespace Model
{

ExperienceEndpoint::ExperienceEndpoint() : 
    m_endpointType(EndpointType::NOT_SET),
    m_endpointTypeHasBeenSet(false),
    m_endpointHasBeenSet(false)
{
}

ExperienceEndpoint::ExperienceEndpoint(JsonView jsonValue) : 
    m_endpointType(EndpointType::NOT_SET),
    m_endpointTypeHasBeenSet(false),
    m_endpointHasBeenSet(false)
{
  *this = jsonValue;
}

ExperienceEndpoint& ExperienceEndpoint::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EndpointType"))
  {
    m_endpointType = EndpointTypeMapper::GetEndpointTypeForName(jsonValue.GetString("EndpointType"));

    m_endpointTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Endpoint"))
  {
    m_endpoint = jsonValue.GetString("Endpoint");

    m_endpointHasBeenSet = true;
  }

  return *this;
}

JsonValue ExperienceEndpoint::Jsonize() const
{
  JsonValue payload;

  if(m_endpointTypeHasBeenSet)
  {
   payload.WithString("EndpointType", EndpointTypeMapper::GetNameForEndpointType(m_endpointType));
  }

  if(m_endpointHasBeenSet)
  {
   payload.WithString("Endpoint", m_endpoint);

  }

  return payload;
}

} // namespace Model
} // namespace kendra
} // namespace Aws

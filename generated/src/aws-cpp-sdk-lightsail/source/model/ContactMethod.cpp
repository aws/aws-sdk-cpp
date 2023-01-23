/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/ContactMethod.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Lightsail
{
namespace Model
{

ContactMethod::ContactMethod() : 
    m_contactEndpointHasBeenSet(false),
    m_status(ContactMethodStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_protocol(ContactProtocol::NOT_SET),
    m_protocolHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_locationHasBeenSet(false),
    m_resourceType(ResourceType::NOT_SET),
    m_resourceTypeHasBeenSet(false),
    m_supportCodeHasBeenSet(false)
{
}

ContactMethod::ContactMethod(JsonView jsonValue) : 
    m_contactEndpointHasBeenSet(false),
    m_status(ContactMethodStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_protocol(ContactProtocol::NOT_SET),
    m_protocolHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_locationHasBeenSet(false),
    m_resourceType(ResourceType::NOT_SET),
    m_resourceTypeHasBeenSet(false),
    m_supportCodeHasBeenSet(false)
{
  *this = jsonValue;
}

ContactMethod& ContactMethod::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("contactEndpoint"))
  {
    m_contactEndpoint = jsonValue.GetString("contactEndpoint");

    m_contactEndpointHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = ContactMethodStatusMapper::GetContactMethodStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("protocol"))
  {
    m_protocol = ContactProtocolMapper::GetContactProtocolForName(jsonValue.GetString("protocol"));

    m_protocolHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetDouble("createdAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("location"))
  {
    m_location = jsonValue.GetObject("location");

    m_locationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("resourceType"))
  {
    m_resourceType = ResourceTypeMapper::GetResourceTypeForName(jsonValue.GetString("resourceType"));

    m_resourceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("supportCode"))
  {
    m_supportCode = jsonValue.GetString("supportCode");

    m_supportCodeHasBeenSet = true;
  }

  return *this;
}

JsonValue ContactMethod::Jsonize() const
{
  JsonValue payload;

  if(m_contactEndpointHasBeenSet)
  {
   payload.WithString("contactEndpoint", m_contactEndpoint);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", ContactMethodStatusMapper::GetNameForContactMethodStatus(m_status));
  }

  if(m_protocolHasBeenSet)
  {
   payload.WithString("protocol", ContactProtocolMapper::GetNameForContactProtocol(m_protocol));
  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  if(m_locationHasBeenSet)
  {
   payload.WithObject("location", m_location.Jsonize());

  }

  if(m_resourceTypeHasBeenSet)
  {
   payload.WithString("resourceType", ResourceTypeMapper::GetNameForResourceType(m_resourceType));
  }

  if(m_supportCodeHasBeenSet)
  {
   payload.WithString("supportCode", m_supportCode);

  }

  return payload;
}

} // namespace Model
} // namespace Lightsail
} // namespace Aws

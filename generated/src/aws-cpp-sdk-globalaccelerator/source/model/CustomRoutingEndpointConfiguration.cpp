/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/globalaccelerator/model/CustomRoutingEndpointConfiguration.h>
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

CustomRoutingEndpointConfiguration::CustomRoutingEndpointConfiguration() : 
    m_endpointIdHasBeenSet(false),
    m_attachmentArnHasBeenSet(false)
{
}

CustomRoutingEndpointConfiguration::CustomRoutingEndpointConfiguration(JsonView jsonValue) : 
    m_endpointIdHasBeenSet(false),
    m_attachmentArnHasBeenSet(false)
{
  *this = jsonValue;
}

CustomRoutingEndpointConfiguration& CustomRoutingEndpointConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EndpointId"))
  {
    m_endpointId = jsonValue.GetString("EndpointId");

    m_endpointIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AttachmentArn"))
  {
    m_attachmentArn = jsonValue.GetString("AttachmentArn");

    m_attachmentArnHasBeenSet = true;
  }

  return *this;
}

JsonValue CustomRoutingEndpointConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_endpointIdHasBeenSet)
  {
   payload.WithString("EndpointId", m_endpointId);

  }

  if(m_attachmentArnHasBeenSet)
  {
   payload.WithString("AttachmentArn", m_attachmentArn);

  }

  return payload;
}

} // namespace Model
} // namespace GlobalAccelerator
} // namespace Aws

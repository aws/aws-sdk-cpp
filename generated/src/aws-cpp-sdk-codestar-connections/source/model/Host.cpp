/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codestar-connections/model/Host.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodeStarconnections
{
namespace Model
{

Host::Host() : 
    m_nameHasBeenSet(false),
    m_hostArnHasBeenSet(false),
    m_providerType(ProviderType::NOT_SET),
    m_providerTypeHasBeenSet(false),
    m_providerEndpointHasBeenSet(false),
    m_vpcConfigurationHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_statusMessageHasBeenSet(false)
{
}

Host::Host(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_hostArnHasBeenSet(false),
    m_providerType(ProviderType::NOT_SET),
    m_providerTypeHasBeenSet(false),
    m_providerEndpointHasBeenSet(false),
    m_vpcConfigurationHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_statusMessageHasBeenSet(false)
{
  *this = jsonValue;
}

Host& Host::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HostArn"))
  {
    m_hostArn = jsonValue.GetString("HostArn");

    m_hostArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProviderType"))
  {
    m_providerType = ProviderTypeMapper::GetProviderTypeForName(jsonValue.GetString("ProviderType"));

    m_providerTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProviderEndpoint"))
  {
    m_providerEndpoint = jsonValue.GetString("ProviderEndpoint");

    m_providerEndpointHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VpcConfiguration"))
  {
    m_vpcConfiguration = jsonValue.GetObject("VpcConfiguration");

    m_vpcConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = jsonValue.GetString("Status");

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StatusMessage"))
  {
    m_statusMessage = jsonValue.GetString("StatusMessage");

    m_statusMessageHasBeenSet = true;
  }

  return *this;
}

JsonValue Host::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_hostArnHasBeenSet)
  {
   payload.WithString("HostArn", m_hostArn);

  }

  if(m_providerTypeHasBeenSet)
  {
   payload.WithString("ProviderType", ProviderTypeMapper::GetNameForProviderType(m_providerType));
  }

  if(m_providerEndpointHasBeenSet)
  {
   payload.WithString("ProviderEndpoint", m_providerEndpoint);

  }

  if(m_vpcConfigurationHasBeenSet)
  {
   payload.WithObject("VpcConfiguration", m_vpcConfiguration.Jsonize());

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", m_status);

  }

  if(m_statusMessageHasBeenSet)
  {
   payload.WithString("StatusMessage", m_statusMessage);

  }

  return payload;
}

} // namespace Model
} // namespace CodeStarconnections
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/awstransfer/model/DescribedServer.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Transfer
{
namespace Model
{

DescribedServer::DescribedServer() : 
    m_arnHasBeenSet(false),
    m_certificateHasBeenSet(false),
    m_protocolDetailsHasBeenSet(false),
    m_domain(Domain::NOT_SET),
    m_domainHasBeenSet(false),
    m_endpointDetailsHasBeenSet(false),
    m_endpointType(EndpointType::NOT_SET),
    m_endpointTypeHasBeenSet(false),
    m_hostKeyFingerprintHasBeenSet(false),
    m_identityProviderDetailsHasBeenSet(false),
    m_identityProviderType(IdentityProviderType::NOT_SET),
    m_identityProviderTypeHasBeenSet(false),
    m_loggingRoleHasBeenSet(false),
    m_postAuthenticationLoginBannerHasBeenSet(false),
    m_preAuthenticationLoginBannerHasBeenSet(false),
    m_protocolsHasBeenSet(false),
    m_securityPolicyNameHasBeenSet(false),
    m_serverIdHasBeenSet(false),
    m_state(State::NOT_SET),
    m_stateHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_userCount(0),
    m_userCountHasBeenSet(false),
    m_workflowDetailsHasBeenSet(false)
{
}

DescribedServer::DescribedServer(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_certificateHasBeenSet(false),
    m_protocolDetailsHasBeenSet(false),
    m_domain(Domain::NOT_SET),
    m_domainHasBeenSet(false),
    m_endpointDetailsHasBeenSet(false),
    m_endpointType(EndpointType::NOT_SET),
    m_endpointTypeHasBeenSet(false),
    m_hostKeyFingerprintHasBeenSet(false),
    m_identityProviderDetailsHasBeenSet(false),
    m_identityProviderType(IdentityProviderType::NOT_SET),
    m_identityProviderTypeHasBeenSet(false),
    m_loggingRoleHasBeenSet(false),
    m_postAuthenticationLoginBannerHasBeenSet(false),
    m_preAuthenticationLoginBannerHasBeenSet(false),
    m_protocolsHasBeenSet(false),
    m_securityPolicyNameHasBeenSet(false),
    m_serverIdHasBeenSet(false),
    m_state(State::NOT_SET),
    m_stateHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_userCount(0),
    m_userCountHasBeenSet(false),
    m_workflowDetailsHasBeenSet(false)
{
  *this = jsonValue;
}

DescribedServer& DescribedServer::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Certificate"))
  {
    m_certificate = jsonValue.GetString("Certificate");

    m_certificateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProtocolDetails"))
  {
    m_protocolDetails = jsonValue.GetObject("ProtocolDetails");

    m_protocolDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Domain"))
  {
    m_domain = DomainMapper::GetDomainForName(jsonValue.GetString("Domain"));

    m_domainHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EndpointDetails"))
  {
    m_endpointDetails = jsonValue.GetObject("EndpointDetails");

    m_endpointDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EndpointType"))
  {
    m_endpointType = EndpointTypeMapper::GetEndpointTypeForName(jsonValue.GetString("EndpointType"));

    m_endpointTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HostKeyFingerprint"))
  {
    m_hostKeyFingerprint = jsonValue.GetString("HostKeyFingerprint");

    m_hostKeyFingerprintHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IdentityProviderDetails"))
  {
    m_identityProviderDetails = jsonValue.GetObject("IdentityProviderDetails");

    m_identityProviderDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IdentityProviderType"))
  {
    m_identityProviderType = IdentityProviderTypeMapper::GetIdentityProviderTypeForName(jsonValue.GetString("IdentityProviderType"));

    m_identityProviderTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LoggingRole"))
  {
    m_loggingRole = jsonValue.GetString("LoggingRole");

    m_loggingRoleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PostAuthenticationLoginBanner"))
  {
    m_postAuthenticationLoginBanner = jsonValue.GetString("PostAuthenticationLoginBanner");

    m_postAuthenticationLoginBannerHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PreAuthenticationLoginBanner"))
  {
    m_preAuthenticationLoginBanner = jsonValue.GetString("PreAuthenticationLoginBanner");

    m_preAuthenticationLoginBannerHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Protocols"))
  {
    Aws::Utils::Array<JsonView> protocolsJsonList = jsonValue.GetArray("Protocols");
    for(unsigned protocolsIndex = 0; protocolsIndex < protocolsJsonList.GetLength(); ++protocolsIndex)
    {
      m_protocols.push_back(ProtocolMapper::GetProtocolForName(protocolsJsonList[protocolsIndex].AsString()));
    }
    m_protocolsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SecurityPolicyName"))
  {
    m_securityPolicyName = jsonValue.GetString("SecurityPolicyName");

    m_securityPolicyNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ServerId"))
  {
    m_serverId = jsonValue.GetString("ServerId");

    m_serverIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("State"))
  {
    m_state = StateMapper::GetStateForName(jsonValue.GetString("State"));

    m_stateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Tags"))
  {
    Aws::Utils::Array<JsonView> tagsJsonList = jsonValue.GetArray("Tags");
    for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
    {
      m_tags.push_back(tagsJsonList[tagsIndex].AsObject());
    }
    m_tagsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UserCount"))
  {
    m_userCount = jsonValue.GetInteger("UserCount");

    m_userCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("WorkflowDetails"))
  {
    m_workflowDetails = jsonValue.GetObject("WorkflowDetails");

    m_workflowDetailsHasBeenSet = true;
  }

  return *this;
}

JsonValue DescribedServer::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  if(m_certificateHasBeenSet)
  {
   payload.WithString("Certificate", m_certificate);

  }

  if(m_protocolDetailsHasBeenSet)
  {
   payload.WithObject("ProtocolDetails", m_protocolDetails.Jsonize());

  }

  if(m_domainHasBeenSet)
  {
   payload.WithString("Domain", DomainMapper::GetNameForDomain(m_domain));
  }

  if(m_endpointDetailsHasBeenSet)
  {
   payload.WithObject("EndpointDetails", m_endpointDetails.Jsonize());

  }

  if(m_endpointTypeHasBeenSet)
  {
   payload.WithString("EndpointType", EndpointTypeMapper::GetNameForEndpointType(m_endpointType));
  }

  if(m_hostKeyFingerprintHasBeenSet)
  {
   payload.WithString("HostKeyFingerprint", m_hostKeyFingerprint);

  }

  if(m_identityProviderDetailsHasBeenSet)
  {
   payload.WithObject("IdentityProviderDetails", m_identityProviderDetails.Jsonize());

  }

  if(m_identityProviderTypeHasBeenSet)
  {
   payload.WithString("IdentityProviderType", IdentityProviderTypeMapper::GetNameForIdentityProviderType(m_identityProviderType));
  }

  if(m_loggingRoleHasBeenSet)
  {
   payload.WithString("LoggingRole", m_loggingRole);

  }

  if(m_postAuthenticationLoginBannerHasBeenSet)
  {
   payload.WithString("PostAuthenticationLoginBanner", m_postAuthenticationLoginBanner);

  }

  if(m_preAuthenticationLoginBannerHasBeenSet)
  {
   payload.WithString("PreAuthenticationLoginBanner", m_preAuthenticationLoginBanner);

  }

  if(m_protocolsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> protocolsJsonList(m_protocols.size());
   for(unsigned protocolsIndex = 0; protocolsIndex < protocolsJsonList.GetLength(); ++protocolsIndex)
   {
     protocolsJsonList[protocolsIndex].AsString(ProtocolMapper::GetNameForProtocol(m_protocols[protocolsIndex]));
   }
   payload.WithArray("Protocols", std::move(protocolsJsonList));

  }

  if(m_securityPolicyNameHasBeenSet)
  {
   payload.WithString("SecurityPolicyName", m_securityPolicyName);

  }

  if(m_serverIdHasBeenSet)
  {
   payload.WithString("ServerId", m_serverId);

  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("State", StateMapper::GetNameForState(m_state));
  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("Tags", std::move(tagsJsonList));

  }

  if(m_userCountHasBeenSet)
  {
   payload.WithInteger("UserCount", m_userCount);

  }

  if(m_workflowDetailsHasBeenSet)
  {
   payload.WithObject("WorkflowDetails", m_workflowDetails.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Transfer
} // namespace Aws

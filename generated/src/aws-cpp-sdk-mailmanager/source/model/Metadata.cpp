/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mailmanager/model/Metadata.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MailManager
{
namespace Model
{

Metadata::Metadata(JsonView jsonValue)
{
  *this = jsonValue;
}

Metadata& Metadata::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Timestamp"))
  {
    m_timestamp = jsonValue.GetDouble("Timestamp");
    m_timestampHasBeenSet = true;
  }
  if(jsonValue.ValueExists("IngressPointId"))
  {
    m_ingressPointId = jsonValue.GetString("IngressPointId");
    m_ingressPointIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TrafficPolicyId"))
  {
    m_trafficPolicyId = jsonValue.GetString("TrafficPolicyId");
    m_trafficPolicyIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RuleSetId"))
  {
    m_ruleSetId = jsonValue.GetString("RuleSetId");
    m_ruleSetIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SenderHostname"))
  {
    m_senderHostname = jsonValue.GetString("SenderHostname");
    m_senderHostnameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SenderIpAddress"))
  {
    m_senderIpAddress = jsonValue.GetString("SenderIpAddress");
    m_senderIpAddressHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TlsCipherSuite"))
  {
    m_tlsCipherSuite = jsonValue.GetString("TlsCipherSuite");
    m_tlsCipherSuiteHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TlsProtocol"))
  {
    m_tlsProtocol = jsonValue.GetString("TlsProtocol");
    m_tlsProtocolHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SendingMethod"))
  {
    m_sendingMethod = jsonValue.GetString("SendingMethod");
    m_sendingMethodHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SourceIdentity"))
  {
    m_sourceIdentity = jsonValue.GetString("SourceIdentity");
    m_sourceIdentityHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SendingPool"))
  {
    m_sendingPool = jsonValue.GetString("SendingPool");
    m_sendingPoolHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ConfigurationSet"))
  {
    m_configurationSet = jsonValue.GetString("ConfigurationSet");
    m_configurationSetHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SourceArn"))
  {
    m_sourceArn = jsonValue.GetString("SourceArn");
    m_sourceArnHasBeenSet = true;
  }
  return *this;
}

JsonValue Metadata::Jsonize() const
{
  JsonValue payload;

  if(m_timestampHasBeenSet)
  {
   payload.WithDouble("Timestamp", m_timestamp.SecondsWithMSPrecision());
  }

  if(m_ingressPointIdHasBeenSet)
  {
   payload.WithString("IngressPointId", m_ingressPointId);

  }

  if(m_trafficPolicyIdHasBeenSet)
  {
   payload.WithString("TrafficPolicyId", m_trafficPolicyId);

  }

  if(m_ruleSetIdHasBeenSet)
  {
   payload.WithString("RuleSetId", m_ruleSetId);

  }

  if(m_senderHostnameHasBeenSet)
  {
   payload.WithString("SenderHostname", m_senderHostname);

  }

  if(m_senderIpAddressHasBeenSet)
  {
   payload.WithString("SenderIpAddress", m_senderIpAddress);

  }

  if(m_tlsCipherSuiteHasBeenSet)
  {
   payload.WithString("TlsCipherSuite", m_tlsCipherSuite);

  }

  if(m_tlsProtocolHasBeenSet)
  {
   payload.WithString("TlsProtocol", m_tlsProtocol);

  }

  if(m_sendingMethodHasBeenSet)
  {
   payload.WithString("SendingMethod", m_sendingMethod);

  }

  if(m_sourceIdentityHasBeenSet)
  {
   payload.WithString("SourceIdentity", m_sourceIdentity);

  }

  if(m_sendingPoolHasBeenSet)
  {
   payload.WithString("SendingPool", m_sendingPool);

  }

  if(m_configurationSetHasBeenSet)
  {
   payload.WithString("ConfigurationSet", m_configurationSet);

  }

  if(m_sourceArnHasBeenSet)
  {
   payload.WithString("SourceArn", m_sourceArn);

  }

  return payload;
}

} // namespace Model
} // namespace MailManager
} // namespace Aws

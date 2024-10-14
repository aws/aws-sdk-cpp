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

Metadata::Metadata() : 
    m_ingressPointIdHasBeenSet(false),
    m_ruleSetIdHasBeenSet(false),
    m_senderHostnameHasBeenSet(false),
    m_senderIpAddressHasBeenSet(false),
    m_timestampHasBeenSet(false),
    m_tlsCipherSuiteHasBeenSet(false),
    m_tlsProtocolHasBeenSet(false),
    m_trafficPolicyIdHasBeenSet(false)
{
}

Metadata::Metadata(JsonView jsonValue)
  : Metadata()
{
  *this = jsonValue;
}

Metadata& Metadata::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("IngressPointId"))
  {
    m_ingressPointId = jsonValue.GetString("IngressPointId");

    m_ingressPointIdHasBeenSet = true;
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

  if(jsonValue.ValueExists("Timestamp"))
  {
    m_timestamp = jsonValue.GetDouble("Timestamp");

    m_timestampHasBeenSet = true;
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

  if(jsonValue.ValueExists("TrafficPolicyId"))
  {
    m_trafficPolicyId = jsonValue.GetString("TrafficPolicyId");

    m_trafficPolicyIdHasBeenSet = true;
  }

  return *this;
}

JsonValue Metadata::Jsonize() const
{
  JsonValue payload;

  if(m_ingressPointIdHasBeenSet)
  {
   payload.WithString("IngressPointId", m_ingressPointId);

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

  if(m_timestampHasBeenSet)
  {
   payload.WithDouble("Timestamp", m_timestamp.SecondsWithMSPrecision());
  }

  if(m_tlsCipherSuiteHasBeenSet)
  {
   payload.WithString("TlsCipherSuite", m_tlsCipherSuite);

  }

  if(m_tlsProtocolHasBeenSet)
  {
   payload.WithString("TlsProtocol", m_tlsProtocol);

  }

  if(m_trafficPolicyIdHasBeenSet)
  {
   payload.WithString("TrafficPolicyId", m_trafficPolicyId);

  }

  return payload;
}

} // namespace Model
} // namespace MailManager
} // namespace Aws

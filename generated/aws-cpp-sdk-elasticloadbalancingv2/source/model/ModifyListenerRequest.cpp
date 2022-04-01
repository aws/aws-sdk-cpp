/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticloadbalancingv2/model/ModifyListenerRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::ElasticLoadBalancingv2::Model;
using namespace Aws::Utils;

ModifyListenerRequest::ModifyListenerRequest() : 
    m_listenerArnHasBeenSet(false),
    m_port(0),
    m_portHasBeenSet(false),
    m_protocol(ProtocolEnum::NOT_SET),
    m_protocolHasBeenSet(false),
    m_sslPolicyHasBeenSet(false),
    m_certificatesHasBeenSet(false),
    m_defaultActionsHasBeenSet(false),
    m_alpnPolicyHasBeenSet(false)
{
}

Aws::String ModifyListenerRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ModifyListener&";
  if(m_listenerArnHasBeenSet)
  {
    ss << "ListenerArn=" << StringUtils::URLEncode(m_listenerArn.c_str()) << "&";
  }

  if(m_portHasBeenSet)
  {
    ss << "Port=" << m_port << "&";
  }

  if(m_protocolHasBeenSet)
  {
    ss << "Protocol=" << ProtocolEnumMapper::GetNameForProtocolEnum(m_protocol) << "&";
  }

  if(m_sslPolicyHasBeenSet)
  {
    ss << "SslPolicy=" << StringUtils::URLEncode(m_sslPolicy.c_str()) << "&";
  }

  if(m_certificatesHasBeenSet)
  {
    unsigned certificatesCount = 1;
    for(auto& item : m_certificates)
    {
      item.OutputToStream(ss, "Certificates.member.", certificatesCount, "");
      certificatesCount++;
    }
  }

  if(m_defaultActionsHasBeenSet)
  {
    unsigned defaultActionsCount = 1;
    for(auto& item : m_defaultActions)
    {
      item.OutputToStream(ss, "DefaultActions.member.", defaultActionsCount, "");
      defaultActionsCount++;
    }
  }

  if(m_alpnPolicyHasBeenSet)
  {
    unsigned alpnPolicyCount = 1;
    for(auto& item : m_alpnPolicy)
    {
      ss << "AlpnPolicy.member." << alpnPolicyCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      alpnPolicyCount++;
    }
  }

  ss << "Version=2015-12-01";
  return ss.str();
}


void  ModifyListenerRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}

/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
    m_defaultActionsHasBeenSet(false)
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

  ss << "Version=2015-12-01";
  return ss.str();
}


/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#include <aws/elasticloadbalancingv2/model/RemoveListenerCertificatesRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::ElasticLoadBalancingv2::Model;
using namespace Aws::Utils;

RemoveListenerCertificatesRequest::RemoveListenerCertificatesRequest() : 
    m_listenerArnHasBeenSet(false),
    m_certificatesHasBeenSet(false)
{
}

Aws::String RemoveListenerCertificatesRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=RemoveListenerCertificates&";
  if(m_listenerArnHasBeenSet)
  {
    ss << "ListenerArn=" << StringUtils::URLEncode(m_listenerArn.c_str()) << "&";
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

  ss << "Version=2015-12-01";
  return ss.str();
}


void  RemoveListenerCertificatesRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}

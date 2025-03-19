/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ModifyInstanceMetadataOptionsRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

Aws::String ModifyInstanceMetadataOptionsRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ModifyInstanceMetadataOptions&";
  if(m_instanceIdHasBeenSet)
  {
    ss << "InstanceId=" << StringUtils::URLEncode(m_instanceId.c_str()) << "&";
  }

  if(m_httpTokensHasBeenSet)
  {
    ss << "HttpTokens=" << StringUtils::URLEncode(HttpTokensStateMapper::GetNameForHttpTokensState(m_httpTokens)) << "&";
  }

  if(m_httpPutResponseHopLimitHasBeenSet)
  {
    ss << "HttpPutResponseHopLimit=" << m_httpPutResponseHopLimit << "&";
  }

  if(m_httpEndpointHasBeenSet)
  {
    ss << "HttpEndpoint=" << StringUtils::URLEncode(InstanceMetadataEndpointStateMapper::GetNameForInstanceMetadataEndpointState(m_httpEndpoint)) << "&";
  }

  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if(m_httpProtocolIpv6HasBeenSet)
  {
    ss << "HttpProtocolIpv6=" << StringUtils::URLEncode(InstanceMetadataProtocolStateMapper::GetNameForInstanceMetadataProtocolState(m_httpProtocolIpv6)) << "&";
  }

  if(m_instanceMetadataTagsHasBeenSet)
  {
    ss << "InstanceMetadataTags=" << StringUtils::URLEncode(InstanceMetadataTagsStateMapper::GetNameForInstanceMetadataTagsState(m_instanceMetadataTags)) << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  ModifyInstanceMetadataOptionsRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}

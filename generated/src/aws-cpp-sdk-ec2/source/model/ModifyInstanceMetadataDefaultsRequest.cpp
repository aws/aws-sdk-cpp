/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ModifyInstanceMetadataDefaultsRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

Aws::String ModifyInstanceMetadataDefaultsRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ModifyInstanceMetadataDefaults&";
  if(m_httpTokensHasBeenSet)
  {
    ss << "HttpTokens=" << StringUtils::URLEncode(MetadataDefaultHttpTokensStateMapper::GetNameForMetadataDefaultHttpTokensState(m_httpTokens)) << "&";
  }

  if(m_httpPutResponseHopLimitHasBeenSet)
  {
    ss << "HttpPutResponseHopLimit=" << m_httpPutResponseHopLimit << "&";
  }

  if(m_httpEndpointHasBeenSet)
  {
    ss << "HttpEndpoint=" << StringUtils::URLEncode(DefaultInstanceMetadataEndpointStateMapper::GetNameForDefaultInstanceMetadataEndpointState(m_httpEndpoint)) << "&";
  }

  if(m_instanceMetadataTagsHasBeenSet)
  {
    ss << "InstanceMetadataTags=" << StringUtils::URLEncode(DefaultInstanceMetadataTagsStateMapper::GetNameForDefaultInstanceMetadataTagsState(m_instanceMetadataTags)) << "&";
  }

  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  ModifyInstanceMetadataDefaultsRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}

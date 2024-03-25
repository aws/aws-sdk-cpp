/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ModifyInstanceMetadataDefaultsRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

ModifyInstanceMetadataDefaultsRequest::ModifyInstanceMetadataDefaultsRequest() : 
    m_httpTokens(MetadataDefaultHttpTokensState::NOT_SET),
    m_httpTokensHasBeenSet(false),
    m_httpPutResponseHopLimit(0),
    m_httpPutResponseHopLimitHasBeenSet(false),
    m_httpEndpoint(DefaultInstanceMetadataEndpointState::NOT_SET),
    m_httpEndpointHasBeenSet(false),
    m_instanceMetadataTags(DefaultInstanceMetadataTagsState::NOT_SET),
    m_instanceMetadataTagsHasBeenSet(false),
    m_dryRun(false),
    m_dryRunHasBeenSet(false)
{
}

Aws::String ModifyInstanceMetadataDefaultsRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ModifyInstanceMetadataDefaults&";
  if(m_httpTokensHasBeenSet)
  {
    ss << "HttpTokens=" << MetadataDefaultHttpTokensStateMapper::GetNameForMetadataDefaultHttpTokensState(m_httpTokens) << "&";
  }

  if(m_httpPutResponseHopLimitHasBeenSet)
  {
    ss << "HttpPutResponseHopLimit=" << m_httpPutResponseHopLimit << "&";
  }

  if(m_httpEndpointHasBeenSet)
  {
    ss << "HttpEndpoint=" << DefaultInstanceMetadataEndpointStateMapper::GetNameForDefaultInstanceMetadataEndpointState(m_httpEndpoint) << "&";
  }

  if(m_instanceMetadataTagsHasBeenSet)
  {
    ss << "InstanceMetadataTags=" << DefaultInstanceMetadataTagsStateMapper::GetNameForDefaultInstanceMetadataTagsState(m_instanceMetadataTags) << "&";
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

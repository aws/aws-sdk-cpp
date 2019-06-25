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

#include <aws/ec2/model/CreateTrafficMirrorSessionRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

CreateTrafficMirrorSessionRequest::CreateTrafficMirrorSessionRequest() : 
    m_networkInterfaceIdHasBeenSet(false),
    m_trafficMirrorTargetIdHasBeenSet(false),
    m_trafficMirrorFilterIdHasBeenSet(false),
    m_packetLength(0),
    m_packetLengthHasBeenSet(false),
    m_sessionNumber(0),
    m_sessionNumberHasBeenSet(false),
    m_virtualNetworkId(0),
    m_virtualNetworkIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_tagSpecificationsHasBeenSet(false),
    m_dryRun(false),
    m_dryRunHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::RandomUUID()),
    m_clientTokenHasBeenSet(true)
{
}

Aws::String CreateTrafficMirrorSessionRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=CreateTrafficMirrorSession&";
  if(m_networkInterfaceIdHasBeenSet)
  {
    ss << "NetworkInterfaceId=" << StringUtils::URLEncode(m_networkInterfaceId.c_str()) << "&";
  }

  if(m_trafficMirrorTargetIdHasBeenSet)
  {
    ss << "TrafficMirrorTargetId=" << StringUtils::URLEncode(m_trafficMirrorTargetId.c_str()) << "&";
  }

  if(m_trafficMirrorFilterIdHasBeenSet)
  {
    ss << "TrafficMirrorFilterId=" << StringUtils::URLEncode(m_trafficMirrorFilterId.c_str()) << "&";
  }

  if(m_packetLengthHasBeenSet)
  {
    ss << "PacketLength=" << m_packetLength << "&";
  }

  if(m_sessionNumberHasBeenSet)
  {
    ss << "SessionNumber=" << m_sessionNumber << "&";
  }

  if(m_virtualNetworkIdHasBeenSet)
  {
    ss << "VirtualNetworkId=" << m_virtualNetworkId << "&";
  }

  if(m_descriptionHasBeenSet)
  {
    ss << "Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }

  if(m_tagSpecificationsHasBeenSet)
  {
    unsigned tagSpecificationsCount = 1;
    for(auto& item : m_tagSpecifications)
    {
      item.OutputToStream(ss, "TagSpecification.", tagSpecificationsCount, "");
      tagSpecificationsCount++;
    }
  }

  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if(m_clientTokenHasBeenSet)
  {
    ss << "ClientToken=" << StringUtils::URLEncode(m_clientToken.c_str()) << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  CreateTrafficMirrorSessionRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/CreateNetworkInsightsPathRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

CreateNetworkInsightsPathRequest::CreateNetworkInsightsPathRequest() : 
    m_sourceIpHasBeenSet(false),
    m_destinationIpHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_destinationHasBeenSet(false),
    m_protocol(Protocol::NOT_SET),
    m_protocolHasBeenSet(false),
    m_destinationPort(0),
    m_destinationPortHasBeenSet(false),
    m_tagSpecificationsHasBeenSet(false),
    m_dryRun(false),
    m_dryRunHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::PseudoRandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_filterAtSourceHasBeenSet(false),
    m_filterAtDestinationHasBeenSet(false)
{
}

Aws::String CreateNetworkInsightsPathRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=CreateNetworkInsightsPath&";
  if(m_sourceIpHasBeenSet)
  {
    ss << "SourceIp=" << StringUtils::URLEncode(m_sourceIp.c_str()) << "&";
  }

  if(m_destinationIpHasBeenSet)
  {
    ss << "DestinationIp=" << StringUtils::URLEncode(m_destinationIp.c_str()) << "&";
  }

  if(m_sourceHasBeenSet)
  {
    ss << "Source=" << StringUtils::URLEncode(m_source.c_str()) << "&";
  }

  if(m_destinationHasBeenSet)
  {
    ss << "Destination=" << StringUtils::URLEncode(m_destination.c_str()) << "&";
  }

  if(m_protocolHasBeenSet)
  {
    ss << "Protocol=" << ProtocolMapper::GetNameForProtocol(m_protocol) << "&";
  }

  if(m_destinationPortHasBeenSet)
  {
    ss << "DestinationPort=" << m_destinationPort << "&";
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

  if(m_filterAtSourceHasBeenSet)
  {
    m_filterAtSource.OutputToStream(ss, "FilterAtSource");
  }

  if(m_filterAtDestinationHasBeenSet)
  {
    m_filterAtDestination.OutputToStream(ss, "FilterAtDestination");
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  CreateNetworkInsightsPathRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}

﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ModifyTrafficMirrorSessionRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

ModifyTrafficMirrorSessionRequest::ModifyTrafficMirrorSessionRequest() : 
    m_trafficMirrorSessionIdHasBeenSet(false),
    m_trafficMirrorTargetIdHasBeenSet(false),
    m_trafficMirrorFilterIdHasBeenSet(false),
    m_packetLength(0),
    m_packetLengthHasBeenSet(false),
    m_sessionNumber(0),
    m_sessionNumberHasBeenSet(false),
    m_virtualNetworkId(0),
    m_virtualNetworkIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_removeFieldsHasBeenSet(false),
    m_dryRun(false),
    m_dryRunHasBeenSet(false)
{
}

Aws::String ModifyTrafficMirrorSessionRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ModifyTrafficMirrorSession&";
  if(m_trafficMirrorSessionIdHasBeenSet)
  {
    ss << "TrafficMirrorSessionId=" << StringUtils::URLEncode(m_trafficMirrorSessionId.c_str()) << "&";
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

  if(m_removeFieldsHasBeenSet)
  {
    unsigned removeFieldsCount = 1;
    for(auto& item : m_removeFields)
    {
      ss << "RemoveField." << removeFieldsCount << "="
          << StringUtils::URLEncode(TrafficMirrorSessionFieldMapper::GetNameForTrafficMirrorSessionField(item).c_str()) << "&";
      removeFieldsCount++;
    }
  }

  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  ModifyTrafficMirrorSessionRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}

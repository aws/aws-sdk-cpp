﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ModifyTrafficMirrorFilterRuleRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

Aws::String ModifyTrafficMirrorFilterRuleRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ModifyTrafficMirrorFilterRule&";
  if(m_trafficMirrorFilterRuleIdHasBeenSet)
  {
    ss << "TrafficMirrorFilterRuleId=" << StringUtils::URLEncode(m_trafficMirrorFilterRuleId.c_str()) << "&";
  }

  if(m_trafficDirectionHasBeenSet)
  {
    ss << "TrafficDirection=" << StringUtils::URLEncode(TrafficDirectionMapper::GetNameForTrafficDirection(m_trafficDirection)) << "&";
  }

  if(m_ruleNumberHasBeenSet)
  {
    ss << "RuleNumber=" << m_ruleNumber << "&";
  }

  if(m_ruleActionHasBeenSet)
  {
    ss << "RuleAction=" << StringUtils::URLEncode(TrafficMirrorRuleActionMapper::GetNameForTrafficMirrorRuleAction(m_ruleAction)) << "&";
  }

  if(m_destinationPortRangeHasBeenSet)
  {
    m_destinationPortRange.OutputToStream(ss, "DestinationPortRange");
  }

  if(m_sourcePortRangeHasBeenSet)
  {
    m_sourcePortRange.OutputToStream(ss, "SourcePortRange");
  }

  if(m_protocolHasBeenSet)
  {
    ss << "Protocol=" << m_protocol << "&";
  }

  if(m_destinationCidrBlockHasBeenSet)
  {
    ss << "DestinationCidrBlock=" << StringUtils::URLEncode(m_destinationCidrBlock.c_str()) << "&";
  }

  if(m_sourceCidrBlockHasBeenSet)
  {
    ss << "SourceCidrBlock=" << StringUtils::URLEncode(m_sourceCidrBlock.c_str()) << "&";
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
          << StringUtils::URLEncode(TrafficMirrorFilterRuleFieldMapper::GetNameForTrafficMirrorFilterRuleField(item)) << "&";
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


void  ModifyTrafficMirrorFilterRuleRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}

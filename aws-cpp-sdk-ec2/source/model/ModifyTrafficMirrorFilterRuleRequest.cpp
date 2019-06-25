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

#include <aws/ec2/model/ModifyTrafficMirrorFilterRuleRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

ModifyTrafficMirrorFilterRuleRequest::ModifyTrafficMirrorFilterRuleRequest() : 
    m_trafficMirrorFilterRuleIdHasBeenSet(false),
    m_trafficDirection(TrafficDirection::NOT_SET),
    m_trafficDirectionHasBeenSet(false),
    m_ruleNumber(0),
    m_ruleNumberHasBeenSet(false),
    m_ruleAction(TrafficMirrorRuleAction::NOT_SET),
    m_ruleActionHasBeenSet(false),
    m_destinationPortRangeHasBeenSet(false),
    m_sourcePortRangeHasBeenSet(false),
    m_protocol(0),
    m_protocolHasBeenSet(false),
    m_destinationCidrBlockHasBeenSet(false),
    m_sourceCidrBlockHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_removeFieldsHasBeenSet(false),
    m_dryRun(false),
    m_dryRunHasBeenSet(false)
{
}

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
    ss << "TrafficDirection=" << TrafficDirectionMapper::GetNameForTrafficDirection(m_trafficDirection) << "&";
  }

  if(m_ruleNumberHasBeenSet)
  {
    ss << "RuleNumber=" << m_ruleNumber << "&";
  }

  if(m_ruleActionHasBeenSet)
  {
    ss << "RuleAction=" << TrafficMirrorRuleActionMapper::GetNameForTrafficMirrorRuleAction(m_ruleAction) << "&";
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
          << StringUtils::URLEncode(TrafficMirrorFilterRuleFieldMapper::GetNameForTrafficMirrorFilterRuleField(item).c_str()) << "&";
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

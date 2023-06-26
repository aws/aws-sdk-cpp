/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/GetInstanceTypesFromInstanceRequirementsRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

GetInstanceTypesFromInstanceRequirementsRequest::GetInstanceTypesFromInstanceRequirementsRequest() : 
    m_dryRun(false),
    m_dryRunHasBeenSet(false),
    m_architectureTypesHasBeenSet(false),
    m_virtualizationTypesHasBeenSet(false),
    m_instanceRequirementsHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

Aws::String GetInstanceTypesFromInstanceRequirementsRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=GetInstanceTypesFromInstanceRequirements&";
  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if(m_architectureTypesHasBeenSet)
  {
    unsigned architectureTypesCount = 1;
    for(auto& item : m_architectureTypes)
    {
      ss << "ArchitectureType." << architectureTypesCount << "="
          << StringUtils::URLEncode(ArchitectureTypeMapper::GetNameForArchitectureType(item).c_str()) << "&";
      architectureTypesCount++;
    }
  }

  if(m_virtualizationTypesHasBeenSet)
  {
    unsigned virtualizationTypesCount = 1;
    for(auto& item : m_virtualizationTypes)
    {
      ss << "VirtualizationType." << virtualizationTypesCount << "="
          << StringUtils::URLEncode(VirtualizationTypeMapper::GetNameForVirtualizationType(item).c_str()) << "&";
      virtualizationTypesCount++;
    }
  }

  if(m_instanceRequirementsHasBeenSet)
  {
    m_instanceRequirements.OutputToStream(ss, "InstanceRequirements");
  }

  if(m_maxResultsHasBeenSet)
  {
    ss << "MaxResults=" << m_maxResults << "&";
  }

  if(m_nextTokenHasBeenSet)
  {
    ss << "NextToken=" << StringUtils::URLEncode(m_nextToken.c_str()) << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  GetInstanceTypesFromInstanceRequirementsRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}

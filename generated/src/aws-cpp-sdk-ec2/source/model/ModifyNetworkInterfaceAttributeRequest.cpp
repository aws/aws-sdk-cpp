/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ModifyNetworkInterfaceAttributeRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

ModifyNetworkInterfaceAttributeRequest::ModifyNetworkInterfaceAttributeRequest() : 
    m_attachmentHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_dryRun(false),
    m_dryRunHasBeenSet(false),
    m_groupsHasBeenSet(false),
    m_networkInterfaceIdHasBeenSet(false),
    m_sourceDestCheckHasBeenSet(false),
    m_enaSrdSpecificationHasBeenSet(false)
{
}

Aws::String ModifyNetworkInterfaceAttributeRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ModifyNetworkInterfaceAttribute&";
  if(m_attachmentHasBeenSet)
  {
    m_attachment.OutputToStream(ss, "Attachment");
  }

  if(m_descriptionHasBeenSet)
  {
    m_description.OutputToStream(ss, "Description");
  }

  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if(m_groupsHasBeenSet)
  {
    unsigned groupsCount = 1;
    for(auto& item : m_groups)
    {
      ss << "SecurityGroupId." << groupsCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      groupsCount++;
    }
  }

  if(m_networkInterfaceIdHasBeenSet)
  {
    ss << "NetworkInterfaceId=" << StringUtils::URLEncode(m_networkInterfaceId.c_str()) << "&";
  }

  if(m_sourceDestCheckHasBeenSet)
  {
    m_sourceDestCheck.OutputToStream(ss, "SourceDestCheck");
  }

  if(m_enaSrdSpecificationHasBeenSet)
  {
    m_enaSrdSpecification.OutputToStream(ss, "EnaSrdSpecification");
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  ModifyNetworkInterfaceAttributeRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}

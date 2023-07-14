/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/DisassociateInstanceEventWindowRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

DisassociateInstanceEventWindowRequest::DisassociateInstanceEventWindowRequest() : 
    m_dryRun(false),
    m_dryRunHasBeenSet(false),
    m_instanceEventWindowIdHasBeenSet(false),
    m_associationTargetHasBeenSet(false)
{
}

Aws::String DisassociateInstanceEventWindowRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DisassociateInstanceEventWindow&";
  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if(m_instanceEventWindowIdHasBeenSet)
  {
    ss << "InstanceEventWindowId=" << StringUtils::URLEncode(m_instanceEventWindowId.c_str()) << "&";
  }

  if(m_associationTargetHasBeenSet)
  {
    m_associationTarget.OutputToStream(ss, "AssociationTarget");
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  DisassociateInstanceEventWindowRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}

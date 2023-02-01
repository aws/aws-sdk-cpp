/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/DetachNetworkInterfaceRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

DetachNetworkInterfaceRequest::DetachNetworkInterfaceRequest() : 
    m_attachmentIdHasBeenSet(false),
    m_dryRun(false),
    m_dryRunHasBeenSet(false),
    m_force(false),
    m_forceHasBeenSet(false)
{
}

Aws::String DetachNetworkInterfaceRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DetachNetworkInterface&";
  if(m_attachmentIdHasBeenSet)
  {
    ss << "AttachmentId=" << StringUtils::URLEncode(m_attachmentId.c_str()) << "&";
  }

  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if(m_forceHasBeenSet)
  {
    ss << "Force=" << std::boolalpha << m_force << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  DetachNetworkInterfaceRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ModifyInstanceEventStartTimeRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

ModifyInstanceEventStartTimeRequest::ModifyInstanceEventStartTimeRequest() : 
    m_dryRun(false),
    m_dryRunHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_instanceEventIdHasBeenSet(false),
    m_notBeforeHasBeenSet(false)
{
}

Aws::String ModifyInstanceEventStartTimeRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ModifyInstanceEventStartTime&";
  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if(m_instanceIdHasBeenSet)
  {
    ss << "InstanceId=" << StringUtils::URLEncode(m_instanceId.c_str()) << "&";
  }

  if(m_instanceEventIdHasBeenSet)
  {
    ss << "InstanceEventId=" << StringUtils::URLEncode(m_instanceEventId.c_str()) << "&";
  }

  if(m_notBeforeHasBeenSet)
  {
    ss << "NotBefore=" << StringUtils::URLEncode(m_notBefore.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  ModifyInstanceEventStartTimeRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}

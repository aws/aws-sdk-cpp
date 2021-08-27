/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/SignalResourceRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::CloudFormation::Model;
using namespace Aws::Utils;

SignalResourceRequest::SignalResourceRequest() : 
    m_stackNameHasBeenSet(false),
    m_logicalResourceIdHasBeenSet(false),
    m_uniqueIdHasBeenSet(false),
    m_status(ResourceSignalStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
}

Aws::String SignalResourceRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=SignalResource&";
  if(m_stackNameHasBeenSet)
  {
    ss << "StackName=" << StringUtils::URLEncode(m_stackName.c_str()) << "&";
  }

  if(m_logicalResourceIdHasBeenSet)
  {
    ss << "LogicalResourceId=" << StringUtils::URLEncode(m_logicalResourceId.c_str()) << "&";
  }

  if(m_uniqueIdHasBeenSet)
  {
    ss << "UniqueId=" << StringUtils::URLEncode(m_uniqueId.c_str()) << "&";
  }

  if(m_statusHasBeenSet)
  {
    ss << "Status=" << ResourceSignalStatusMapper::GetNameForResourceSignalStatus(m_status) << "&";
  }

  ss << "Version=2010-05-15";
  return ss.str();
}


void  SignalResourceRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}

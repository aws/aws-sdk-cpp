/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sns/model/RemovePermissionRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::SNS::Model;
using namespace Aws::Utils;

RemovePermissionRequest::RemovePermissionRequest() : 
    m_topicArnHasBeenSet(false),
    m_labelHasBeenSet(false)
{
}

Aws::String RemovePermissionRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=RemovePermission&";
  if(m_topicArnHasBeenSet)
  {
    ss << "TopicArn=" << StringUtils::URLEncode(m_topicArn.c_str()) << "&";
  }

  if(m_labelHasBeenSet)
  {
    ss << "Label=" << StringUtils::URLEncode(m_label.c_str()) << "&";
  }

  ss << "Version=2010-03-31";
  return ss.str();
}


void  RemovePermissionRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}

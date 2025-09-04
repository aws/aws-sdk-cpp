/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/ListHookResultsRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::CloudFormation::Model;
using namespace Aws::Utils;

Aws::String ListHookResultsRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ListHookResults&";
  if(m_targetTypeHasBeenSet)
  {
    ss << "TargetType=" << StringUtils::URLEncode(ListHookResultsTargetTypeMapper::GetNameForListHookResultsTargetType(m_targetType)) << "&";
  }

  if(m_targetIdHasBeenSet)
  {
    ss << "TargetId=" << StringUtils::URLEncode(m_targetId.c_str()) << "&";
  }

  if(m_typeArnHasBeenSet)
  {
    ss << "TypeArn=" << StringUtils::URLEncode(m_typeArn.c_str()) << "&";
  }

  if(m_statusHasBeenSet)
  {
    ss << "Status=" << StringUtils::URLEncode(HookStatusMapper::GetNameForHookStatus(m_status)) << "&";
  }

  if(m_nextTokenHasBeenSet)
  {
    ss << "NextToken=" << StringUtils::URLEncode(m_nextToken.c_str()) << "&";
  }

  ss << "Version=2010-05-15";
  return ss.str();
}


void  ListHookResultsRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}

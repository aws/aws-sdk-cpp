/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/StopStackSetOperationRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::CloudFormation::Model;
using namespace Aws::Utils;

StopStackSetOperationRequest::StopStackSetOperationRequest() : 
    m_stackSetNameHasBeenSet(false),
    m_operationIdHasBeenSet(false)
{
}

Aws::String StopStackSetOperationRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=StopStackSetOperation&";
  if(m_stackSetNameHasBeenSet)
  {
    ss << "StackSetName=" << StringUtils::URLEncode(m_stackSetName.c_str()) << "&";
  }

  if(m_operationIdHasBeenSet)
  {
    ss << "OperationId=" << StringUtils::URLEncode(m_operationId.c_str()) << "&";
  }

  ss << "Version=2010-05-15";
  return ss.str();
}


void  StopStackSetOperationRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}

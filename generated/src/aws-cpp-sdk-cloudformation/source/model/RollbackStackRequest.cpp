/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/RollbackStackRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::CloudFormation::Model;
using namespace Aws::Utils;

RollbackStackRequest::RollbackStackRequest() : 
    m_stackNameHasBeenSet(false),
    m_roleARNHasBeenSet(false),
    m_clientRequestTokenHasBeenSet(false),
    m_retainExceptOnCreate(false),
    m_retainExceptOnCreateHasBeenSet(false)
{
}

Aws::String RollbackStackRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=RollbackStack&";
  if(m_stackNameHasBeenSet)
  {
    ss << "StackName=" << StringUtils::URLEncode(m_stackName.c_str()) << "&";
  }

  if(m_roleARNHasBeenSet)
  {
    ss << "RoleARN=" << StringUtils::URLEncode(m_roleARN.c_str()) << "&";
  }

  if(m_clientRequestTokenHasBeenSet)
  {
    ss << "ClientRequestToken=" << StringUtils::URLEncode(m_clientRequestToken.c_str()) << "&";
  }

  if(m_retainExceptOnCreateHasBeenSet)
  {
    ss << "RetainExceptOnCreate=" << std::boolalpha << m_retainExceptOnCreate << "&";
  }

  ss << "Version=2010-05-15";
  return ss.str();
}


void  RollbackStackRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}

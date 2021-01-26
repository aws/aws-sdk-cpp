/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/ContinueUpdateRollbackRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::CloudFormation::Model;
using namespace Aws::Utils;

ContinueUpdateRollbackRequest::ContinueUpdateRollbackRequest() : 
    m_stackNameHasBeenSet(false),
    m_roleARNHasBeenSet(false),
    m_resourcesToSkipHasBeenSet(false),
    m_clientRequestTokenHasBeenSet(false)
{
}

Aws::String ContinueUpdateRollbackRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ContinueUpdateRollback&";
  if(m_stackNameHasBeenSet)
  {
    ss << "StackName=" << StringUtils::URLEncode(m_stackName.c_str()) << "&";
  }

  if(m_roleARNHasBeenSet)
  {
    ss << "RoleARN=" << StringUtils::URLEncode(m_roleARN.c_str()) << "&";
  }

  if(m_resourcesToSkipHasBeenSet)
  {
    unsigned resourcesToSkipCount = 1;
    for(auto& item : m_resourcesToSkip)
    {
      ss << "ResourcesToSkip.member." << resourcesToSkipCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      resourcesToSkipCount++;
    }
  }

  if(m_clientRequestTokenHasBeenSet)
  {
    ss << "ClientRequestToken=" << StringUtils::URLEncode(m_clientRequestToken.c_str()) << "&";
  }

  ss << "Version=2010-05-15";
  return ss.str();
}


void  ContinueUpdateRollbackRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}

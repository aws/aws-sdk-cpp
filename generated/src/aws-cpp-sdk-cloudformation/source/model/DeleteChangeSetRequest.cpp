/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/DeleteChangeSetRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::CloudFormation::Model;
using namespace Aws::Utils;

DeleteChangeSetRequest::DeleteChangeSetRequest() : 
    m_changeSetNameHasBeenSet(false),
    m_stackNameHasBeenSet(false)
{
}

Aws::String DeleteChangeSetRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DeleteChangeSet&";
  if(m_changeSetNameHasBeenSet)
  {
    ss << "ChangeSetName=" << StringUtils::URLEncode(m_changeSetName.c_str()) << "&";
  }

  if(m_stackNameHasBeenSet)
  {
    ss << "StackName=" << StringUtils::URLEncode(m_stackName.c_str()) << "&";
  }

  ss << "Version=2010-05-15";
  return ss.str();
}


void  DeleteChangeSetRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}

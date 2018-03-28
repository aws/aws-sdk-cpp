/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/iam/model/UpdateRoleRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::IAM::Model;
using namespace Aws::Utils;

UpdateRoleRequest::UpdateRoleRequest() : 
    m_roleNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_maxSessionDuration(0),
    m_maxSessionDurationHasBeenSet(false)
{
}

Aws::String UpdateRoleRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=UpdateRole&";
  if(m_roleNameHasBeenSet)
  {
    ss << "RoleName=" << StringUtils::URLEncode(m_roleName.c_str()) << "&";
  }

  if(m_descriptionHasBeenSet)
  {
    ss << "Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }

  if(m_maxSessionDurationHasBeenSet)
  {
    ss << "MaxSessionDuration=" << m_maxSessionDuration << "&";
  }

  ss << "Version=2010-05-08";
  return ss.str();
}


void  UpdateRoleRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}

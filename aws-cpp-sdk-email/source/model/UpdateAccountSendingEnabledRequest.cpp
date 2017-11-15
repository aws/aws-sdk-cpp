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

#include <aws/email/model/UpdateAccountSendingEnabledRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::SES::Model;
using namespace Aws::Utils;

UpdateAccountSendingEnabledRequest::UpdateAccountSendingEnabledRequest() : 
    m_enabled(false),
    m_enabledHasBeenSet(false)
{
}

Aws::String UpdateAccountSendingEnabledRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=UpdateAccountSendingEnabled&";
  if(m_enabledHasBeenSet)
  {
    ss << "Enabled=" << std::boolalpha << m_enabled << "&";
  }

  ss << "Version=2010-12-01";
  return ss.str();
}


void  UpdateAccountSendingEnabledRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}

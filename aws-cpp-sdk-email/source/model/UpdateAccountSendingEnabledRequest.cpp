/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

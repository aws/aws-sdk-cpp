/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/email/model/SendCustomVerificationEmailRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::SES::Model;
using namespace Aws::Utils;

SendCustomVerificationEmailRequest::SendCustomVerificationEmailRequest() : 
    m_emailAddressHasBeenSet(false),
    m_templateNameHasBeenSet(false),
    m_configurationSetNameHasBeenSet(false)
{
}

Aws::String SendCustomVerificationEmailRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=SendCustomVerificationEmail&";
  if(m_emailAddressHasBeenSet)
  {
    ss << "EmailAddress=" << StringUtils::URLEncode(m_emailAddress.c_str()) << "&";
  }

  if(m_templateNameHasBeenSet)
  {
    ss << "TemplateName=" << StringUtils::URLEncode(m_templateName.c_str()) << "&";
  }

  if(m_configurationSetNameHasBeenSet)
  {
    ss << "ConfigurationSetName=" << StringUtils::URLEncode(m_configurationSetName.c_str()) << "&";
  }

  ss << "Version=2010-12-01";
  return ss.str();
}


void  SendCustomVerificationEmailRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}

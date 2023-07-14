/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/email/model/DeleteCustomVerificationEmailTemplateRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::SES::Model;
using namespace Aws::Utils;

DeleteCustomVerificationEmailTemplateRequest::DeleteCustomVerificationEmailTemplateRequest() : 
    m_templateNameHasBeenSet(false)
{
}

Aws::String DeleteCustomVerificationEmailTemplateRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DeleteCustomVerificationEmailTemplate&";
  if(m_templateNameHasBeenSet)
  {
    ss << "TemplateName=" << StringUtils::URLEncode(m_templateName.c_str()) << "&";
  }

  ss << "Version=2010-12-01";
  return ss.str();
}


void  DeleteCustomVerificationEmailTemplateRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}

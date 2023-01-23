/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/email/model/UpdateCustomVerificationEmailTemplateRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::SES::Model;
using namespace Aws::Utils;

UpdateCustomVerificationEmailTemplateRequest::UpdateCustomVerificationEmailTemplateRequest() : 
    m_templateNameHasBeenSet(false),
    m_fromEmailAddressHasBeenSet(false),
    m_templateSubjectHasBeenSet(false),
    m_templateContentHasBeenSet(false),
    m_successRedirectionURLHasBeenSet(false),
    m_failureRedirectionURLHasBeenSet(false)
{
}

Aws::String UpdateCustomVerificationEmailTemplateRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=UpdateCustomVerificationEmailTemplate&";
  if(m_templateNameHasBeenSet)
  {
    ss << "TemplateName=" << StringUtils::URLEncode(m_templateName.c_str()) << "&";
  }

  if(m_fromEmailAddressHasBeenSet)
  {
    ss << "FromEmailAddress=" << StringUtils::URLEncode(m_fromEmailAddress.c_str()) << "&";
  }

  if(m_templateSubjectHasBeenSet)
  {
    ss << "TemplateSubject=" << StringUtils::URLEncode(m_templateSubject.c_str()) << "&";
  }

  if(m_templateContentHasBeenSet)
  {
    ss << "TemplateContent=" << StringUtils::URLEncode(m_templateContent.c_str()) << "&";
  }

  if(m_successRedirectionURLHasBeenSet)
  {
    ss << "SuccessRedirectionURL=" << StringUtils::URLEncode(m_successRedirectionURL.c_str()) << "&";
  }

  if(m_failureRedirectionURLHasBeenSet)
  {
    ss << "FailureRedirectionURL=" << StringUtils::URLEncode(m_failureRedirectionURL.c_str()) << "&";
  }

  ss << "Version=2010-12-01";
  return ss.str();
}


void  UpdateCustomVerificationEmailTemplateRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}

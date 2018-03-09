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

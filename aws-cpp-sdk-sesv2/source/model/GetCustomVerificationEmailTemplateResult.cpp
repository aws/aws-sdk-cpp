/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sesv2/model/GetCustomVerificationEmailTemplateResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SESV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetCustomVerificationEmailTemplateResult::GetCustomVerificationEmailTemplateResult()
{
}

GetCustomVerificationEmailTemplateResult::GetCustomVerificationEmailTemplateResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetCustomVerificationEmailTemplateResult& GetCustomVerificationEmailTemplateResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("TemplateName"))
  {
    m_templateName = jsonValue.GetString("TemplateName");

  }

  if(jsonValue.ValueExists("FromEmailAddress"))
  {
    m_fromEmailAddress = jsonValue.GetString("FromEmailAddress");

  }

  if(jsonValue.ValueExists("TemplateSubject"))
  {
    m_templateSubject = jsonValue.GetString("TemplateSubject");

  }

  if(jsonValue.ValueExists("TemplateContent"))
  {
    m_templateContent = jsonValue.GetString("TemplateContent");

  }

  if(jsonValue.ValueExists("SuccessRedirectionURL"))
  {
    m_successRedirectionURL = jsonValue.GetString("SuccessRedirectionURL");

  }

  if(jsonValue.ValueExists("FailureRedirectionURL"))
  {
    m_failureRedirectionURL = jsonValue.GetString("FailureRedirectionURL");

  }



  return *this;
}

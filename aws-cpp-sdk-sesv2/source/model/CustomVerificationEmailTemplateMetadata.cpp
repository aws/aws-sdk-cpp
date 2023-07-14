/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sesv2/model/CustomVerificationEmailTemplateMetadata.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SESV2
{
namespace Model
{

CustomVerificationEmailTemplateMetadata::CustomVerificationEmailTemplateMetadata() : 
    m_templateNameHasBeenSet(false),
    m_fromEmailAddressHasBeenSet(false),
    m_templateSubjectHasBeenSet(false),
    m_successRedirectionURLHasBeenSet(false),
    m_failureRedirectionURLHasBeenSet(false)
{
}

CustomVerificationEmailTemplateMetadata::CustomVerificationEmailTemplateMetadata(JsonView jsonValue) : 
    m_templateNameHasBeenSet(false),
    m_fromEmailAddressHasBeenSet(false),
    m_templateSubjectHasBeenSet(false),
    m_successRedirectionURLHasBeenSet(false),
    m_failureRedirectionURLHasBeenSet(false)
{
  *this = jsonValue;
}

CustomVerificationEmailTemplateMetadata& CustomVerificationEmailTemplateMetadata::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TemplateName"))
  {
    m_templateName = jsonValue.GetString("TemplateName");

    m_templateNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FromEmailAddress"))
  {
    m_fromEmailAddress = jsonValue.GetString("FromEmailAddress");

    m_fromEmailAddressHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TemplateSubject"))
  {
    m_templateSubject = jsonValue.GetString("TemplateSubject");

    m_templateSubjectHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SuccessRedirectionURL"))
  {
    m_successRedirectionURL = jsonValue.GetString("SuccessRedirectionURL");

    m_successRedirectionURLHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FailureRedirectionURL"))
  {
    m_failureRedirectionURL = jsonValue.GetString("FailureRedirectionURL");

    m_failureRedirectionURLHasBeenSet = true;
  }

  return *this;
}

JsonValue CustomVerificationEmailTemplateMetadata::Jsonize() const
{
  JsonValue payload;

  if(m_templateNameHasBeenSet)
  {
   payload.WithString("TemplateName", m_templateName);

  }

  if(m_fromEmailAddressHasBeenSet)
  {
   payload.WithString("FromEmailAddress", m_fromEmailAddress);

  }

  if(m_templateSubjectHasBeenSet)
  {
   payload.WithString("TemplateSubject", m_templateSubject);

  }

  if(m_successRedirectionURLHasBeenSet)
  {
   payload.WithString("SuccessRedirectionURL", m_successRedirectionURL);

  }

  if(m_failureRedirectionURLHasBeenSet)
  {
   payload.WithString("FailureRedirectionURL", m_failureRedirectionURL);

  }

  return payload;
}

} // namespace Model
} // namespace SESV2
} // namespace Aws

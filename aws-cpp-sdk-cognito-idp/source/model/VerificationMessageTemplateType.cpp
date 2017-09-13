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

#include <aws/cognito-idp/model/VerificationMessageTemplateType.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CognitoIdentityProvider
{
namespace Model
{

VerificationMessageTemplateType::VerificationMessageTemplateType() : 
    m_smsMessageHasBeenSet(false),
    m_emailMessageHasBeenSet(false),
    m_emailSubjectHasBeenSet(false),
    m_emailMessageByLinkHasBeenSet(false),
    m_emailSubjectByLinkHasBeenSet(false),
    m_defaultEmailOption(DefaultEmailOptionType::NOT_SET),
    m_defaultEmailOptionHasBeenSet(false)
{
}

VerificationMessageTemplateType::VerificationMessageTemplateType(const JsonValue& jsonValue) : 
    m_smsMessageHasBeenSet(false),
    m_emailMessageHasBeenSet(false),
    m_emailSubjectHasBeenSet(false),
    m_emailMessageByLinkHasBeenSet(false),
    m_emailSubjectByLinkHasBeenSet(false),
    m_defaultEmailOption(DefaultEmailOptionType::NOT_SET),
    m_defaultEmailOptionHasBeenSet(false)
{
  *this = jsonValue;
}

VerificationMessageTemplateType& VerificationMessageTemplateType::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("SmsMessage"))
  {
    m_smsMessage = jsonValue.GetString("SmsMessage");

    m_smsMessageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EmailMessage"))
  {
    m_emailMessage = jsonValue.GetString("EmailMessage");

    m_emailMessageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EmailSubject"))
  {
    m_emailSubject = jsonValue.GetString("EmailSubject");

    m_emailSubjectHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EmailMessageByLink"))
  {
    m_emailMessageByLink = jsonValue.GetString("EmailMessageByLink");

    m_emailMessageByLinkHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EmailSubjectByLink"))
  {
    m_emailSubjectByLink = jsonValue.GetString("EmailSubjectByLink");

    m_emailSubjectByLinkHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DefaultEmailOption"))
  {
    m_defaultEmailOption = DefaultEmailOptionTypeMapper::GetDefaultEmailOptionTypeForName(jsonValue.GetString("DefaultEmailOption"));

    m_defaultEmailOptionHasBeenSet = true;
  }

  return *this;
}

JsonValue VerificationMessageTemplateType::Jsonize() const
{
  JsonValue payload;

  if(m_smsMessageHasBeenSet)
  {
   payload.WithString("SmsMessage", m_smsMessage);

  }

  if(m_emailMessageHasBeenSet)
  {
   payload.WithString("EmailMessage", m_emailMessage);

  }

  if(m_emailSubjectHasBeenSet)
  {
   payload.WithString("EmailSubject", m_emailSubject);

  }

  if(m_emailMessageByLinkHasBeenSet)
  {
   payload.WithString("EmailMessageByLink", m_emailMessageByLink);

  }

  if(m_emailSubjectByLinkHasBeenSet)
  {
   payload.WithString("EmailSubjectByLink", m_emailSubjectByLink);

  }

  if(m_defaultEmailOptionHasBeenSet)
  {
   payload.WithString("DefaultEmailOption", DefaultEmailOptionTypeMapper::GetNameForDefaultEmailOptionType(m_defaultEmailOption));
  }

  return payload;
}

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws

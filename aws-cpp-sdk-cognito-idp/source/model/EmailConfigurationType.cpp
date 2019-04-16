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

#include <aws/cognito-idp/model/EmailConfigurationType.h>
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

EmailConfigurationType::EmailConfigurationType() : 
    m_sourceArnHasBeenSet(false),
    m_replyToEmailAddressHasBeenSet(false),
    m_emailSendingAccount(EmailSendingAccountType::NOT_SET),
    m_emailSendingAccountHasBeenSet(false)
{
}

EmailConfigurationType::EmailConfigurationType(JsonView jsonValue) : 
    m_sourceArnHasBeenSet(false),
    m_replyToEmailAddressHasBeenSet(false),
    m_emailSendingAccount(EmailSendingAccountType::NOT_SET),
    m_emailSendingAccountHasBeenSet(false)
{
  *this = jsonValue;
}

EmailConfigurationType& EmailConfigurationType::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SourceArn"))
  {
    m_sourceArn = jsonValue.GetString("SourceArn");

    m_sourceArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReplyToEmailAddress"))
  {
    m_replyToEmailAddress = jsonValue.GetString("ReplyToEmailAddress");

    m_replyToEmailAddressHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EmailSendingAccount"))
  {
    m_emailSendingAccount = EmailSendingAccountTypeMapper::GetEmailSendingAccountTypeForName(jsonValue.GetString("EmailSendingAccount"));

    m_emailSendingAccountHasBeenSet = true;
  }

  return *this;
}

JsonValue EmailConfigurationType::Jsonize() const
{
  JsonValue payload;

  if(m_sourceArnHasBeenSet)
  {
   payload.WithString("SourceArn", m_sourceArn);

  }

  if(m_replyToEmailAddressHasBeenSet)
  {
   payload.WithString("ReplyToEmailAddress", m_replyToEmailAddress);

  }

  if(m_emailSendingAccountHasBeenSet)
  {
   payload.WithString("EmailSendingAccount", EmailSendingAccountTypeMapper::GetNameForEmailSendingAccountType(m_emailSendingAccount));
  }

  return payload;
}

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws

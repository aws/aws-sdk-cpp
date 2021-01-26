/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
    m_emailSendingAccountHasBeenSet(false),
    m_fromHasBeenSet(false),
    m_configurationSetHasBeenSet(false)
{
}

EmailConfigurationType::EmailConfigurationType(JsonView jsonValue) : 
    m_sourceArnHasBeenSet(false),
    m_replyToEmailAddressHasBeenSet(false),
    m_emailSendingAccount(EmailSendingAccountType::NOT_SET),
    m_emailSendingAccountHasBeenSet(false),
    m_fromHasBeenSet(false),
    m_configurationSetHasBeenSet(false)
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

  if(jsonValue.ValueExists("From"))
  {
    m_from = jsonValue.GetString("From");

    m_fromHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ConfigurationSet"))
  {
    m_configurationSet = jsonValue.GetString("ConfigurationSet");

    m_configurationSetHasBeenSet = true;
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

  if(m_fromHasBeenSet)
  {
   payload.WithString("From", m_from);

  }

  if(m_configurationSetHasBeenSet)
  {
   payload.WithString("ConfigurationSet", m_configurationSet);

  }

  return payload;
}

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws

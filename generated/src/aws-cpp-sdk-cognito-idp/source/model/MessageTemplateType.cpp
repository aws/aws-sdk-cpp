/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/MessageTemplateType.h>
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

MessageTemplateType::MessageTemplateType() : 
    m_sMSMessageHasBeenSet(false),
    m_emailMessageHasBeenSet(false),
    m_emailSubjectHasBeenSet(false)
{
}

MessageTemplateType::MessageTemplateType(JsonView jsonValue) : 
    m_sMSMessageHasBeenSet(false),
    m_emailMessageHasBeenSet(false),
    m_emailSubjectHasBeenSet(false)
{
  *this = jsonValue;
}

MessageTemplateType& MessageTemplateType::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SMSMessage"))
  {
    m_sMSMessage = jsonValue.GetString("SMSMessage");

    m_sMSMessageHasBeenSet = true;
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

  return *this;
}

JsonValue MessageTemplateType::Jsonize() const
{
  JsonValue payload;

  if(m_sMSMessageHasBeenSet)
  {
   payload.WithString("SMSMessage", m_sMSMessage);

  }

  if(m_emailMessageHasBeenSet)
  {
   payload.WithString("EmailMessage", m_emailMessage);

  }

  if(m_emailSubjectHasBeenSet)
  {
   payload.WithString("EmailSubject", m_emailSubject);

  }

  return payload;
}

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws

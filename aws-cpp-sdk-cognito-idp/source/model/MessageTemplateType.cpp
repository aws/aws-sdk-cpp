/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

MessageTemplateType::MessageTemplateType(const JsonValue& jsonValue) : 
    m_sMSMessageHasBeenSet(false),
    m_emailMessageHasBeenSet(false),
    m_emailSubjectHasBeenSet(false)
{
  *this = jsonValue;
}

MessageTemplateType& MessageTemplateType::operator =(const JsonValue& jsonValue)
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
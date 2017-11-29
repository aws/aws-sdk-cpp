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

#include <aws/cognito-idp/model/NotifyEmailType.h>
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

NotifyEmailType::NotifyEmailType() : 
    m_subjectHasBeenSet(false),
    m_htmlBodyHasBeenSet(false),
    m_textBodyHasBeenSet(false)
{
}

NotifyEmailType::NotifyEmailType(const JsonValue& jsonValue) : 
    m_subjectHasBeenSet(false),
    m_htmlBodyHasBeenSet(false),
    m_textBodyHasBeenSet(false)
{
  *this = jsonValue;
}

NotifyEmailType& NotifyEmailType::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("Subject"))
  {
    m_subject = jsonValue.GetString("Subject");

    m_subjectHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HtmlBody"))
  {
    m_htmlBody = jsonValue.GetString("HtmlBody");

    m_htmlBodyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TextBody"))
  {
    m_textBody = jsonValue.GetString("TextBody");

    m_textBodyHasBeenSet = true;
  }

  return *this;
}

JsonValue NotifyEmailType::Jsonize() const
{
  JsonValue payload;

  if(m_subjectHasBeenSet)
  {
   payload.WithString("Subject", m_subject);

  }

  if(m_htmlBodyHasBeenSet)
  {
   payload.WithString("HtmlBody", m_htmlBody);

  }

  if(m_textBodyHasBeenSet)
  {
   payload.WithString("TextBody", m_textBody);

  }

  return payload;
}

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws

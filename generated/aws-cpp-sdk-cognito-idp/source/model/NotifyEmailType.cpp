/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

NotifyEmailType::NotifyEmailType(JsonView jsonValue) : 
    m_subjectHasBeenSet(false),
    m_htmlBodyHasBeenSet(false),
    m_textBodyHasBeenSet(false)
{
  *this = jsonValue;
}

NotifyEmailType& NotifyEmailType::operator =(JsonView jsonValue)
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

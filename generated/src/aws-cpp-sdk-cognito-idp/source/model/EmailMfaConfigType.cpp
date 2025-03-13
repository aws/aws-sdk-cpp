/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/EmailMfaConfigType.h>
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

EmailMfaConfigType::EmailMfaConfigType(JsonView jsonValue)
{
  *this = jsonValue;
}

EmailMfaConfigType& EmailMfaConfigType::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Message"))
  {
    m_message = jsonValue.GetString("Message");
    m_messageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Subject"))
  {
    m_subject = jsonValue.GetString("Subject");
    m_subjectHasBeenSet = true;
  }
  return *this;
}

JsonValue EmailMfaConfigType::Jsonize() const
{
  JsonValue payload;

  if(m_messageHasBeenSet)
  {
   payload.WithString("Message", m_message);

  }

  if(m_subjectHasBeenSet)
  {
   payload.WithString("Subject", m_subject);

  }

  return payload;
}

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws

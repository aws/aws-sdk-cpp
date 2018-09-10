﻿/*
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

#include <aws/cognito-idp/model/NotifyConfigurationType.h>
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

NotifyConfigurationType::NotifyConfigurationType() : 
    m_fromHasBeenSet(false),
    m_replyToHasBeenSet(false),
    m_sourceArnHasBeenSet(false),
    m_blockEmailHasBeenSet(false),
    m_noActionEmailHasBeenSet(false),
    m_mfaEmailHasBeenSet(false)
{
}

NotifyConfigurationType::NotifyConfigurationType(JsonView jsonValue) : 
    m_fromHasBeenSet(false),
    m_replyToHasBeenSet(false),
    m_sourceArnHasBeenSet(false),
    m_blockEmailHasBeenSet(false),
    m_noActionEmailHasBeenSet(false),
    m_mfaEmailHasBeenSet(false)
{
  *this = jsonValue;
}

NotifyConfigurationType& NotifyConfigurationType::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("From"))
  {
    m_from = jsonValue.GetString("From");

    m_fromHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReplyTo"))
  {
    m_replyTo = jsonValue.GetString("ReplyTo");

    m_replyToHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SourceArn"))
  {
    m_sourceArn = jsonValue.GetString("SourceArn");

    m_sourceArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BlockEmail"))
  {
    m_blockEmail = jsonValue.GetObject("BlockEmail");

    m_blockEmailHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NoActionEmail"))
  {
    m_noActionEmail = jsonValue.GetObject("NoActionEmail");

    m_noActionEmailHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MfaEmail"))
  {
    m_mfaEmail = jsonValue.GetObject("MfaEmail");

    m_mfaEmailHasBeenSet = true;
  }

  return *this;
}

JsonValue NotifyConfigurationType::Jsonize() const
{
  JsonValue payload;

  if(m_fromHasBeenSet)
  {
   payload.WithString("From", m_from);

  }

  if(m_replyToHasBeenSet)
  {
   payload.WithString("ReplyTo", m_replyTo);

  }

  if(m_sourceArnHasBeenSet)
  {
   payload.WithString("SourceArn", m_sourceArn);

  }

  if(m_blockEmailHasBeenSet)
  {
   payload.WithObject("BlockEmail", m_blockEmail.Jsonize());

  }

  if(m_noActionEmailHasBeenSet)
  {
   payload.WithObject("NoActionEmail", m_noActionEmail.Jsonize());

  }

  if(m_mfaEmailHasBeenSet)
  {
   payload.WithObject("MfaEmail", m_mfaEmail.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws

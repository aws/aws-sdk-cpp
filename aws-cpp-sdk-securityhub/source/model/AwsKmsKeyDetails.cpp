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

#include <aws/securityhub/model/AwsKmsKeyDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

AwsKmsKeyDetails::AwsKmsKeyDetails() : 
    m_aWSAccountIdHasBeenSet(false),
    m_creationDate(0.0),
    m_creationDateHasBeenSet(false),
    m_keyIdHasBeenSet(false),
    m_keyManagerHasBeenSet(false),
    m_keyStateHasBeenSet(false),
    m_originHasBeenSet(false)
{
}

AwsKmsKeyDetails::AwsKmsKeyDetails(JsonView jsonValue) : 
    m_aWSAccountIdHasBeenSet(false),
    m_creationDate(0.0),
    m_creationDateHasBeenSet(false),
    m_keyIdHasBeenSet(false),
    m_keyManagerHasBeenSet(false),
    m_keyStateHasBeenSet(false),
    m_originHasBeenSet(false)
{
  *this = jsonValue;
}

AwsKmsKeyDetails& AwsKmsKeyDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AWSAccountId"))
  {
    m_aWSAccountId = jsonValue.GetString("AWSAccountId");

    m_aWSAccountIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationDate"))
  {
    m_creationDate = jsonValue.GetDouble("CreationDate");

    m_creationDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("KeyId"))
  {
    m_keyId = jsonValue.GetString("KeyId");

    m_keyIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("KeyManager"))
  {
    m_keyManager = jsonValue.GetString("KeyManager");

    m_keyManagerHasBeenSet = true;
  }

  if(jsonValue.ValueExists("KeyState"))
  {
    m_keyState = jsonValue.GetString("KeyState");

    m_keyStateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Origin"))
  {
    m_origin = jsonValue.GetString("Origin");

    m_originHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsKmsKeyDetails::Jsonize() const
{
  JsonValue payload;

  if(m_aWSAccountIdHasBeenSet)
  {
   payload.WithString("AWSAccountId", m_aWSAccountId);

  }

  if(m_creationDateHasBeenSet)
  {
   payload.WithDouble("CreationDate", m_creationDate);

  }

  if(m_keyIdHasBeenSet)
  {
   payload.WithString("KeyId", m_keyId);

  }

  if(m_keyManagerHasBeenSet)
  {
   payload.WithString("KeyManager", m_keyManager);

  }

  if(m_keyStateHasBeenSet)
  {
   payload.WithString("KeyState", m_keyState);

  }

  if(m_originHasBeenSet)
  {
   payload.WithString("Origin", m_origin);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws

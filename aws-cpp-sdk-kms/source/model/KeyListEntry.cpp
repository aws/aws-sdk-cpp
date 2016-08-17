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
#include <aws/kms/model/KeyListEntry.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace KMS
{
namespace Model
{

KeyListEntry::KeyListEntry() : 
    m_keyIdHasBeenSet(false),
    m_keyArnHasBeenSet(false)
{
}

KeyListEntry::KeyListEntry(const JsonValue& jsonValue) : 
    m_keyIdHasBeenSet(false),
    m_keyArnHasBeenSet(false)
{
  *this = jsonValue;
}

KeyListEntry& KeyListEntry::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("KeyId"))
  {
    m_keyId = jsonValue.GetString("KeyId");

    m_keyIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("KeyArn"))
  {
    m_keyArn = jsonValue.GetString("KeyArn");

    m_keyArnHasBeenSet = true;
  }

  return *this;
}

JsonValue KeyListEntry::Jsonize() const
{
  JsonValue payload;

  if(m_keyIdHasBeenSet)
  {
   payload.WithString("KeyId", m_keyId);

  }

  if(m_keyArnHasBeenSet)
  {
   payload.WithString("KeyArn", m_keyArn);

  }

  return payload;
}

} // namespace Model
} // namespace KMS
} // namespace Aws
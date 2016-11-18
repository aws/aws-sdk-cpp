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
#include <aws/kms/model/AliasListEntry.h>
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

AliasListEntry::AliasListEntry() : 
    m_aliasNameHasBeenSet(false),
    m_aliasArnHasBeenSet(false),
    m_targetKeyIdHasBeenSet(false)
{
}

AliasListEntry::AliasListEntry(const JsonValue& jsonValue) : 
    m_aliasNameHasBeenSet(false),
    m_aliasArnHasBeenSet(false),
    m_targetKeyIdHasBeenSet(false)
{
  *this = jsonValue;
}

AliasListEntry& AliasListEntry::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("AliasName"))
  {
    m_aliasName = jsonValue.GetString("AliasName");

    m_aliasNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AliasArn"))
  {
    m_aliasArn = jsonValue.GetString("AliasArn");

    m_aliasArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TargetKeyId"))
  {
    m_targetKeyId = jsonValue.GetString("TargetKeyId");

    m_targetKeyIdHasBeenSet = true;
  }

  return *this;
}

JsonValue AliasListEntry::Jsonize() const
{
  JsonValue payload;

  if(m_aliasNameHasBeenSet)
  {
   payload.WithString("AliasName", m_aliasName);

  }

  if(m_aliasArnHasBeenSet)
  {
   payload.WithString("AliasArn", m_aliasArn);

  }

  if(m_targetKeyIdHasBeenSet)
  {
   payload.WithString("TargetKeyId", m_targetKeyId);

  }

  return payload;
}

} // namespace Model
} // namespace KMS
} // namespace Aws
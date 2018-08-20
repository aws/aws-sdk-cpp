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

#include <aws/dynamodb/model/SSESpecification.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DynamoDB
{
namespace Model
{

SSESpecification::SSESpecification() : 
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_sSEType(SSEType::NOT_SET),
    m_sSETypeHasBeenSet(false),
    m_kMSMasterKeyIdHasBeenSet(false)
{
}

SSESpecification::SSESpecification(JsonView jsonValue) : 
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_sSEType(SSEType::NOT_SET),
    m_sSETypeHasBeenSet(false),
    m_kMSMasterKeyIdHasBeenSet(false)
{
  *this = jsonValue;
}

SSESpecification& SSESpecification::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Enabled"))
  {
    m_enabled = jsonValue.GetBool("Enabled");

    m_enabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SSEType"))
  {
    m_sSEType = SSETypeMapper::GetSSETypeForName(jsonValue.GetString("SSEType"));

    m_sSETypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("KMSMasterKeyId"))
  {
    m_kMSMasterKeyId = jsonValue.GetString("KMSMasterKeyId");

    m_kMSMasterKeyIdHasBeenSet = true;
  }

  return *this;
}

JsonValue SSESpecification::Jsonize() const
{
  JsonValue payload;

  if(m_enabledHasBeenSet)
  {
   payload.WithBool("Enabled", m_enabled);

  }

  if(m_sSETypeHasBeenSet)
  {
   payload.WithString("SSEType", SSETypeMapper::GetNameForSSEType(m_sSEType));
  }

  if(m_kMSMasterKeyIdHasBeenSet)
  {
   payload.WithString("KMSMasterKeyId", m_kMSMasterKeyId);

  }

  return payload;
}

} // namespace Model
} // namespace DynamoDB
} // namespace Aws

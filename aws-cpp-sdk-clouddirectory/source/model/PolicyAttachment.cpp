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
#include <aws/clouddirectory/model/PolicyAttachment.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudDirectory
{
namespace Model
{

PolicyAttachment::PolicyAttachment() : 
    m_policyIdHasBeenSet(false),
    m_objectIdentifierHasBeenSet(false),
    m_policyTypeHasBeenSet(false)
{
}

PolicyAttachment::PolicyAttachment(const JsonValue& jsonValue) : 
    m_policyIdHasBeenSet(false),
    m_objectIdentifierHasBeenSet(false),
    m_policyTypeHasBeenSet(false)
{
  *this = jsonValue;
}

PolicyAttachment& PolicyAttachment::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("PolicyId"))
  {
    m_policyId = jsonValue.GetString("PolicyId");

    m_policyIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ObjectIdentifier"))
  {
    m_objectIdentifier = jsonValue.GetString("ObjectIdentifier");

    m_objectIdentifierHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PolicyType"))
  {
    m_policyType = jsonValue.GetString("PolicyType");

    m_policyTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue PolicyAttachment::Jsonize() const
{
  JsonValue payload;

  if(m_policyIdHasBeenSet)
  {
   payload.WithString("PolicyId", m_policyId);

  }

  if(m_objectIdentifierHasBeenSet)
  {
   payload.WithString("ObjectIdentifier", m_objectIdentifier);

  }

  if(m_policyTypeHasBeenSet)
  {
   payload.WithString("PolicyType", m_policyType);

  }

  return payload;
}

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
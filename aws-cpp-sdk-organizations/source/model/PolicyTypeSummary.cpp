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
#include <aws/organizations/model/PolicyTypeSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Organizations
{
namespace Model
{

PolicyTypeSummary::PolicyTypeSummary() : 
    m_type(PolicyType::NOT_SET),
    m_typeHasBeenSet(false),
    m_status(PolicyTypeStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
}

PolicyTypeSummary::PolicyTypeSummary(const JsonValue& jsonValue) : 
    m_type(PolicyType::NOT_SET),
    m_typeHasBeenSet(false),
    m_status(PolicyTypeStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
  *this = jsonValue;
}

PolicyTypeSummary& PolicyTypeSummary::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("Type"))
  {
    m_type = PolicyTypeMapper::GetPolicyTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = PolicyTypeStatusMapper::GetPolicyTypeStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  return *this;
}

JsonValue PolicyTypeSummary::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", PolicyTypeMapper::GetNameForPolicyType(m_type));
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", PolicyTypeStatusMapper::GetNameForPolicyTypeStatus(m_status));
  }

  return payload;
}

} // namespace Model
} // namespace Organizations
} // namespace Aws
/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

PolicyTypeSummary::PolicyTypeSummary(JsonView jsonValue) : 
    m_type(PolicyType::NOT_SET),
    m_typeHasBeenSet(false),
    m_status(PolicyTypeStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
  *this = jsonValue;
}

PolicyTypeSummary& PolicyTypeSummary::operator =(JsonView jsonValue)
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

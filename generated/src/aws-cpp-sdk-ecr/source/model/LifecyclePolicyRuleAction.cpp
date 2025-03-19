/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecr/model/LifecyclePolicyRuleAction.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ECR
{
namespace Model
{

LifecyclePolicyRuleAction::LifecyclePolicyRuleAction(JsonView jsonValue)
{
  *this = jsonValue;
}

LifecyclePolicyRuleAction& LifecyclePolicyRuleAction::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("type"))
  {
    m_type = ImageActionTypeMapper::GetImageActionTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  return *this;
}

JsonValue LifecyclePolicyRuleAction::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", ImageActionTypeMapper::GetNameForImageActionType(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace ECR
} // namespace Aws

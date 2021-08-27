/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/RecoveryOptionType.h>
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

RecoveryOptionType::RecoveryOptionType() : 
    m_priority(0),
    m_priorityHasBeenSet(false),
    m_name(RecoveryOptionNameType::NOT_SET),
    m_nameHasBeenSet(false)
{
}

RecoveryOptionType::RecoveryOptionType(JsonView jsonValue) : 
    m_priority(0),
    m_priorityHasBeenSet(false),
    m_name(RecoveryOptionNameType::NOT_SET),
    m_nameHasBeenSet(false)
{
  *this = jsonValue;
}

RecoveryOptionType& RecoveryOptionType::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Priority"))
  {
    m_priority = jsonValue.GetInteger("Priority");

    m_priorityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = RecoveryOptionNameTypeMapper::GetRecoveryOptionNameTypeForName(jsonValue.GetString("Name"));

    m_nameHasBeenSet = true;
  }

  return *this;
}

JsonValue RecoveryOptionType::Jsonize() const
{
  JsonValue payload;

  if(m_priorityHasBeenSet)
  {
   payload.WithInteger("Priority", m_priority);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", RecoveryOptionNameTypeMapper::GetNameForRecoveryOptionNameType(m_name));
  }

  return payload;
}

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws

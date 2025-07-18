/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mailmanager/model/ArchiveFilterCondition.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MailManager
{
namespace Model
{

ArchiveFilterCondition::ArchiveFilterCondition(JsonView jsonValue)
{
  *this = jsonValue;
}

ArchiveFilterCondition& ArchiveFilterCondition::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("StringExpression"))
  {
    m_stringExpression = jsonValue.GetObject("StringExpression");
    m_stringExpressionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("BooleanExpression"))
  {
    m_booleanExpression = jsonValue.GetObject("BooleanExpression");
    m_booleanExpressionHasBeenSet = true;
  }
  return *this;
}

JsonValue ArchiveFilterCondition::Jsonize() const
{
  JsonValue payload;

  if(m_stringExpressionHasBeenSet)
  {
   payload.WithObject("StringExpression", m_stringExpression.Jsonize());

  }

  if(m_booleanExpressionHasBeenSet)
  {
   payload.WithObject("BooleanExpression", m_booleanExpression.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace MailManager
} // namespace Aws

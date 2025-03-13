/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/deadline/model/DateTimeFilterExpression.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace deadline
{
namespace Model
{

DateTimeFilterExpression::DateTimeFilterExpression(JsonView jsonValue)
{
  *this = jsonValue;
}

DateTimeFilterExpression& DateTimeFilterExpression::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("operator"))
  {
    m_operator = ComparisonOperatorMapper::GetComparisonOperatorForName(jsonValue.GetString("operator"));
    m_operatorHasBeenSet = true;
  }
  if(jsonValue.ValueExists("dateTime"))
  {
    m_dateTime = jsonValue.GetString("dateTime");
    m_dateTimeHasBeenSet = true;
  }
  return *this;
}

JsonValue DateTimeFilterExpression::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_operatorHasBeenSet)
  {
   payload.WithString("operator", ComparisonOperatorMapper::GetNameForComparisonOperator(m_operator));
  }

  if(m_dateTimeHasBeenSet)
  {
   payload.WithString("dateTime", m_dateTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

} // namespace Model
} // namespace deadline
} // namespace Aws

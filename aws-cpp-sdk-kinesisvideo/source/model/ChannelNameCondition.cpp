/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesisvideo/model/ChannelNameCondition.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace KinesisVideo
{
namespace Model
{

ChannelNameCondition::ChannelNameCondition() : 
    m_comparisonOperator(ComparisonOperator::NOT_SET),
    m_comparisonOperatorHasBeenSet(false),
    m_comparisonValueHasBeenSet(false)
{
}

ChannelNameCondition::ChannelNameCondition(JsonView jsonValue) : 
    m_comparisonOperator(ComparisonOperator::NOT_SET),
    m_comparisonOperatorHasBeenSet(false),
    m_comparisonValueHasBeenSet(false)
{
  *this = jsonValue;
}

ChannelNameCondition& ChannelNameCondition::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ComparisonOperator"))
  {
    m_comparisonOperator = ComparisonOperatorMapper::GetComparisonOperatorForName(jsonValue.GetString("ComparisonOperator"));

    m_comparisonOperatorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ComparisonValue"))
  {
    m_comparisonValue = jsonValue.GetString("ComparisonValue");

    m_comparisonValueHasBeenSet = true;
  }

  return *this;
}

JsonValue ChannelNameCondition::Jsonize() const
{
  JsonValue payload;

  if(m_comparisonOperatorHasBeenSet)
  {
   payload.WithString("ComparisonOperator", ComparisonOperatorMapper::GetNameForComparisonOperator(m_comparisonOperator));
  }

  if(m_comparisonValueHasBeenSet)
  {
   payload.WithString("ComparisonValue", m_comparisonValue);

  }

  return payload;
}

} // namespace Model
} // namespace KinesisVideo
} // namespace Aws

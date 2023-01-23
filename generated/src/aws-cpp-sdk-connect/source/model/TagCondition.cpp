/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/TagCondition.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Connect
{
namespace Model
{

TagCondition::TagCondition() : 
    m_tagKeyHasBeenSet(false),
    m_tagValueHasBeenSet(false)
{
}

TagCondition::TagCondition(JsonView jsonValue) : 
    m_tagKeyHasBeenSet(false),
    m_tagValueHasBeenSet(false)
{
  *this = jsonValue;
}

TagCondition& TagCondition::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TagKey"))
  {
    m_tagKey = jsonValue.GetString("TagKey");

    m_tagKeyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TagValue"))
  {
    m_tagValue = jsonValue.GetString("TagValue");

    m_tagValueHasBeenSet = true;
  }

  return *this;
}

JsonValue TagCondition::Jsonize() const
{
  JsonValue payload;

  if(m_tagKeyHasBeenSet)
  {
   payload.WithString("TagKey", m_tagKey);

  }

  if(m_tagValueHasBeenSet)
  {
   payload.WithString("TagValue", m_tagValue);

  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws

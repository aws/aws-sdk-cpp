/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/personalize/model/Tag.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Personalize
{
namespace Model
{

Tag::Tag() : 
    m_tagKeyHasBeenSet(false),
    m_tagValueHasBeenSet(false)
{
}

Tag::Tag(JsonView jsonValue) : 
    m_tagKeyHasBeenSet(false),
    m_tagValueHasBeenSet(false)
{
  *this = jsonValue;
}

Tag& Tag::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("tagKey"))
  {
    m_tagKey = jsonValue.GetString("tagKey");

    m_tagKeyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("tagValue"))
  {
    m_tagValue = jsonValue.GetString("tagValue");

    m_tagValueHasBeenSet = true;
  }

  return *this;
}

JsonValue Tag::Jsonize() const
{
  JsonValue payload;

  if(m_tagKeyHasBeenSet)
  {
   payload.WithString("tagKey", m_tagKey);

  }

  if(m_tagValueHasBeenSet)
  {
   payload.WithString("tagValue", m_tagValue);

  }

  return payload;
}

} // namespace Model
} // namespace Personalize
} // namespace Aws

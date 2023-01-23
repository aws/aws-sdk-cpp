/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kms/model/Tag.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace KMS
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

JsonValue Tag::Jsonize() const
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
} // namespace KMS
} // namespace Aws

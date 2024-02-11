/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront-keyvaluestore/model/DeleteKeyRequestListItem.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudFrontKeyValueStore
{
namespace Model
{

DeleteKeyRequestListItem::DeleteKeyRequestListItem() : 
    m_keyHasBeenSet(false)
{
}

DeleteKeyRequestListItem::DeleteKeyRequestListItem(JsonView jsonValue) : 
    m_keyHasBeenSet(false)
{
  *this = jsonValue;
}

DeleteKeyRequestListItem& DeleteKeyRequestListItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Key"))
  {
    m_key = jsonValue.GetString("Key");

    m_keyHasBeenSet = true;
  }

  return *this;
}

JsonValue DeleteKeyRequestListItem::Jsonize() const
{
  JsonValue payload;

  if(m_keyHasBeenSet)
  {
   payload.WithString("Key", m_key);

  }

  return payload;
}

} // namespace Model
} // namespace CloudFrontKeyValueStore
} // namespace Aws

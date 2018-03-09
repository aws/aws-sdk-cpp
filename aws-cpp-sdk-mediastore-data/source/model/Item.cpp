/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/mediastore-data/model/Item.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaStoreData
{
namespace Model
{

Item::Item() : 
    m_nameHasBeenSet(false),
    m_type(ItemType::NOT_SET),
    m_typeHasBeenSet(false),
    m_eTagHasBeenSet(false),
    m_lastModifiedHasBeenSet(false),
    m_contentTypeHasBeenSet(false),
    m_contentLength(0),
    m_contentLengthHasBeenSet(false)
{
}

Item::Item(const JsonValue& jsonValue) : 
    m_nameHasBeenSet(false),
    m_type(ItemType::NOT_SET),
    m_typeHasBeenSet(false),
    m_eTagHasBeenSet(false),
    m_lastModifiedHasBeenSet(false),
    m_contentTypeHasBeenSet(false),
    m_contentLength(0),
    m_contentLengthHasBeenSet(false)
{
  *this = jsonValue;
}

Item& Item::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = ItemTypeMapper::GetItemTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ETag"))
  {
    m_eTag = jsonValue.GetString("ETag");

    m_eTagHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastModified"))
  {
    m_lastModified = jsonValue.GetDouble("LastModified");

    m_lastModifiedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ContentType"))
  {
    m_contentType = jsonValue.GetString("ContentType");

    m_contentTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ContentLength"))
  {
    m_contentLength = jsonValue.GetInt64("ContentLength");

    m_contentLengthHasBeenSet = true;
  }

  return *this;
}

JsonValue Item::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", ItemTypeMapper::GetNameForItemType(m_type));
  }

  if(m_eTagHasBeenSet)
  {
   payload.WithString("ETag", m_eTag);

  }

  if(m_lastModifiedHasBeenSet)
  {
   payload.WithDouble("LastModified", m_lastModified.SecondsWithMSPrecision());
  }

  if(m_contentTypeHasBeenSet)
  {
   payload.WithString("ContentType", m_contentType);

  }

  if(m_contentLengthHasBeenSet)
  {
   payload.WithInt64("ContentLength", m_contentLength);

  }

  return payload;
}

} // namespace Model
} // namespace MediaStoreData
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/m2/model/VsamAttributes.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MainframeModernization
{
namespace Model
{

VsamAttributes::VsamAttributes() : 
    m_alternateKeysHasBeenSet(false),
    m_compressed(false),
    m_compressedHasBeenSet(false),
    m_encodingHasBeenSet(false),
    m_formatHasBeenSet(false),
    m_primaryKeyHasBeenSet(false)
{
}

VsamAttributes::VsamAttributes(JsonView jsonValue) : 
    m_alternateKeysHasBeenSet(false),
    m_compressed(false),
    m_compressedHasBeenSet(false),
    m_encodingHasBeenSet(false),
    m_formatHasBeenSet(false),
    m_primaryKeyHasBeenSet(false)
{
  *this = jsonValue;
}

VsamAttributes& VsamAttributes::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("alternateKeys"))
  {
    Aws::Utils::Array<JsonView> alternateKeysJsonList = jsonValue.GetArray("alternateKeys");
    for(unsigned alternateKeysIndex = 0; alternateKeysIndex < alternateKeysJsonList.GetLength(); ++alternateKeysIndex)
    {
      m_alternateKeys.push_back(alternateKeysJsonList[alternateKeysIndex].AsObject());
    }
    m_alternateKeysHasBeenSet = true;
  }

  if(jsonValue.ValueExists("compressed"))
  {
    m_compressed = jsonValue.GetBool("compressed");

    m_compressedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("encoding"))
  {
    m_encoding = jsonValue.GetString("encoding");

    m_encodingHasBeenSet = true;
  }

  if(jsonValue.ValueExists("format"))
  {
    m_format = jsonValue.GetString("format");

    m_formatHasBeenSet = true;
  }

  if(jsonValue.ValueExists("primaryKey"))
  {
    m_primaryKey = jsonValue.GetObject("primaryKey");

    m_primaryKeyHasBeenSet = true;
  }

  return *this;
}

JsonValue VsamAttributes::Jsonize() const
{
  JsonValue payload;

  if(m_alternateKeysHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> alternateKeysJsonList(m_alternateKeys.size());
   for(unsigned alternateKeysIndex = 0; alternateKeysIndex < alternateKeysJsonList.GetLength(); ++alternateKeysIndex)
   {
     alternateKeysJsonList[alternateKeysIndex].AsObject(m_alternateKeys[alternateKeysIndex].Jsonize());
   }
   payload.WithArray("alternateKeys", std::move(alternateKeysJsonList));

  }

  if(m_compressedHasBeenSet)
  {
   payload.WithBool("compressed", m_compressed);

  }

  if(m_encodingHasBeenSet)
  {
   payload.WithString("encoding", m_encoding);

  }

  if(m_formatHasBeenSet)
  {
   payload.WithString("format", m_format);

  }

  if(m_primaryKeyHasBeenSet)
  {
   payload.WithObject("primaryKey", m_primaryKey.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace MainframeModernization
} // namespace Aws

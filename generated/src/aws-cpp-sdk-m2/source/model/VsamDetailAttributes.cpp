/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/m2/model/VsamDetailAttributes.h>
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

VsamDetailAttributes::VsamDetailAttributes() : 
    m_alternateKeysHasBeenSet(false),
    m_cacheAtStartup(false),
    m_cacheAtStartupHasBeenSet(false),
    m_compressed(false),
    m_compressedHasBeenSet(false),
    m_encodingHasBeenSet(false),
    m_primaryKeyHasBeenSet(false),
    m_recordFormatHasBeenSet(false)
{
}

VsamDetailAttributes::VsamDetailAttributes(JsonView jsonValue) : 
    m_alternateKeysHasBeenSet(false),
    m_cacheAtStartup(false),
    m_cacheAtStartupHasBeenSet(false),
    m_compressed(false),
    m_compressedHasBeenSet(false),
    m_encodingHasBeenSet(false),
    m_primaryKeyHasBeenSet(false),
    m_recordFormatHasBeenSet(false)
{
  *this = jsonValue;
}

VsamDetailAttributes& VsamDetailAttributes::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("cacheAtStartup"))
  {
    m_cacheAtStartup = jsonValue.GetBool("cacheAtStartup");

    m_cacheAtStartupHasBeenSet = true;
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

  if(jsonValue.ValueExists("primaryKey"))
  {
    m_primaryKey = jsonValue.GetObject("primaryKey");

    m_primaryKeyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("recordFormat"))
  {
    m_recordFormat = jsonValue.GetString("recordFormat");

    m_recordFormatHasBeenSet = true;
  }

  return *this;
}

JsonValue VsamDetailAttributes::Jsonize() const
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

  if(m_cacheAtStartupHasBeenSet)
  {
   payload.WithBool("cacheAtStartup", m_cacheAtStartup);

  }

  if(m_compressedHasBeenSet)
  {
   payload.WithBool("compressed", m_compressed);

  }

  if(m_encodingHasBeenSet)
  {
   payload.WithString("encoding", m_encoding);

  }

  if(m_primaryKeyHasBeenSet)
  {
   payload.WithObject("primaryKey", m_primaryKey.Jsonize());

  }

  if(m_recordFormatHasBeenSet)
  {
   payload.WithString("recordFormat", m_recordFormat);

  }

  return payload;
}

} // namespace Model
} // namespace MainframeModernization
} // namespace Aws

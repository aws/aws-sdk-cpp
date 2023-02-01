/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/MetadataKeyValuePair.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Glue
{
namespace Model
{

MetadataKeyValuePair::MetadataKeyValuePair() : 
    m_metadataKeyHasBeenSet(false),
    m_metadataValueHasBeenSet(false)
{
}

MetadataKeyValuePair::MetadataKeyValuePair(JsonView jsonValue) : 
    m_metadataKeyHasBeenSet(false),
    m_metadataValueHasBeenSet(false)
{
  *this = jsonValue;
}

MetadataKeyValuePair& MetadataKeyValuePair::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MetadataKey"))
  {
    m_metadataKey = jsonValue.GetString("MetadataKey");

    m_metadataKeyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MetadataValue"))
  {
    m_metadataValue = jsonValue.GetString("MetadataValue");

    m_metadataValueHasBeenSet = true;
  }

  return *this;
}

JsonValue MetadataKeyValuePair::Jsonize() const
{
  JsonValue payload;

  if(m_metadataKeyHasBeenSet)
  {
   payload.WithString("MetadataKey", m_metadataKey);

  }

  if(m_metadataValueHasBeenSet)
  {
   payload.WithString("MetadataValue", m_metadataValue);

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws

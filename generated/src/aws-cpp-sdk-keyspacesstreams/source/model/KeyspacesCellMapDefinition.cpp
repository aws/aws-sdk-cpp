/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/keyspacesstreams/model/KeyspacesCellMapDefinition.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/keyspacesstreams/model/KeyspacesCellValue.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace KeyspacesStreams
{
namespace Model
{

KeyspacesCellMapDefinition::KeyspacesCellMapDefinition(JsonView jsonValue)
{
  *this = jsonValue;
}

KeyspacesCellMapDefinition& KeyspacesCellMapDefinition::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("key"))
  {
    m_key = Aws::MakeShared<KeyspacesCellValue>("KeyspacesCellMapDefinition", jsonValue.GetObject("key"));
    m_keyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("value"))
  {
    m_value = Aws::MakeShared<KeyspacesCellValue>("KeyspacesCellMapDefinition", jsonValue.GetObject("value"));
    m_valueHasBeenSet = true;
  }
  if(jsonValue.ValueExists("metadata"))
  {
    m_metadata = jsonValue.GetObject("metadata");
    m_metadataHasBeenSet = true;
  }
  return *this;
}

JsonValue KeyspacesCellMapDefinition::Jsonize() const
{
  JsonValue payload;

  if(m_keyHasBeenSet)
  {
   payload.WithObject("key", m_key->Jsonize());

  }

  if(m_valueHasBeenSet)
  {
   payload.WithObject("value", m_value->Jsonize());

  }

  if(m_metadataHasBeenSet)
  {
   payload.WithObject("metadata", m_metadata.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace KeyspacesStreams
} // namespace Aws

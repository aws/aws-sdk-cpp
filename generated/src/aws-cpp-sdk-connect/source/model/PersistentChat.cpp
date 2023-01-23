/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/PersistentChat.h>
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

PersistentChat::PersistentChat() : 
    m_rehydrationType(RehydrationType::NOT_SET),
    m_rehydrationTypeHasBeenSet(false),
    m_sourceContactIdHasBeenSet(false)
{
}

PersistentChat::PersistentChat(JsonView jsonValue) : 
    m_rehydrationType(RehydrationType::NOT_SET),
    m_rehydrationTypeHasBeenSet(false),
    m_sourceContactIdHasBeenSet(false)
{
  *this = jsonValue;
}

PersistentChat& PersistentChat::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RehydrationType"))
  {
    m_rehydrationType = RehydrationTypeMapper::GetRehydrationTypeForName(jsonValue.GetString("RehydrationType"));

    m_rehydrationTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SourceContactId"))
  {
    m_sourceContactId = jsonValue.GetString("SourceContactId");

    m_sourceContactIdHasBeenSet = true;
  }

  return *this;
}

JsonValue PersistentChat::Jsonize() const
{
  JsonValue payload;

  if(m_rehydrationTypeHasBeenSet)
  {
   payload.WithString("RehydrationType", RehydrationTypeMapper::GetNameForRehydrationType(m_rehydrationType));
  }

  if(m_sourceContactIdHasBeenSet)
  {
   payload.WithString("SourceContactId", m_sourceContactId);

  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws

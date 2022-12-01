/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codecatalyst/model/EventPayload.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodeCatalyst
{
namespace Model
{

EventPayload::EventPayload() : 
    m_contentTypeHasBeenSet(false),
    m_dataHasBeenSet(false)
{
}

EventPayload::EventPayload(JsonView jsonValue) : 
    m_contentTypeHasBeenSet(false),
    m_dataHasBeenSet(false)
{
  *this = jsonValue;
}

EventPayload& EventPayload::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("contentType"))
  {
    m_contentType = jsonValue.GetString("contentType");

    m_contentTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("data"))
  {
    m_data = jsonValue.GetString("data");

    m_dataHasBeenSet = true;
  }

  return *this;
}

JsonValue EventPayload::Jsonize() const
{
  JsonValue payload;

  if(m_contentTypeHasBeenSet)
  {
   payload.WithString("contentType", m_contentType);

  }

  if(m_dataHasBeenSet)
  {
   payload.WithString("data", m_data);

  }

  return payload;
}

} // namespace Model
} // namespace CodeCatalyst
} // namespace Aws

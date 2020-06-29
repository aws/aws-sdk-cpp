/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/Facet.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace kendra
{
namespace Model
{

Facet::Facet() : 
    m_documentAttributeKeyHasBeenSet(false)
{
}

Facet::Facet(JsonView jsonValue) : 
    m_documentAttributeKeyHasBeenSet(false)
{
  *this = jsonValue;
}

Facet& Facet::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DocumentAttributeKey"))
  {
    m_documentAttributeKey = jsonValue.GetString("DocumentAttributeKey");

    m_documentAttributeKeyHasBeenSet = true;
  }

  return *this;
}

JsonValue Facet::Jsonize() const
{
  JsonValue payload;

  if(m_documentAttributeKeyHasBeenSet)
  {
   payload.WithString("DocumentAttributeKey", m_documentAttributeKey);

  }

  return payload;
}

} // namespace Model
} // namespace kendra
} // namespace Aws

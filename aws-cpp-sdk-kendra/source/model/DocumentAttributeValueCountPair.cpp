/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/DocumentAttributeValueCountPair.h>
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

DocumentAttributeValueCountPair::DocumentAttributeValueCountPair() : 
    m_documentAttributeValueHasBeenSet(false),
    m_count(0),
    m_countHasBeenSet(false)
{
}

DocumentAttributeValueCountPair::DocumentAttributeValueCountPair(JsonView jsonValue) : 
    m_documentAttributeValueHasBeenSet(false),
    m_count(0),
    m_countHasBeenSet(false)
{
  *this = jsonValue;
}

DocumentAttributeValueCountPair& DocumentAttributeValueCountPair::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DocumentAttributeValue"))
  {
    m_documentAttributeValue = jsonValue.GetObject("DocumentAttributeValue");

    m_documentAttributeValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Count"))
  {
    m_count = jsonValue.GetInteger("Count");

    m_countHasBeenSet = true;
  }

  return *this;
}

JsonValue DocumentAttributeValueCountPair::Jsonize() const
{
  JsonValue payload;

  if(m_documentAttributeValueHasBeenSet)
  {
   payload.WithObject("DocumentAttributeValue", m_documentAttributeValue.Jsonize());

  }

  if(m_countHasBeenSet)
  {
   payload.WithInteger("Count", m_count);

  }

  return payload;
}

} // namespace Model
} // namespace kendra
} // namespace Aws

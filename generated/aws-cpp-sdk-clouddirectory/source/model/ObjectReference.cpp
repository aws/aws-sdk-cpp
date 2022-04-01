/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/clouddirectory/model/ObjectReference.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudDirectory
{
namespace Model
{

ObjectReference::ObjectReference() : 
    m_selectorHasBeenSet(false)
{
}

ObjectReference::ObjectReference(JsonView jsonValue) : 
    m_selectorHasBeenSet(false)
{
  *this = jsonValue;
}

ObjectReference& ObjectReference::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Selector"))
  {
    m_selector = jsonValue.GetString("Selector");

    m_selectorHasBeenSet = true;
  }

  return *this;
}

JsonValue ObjectReference::Jsonize() const
{
  JsonValue payload;

  if(m_selectorHasBeenSet)
  {
   payload.WithString("Selector", m_selector);

  }

  return payload;
}

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws

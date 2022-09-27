/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/identitystore/model/AlternateIdentifier.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IdentityStore
{
namespace Model
{

AlternateIdentifier::AlternateIdentifier() : 
    m_externalIdHasBeenSet(false),
    m_uniqueAttributeHasBeenSet(false)
{
}

AlternateIdentifier::AlternateIdentifier(JsonView jsonValue) : 
    m_externalIdHasBeenSet(false),
    m_uniqueAttributeHasBeenSet(false)
{
  *this = jsonValue;
}

AlternateIdentifier& AlternateIdentifier::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ExternalId"))
  {
    m_externalId = jsonValue.GetObject("ExternalId");

    m_externalIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UniqueAttribute"))
  {
    m_uniqueAttribute = jsonValue.GetObject("UniqueAttribute");

    m_uniqueAttributeHasBeenSet = true;
  }

  return *this;
}

JsonValue AlternateIdentifier::Jsonize() const
{
  JsonValue payload;

  if(m_externalIdHasBeenSet)
  {
   payload.WithObject("ExternalId", m_externalId.Jsonize());

  }

  if(m_uniqueAttributeHasBeenSet)
  {
   payload.WithObject("UniqueAttribute", m_uniqueAttribute.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace IdentityStore
} // namespace Aws

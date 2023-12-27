/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/GrantedEntity.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DataZone
{
namespace Model
{

GrantedEntity::GrantedEntity() : 
    m_listingHasBeenSet(false)
{
}

GrantedEntity::GrantedEntity(JsonView jsonValue) : 
    m_listingHasBeenSet(false)
{
  *this = jsonValue;
}

GrantedEntity& GrantedEntity::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("listing"))
  {
    m_listing = jsonValue.GetObject("listing");

    m_listingHasBeenSet = true;
  }

  return *this;
}

JsonValue GrantedEntity::Jsonize() const
{
  JsonValue payload;

  if(m_listingHasBeenSet)
  {
   payload.WithObject("listing", m_listing.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace DataZone
} // namespace Aws

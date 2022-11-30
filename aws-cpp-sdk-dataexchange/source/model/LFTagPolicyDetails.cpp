/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dataexchange/model/LFTagPolicyDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DataExchange
{
namespace Model
{

LFTagPolicyDetails::LFTagPolicyDetails() : 
    m_catalogIdHasBeenSet(false),
    m_resourceType(LFResourceType::NOT_SET),
    m_resourceTypeHasBeenSet(false),
    m_resourceDetailsHasBeenSet(false)
{
}

LFTagPolicyDetails::LFTagPolicyDetails(JsonView jsonValue) : 
    m_catalogIdHasBeenSet(false),
    m_resourceType(LFResourceType::NOT_SET),
    m_resourceTypeHasBeenSet(false),
    m_resourceDetailsHasBeenSet(false)
{
  *this = jsonValue;
}

LFTagPolicyDetails& LFTagPolicyDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CatalogId"))
  {
    m_catalogId = jsonValue.GetString("CatalogId");

    m_catalogIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceType"))
  {
    m_resourceType = LFResourceTypeMapper::GetLFResourceTypeForName(jsonValue.GetString("ResourceType"));

    m_resourceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceDetails"))
  {
    m_resourceDetails = jsonValue.GetObject("ResourceDetails");

    m_resourceDetailsHasBeenSet = true;
  }

  return *this;
}

JsonValue LFTagPolicyDetails::Jsonize() const
{
  JsonValue payload;

  if(m_catalogIdHasBeenSet)
  {
   payload.WithString("CatalogId", m_catalogId);

  }

  if(m_resourceTypeHasBeenSet)
  {
   payload.WithString("ResourceType", LFResourceTypeMapper::GetNameForLFResourceType(m_resourceType));
  }

  if(m_resourceDetailsHasBeenSet)
  {
   payload.WithObject("ResourceDetails", m_resourceDetails.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace DataExchange
} // namespace Aws

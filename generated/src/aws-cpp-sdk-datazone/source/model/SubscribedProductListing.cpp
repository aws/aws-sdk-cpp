/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/SubscribedProductListing.h>
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

SubscribedProductListing::SubscribedProductListing(JsonView jsonValue)
{
  *this = jsonValue;
}

SubscribedProductListing& SubscribedProductListing::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("assetListings"))
  {
    Aws::Utils::Array<JsonView> assetListingsJsonList = jsonValue.GetArray("assetListings");
    for(unsigned assetListingsIndex = 0; assetListingsIndex < assetListingsJsonList.GetLength(); ++assetListingsIndex)
    {
      m_assetListings.push_back(assetListingsJsonList[assetListingsIndex].AsObject());
    }
    m_assetListingsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("entityId"))
  {
    m_entityId = jsonValue.GetString("entityId");
    m_entityIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("entityRevision"))
  {
    m_entityRevision = jsonValue.GetString("entityRevision");
    m_entityRevisionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("glossaryTerms"))
  {
    Aws::Utils::Array<JsonView> glossaryTermsJsonList = jsonValue.GetArray("glossaryTerms");
    for(unsigned glossaryTermsIndex = 0; glossaryTermsIndex < glossaryTermsJsonList.GetLength(); ++glossaryTermsIndex)
    {
      m_glossaryTerms.push_back(glossaryTermsJsonList[glossaryTermsIndex].AsObject());
    }
    m_glossaryTermsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  return *this;
}

JsonValue SubscribedProductListing::Jsonize() const
{
  JsonValue payload;

  if(m_assetListingsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> assetListingsJsonList(m_assetListings.size());
   for(unsigned assetListingsIndex = 0; assetListingsIndex < assetListingsJsonList.GetLength(); ++assetListingsIndex)
   {
     assetListingsJsonList[assetListingsIndex].AsObject(m_assetListings[assetListingsIndex].Jsonize());
   }
   payload.WithArray("assetListings", std::move(assetListingsJsonList));

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_entityIdHasBeenSet)
  {
   payload.WithString("entityId", m_entityId);

  }

  if(m_entityRevisionHasBeenSet)
  {
   payload.WithString("entityRevision", m_entityRevision);

  }

  if(m_glossaryTermsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> glossaryTermsJsonList(m_glossaryTerms.size());
   for(unsigned glossaryTermsIndex = 0; glossaryTermsIndex < glossaryTermsJsonList.GetLength(); ++glossaryTermsIndex)
   {
     glossaryTermsJsonList[glossaryTermsIndex].AsObject(m_glossaryTerms[glossaryTermsIndex].Jsonize());
   }
   payload.WithArray("glossaryTerms", std::move(glossaryTermsJsonList));

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  return payload;
}

} // namespace Model
} // namespace DataZone
} // namespace Aws

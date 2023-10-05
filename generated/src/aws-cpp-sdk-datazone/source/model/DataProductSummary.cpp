/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/DataProductSummary.h>
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

DataProductSummary::DataProductSummary() : 
    m_createdAtHasBeenSet(false),
    m_createdByHasBeenSet(false),
    m_dataProductItemsHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_domainIdHasBeenSet(false),
    m_glossaryTermsHasBeenSet(false),
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_owningProjectIdHasBeenSet(false),
    m_updatedAtHasBeenSet(false),
    m_updatedByHasBeenSet(false)
{
}

DataProductSummary::DataProductSummary(JsonView jsonValue) : 
    m_createdAtHasBeenSet(false),
    m_createdByHasBeenSet(false),
    m_dataProductItemsHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_domainIdHasBeenSet(false),
    m_glossaryTermsHasBeenSet(false),
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_owningProjectIdHasBeenSet(false),
    m_updatedAtHasBeenSet(false),
    m_updatedByHasBeenSet(false)
{
  *this = jsonValue;
}

DataProductSummary& DataProductSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetDouble("createdAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("createdBy"))
  {
    m_createdBy = jsonValue.GetString("createdBy");

    m_createdByHasBeenSet = true;
  }

  if(jsonValue.ValueExists("dataProductItems"))
  {
    Aws::Utils::Array<JsonView> dataProductItemsJsonList = jsonValue.GetArray("dataProductItems");
    for(unsigned dataProductItemsIndex = 0; dataProductItemsIndex < dataProductItemsJsonList.GetLength(); ++dataProductItemsIndex)
    {
      m_dataProductItems.push_back(dataProductItemsJsonList[dataProductItemsIndex].AsObject());
    }
    m_dataProductItemsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("domainId"))
  {
    m_domainId = jsonValue.GetString("domainId");

    m_domainIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("glossaryTerms"))
  {
    Aws::Utils::Array<JsonView> glossaryTermsJsonList = jsonValue.GetArray("glossaryTerms");
    for(unsigned glossaryTermsIndex = 0; glossaryTermsIndex < glossaryTermsJsonList.GetLength(); ++glossaryTermsIndex)
    {
      m_glossaryTerms.push_back(glossaryTermsJsonList[glossaryTermsIndex].AsString());
    }
    m_glossaryTermsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("owningProjectId"))
  {
    m_owningProjectId = jsonValue.GetString("owningProjectId");

    m_owningProjectIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("updatedAt"))
  {
    m_updatedAt = jsonValue.GetDouble("updatedAt");

    m_updatedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("updatedBy"))
  {
    m_updatedBy = jsonValue.GetString("updatedBy");

    m_updatedByHasBeenSet = true;
  }

  return *this;
}

JsonValue DataProductSummary::Jsonize() const
{
  JsonValue payload;

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  if(m_createdByHasBeenSet)
  {
   payload.WithString("createdBy", m_createdBy);

  }

  if(m_dataProductItemsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> dataProductItemsJsonList(m_dataProductItems.size());
   for(unsigned dataProductItemsIndex = 0; dataProductItemsIndex < dataProductItemsJsonList.GetLength(); ++dataProductItemsIndex)
   {
     dataProductItemsJsonList[dataProductItemsIndex].AsObject(m_dataProductItems[dataProductItemsIndex].Jsonize());
   }
   payload.WithArray("dataProductItems", std::move(dataProductItemsJsonList));

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_domainIdHasBeenSet)
  {
   payload.WithString("domainId", m_domainId);

  }

  if(m_glossaryTermsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> glossaryTermsJsonList(m_glossaryTerms.size());
   for(unsigned glossaryTermsIndex = 0; glossaryTermsIndex < glossaryTermsJsonList.GetLength(); ++glossaryTermsIndex)
   {
     glossaryTermsJsonList[glossaryTermsIndex].AsString(m_glossaryTerms[glossaryTermsIndex]);
   }
   payload.WithArray("glossaryTerms", std::move(glossaryTermsJsonList));

  }

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_owningProjectIdHasBeenSet)
  {
   payload.WithString("owningProjectId", m_owningProjectId);

  }

  if(m_updatedAtHasBeenSet)
  {
   payload.WithDouble("updatedAt", m_updatedAt.SecondsWithMSPrecision());
  }

  if(m_updatedByHasBeenSet)
  {
   payload.WithString("updatedBy", m_updatedBy);

  }

  return payload;
}

} // namespace Model
} // namespace DataZone
} // namespace Aws

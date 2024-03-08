/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/AssetItem.h>
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

AssetItem::AssetItem() : 
    m_additionalAttributesHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_createdByHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_domainIdHasBeenSet(false),
    m_externalIdentifierHasBeenSet(false),
    m_firstRevisionCreatedAtHasBeenSet(false),
    m_firstRevisionCreatedByHasBeenSet(false),
    m_glossaryTermsHasBeenSet(false),
    m_identifierHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_owningProjectIdHasBeenSet(false),
    m_typeIdentifierHasBeenSet(false),
    m_typeRevisionHasBeenSet(false)
{
}

AssetItem::AssetItem(JsonView jsonValue) : 
    m_additionalAttributesHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_createdByHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_domainIdHasBeenSet(false),
    m_externalIdentifierHasBeenSet(false),
    m_firstRevisionCreatedAtHasBeenSet(false),
    m_firstRevisionCreatedByHasBeenSet(false),
    m_glossaryTermsHasBeenSet(false),
    m_identifierHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_owningProjectIdHasBeenSet(false),
    m_typeIdentifierHasBeenSet(false),
    m_typeRevisionHasBeenSet(false)
{
  *this = jsonValue;
}

AssetItem& AssetItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("additionalAttributes"))
  {
    m_additionalAttributes = jsonValue.GetObject("additionalAttributes");

    m_additionalAttributesHasBeenSet = true;
  }

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

  if(jsonValue.ValueExists("externalIdentifier"))
  {
    m_externalIdentifier = jsonValue.GetString("externalIdentifier");

    m_externalIdentifierHasBeenSet = true;
  }

  if(jsonValue.ValueExists("firstRevisionCreatedAt"))
  {
    m_firstRevisionCreatedAt = jsonValue.GetDouble("firstRevisionCreatedAt");

    m_firstRevisionCreatedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("firstRevisionCreatedBy"))
  {
    m_firstRevisionCreatedBy = jsonValue.GetString("firstRevisionCreatedBy");

    m_firstRevisionCreatedByHasBeenSet = true;
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

  if(jsonValue.ValueExists("identifier"))
  {
    m_identifier = jsonValue.GetString("identifier");

    m_identifierHasBeenSet = true;
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

  if(jsonValue.ValueExists("typeIdentifier"))
  {
    m_typeIdentifier = jsonValue.GetString("typeIdentifier");

    m_typeIdentifierHasBeenSet = true;
  }

  if(jsonValue.ValueExists("typeRevision"))
  {
    m_typeRevision = jsonValue.GetString("typeRevision");

    m_typeRevisionHasBeenSet = true;
  }

  return *this;
}

JsonValue AssetItem::Jsonize() const
{
  JsonValue payload;

  if(m_additionalAttributesHasBeenSet)
  {
   payload.WithObject("additionalAttributes", m_additionalAttributes.Jsonize());

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  if(m_createdByHasBeenSet)
  {
   payload.WithString("createdBy", m_createdBy);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_domainIdHasBeenSet)
  {
   payload.WithString("domainId", m_domainId);

  }

  if(m_externalIdentifierHasBeenSet)
  {
   payload.WithString("externalIdentifier", m_externalIdentifier);

  }

  if(m_firstRevisionCreatedAtHasBeenSet)
  {
   payload.WithDouble("firstRevisionCreatedAt", m_firstRevisionCreatedAt.SecondsWithMSPrecision());
  }

  if(m_firstRevisionCreatedByHasBeenSet)
  {
   payload.WithString("firstRevisionCreatedBy", m_firstRevisionCreatedBy);

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

  if(m_identifierHasBeenSet)
  {
   payload.WithString("identifier", m_identifier);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_owningProjectIdHasBeenSet)
  {
   payload.WithString("owningProjectId", m_owningProjectId);

  }

  if(m_typeIdentifierHasBeenSet)
  {
   payload.WithString("typeIdentifier", m_typeIdentifier);

  }

  if(m_typeRevisionHasBeenSet)
  {
   payload.WithString("typeRevision", m_typeRevision);

  }

  return payload;
}

} // namespace Model
} // namespace DataZone
} // namespace Aws

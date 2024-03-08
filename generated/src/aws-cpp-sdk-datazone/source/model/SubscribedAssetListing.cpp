/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/SubscribedAssetListing.h>
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

SubscribedAssetListing::SubscribedAssetListing() : 
    m_entityIdHasBeenSet(false),
    m_entityRevisionHasBeenSet(false),
    m_entityTypeHasBeenSet(false),
    m_formsHasBeenSet(false),
    m_glossaryTermsHasBeenSet(false)
{
}

SubscribedAssetListing::SubscribedAssetListing(JsonView jsonValue) : 
    m_entityIdHasBeenSet(false),
    m_entityRevisionHasBeenSet(false),
    m_entityTypeHasBeenSet(false),
    m_formsHasBeenSet(false),
    m_glossaryTermsHasBeenSet(false)
{
  *this = jsonValue;
}

SubscribedAssetListing& SubscribedAssetListing::operator =(JsonView jsonValue)
{
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

  if(jsonValue.ValueExists("entityType"))
  {
    m_entityType = jsonValue.GetString("entityType");

    m_entityTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("forms"))
  {
    m_forms = jsonValue.GetString("forms");

    m_formsHasBeenSet = true;
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

  return *this;
}

JsonValue SubscribedAssetListing::Jsonize() const
{
  JsonValue payload;

  if(m_entityIdHasBeenSet)
  {
   payload.WithString("entityId", m_entityId);

  }

  if(m_entityRevisionHasBeenSet)
  {
   payload.WithString("entityRevision", m_entityRevision);

  }

  if(m_entityTypeHasBeenSet)
  {
   payload.WithString("entityType", m_entityType);

  }

  if(m_formsHasBeenSet)
  {
   payload.WithString("forms", m_forms);

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

  return payload;
}

} // namespace Model
} // namespace DataZone
} // namespace Aws

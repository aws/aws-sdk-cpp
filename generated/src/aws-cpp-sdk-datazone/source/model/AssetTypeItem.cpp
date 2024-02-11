/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/AssetTypeItem.h>
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

AssetTypeItem::AssetTypeItem() : 
    m_createdAtHasBeenSet(false),
    m_createdByHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_domainIdHasBeenSet(false),
    m_formsOutputHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_originDomainIdHasBeenSet(false),
    m_originProjectIdHasBeenSet(false),
    m_owningProjectIdHasBeenSet(false),
    m_revisionHasBeenSet(false),
    m_updatedAtHasBeenSet(false),
    m_updatedByHasBeenSet(false)
{
}

AssetTypeItem::AssetTypeItem(JsonView jsonValue) : 
    m_createdAtHasBeenSet(false),
    m_createdByHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_domainIdHasBeenSet(false),
    m_formsOutputHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_originDomainIdHasBeenSet(false),
    m_originProjectIdHasBeenSet(false),
    m_owningProjectIdHasBeenSet(false),
    m_revisionHasBeenSet(false),
    m_updatedAtHasBeenSet(false),
    m_updatedByHasBeenSet(false)
{
  *this = jsonValue;
}

AssetTypeItem& AssetTypeItem::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("formsOutput"))
  {
    Aws::Map<Aws::String, JsonView> formsOutputJsonMap = jsonValue.GetObject("formsOutput").GetAllObjects();
    for(auto& formsOutputItem : formsOutputJsonMap)
    {
      m_formsOutput[formsOutputItem.first] = formsOutputItem.second.AsObject();
    }
    m_formsOutputHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("originDomainId"))
  {
    m_originDomainId = jsonValue.GetString("originDomainId");

    m_originDomainIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("originProjectId"))
  {
    m_originProjectId = jsonValue.GetString("originProjectId");

    m_originProjectIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("owningProjectId"))
  {
    m_owningProjectId = jsonValue.GetString("owningProjectId");

    m_owningProjectIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("revision"))
  {
    m_revision = jsonValue.GetString("revision");

    m_revisionHasBeenSet = true;
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

JsonValue AssetTypeItem::Jsonize() const
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

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_domainIdHasBeenSet)
  {
   payload.WithString("domainId", m_domainId);

  }

  if(m_formsOutputHasBeenSet)
  {
   JsonValue formsOutputJsonMap;
   for(auto& formsOutputItem : m_formsOutput)
   {
     formsOutputJsonMap.WithObject(formsOutputItem.first, formsOutputItem.second.Jsonize());
   }
   payload.WithObject("formsOutput", std::move(formsOutputJsonMap));

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_originDomainIdHasBeenSet)
  {
   payload.WithString("originDomainId", m_originDomainId);

  }

  if(m_originProjectIdHasBeenSet)
  {
   payload.WithString("originProjectId", m_originProjectId);

  }

  if(m_owningProjectIdHasBeenSet)
  {
   payload.WithString("owningProjectId", m_owningProjectId);

  }

  if(m_revisionHasBeenSet)
  {
   payload.WithString("revision", m_revision);

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

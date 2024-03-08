/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/FormTypeData.h>
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

FormTypeData::FormTypeData() : 
    m_createdAtHasBeenSet(false),
    m_createdByHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_domainIdHasBeenSet(false),
    m_importsHasBeenSet(false),
    m_modelHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_originDomainIdHasBeenSet(false),
    m_originProjectIdHasBeenSet(false),
    m_owningProjectIdHasBeenSet(false),
    m_revisionHasBeenSet(false),
    m_status(FormTypeStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
}

FormTypeData::FormTypeData(JsonView jsonValue) : 
    m_createdAtHasBeenSet(false),
    m_createdByHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_domainIdHasBeenSet(false),
    m_importsHasBeenSet(false),
    m_modelHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_originDomainIdHasBeenSet(false),
    m_originProjectIdHasBeenSet(false),
    m_owningProjectIdHasBeenSet(false),
    m_revisionHasBeenSet(false),
    m_status(FormTypeStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
  *this = jsonValue;
}

FormTypeData& FormTypeData::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("imports"))
  {
    Aws::Utils::Array<JsonView> importsJsonList = jsonValue.GetArray("imports");
    for(unsigned importsIndex = 0; importsIndex < importsJsonList.GetLength(); ++importsIndex)
    {
      m_imports.push_back(importsJsonList[importsIndex].AsObject());
    }
    m_importsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("model"))
  {
    m_model = jsonValue.GetObject("model");

    m_modelHasBeenSet = true;
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

  if(jsonValue.ValueExists("status"))
  {
    m_status = FormTypeStatusMapper::GetFormTypeStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  return *this;
}

JsonValue FormTypeData::Jsonize() const
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

  if(m_importsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> importsJsonList(m_imports.size());
   for(unsigned importsIndex = 0; importsIndex < importsJsonList.GetLength(); ++importsIndex)
   {
     importsJsonList[importsIndex].AsObject(m_imports[importsIndex].Jsonize());
   }
   payload.WithArray("imports", std::move(importsJsonList));

  }

  if(m_modelHasBeenSet)
  {
   payload.WithObject("model", m_model.Jsonize());

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

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", FormTypeStatusMapper::GetNameForFormTypeStatus(m_status));
  }

  return payload;
}

} // namespace Model
} // namespace DataZone
} // namespace Aws

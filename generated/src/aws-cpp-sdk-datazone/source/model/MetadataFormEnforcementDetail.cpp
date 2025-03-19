/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/MetadataFormEnforcementDetail.h>
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

MetadataFormEnforcementDetail::MetadataFormEnforcementDetail(JsonView jsonValue)
{
  *this = jsonValue;
}

MetadataFormEnforcementDetail& MetadataFormEnforcementDetail::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("requiredMetadataForms"))
  {
    Aws::Utils::Array<JsonView> requiredMetadataFormsJsonList = jsonValue.GetArray("requiredMetadataForms");
    for(unsigned requiredMetadataFormsIndex = 0; requiredMetadataFormsIndex < requiredMetadataFormsJsonList.GetLength(); ++requiredMetadataFormsIndex)
    {
      m_requiredMetadataForms.push_back(requiredMetadataFormsJsonList[requiredMetadataFormsIndex].AsObject());
    }
    m_requiredMetadataFormsHasBeenSet = true;
  }
  return *this;
}

JsonValue MetadataFormEnforcementDetail::Jsonize() const
{
  JsonValue payload;

  if(m_requiredMetadataFormsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> requiredMetadataFormsJsonList(m_requiredMetadataForms.size());
   for(unsigned requiredMetadataFormsIndex = 0; requiredMetadataFormsIndex < requiredMetadataFormsJsonList.GetLength(); ++requiredMetadataFormsIndex)
   {
     requiredMetadataFormsJsonList[requiredMetadataFormsIndex].AsObject(m_requiredMetadataForms[requiredMetadataFormsIndex].Jsonize());
   }
   payload.WithArray("requiredMetadataForms", std::move(requiredMetadataFormsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace DataZone
} // namespace Aws

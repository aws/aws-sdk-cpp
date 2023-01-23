/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fms/model/ComplianceViolator.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace FMS
{
namespace Model
{

ComplianceViolator::ComplianceViolator() : 
    m_resourceIdHasBeenSet(false),
    m_violationReason(ViolationReason::NOT_SET),
    m_violationReasonHasBeenSet(false),
    m_resourceTypeHasBeenSet(false),
    m_metadataHasBeenSet(false)
{
}

ComplianceViolator::ComplianceViolator(JsonView jsonValue) : 
    m_resourceIdHasBeenSet(false),
    m_violationReason(ViolationReason::NOT_SET),
    m_violationReasonHasBeenSet(false),
    m_resourceTypeHasBeenSet(false),
    m_metadataHasBeenSet(false)
{
  *this = jsonValue;
}

ComplianceViolator& ComplianceViolator::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ResourceId"))
  {
    m_resourceId = jsonValue.GetString("ResourceId");

    m_resourceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ViolationReason"))
  {
    m_violationReason = ViolationReasonMapper::GetViolationReasonForName(jsonValue.GetString("ViolationReason"));

    m_violationReasonHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceType"))
  {
    m_resourceType = jsonValue.GetString("ResourceType");

    m_resourceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Metadata"))
  {
    Aws::Map<Aws::String, JsonView> metadataJsonMap = jsonValue.GetObject("Metadata").GetAllObjects();
    for(auto& metadataItem : metadataJsonMap)
    {
      m_metadata[metadataItem.first] = metadataItem.second.AsString();
    }
    m_metadataHasBeenSet = true;
  }

  return *this;
}

JsonValue ComplianceViolator::Jsonize() const
{
  JsonValue payload;

  if(m_resourceIdHasBeenSet)
  {
   payload.WithString("ResourceId", m_resourceId);

  }

  if(m_violationReasonHasBeenSet)
  {
   payload.WithString("ViolationReason", ViolationReasonMapper::GetNameForViolationReason(m_violationReason));
  }

  if(m_resourceTypeHasBeenSet)
  {
   payload.WithString("ResourceType", m_resourceType);

  }

  if(m_metadataHasBeenSet)
  {
   JsonValue metadataJsonMap;
   for(auto& metadataItem : m_metadata)
   {
     metadataJsonMap.WithString(metadataItem.first, metadataItem.second);
   }
   payload.WithObject("Metadata", std::move(metadataJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace FMS
} // namespace Aws

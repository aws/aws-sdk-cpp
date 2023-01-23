/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/model/ComplianceByResource.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ConfigService
{
namespace Model
{

ComplianceByResource::ComplianceByResource() : 
    m_resourceTypeHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_complianceHasBeenSet(false)
{
}

ComplianceByResource::ComplianceByResource(JsonView jsonValue) : 
    m_resourceTypeHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_complianceHasBeenSet(false)
{
  *this = jsonValue;
}

ComplianceByResource& ComplianceByResource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ResourceType"))
  {
    m_resourceType = jsonValue.GetString("ResourceType");

    m_resourceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceId"))
  {
    m_resourceId = jsonValue.GetString("ResourceId");

    m_resourceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Compliance"))
  {
    m_compliance = jsonValue.GetObject("Compliance");

    m_complianceHasBeenSet = true;
  }

  return *this;
}

JsonValue ComplianceByResource::Jsonize() const
{
  JsonValue payload;

  if(m_resourceTypeHasBeenSet)
  {
   payload.WithString("ResourceType", m_resourceType);

  }

  if(m_resourceIdHasBeenSet)
  {
   payload.WithString("ResourceId", m_resourceId);

  }

  if(m_complianceHasBeenSet)
  {
   payload.WithObject("Compliance", m_compliance.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ConfigService
} // namespace Aws

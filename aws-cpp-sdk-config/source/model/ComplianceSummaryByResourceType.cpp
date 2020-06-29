/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/model/ComplianceSummaryByResourceType.h>
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

ComplianceSummaryByResourceType::ComplianceSummaryByResourceType() : 
    m_resourceTypeHasBeenSet(false),
    m_complianceSummaryHasBeenSet(false)
{
}

ComplianceSummaryByResourceType::ComplianceSummaryByResourceType(JsonView jsonValue) : 
    m_resourceTypeHasBeenSet(false),
    m_complianceSummaryHasBeenSet(false)
{
  *this = jsonValue;
}

ComplianceSummaryByResourceType& ComplianceSummaryByResourceType::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ResourceType"))
  {
    m_resourceType = jsonValue.GetString("ResourceType");

    m_resourceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ComplianceSummary"))
  {
    m_complianceSummary = jsonValue.GetObject("ComplianceSummary");

    m_complianceSummaryHasBeenSet = true;
  }

  return *this;
}

JsonValue ComplianceSummaryByResourceType::Jsonize() const
{
  JsonValue payload;

  if(m_resourceTypeHasBeenSet)
  {
   payload.WithString("ResourceType", m_resourceType);

  }

  if(m_complianceSummaryHasBeenSet)
  {
   payload.WithObject("ComplianceSummary", m_complianceSummary.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ConfigService
} // namespace Aws

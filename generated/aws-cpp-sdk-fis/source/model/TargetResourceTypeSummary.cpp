/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fis/model/TargetResourceTypeSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace FIS
{
namespace Model
{

TargetResourceTypeSummary::TargetResourceTypeSummary() : 
    m_resourceTypeHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

TargetResourceTypeSummary::TargetResourceTypeSummary(JsonView jsonValue) : 
    m_resourceTypeHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
  *this = jsonValue;
}

TargetResourceTypeSummary& TargetResourceTypeSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("resourceType"))
  {
    m_resourceType = jsonValue.GetString("resourceType");

    m_resourceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  return *this;
}

JsonValue TargetResourceTypeSummary::Jsonize() const
{
  JsonValue payload;

  if(m_resourceTypeHasBeenSet)
  {
   payload.WithString("resourceType", m_resourceType);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  return payload;
}

} // namespace Model
} // namespace FIS
} // namespace Aws

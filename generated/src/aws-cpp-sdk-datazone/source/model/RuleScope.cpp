/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/RuleScope.h>
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

RuleScope::RuleScope(JsonView jsonValue)
{
  *this = jsonValue;
}

RuleScope& RuleScope::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("assetType"))
  {
    m_assetType = jsonValue.GetObject("assetType");
    m_assetTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("dataProduct"))
  {
    m_dataProduct = jsonValue.GetBool("dataProduct");
    m_dataProductHasBeenSet = true;
  }
  if(jsonValue.ValueExists("project"))
  {
    m_project = jsonValue.GetObject("project");
    m_projectHasBeenSet = true;
  }
  return *this;
}

JsonValue RuleScope::Jsonize() const
{
  JsonValue payload;

  if(m_assetTypeHasBeenSet)
  {
   payload.WithObject("assetType", m_assetType.Jsonize());

  }

  if(m_dataProductHasBeenSet)
  {
   payload.WithBool("dataProduct", m_dataProduct);

  }

  if(m_projectHasBeenSet)
  {
   payload.WithObject("project", m_project.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace DataZone
} // namespace Aws

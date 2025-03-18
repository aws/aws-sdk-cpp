/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eks/model/AddonCompatibilityDetail.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EKS
{
namespace Model
{

AddonCompatibilityDetail::AddonCompatibilityDetail(JsonView jsonValue)
{
  *this = jsonValue;
}

AddonCompatibilityDetail& AddonCompatibilityDetail::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("compatibleVersions"))
  {
    Aws::Utils::Array<JsonView> compatibleVersionsJsonList = jsonValue.GetArray("compatibleVersions");
    for(unsigned compatibleVersionsIndex = 0; compatibleVersionsIndex < compatibleVersionsJsonList.GetLength(); ++compatibleVersionsIndex)
    {
      m_compatibleVersions.push_back(compatibleVersionsJsonList[compatibleVersionsIndex].AsString());
    }
    m_compatibleVersionsHasBeenSet = true;
  }
  return *this;
}

JsonValue AddonCompatibilityDetail::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_compatibleVersionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> compatibleVersionsJsonList(m_compatibleVersions.size());
   for(unsigned compatibleVersionsIndex = 0; compatibleVersionsIndex < compatibleVersionsJsonList.GetLength(); ++compatibleVersionsIndex)
   {
     compatibleVersionsJsonList[compatibleVersionsIndex].AsString(m_compatibleVersions[compatibleVersionsIndex]);
   }
   payload.WithArray("compatibleVersions", std::move(compatibleVersionsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace EKS
} // namespace Aws

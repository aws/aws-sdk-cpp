/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/clouddirectory/model/PolicyToPath.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudDirectory
{
namespace Model
{

PolicyToPath::PolicyToPath() : 
    m_pathHasBeenSet(false),
    m_policiesHasBeenSet(false)
{
}

PolicyToPath::PolicyToPath(JsonView jsonValue) : 
    m_pathHasBeenSet(false),
    m_policiesHasBeenSet(false)
{
  *this = jsonValue;
}

PolicyToPath& PolicyToPath::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Path"))
  {
    m_path = jsonValue.GetString("Path");

    m_pathHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Policies"))
  {
    Aws::Utils::Array<JsonView> policiesJsonList = jsonValue.GetArray("Policies");
    for(unsigned policiesIndex = 0; policiesIndex < policiesJsonList.GetLength(); ++policiesIndex)
    {
      m_policies.push_back(policiesJsonList[policiesIndex].AsObject());
    }
    m_policiesHasBeenSet = true;
  }

  return *this;
}

JsonValue PolicyToPath::Jsonize() const
{
  JsonValue payload;

  if(m_pathHasBeenSet)
  {
   payload.WithString("Path", m_path);

  }

  if(m_policiesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> policiesJsonList(m_policies.size());
   for(unsigned policiesIndex = 0; policiesIndex < policiesJsonList.GetLength(); ++policiesIndex)
   {
     policiesJsonList[policiesIndex].AsObject(m_policies[policiesIndex].Jsonize());
   }
   payload.WithArray("Policies", std::move(policiesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer/model/PreferredResource.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ComputeOptimizer
{
namespace Model
{

PreferredResource::PreferredResource() : 
    m_name(PreferredResourceName::NOT_SET),
    m_nameHasBeenSet(false),
    m_includeListHasBeenSet(false),
    m_excludeListHasBeenSet(false)
{
}

PreferredResource::PreferredResource(JsonView jsonValue) : 
    m_name(PreferredResourceName::NOT_SET),
    m_nameHasBeenSet(false),
    m_includeListHasBeenSet(false),
    m_excludeListHasBeenSet(false)
{
  *this = jsonValue;
}

PreferredResource& PreferredResource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = PreferredResourceNameMapper::GetPreferredResourceNameForName(jsonValue.GetString("name"));

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("includeList"))
  {
    Aws::Utils::Array<JsonView> includeListJsonList = jsonValue.GetArray("includeList");
    for(unsigned includeListIndex = 0; includeListIndex < includeListJsonList.GetLength(); ++includeListIndex)
    {
      m_includeList.push_back(includeListJsonList[includeListIndex].AsString());
    }
    m_includeListHasBeenSet = true;
  }

  if(jsonValue.ValueExists("excludeList"))
  {
    Aws::Utils::Array<JsonView> excludeListJsonList = jsonValue.GetArray("excludeList");
    for(unsigned excludeListIndex = 0; excludeListIndex < excludeListJsonList.GetLength(); ++excludeListIndex)
    {
      m_excludeList.push_back(excludeListJsonList[excludeListIndex].AsString());
    }
    m_excludeListHasBeenSet = true;
  }

  return *this;
}

JsonValue PreferredResource::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", PreferredResourceNameMapper::GetNameForPreferredResourceName(m_name));
  }

  if(m_includeListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> includeListJsonList(m_includeList.size());
   for(unsigned includeListIndex = 0; includeListIndex < includeListJsonList.GetLength(); ++includeListIndex)
   {
     includeListJsonList[includeListIndex].AsString(m_includeList[includeListIndex]);
   }
   payload.WithArray("includeList", std::move(includeListJsonList));

  }

  if(m_excludeListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> excludeListJsonList(m_excludeList.size());
   for(unsigned excludeListIndex = 0; excludeListIndex < excludeListJsonList.GetLength(); ++excludeListIndex)
   {
     excludeListJsonList[excludeListIndex].AsString(m_excludeList[excludeListIndex]);
   }
   payload.WithArray("excludeList", std::move(excludeListJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws

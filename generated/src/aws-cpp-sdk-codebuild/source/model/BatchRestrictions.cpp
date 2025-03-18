/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codebuild/model/BatchRestrictions.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodeBuild
{
namespace Model
{

BatchRestrictions::BatchRestrictions(JsonView jsonValue)
{
  *this = jsonValue;
}

BatchRestrictions& BatchRestrictions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("maximumBuildsAllowed"))
  {
    m_maximumBuildsAllowed = jsonValue.GetInteger("maximumBuildsAllowed");
    m_maximumBuildsAllowedHasBeenSet = true;
  }
  if(jsonValue.ValueExists("computeTypesAllowed"))
  {
    Aws::Utils::Array<JsonView> computeTypesAllowedJsonList = jsonValue.GetArray("computeTypesAllowed");
    for(unsigned computeTypesAllowedIndex = 0; computeTypesAllowedIndex < computeTypesAllowedJsonList.GetLength(); ++computeTypesAllowedIndex)
    {
      m_computeTypesAllowed.push_back(computeTypesAllowedJsonList[computeTypesAllowedIndex].AsString());
    }
    m_computeTypesAllowedHasBeenSet = true;
  }
  if(jsonValue.ValueExists("fleetsAllowed"))
  {
    Aws::Utils::Array<JsonView> fleetsAllowedJsonList = jsonValue.GetArray("fleetsAllowed");
    for(unsigned fleetsAllowedIndex = 0; fleetsAllowedIndex < fleetsAllowedJsonList.GetLength(); ++fleetsAllowedIndex)
    {
      m_fleetsAllowed.push_back(fleetsAllowedJsonList[fleetsAllowedIndex].AsString());
    }
    m_fleetsAllowedHasBeenSet = true;
  }
  return *this;
}

JsonValue BatchRestrictions::Jsonize() const
{
  JsonValue payload;

  if(m_maximumBuildsAllowedHasBeenSet)
  {
   payload.WithInteger("maximumBuildsAllowed", m_maximumBuildsAllowed);

  }

  if(m_computeTypesAllowedHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> computeTypesAllowedJsonList(m_computeTypesAllowed.size());
   for(unsigned computeTypesAllowedIndex = 0; computeTypesAllowedIndex < computeTypesAllowedJsonList.GetLength(); ++computeTypesAllowedIndex)
   {
     computeTypesAllowedJsonList[computeTypesAllowedIndex].AsString(m_computeTypesAllowed[computeTypesAllowedIndex]);
   }
   payload.WithArray("computeTypesAllowed", std::move(computeTypesAllowedJsonList));

  }

  if(m_fleetsAllowedHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> fleetsAllowedJsonList(m_fleetsAllowed.size());
   for(unsigned fleetsAllowedIndex = 0; fleetsAllowedIndex < fleetsAllowedJsonList.GetLength(); ++fleetsAllowedIndex)
   {
     fleetsAllowedJsonList[fleetsAllowedIndex].AsString(m_fleetsAllowed[fleetsAllowedIndex]);
   }
   payload.WithArray("fleetsAllowed", std::move(fleetsAllowedJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace CodeBuild
} // namespace Aws

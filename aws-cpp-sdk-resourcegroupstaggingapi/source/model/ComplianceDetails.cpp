/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/resourcegroupstaggingapi/model/ComplianceDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ResourceGroupsTaggingAPI
{
namespace Model
{

ComplianceDetails::ComplianceDetails() : 
    m_missingKeysHasBeenSet(false),
    m_invalidKeysHasBeenSet(false),
    m_invalidValuesHasBeenSet(false),
    m_complianceStatus(false),
    m_complianceStatusHasBeenSet(false)
{
}

ComplianceDetails::ComplianceDetails(JsonView jsonValue) : 
    m_missingKeysHasBeenSet(false),
    m_invalidKeysHasBeenSet(false),
    m_invalidValuesHasBeenSet(false),
    m_complianceStatus(false),
    m_complianceStatusHasBeenSet(false)
{
  *this = jsonValue;
}

ComplianceDetails& ComplianceDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MissingKeys"))
  {
    Array<JsonView> missingKeysJsonList = jsonValue.GetArray("MissingKeys");
    for(unsigned missingKeysIndex = 0; missingKeysIndex < missingKeysJsonList.GetLength(); ++missingKeysIndex)
    {
      m_missingKeys.push_back(missingKeysJsonList[missingKeysIndex].AsString());
    }
    m_missingKeysHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InvalidKeys"))
  {
    Array<JsonView> invalidKeysJsonList = jsonValue.GetArray("InvalidKeys");
    for(unsigned invalidKeysIndex = 0; invalidKeysIndex < invalidKeysJsonList.GetLength(); ++invalidKeysIndex)
    {
      m_invalidKeys.push_back(invalidKeysJsonList[invalidKeysIndex].AsString());
    }
    m_invalidKeysHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InvalidValues"))
  {
    Array<JsonView> invalidValuesJsonList = jsonValue.GetArray("InvalidValues");
    for(unsigned invalidValuesIndex = 0; invalidValuesIndex < invalidValuesJsonList.GetLength(); ++invalidValuesIndex)
    {
      m_invalidValues.push_back(invalidValuesJsonList[invalidValuesIndex].AsString());
    }
    m_invalidValuesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ComplianceStatus"))
  {
    m_complianceStatus = jsonValue.GetBool("ComplianceStatus");

    m_complianceStatusHasBeenSet = true;
  }

  return *this;
}

JsonValue ComplianceDetails::Jsonize() const
{
  JsonValue payload;

  if(m_missingKeysHasBeenSet)
  {
   Array<JsonValue> missingKeysJsonList(m_missingKeys.size());
   for(unsigned missingKeysIndex = 0; missingKeysIndex < missingKeysJsonList.GetLength(); ++missingKeysIndex)
   {
     missingKeysJsonList[missingKeysIndex].AsString(m_missingKeys[missingKeysIndex]);
   }
   payload.WithArray("MissingKeys", std::move(missingKeysJsonList));

  }

  if(m_invalidKeysHasBeenSet)
  {
   Array<JsonValue> invalidKeysJsonList(m_invalidKeys.size());
   for(unsigned invalidKeysIndex = 0; invalidKeysIndex < invalidKeysJsonList.GetLength(); ++invalidKeysIndex)
   {
     invalidKeysJsonList[invalidKeysIndex].AsString(m_invalidKeys[invalidKeysIndex]);
   }
   payload.WithArray("InvalidKeys", std::move(invalidKeysJsonList));

  }

  if(m_invalidValuesHasBeenSet)
  {
   Array<JsonValue> invalidValuesJsonList(m_invalidValues.size());
   for(unsigned invalidValuesIndex = 0; invalidValuesIndex < invalidValuesJsonList.GetLength(); ++invalidValuesIndex)
   {
     invalidValuesJsonList[invalidValuesIndex].AsString(m_invalidValues[invalidValuesIndex]);
   }
   payload.WithArray("InvalidValues", std::move(invalidValuesJsonList));

  }

  if(m_complianceStatusHasBeenSet)
  {
   payload.WithBool("ComplianceStatus", m_complianceStatus);

  }

  return payload;
}

} // namespace Model
} // namespace ResourceGroupsTaggingAPI
} // namespace Aws

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

#include <aws/signer/model/HashAlgorithmOptions.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace signer
{
namespace Model
{

HashAlgorithmOptions::HashAlgorithmOptions() : 
    m_allowedValuesHasBeenSet(false),
    m_defaultValue(HashAlgorithm::NOT_SET),
    m_defaultValueHasBeenSet(false)
{
}

HashAlgorithmOptions::HashAlgorithmOptions(JsonView jsonValue) : 
    m_allowedValuesHasBeenSet(false),
    m_defaultValue(HashAlgorithm::NOT_SET),
    m_defaultValueHasBeenSet(false)
{
  *this = jsonValue;
}

HashAlgorithmOptions& HashAlgorithmOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("allowedValues"))
  {
    Array<JsonView> allowedValuesJsonList = jsonValue.GetArray("allowedValues");
    for(unsigned allowedValuesIndex = 0; allowedValuesIndex < allowedValuesJsonList.GetLength(); ++allowedValuesIndex)
    {
      m_allowedValues.push_back(HashAlgorithmMapper::GetHashAlgorithmForName(allowedValuesJsonList[allowedValuesIndex].AsString()));
    }
    m_allowedValuesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("defaultValue"))
  {
    m_defaultValue = HashAlgorithmMapper::GetHashAlgorithmForName(jsonValue.GetString("defaultValue"));

    m_defaultValueHasBeenSet = true;
  }

  return *this;
}

JsonValue HashAlgorithmOptions::Jsonize() const
{
  JsonValue payload;

  if(m_allowedValuesHasBeenSet)
  {
   Array<JsonValue> allowedValuesJsonList(m_allowedValues.size());
   for(unsigned allowedValuesIndex = 0; allowedValuesIndex < allowedValuesJsonList.GetLength(); ++allowedValuesIndex)
   {
     allowedValuesJsonList[allowedValuesIndex].AsString(HashAlgorithmMapper::GetNameForHashAlgorithm(m_allowedValues[allowedValuesIndex]));
   }
   payload.WithArray("allowedValues", std::move(allowedValuesJsonList));

  }

  if(m_defaultValueHasBeenSet)
  {
   payload.WithString("defaultValue", HashAlgorithmMapper::GetNameForHashAlgorithm(m_defaultValue));
  }

  return payload;
}

} // namespace Model
} // namespace signer
} // namespace Aws

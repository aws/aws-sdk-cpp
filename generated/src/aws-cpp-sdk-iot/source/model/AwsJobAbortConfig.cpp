/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/AwsJobAbortConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoT
{
namespace Model
{

AwsJobAbortConfig::AwsJobAbortConfig() : 
    m_abortCriteriaListHasBeenSet(false)
{
}

AwsJobAbortConfig::AwsJobAbortConfig(JsonView jsonValue) : 
    m_abortCriteriaListHasBeenSet(false)
{
  *this = jsonValue;
}

AwsJobAbortConfig& AwsJobAbortConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("abortCriteriaList"))
  {
    Aws::Utils::Array<JsonView> abortCriteriaListJsonList = jsonValue.GetArray("abortCriteriaList");
    for(unsigned abortCriteriaListIndex = 0; abortCriteriaListIndex < abortCriteriaListJsonList.GetLength(); ++abortCriteriaListIndex)
    {
      m_abortCriteriaList.push_back(abortCriteriaListJsonList[abortCriteriaListIndex].AsObject());
    }
    m_abortCriteriaListHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsJobAbortConfig::Jsonize() const
{
  JsonValue payload;

  if(m_abortCriteriaListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> abortCriteriaListJsonList(m_abortCriteriaList.size());
   for(unsigned abortCriteriaListIndex = 0; abortCriteriaListIndex < abortCriteriaListJsonList.GetLength(); ++abortCriteriaListIndex)
   {
     abortCriteriaListJsonList[abortCriteriaListIndex].AsObject(m_abortCriteriaList[abortCriteriaListIndex].Jsonize());
   }
   payload.WithArray("abortCriteriaList", std::move(abortCriteriaListJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws

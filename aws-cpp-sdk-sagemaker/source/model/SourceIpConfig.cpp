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

#include <aws/sagemaker/model/SourceIpConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMaker
{
namespace Model
{

SourceIpConfig::SourceIpConfig() : 
    m_cidrsHasBeenSet(false)
{
}

SourceIpConfig::SourceIpConfig(JsonView jsonValue) : 
    m_cidrsHasBeenSet(false)
{
  *this = jsonValue;
}

SourceIpConfig& SourceIpConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Cidrs"))
  {
    Array<JsonView> cidrsJsonList = jsonValue.GetArray("Cidrs");
    for(unsigned cidrsIndex = 0; cidrsIndex < cidrsJsonList.GetLength(); ++cidrsIndex)
    {
      m_cidrs.push_back(cidrsJsonList[cidrsIndex].AsString());
    }
    m_cidrsHasBeenSet = true;
  }

  return *this;
}

JsonValue SourceIpConfig::Jsonize() const
{
  JsonValue payload;

  if(m_cidrsHasBeenSet)
  {
   Array<JsonValue> cidrsJsonList(m_cidrs.size());
   for(unsigned cidrsIndex = 0; cidrsIndex < cidrsJsonList.GetLength(); ++cidrsIndex)
   {
     cidrsJsonList[cidrsIndex].AsString(m_cidrs[cidrsIndex]);
   }
   payload.WithArray("Cidrs", std::move(cidrsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws

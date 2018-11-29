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

#include <aws/sagemaker/model/SourceAlgorithmSpecification.h>
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

SourceAlgorithmSpecification::SourceAlgorithmSpecification() : 
    m_sourceAlgorithmsHasBeenSet(false)
{
}

SourceAlgorithmSpecification::SourceAlgorithmSpecification(JsonView jsonValue) : 
    m_sourceAlgorithmsHasBeenSet(false)
{
  *this = jsonValue;
}

SourceAlgorithmSpecification& SourceAlgorithmSpecification::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SourceAlgorithms"))
  {
    Array<JsonView> sourceAlgorithmsJsonList = jsonValue.GetArray("SourceAlgorithms");
    for(unsigned sourceAlgorithmsIndex = 0; sourceAlgorithmsIndex < sourceAlgorithmsJsonList.GetLength(); ++sourceAlgorithmsIndex)
    {
      m_sourceAlgorithms.push_back(sourceAlgorithmsJsonList[sourceAlgorithmsIndex].AsObject());
    }
    m_sourceAlgorithmsHasBeenSet = true;
  }

  return *this;
}

JsonValue SourceAlgorithmSpecification::Jsonize() const
{
  JsonValue payload;

  if(m_sourceAlgorithmsHasBeenSet)
  {
   Array<JsonValue> sourceAlgorithmsJsonList(m_sourceAlgorithms.size());
   for(unsigned sourceAlgorithmsIndex = 0; sourceAlgorithmsIndex < sourceAlgorithmsJsonList.GetLength(); ++sourceAlgorithmsIndex)
   {
     sourceAlgorithmsJsonList[sourceAlgorithmsIndex].AsObject(m_sourceAlgorithms[sourceAlgorithmsIndex].Jsonize());
   }
   payload.WithArray("SourceAlgorithms", std::move(sourceAlgorithmsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws

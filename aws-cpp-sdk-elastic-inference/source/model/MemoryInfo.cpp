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

#include <aws/elastic-inference/model/MemoryInfo.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ElasticInference
{
namespace Model
{

MemoryInfo::MemoryInfo() : 
    m_sizeInMiB(0),
    m_sizeInMiBHasBeenSet(false)
{
}

MemoryInfo::MemoryInfo(JsonView jsonValue) : 
    m_sizeInMiB(0),
    m_sizeInMiBHasBeenSet(false)
{
  *this = jsonValue;
}

MemoryInfo& MemoryInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("sizeInMiB"))
  {
    m_sizeInMiB = jsonValue.GetInteger("sizeInMiB");

    m_sizeInMiBHasBeenSet = true;
  }

  return *this;
}

JsonValue MemoryInfo::Jsonize() const
{
  JsonValue payload;

  if(m_sizeInMiBHasBeenSet)
  {
   payload.WithInteger("sizeInMiB", m_sizeInMiB);

  }

  return payload;
}

} // namespace Model
} // namespace ElasticInference
} // namespace Aws

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

#include <aws/batch/model/ArrayProperties.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Batch
{
namespace Model
{

ArrayProperties::ArrayProperties() : 
    m_size(0),
    m_sizeHasBeenSet(false)
{
}

ArrayProperties::ArrayProperties(const JsonValue& jsonValue) : 
    m_size(0),
    m_sizeHasBeenSet(false)
{
  *this = jsonValue;
}

ArrayProperties& ArrayProperties::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("size"))
  {
    m_size = jsonValue.GetInteger("size");

    m_sizeHasBeenSet = true;
  }

  return *this;
}

JsonValue ArrayProperties::Jsonize() const
{
  JsonValue payload;

  if(m_sizeHasBeenSet)
  {
   payload.WithInteger("size", m_size);

  }

  return payload;
}

} // namespace Model
} // namespace Batch
} // namespace Aws

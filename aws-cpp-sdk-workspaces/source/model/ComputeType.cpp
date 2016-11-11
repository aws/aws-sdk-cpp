/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/workspaces/model/ComputeType.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WorkSpaces
{
namespace Model
{

ComputeType::ComputeType() : 
    m_name(Compute::NOT_SET),
    m_nameHasBeenSet(false)
{
}

ComputeType::ComputeType(const JsonValue& jsonValue) : 
    m_name(Compute::NOT_SET),
    m_nameHasBeenSet(false)
{
  *this = jsonValue;
}

ComputeType& ComputeType::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = ComputeMapper::GetComputeForName(jsonValue.GetString("Name"));

    m_nameHasBeenSet = true;
  }

  return *this;
}

JsonValue ComputeType::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", ComputeMapper::GetNameForCompute(m_name));
  }

  return payload;
}

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
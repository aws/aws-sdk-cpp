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

#include <aws/lakeformation/model/DataLocationResource.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LakeFormation
{
namespace Model
{

DataLocationResource::DataLocationResource() : 
    m_resourceArnHasBeenSet(false)
{
}

DataLocationResource::DataLocationResource(JsonView jsonValue) : 
    m_resourceArnHasBeenSet(false)
{
  *this = jsonValue;
}

DataLocationResource& DataLocationResource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ResourceArn"))
  {
    m_resourceArn = jsonValue.GetString("ResourceArn");

    m_resourceArnHasBeenSet = true;
  }

  return *this;
}

JsonValue DataLocationResource::Jsonize() const
{
  JsonValue payload;

  if(m_resourceArnHasBeenSet)
  {
   payload.WithString("ResourceArn", m_resourceArn);

  }

  return payload;
}

} // namespace Model
} // namespace LakeFormation
} // namespace Aws

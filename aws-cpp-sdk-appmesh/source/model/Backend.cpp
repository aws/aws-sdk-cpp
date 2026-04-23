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

#include <aws/appmesh/model/Backend.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppMesh
{
namespace Model
{

Backend::Backend() : 
    m_virtualServiceHasBeenSet(false)
{
}

Backend::Backend(JsonView jsonValue) : 
    m_virtualServiceHasBeenSet(false)
{
  *this = jsonValue;
}

Backend& Backend::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("virtualService"))
  {
    m_virtualService = jsonValue.GetObject("virtualService");

    m_virtualServiceHasBeenSet = true;
  }

  return *this;
}

JsonValue Backend::Jsonize() const
{
  JsonValue payload;

  if(m_virtualServiceHasBeenSet)
  {
   payload.WithObject("virtualService", m_virtualService.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace AppMesh
} // namespace Aws

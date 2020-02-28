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

#include <aws/appmesh/model/BackendDefaults.h>
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

BackendDefaults::BackendDefaults() : 
    m_clientPolicyHasBeenSet(false)
{
}

BackendDefaults::BackendDefaults(JsonView jsonValue) : 
    m_clientPolicyHasBeenSet(false)
{
  *this = jsonValue;
}

BackendDefaults& BackendDefaults::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("clientPolicy"))
  {
    m_clientPolicy = jsonValue.GetObject("clientPolicy");

    m_clientPolicyHasBeenSet = true;
  }

  return *this;
}

JsonValue BackendDefaults::Jsonize() const
{
  JsonValue payload;

  if(m_clientPolicyHasBeenSet)
  {
   payload.WithObject("clientPolicy", m_clientPolicy.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace AppMesh
} // namespace Aws

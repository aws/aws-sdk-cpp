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

#include <aws/appmesh/model/VirtualServiceSpec.h>
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

VirtualServiceSpec::VirtualServiceSpec() : 
    m_providerHasBeenSet(false)
{
}

VirtualServiceSpec::VirtualServiceSpec(JsonView jsonValue) : 
    m_providerHasBeenSet(false)
{
  *this = jsonValue;
}

VirtualServiceSpec& VirtualServiceSpec::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("provider"))
  {
    m_provider = jsonValue.GetObject("provider");

    m_providerHasBeenSet = true;
  }

  return *this;
}

JsonValue VirtualServiceSpec::Jsonize() const
{
  JsonValue payload;

  if(m_providerHasBeenSet)
  {
   payload.WithObject("provider", m_provider.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace AppMesh
} // namespace Aws

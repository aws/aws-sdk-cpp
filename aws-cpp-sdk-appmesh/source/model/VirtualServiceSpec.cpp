/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

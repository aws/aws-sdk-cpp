/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appmesh/model/MeshServiceDiscovery.h>
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

MeshServiceDiscovery::MeshServiceDiscovery() : 
    m_ipPreference(IpPreference::NOT_SET),
    m_ipPreferenceHasBeenSet(false)
{
}

MeshServiceDiscovery::MeshServiceDiscovery(JsonView jsonValue) : 
    m_ipPreference(IpPreference::NOT_SET),
    m_ipPreferenceHasBeenSet(false)
{
  *this = jsonValue;
}

MeshServiceDiscovery& MeshServiceDiscovery::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ipPreference"))
  {
    m_ipPreference = IpPreferenceMapper::GetIpPreferenceForName(jsonValue.GetString("ipPreference"));

    m_ipPreferenceHasBeenSet = true;
  }

  return *this;
}

JsonValue MeshServiceDiscovery::Jsonize() const
{
  JsonValue payload;

  if(m_ipPreferenceHasBeenSet)
  {
   payload.WithString("ipPreference", IpPreferenceMapper::GetNameForIpPreference(m_ipPreference));
  }

  return payload;
}

} // namespace Model
} // namespace AppMesh
} // namespace Aws

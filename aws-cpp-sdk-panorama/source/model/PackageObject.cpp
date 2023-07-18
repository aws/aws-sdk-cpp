/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/panorama/model/PackageObject.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Panorama
{
namespace Model
{

PackageObject::PackageObject() : 
    m_nameHasBeenSet(false),
    m_packageVersionHasBeenSet(false),
    m_patchVersionHasBeenSet(false)
{
}

PackageObject::PackageObject(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_packageVersionHasBeenSet(false),
    m_patchVersionHasBeenSet(false)
{
  *this = jsonValue;
}

PackageObject& PackageObject::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PackageVersion"))
  {
    m_packageVersion = jsonValue.GetString("PackageVersion");

    m_packageVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PatchVersion"))
  {
    m_patchVersion = jsonValue.GetString("PatchVersion");

    m_patchVersionHasBeenSet = true;
  }

  return *this;
}

JsonValue PackageObject::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_packageVersionHasBeenSet)
  {
   payload.WithString("PackageVersion", m_packageVersion);

  }

  if(m_patchVersionHasBeenSet)
  {
   payload.WithString("PatchVersion", m_patchVersion);

  }

  return payload;
}

} // namespace Model
} // namespace Panorama
} // namespace Aws

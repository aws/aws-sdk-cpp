/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/devicefarm/model/InstanceProfile.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DeviceFarm
{
namespace Model
{

InstanceProfile::InstanceProfile() : 
    m_arnHasBeenSet(false),
    m_packageCleanup(false),
    m_packageCleanupHasBeenSet(false),
    m_excludeAppPackagesFromCleanupHasBeenSet(false),
    m_rebootAfterUse(false),
    m_rebootAfterUseHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

InstanceProfile::InstanceProfile(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_packageCleanup(false),
    m_packageCleanupHasBeenSet(false),
    m_excludeAppPackagesFromCleanupHasBeenSet(false),
    m_rebootAfterUse(false),
    m_rebootAfterUseHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
  *this = jsonValue;
}

InstanceProfile& InstanceProfile::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("packageCleanup"))
  {
    m_packageCleanup = jsonValue.GetBool("packageCleanup");

    m_packageCleanupHasBeenSet = true;
  }

  if(jsonValue.ValueExists("excludeAppPackagesFromCleanup"))
  {
    Aws::Utils::Array<JsonView> excludeAppPackagesFromCleanupJsonList = jsonValue.GetArray("excludeAppPackagesFromCleanup");
    for(unsigned excludeAppPackagesFromCleanupIndex = 0; excludeAppPackagesFromCleanupIndex < excludeAppPackagesFromCleanupJsonList.GetLength(); ++excludeAppPackagesFromCleanupIndex)
    {
      m_excludeAppPackagesFromCleanup.push_back(excludeAppPackagesFromCleanupJsonList[excludeAppPackagesFromCleanupIndex].AsString());
    }
    m_excludeAppPackagesFromCleanupHasBeenSet = true;
  }

  if(jsonValue.ValueExists("rebootAfterUse"))
  {
    m_rebootAfterUse = jsonValue.GetBool("rebootAfterUse");

    m_rebootAfterUseHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  return *this;
}

JsonValue InstanceProfile::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_packageCleanupHasBeenSet)
  {
   payload.WithBool("packageCleanup", m_packageCleanup);

  }

  if(m_excludeAppPackagesFromCleanupHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> excludeAppPackagesFromCleanupJsonList(m_excludeAppPackagesFromCleanup.size());
   for(unsigned excludeAppPackagesFromCleanupIndex = 0; excludeAppPackagesFromCleanupIndex < excludeAppPackagesFromCleanupJsonList.GetLength(); ++excludeAppPackagesFromCleanupIndex)
   {
     excludeAppPackagesFromCleanupJsonList[excludeAppPackagesFromCleanupIndex].AsString(m_excludeAppPackagesFromCleanup[excludeAppPackagesFromCleanupIndex]);
   }
   payload.WithArray("excludeAppPackagesFromCleanup", std::move(excludeAppPackagesFromCleanupJsonList));

  }

  if(m_rebootAfterUseHasBeenSet)
  {
   payload.WithBool("rebootAfterUse", m_rebootAfterUse);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  return payload;
}

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws

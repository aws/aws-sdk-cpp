/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/greengrassv2/model/ResolvedComponentVersion.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/HashingUtils.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GreengrassV2
{
namespace Model
{

ResolvedComponentVersion::ResolvedComponentVersion() : 
    m_arnHasBeenSet(false),
    m_componentNameHasBeenSet(false),
    m_componentVersionHasBeenSet(false),
    m_recipeHasBeenSet(false),
    m_vendorGuidance(VendorGuidance::NOT_SET),
    m_vendorGuidanceHasBeenSet(false),
    m_messageHasBeenSet(false)
{
}

ResolvedComponentVersion::ResolvedComponentVersion(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_componentNameHasBeenSet(false),
    m_componentVersionHasBeenSet(false),
    m_recipeHasBeenSet(false),
    m_vendorGuidance(VendorGuidance::NOT_SET),
    m_vendorGuidanceHasBeenSet(false),
    m_messageHasBeenSet(false)
{
  *this = jsonValue;
}

ResolvedComponentVersion& ResolvedComponentVersion::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("componentName"))
  {
    m_componentName = jsonValue.GetString("componentName");

    m_componentNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("componentVersion"))
  {
    m_componentVersion = jsonValue.GetString("componentVersion");

    m_componentVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("recipe"))
  {
    m_recipe = HashingUtils::Base64Decode(jsonValue.GetString("recipe"));
    m_recipeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("vendorGuidance"))
  {
    m_vendorGuidance = VendorGuidanceMapper::GetVendorGuidanceForName(jsonValue.GetString("vendorGuidance"));

    m_vendorGuidanceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("message"))
  {
    m_message = jsonValue.GetString("message");

    m_messageHasBeenSet = true;
  }

  return *this;
}

JsonValue ResolvedComponentVersion::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_componentNameHasBeenSet)
  {
   payload.WithString("componentName", m_componentName);

  }

  if(m_componentVersionHasBeenSet)
  {
   payload.WithString("componentVersion", m_componentVersion);

  }

  if(m_recipeHasBeenSet)
  {
   payload.WithString("recipe", HashingUtils::Base64Encode(m_recipe));
  }

  if(m_vendorGuidanceHasBeenSet)
  {
   payload.WithString("vendorGuidance", VendorGuidanceMapper::GetNameForVendorGuidance(m_vendorGuidance));
  }

  if(m_messageHasBeenSet)
  {
   payload.WithString("message", m_message);

  }

  return payload;
}

} // namespace Model
} // namespace GreengrassV2
} // namespace Aws

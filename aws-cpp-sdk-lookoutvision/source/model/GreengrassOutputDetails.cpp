/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutvision/model/GreengrassOutputDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LookoutforVision
{
namespace Model
{

GreengrassOutputDetails::GreengrassOutputDetails() : 
    m_componentVersionArnHasBeenSet(false),
    m_componentNameHasBeenSet(false),
    m_componentVersionHasBeenSet(false)
{
}

GreengrassOutputDetails::GreengrassOutputDetails(JsonView jsonValue) : 
    m_componentVersionArnHasBeenSet(false),
    m_componentNameHasBeenSet(false),
    m_componentVersionHasBeenSet(false)
{
  *this = jsonValue;
}

GreengrassOutputDetails& GreengrassOutputDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ComponentVersionArn"))
  {
    m_componentVersionArn = jsonValue.GetString("ComponentVersionArn");

    m_componentVersionArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ComponentName"))
  {
    m_componentName = jsonValue.GetString("ComponentName");

    m_componentNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ComponentVersion"))
  {
    m_componentVersion = jsonValue.GetString("ComponentVersion");

    m_componentVersionHasBeenSet = true;
  }

  return *this;
}

JsonValue GreengrassOutputDetails::Jsonize() const
{
  JsonValue payload;

  if(m_componentVersionArnHasBeenSet)
  {
   payload.WithString("ComponentVersionArn", m_componentVersionArn);

  }

  if(m_componentNameHasBeenSet)
  {
   payload.WithString("ComponentName", m_componentName);

  }

  if(m_componentVersionHasBeenSet)
  {
   payload.WithString("ComponentVersion", m_componentVersion);

  }

  return payload;
}

} // namespace Model
} // namespace LookoutforVision
} // namespace Aws

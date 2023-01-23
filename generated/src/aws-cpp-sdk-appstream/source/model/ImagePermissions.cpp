/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appstream/model/ImagePermissions.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppStream
{
namespace Model
{

ImagePermissions::ImagePermissions() : 
    m_allowFleet(false),
    m_allowFleetHasBeenSet(false),
    m_allowImageBuilder(false),
    m_allowImageBuilderHasBeenSet(false)
{
}

ImagePermissions::ImagePermissions(JsonView jsonValue) : 
    m_allowFleet(false),
    m_allowFleetHasBeenSet(false),
    m_allowImageBuilder(false),
    m_allowImageBuilderHasBeenSet(false)
{
  *this = jsonValue;
}

ImagePermissions& ImagePermissions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("allowFleet"))
  {
    m_allowFleet = jsonValue.GetBool("allowFleet");

    m_allowFleetHasBeenSet = true;
  }

  if(jsonValue.ValueExists("allowImageBuilder"))
  {
    m_allowImageBuilder = jsonValue.GetBool("allowImageBuilder");

    m_allowImageBuilderHasBeenSet = true;
  }

  return *this;
}

JsonValue ImagePermissions::Jsonize() const
{
  JsonValue payload;

  if(m_allowFleetHasBeenSet)
  {
   payload.WithBool("allowFleet", m_allowFleet);

  }

  if(m_allowImageBuilderHasBeenSet)
  {
   payload.WithBool("allowImageBuilder", m_allowImageBuilder);

  }

  return payload;
}

} // namespace Model
} // namespace AppStream
} // namespace Aws

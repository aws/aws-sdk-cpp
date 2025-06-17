/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/ContainerFindingResource.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GuardDuty
{
namespace Model
{

ContainerFindingResource::ContainerFindingResource(JsonView jsonValue)
{
  *this = jsonValue;
}

ContainerFindingResource& ContainerFindingResource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("image"))
  {
    m_image = jsonValue.GetString("image");
    m_imageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("imageUid"))
  {
    m_imageUid = jsonValue.GetString("imageUid");
    m_imageUidHasBeenSet = true;
  }
  return *this;
}

JsonValue ContainerFindingResource::Jsonize() const
{
  JsonValue payload;

  if(m_imageHasBeenSet)
  {
   payload.WithString("image", m_image);

  }

  if(m_imageUidHasBeenSet)
  {
   payload.WithString("imageUid", m_imageUid);

  }

  return payload;
}

} // namespace Model
} // namespace GuardDuty
} // namespace Aws

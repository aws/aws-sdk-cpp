/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsEcsContainerDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

AwsEcsContainerDetails::AwsEcsContainerDetails() : 
    m_nameHasBeenSet(false),
    m_imageHasBeenSet(false),
    m_mountPointsHasBeenSet(false),
    m_privileged(false),
    m_privilegedHasBeenSet(false)
{
}

AwsEcsContainerDetails::AwsEcsContainerDetails(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_imageHasBeenSet(false),
    m_mountPointsHasBeenSet(false),
    m_privileged(false),
    m_privilegedHasBeenSet(false)
{
  *this = jsonValue;
}

AwsEcsContainerDetails& AwsEcsContainerDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Image"))
  {
    m_image = jsonValue.GetString("Image");

    m_imageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MountPoints"))
  {
    Aws::Utils::Array<JsonView> mountPointsJsonList = jsonValue.GetArray("MountPoints");
    for(unsigned mountPointsIndex = 0; mountPointsIndex < mountPointsJsonList.GetLength(); ++mountPointsIndex)
    {
      m_mountPoints.push_back(mountPointsJsonList[mountPointsIndex].AsObject());
    }
    m_mountPointsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Privileged"))
  {
    m_privileged = jsonValue.GetBool("Privileged");

    m_privilegedHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsEcsContainerDetails::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_imageHasBeenSet)
  {
   payload.WithString("Image", m_image);

  }

  if(m_mountPointsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> mountPointsJsonList(m_mountPoints.size());
   for(unsigned mountPointsIndex = 0; mountPointsIndex < mountPointsJsonList.GetLength(); ++mountPointsIndex)
   {
     mountPointsJsonList[mountPointsIndex].AsObject(m_mountPoints[mountPointsIndex].Jsonize());
   }
   payload.WithArray("MountPoints", std::move(mountPointsJsonList));

  }

  if(m_privilegedHasBeenSet)
  {
   payload.WithBool("Privileged", m_privileged);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws

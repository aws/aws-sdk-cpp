/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsEcsTaskDefinitionVolumesEfsVolumeConfigurationAuthorizationConfigDetails.h>
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

AwsEcsTaskDefinitionVolumesEfsVolumeConfigurationAuthorizationConfigDetails::AwsEcsTaskDefinitionVolumesEfsVolumeConfigurationAuthorizationConfigDetails() : 
    m_accessPointIdHasBeenSet(false),
    m_iamHasBeenSet(false)
{
}

AwsEcsTaskDefinitionVolumesEfsVolumeConfigurationAuthorizationConfigDetails::AwsEcsTaskDefinitionVolumesEfsVolumeConfigurationAuthorizationConfigDetails(JsonView jsonValue) : 
    m_accessPointIdHasBeenSet(false),
    m_iamHasBeenSet(false)
{
  *this = jsonValue;
}

AwsEcsTaskDefinitionVolumesEfsVolumeConfigurationAuthorizationConfigDetails& AwsEcsTaskDefinitionVolumesEfsVolumeConfigurationAuthorizationConfigDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AccessPointId"))
  {
    m_accessPointId = jsonValue.GetString("AccessPointId");

    m_accessPointIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Iam"))
  {
    m_iam = jsonValue.GetString("Iam");

    m_iamHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsEcsTaskDefinitionVolumesEfsVolumeConfigurationAuthorizationConfigDetails::Jsonize() const
{
  JsonValue payload;

  if(m_accessPointIdHasBeenSet)
  {
   payload.WithString("AccessPointId", m_accessPointId);

  }

  if(m_iamHasBeenSet)
  {
   payload.WithString("Iam", m_iam);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws

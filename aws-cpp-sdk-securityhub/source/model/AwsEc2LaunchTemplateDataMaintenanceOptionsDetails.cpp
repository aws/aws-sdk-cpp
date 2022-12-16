/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsEc2LaunchTemplateDataMaintenanceOptionsDetails.h>
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

AwsEc2LaunchTemplateDataMaintenanceOptionsDetails::AwsEc2LaunchTemplateDataMaintenanceOptionsDetails() : 
    m_autoRecoveryHasBeenSet(false)
{
}

AwsEc2LaunchTemplateDataMaintenanceOptionsDetails::AwsEc2LaunchTemplateDataMaintenanceOptionsDetails(JsonView jsonValue) : 
    m_autoRecoveryHasBeenSet(false)
{
  *this = jsonValue;
}

AwsEc2LaunchTemplateDataMaintenanceOptionsDetails& AwsEc2LaunchTemplateDataMaintenanceOptionsDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AutoRecovery"))
  {
    m_autoRecovery = jsonValue.GetString("AutoRecovery");

    m_autoRecoveryHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsEc2LaunchTemplateDataMaintenanceOptionsDetails::Jsonize() const
{
  JsonValue payload;

  if(m_autoRecoveryHasBeenSet)
  {
   payload.WithString("AutoRecovery", m_autoRecovery);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws

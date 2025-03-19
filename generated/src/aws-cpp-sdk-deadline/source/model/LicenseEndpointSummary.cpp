/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/deadline/model/LicenseEndpointSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace deadline
{
namespace Model
{

LicenseEndpointSummary::LicenseEndpointSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

LicenseEndpointSummary& LicenseEndpointSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("licenseEndpointId"))
  {
    m_licenseEndpointId = jsonValue.GetString("licenseEndpointId");
    m_licenseEndpointIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("status"))
  {
    m_status = LicenseEndpointStatusMapper::GetLicenseEndpointStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("statusMessage"))
  {
    m_statusMessage = jsonValue.GetString("statusMessage");
    m_statusMessageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("vpcId"))
  {
    m_vpcId = jsonValue.GetString("vpcId");
    m_vpcIdHasBeenSet = true;
  }
  return *this;
}

JsonValue LicenseEndpointSummary::Jsonize() const
{
  JsonValue payload;

  if(m_licenseEndpointIdHasBeenSet)
  {
   payload.WithString("licenseEndpointId", m_licenseEndpointId);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", LicenseEndpointStatusMapper::GetNameForLicenseEndpointStatus(m_status));
  }

  if(m_statusMessageHasBeenSet)
  {
   payload.WithString("statusMessage", m_statusMessage);

  }

  if(m_vpcIdHasBeenSet)
  {
   payload.WithString("vpcId", m_vpcId);

  }

  return payload;
}

} // namespace Model
} // namespace deadline
} // namespace Aws

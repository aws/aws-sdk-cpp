/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/license-manager/model/Grant.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LicenseManager
{
namespace Model
{

Grant::Grant() : 
    m_grantArnHasBeenSet(false),
    m_grantNameHasBeenSet(false),
    m_parentArnHasBeenSet(false),
    m_licenseArnHasBeenSet(false),
    m_granteePrincipalArnHasBeenSet(false),
    m_homeRegionHasBeenSet(false),
    m_grantStatus(GrantStatus::NOT_SET),
    m_grantStatusHasBeenSet(false),
    m_statusReasonHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_grantedOperationsHasBeenSet(false)
{
}

Grant::Grant(JsonView jsonValue) : 
    m_grantArnHasBeenSet(false),
    m_grantNameHasBeenSet(false),
    m_parentArnHasBeenSet(false),
    m_licenseArnHasBeenSet(false),
    m_granteePrincipalArnHasBeenSet(false),
    m_homeRegionHasBeenSet(false),
    m_grantStatus(GrantStatus::NOT_SET),
    m_grantStatusHasBeenSet(false),
    m_statusReasonHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_grantedOperationsHasBeenSet(false)
{
  *this = jsonValue;
}

Grant& Grant::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("GrantArn"))
  {
    m_grantArn = jsonValue.GetString("GrantArn");

    m_grantArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GrantName"))
  {
    m_grantName = jsonValue.GetString("GrantName");

    m_grantNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ParentArn"))
  {
    m_parentArn = jsonValue.GetString("ParentArn");

    m_parentArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LicenseArn"))
  {
    m_licenseArn = jsonValue.GetString("LicenseArn");

    m_licenseArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GranteePrincipalArn"))
  {
    m_granteePrincipalArn = jsonValue.GetString("GranteePrincipalArn");

    m_granteePrincipalArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HomeRegion"))
  {
    m_homeRegion = jsonValue.GetString("HomeRegion");

    m_homeRegionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GrantStatus"))
  {
    m_grantStatus = GrantStatusMapper::GetGrantStatusForName(jsonValue.GetString("GrantStatus"));

    m_grantStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StatusReason"))
  {
    m_statusReason = jsonValue.GetString("StatusReason");

    m_statusReasonHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Version"))
  {
    m_version = jsonValue.GetString("Version");

    m_versionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GrantedOperations"))
  {
    Aws::Utils::Array<JsonView> grantedOperationsJsonList = jsonValue.GetArray("GrantedOperations");
    for(unsigned grantedOperationsIndex = 0; grantedOperationsIndex < grantedOperationsJsonList.GetLength(); ++grantedOperationsIndex)
    {
      m_grantedOperations.push_back(AllowedOperationMapper::GetAllowedOperationForName(grantedOperationsJsonList[grantedOperationsIndex].AsString()));
    }
    m_grantedOperationsHasBeenSet = true;
  }

  return *this;
}

JsonValue Grant::Jsonize() const
{
  JsonValue payload;

  if(m_grantArnHasBeenSet)
  {
   payload.WithString("GrantArn", m_grantArn);

  }

  if(m_grantNameHasBeenSet)
  {
   payload.WithString("GrantName", m_grantName);

  }

  if(m_parentArnHasBeenSet)
  {
   payload.WithString("ParentArn", m_parentArn);

  }

  if(m_licenseArnHasBeenSet)
  {
   payload.WithString("LicenseArn", m_licenseArn);

  }

  if(m_granteePrincipalArnHasBeenSet)
  {
   payload.WithString("GranteePrincipalArn", m_granteePrincipalArn);

  }

  if(m_homeRegionHasBeenSet)
  {
   payload.WithString("HomeRegion", m_homeRegion);

  }

  if(m_grantStatusHasBeenSet)
  {
   payload.WithString("GrantStatus", GrantStatusMapper::GetNameForGrantStatus(m_grantStatus));
  }

  if(m_statusReasonHasBeenSet)
  {
   payload.WithString("StatusReason", m_statusReason);

  }

  if(m_versionHasBeenSet)
  {
   payload.WithString("Version", m_version);

  }

  if(m_grantedOperationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> grantedOperationsJsonList(m_grantedOperations.size());
   for(unsigned grantedOperationsIndex = 0; grantedOperationsIndex < grantedOperationsJsonList.GetLength(); ++grantedOperationsIndex)
   {
     grantedOperationsJsonList[grantedOperationsIndex].AsString(AllowedOperationMapper::GetNameForAllowedOperation(m_grantedOperations[grantedOperationsIndex]));
   }
   payload.WithArray("GrantedOperations", std::move(grantedOperationsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace LicenseManager
} // namespace Aws

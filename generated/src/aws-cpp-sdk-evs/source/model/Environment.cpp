/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/evs/model/Environment.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EVS
{
namespace Model
{

Environment::Environment(JsonView jsonValue)
{
  *this = jsonValue;
}

Environment& Environment::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("environmentId"))
  {
    m_environmentId = jsonValue.GetString("environmentId");
    m_environmentIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("environmentState"))
  {
    m_environmentState = EnvironmentStateMapper::GetEnvironmentStateForName(jsonValue.GetString("environmentState"));
    m_environmentStateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("stateDetails"))
  {
    m_stateDetails = jsonValue.GetString("stateDetails");
    m_stateDetailsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetDouble("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("modifiedAt"))
  {
    m_modifiedAt = jsonValue.GetDouble("modifiedAt");
    m_modifiedAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("environmentArn"))
  {
    m_environmentArn = jsonValue.GetString("environmentArn");
    m_environmentArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("environmentName"))
  {
    m_environmentName = jsonValue.GetString("environmentName");
    m_environmentNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("vpcId"))
  {
    m_vpcId = jsonValue.GetString("vpcId");
    m_vpcIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("serviceAccessSubnetId"))
  {
    m_serviceAccessSubnetId = jsonValue.GetString("serviceAccessSubnetId");
    m_serviceAccessSubnetIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("vcfVersion"))
  {
    m_vcfVersion = VcfVersionMapper::GetVcfVersionForName(jsonValue.GetString("vcfVersion"));
    m_vcfVersionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("termsAccepted"))
  {
    m_termsAccepted = jsonValue.GetBool("termsAccepted");
    m_termsAcceptedHasBeenSet = true;
  }
  if(jsonValue.ValueExists("licenseInfo"))
  {
    Aws::Utils::Array<JsonView> licenseInfoJsonList = jsonValue.GetArray("licenseInfo");
    for(unsigned licenseInfoIndex = 0; licenseInfoIndex < licenseInfoJsonList.GetLength(); ++licenseInfoIndex)
    {
      m_licenseInfo.push_back(licenseInfoJsonList[licenseInfoIndex].AsObject());
    }
    m_licenseInfoHasBeenSet = true;
  }
  if(jsonValue.ValueExists("siteId"))
  {
    m_siteId = jsonValue.GetString("siteId");
    m_siteIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("environmentStatus"))
  {
    m_environmentStatus = CheckResultMapper::GetCheckResultForName(jsonValue.GetString("environmentStatus"));
    m_environmentStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("checks"))
  {
    Aws::Utils::Array<JsonView> checksJsonList = jsonValue.GetArray("checks");
    for(unsigned checksIndex = 0; checksIndex < checksJsonList.GetLength(); ++checksIndex)
    {
      m_checks.push_back(checksJsonList[checksIndex].AsObject());
    }
    m_checksHasBeenSet = true;
  }
  if(jsonValue.ValueExists("connectivityInfo"))
  {
    m_connectivityInfo = jsonValue.GetObject("connectivityInfo");
    m_connectivityInfoHasBeenSet = true;
  }
  if(jsonValue.ValueExists("vcfHostnames"))
  {
    m_vcfHostnames = jsonValue.GetObject("vcfHostnames");
    m_vcfHostnamesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("kmsKeyId"))
  {
    m_kmsKeyId = jsonValue.GetString("kmsKeyId");
    m_kmsKeyIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("serviceAccessSecurityGroups"))
  {
    m_serviceAccessSecurityGroups = jsonValue.GetObject("serviceAccessSecurityGroups");
    m_serviceAccessSecurityGroupsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("credentials"))
  {
    Aws::Utils::Array<JsonView> credentialsJsonList = jsonValue.GetArray("credentials");
    for(unsigned credentialsIndex = 0; credentialsIndex < credentialsJsonList.GetLength(); ++credentialsIndex)
    {
      m_credentials.push_back(credentialsJsonList[credentialsIndex].AsObject());
    }
    m_credentialsHasBeenSet = true;
  }
  return *this;
}

JsonValue Environment::Jsonize() const
{
  JsonValue payload;

  if(m_environmentIdHasBeenSet)
  {
   payload.WithString("environmentId", m_environmentId);

  }

  if(m_environmentStateHasBeenSet)
  {
   payload.WithString("environmentState", EnvironmentStateMapper::GetNameForEnvironmentState(m_environmentState));
  }

  if(m_stateDetailsHasBeenSet)
  {
   payload.WithString("stateDetails", m_stateDetails);

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  if(m_modifiedAtHasBeenSet)
  {
   payload.WithDouble("modifiedAt", m_modifiedAt.SecondsWithMSPrecision());
  }

  if(m_environmentArnHasBeenSet)
  {
   payload.WithString("environmentArn", m_environmentArn);

  }

  if(m_environmentNameHasBeenSet)
  {
   payload.WithString("environmentName", m_environmentName);

  }

  if(m_vpcIdHasBeenSet)
  {
   payload.WithString("vpcId", m_vpcId);

  }

  if(m_serviceAccessSubnetIdHasBeenSet)
  {
   payload.WithString("serviceAccessSubnetId", m_serviceAccessSubnetId);

  }

  if(m_vcfVersionHasBeenSet)
  {
   payload.WithString("vcfVersion", VcfVersionMapper::GetNameForVcfVersion(m_vcfVersion));
  }

  if(m_termsAcceptedHasBeenSet)
  {
   payload.WithBool("termsAccepted", m_termsAccepted);

  }

  if(m_licenseInfoHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> licenseInfoJsonList(m_licenseInfo.size());
   for(unsigned licenseInfoIndex = 0; licenseInfoIndex < licenseInfoJsonList.GetLength(); ++licenseInfoIndex)
   {
     licenseInfoJsonList[licenseInfoIndex].AsObject(m_licenseInfo[licenseInfoIndex].Jsonize());
   }
   payload.WithArray("licenseInfo", std::move(licenseInfoJsonList));

  }

  if(m_siteIdHasBeenSet)
  {
   payload.WithString("siteId", m_siteId);

  }

  if(m_environmentStatusHasBeenSet)
  {
   payload.WithString("environmentStatus", CheckResultMapper::GetNameForCheckResult(m_environmentStatus));
  }

  if(m_checksHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> checksJsonList(m_checks.size());
   for(unsigned checksIndex = 0; checksIndex < checksJsonList.GetLength(); ++checksIndex)
   {
     checksJsonList[checksIndex].AsObject(m_checks[checksIndex].Jsonize());
   }
   payload.WithArray("checks", std::move(checksJsonList));

  }

  if(m_connectivityInfoHasBeenSet)
  {
   payload.WithObject("connectivityInfo", m_connectivityInfo.Jsonize());

  }

  if(m_vcfHostnamesHasBeenSet)
  {
   payload.WithObject("vcfHostnames", m_vcfHostnames.Jsonize());

  }

  if(m_kmsKeyIdHasBeenSet)
  {
   payload.WithString("kmsKeyId", m_kmsKeyId);

  }

  if(m_serviceAccessSecurityGroupsHasBeenSet)
  {
   payload.WithObject("serviceAccessSecurityGroups", m_serviceAccessSecurityGroups.Jsonize());

  }

  if(m_credentialsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> credentialsJsonList(m_credentials.size());
   for(unsigned credentialsIndex = 0; credentialsIndex < credentialsJsonList.GetLength(); ++credentialsIndex)
   {
     credentialsJsonList[credentialsIndex].AsObject(m_credentials[credentialsIndex].Jsonize());
   }
   payload.WithArray("credentials", std::move(credentialsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace EVS
} // namespace Aws

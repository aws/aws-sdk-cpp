/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/model/OrganizationConformancePack.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ConfigService
{
namespace Model
{

OrganizationConformancePack::OrganizationConformancePack() : 
    m_organizationConformancePackNameHasBeenSet(false),
    m_organizationConformancePackArnHasBeenSet(false),
    m_deliveryS3BucketHasBeenSet(false),
    m_deliveryS3KeyPrefixHasBeenSet(false),
    m_conformancePackInputParametersHasBeenSet(false),
    m_excludedAccountsHasBeenSet(false),
    m_lastUpdateTimeHasBeenSet(false)
{
}

OrganizationConformancePack::OrganizationConformancePack(JsonView jsonValue) : 
    m_organizationConformancePackNameHasBeenSet(false),
    m_organizationConformancePackArnHasBeenSet(false),
    m_deliveryS3BucketHasBeenSet(false),
    m_deliveryS3KeyPrefixHasBeenSet(false),
    m_conformancePackInputParametersHasBeenSet(false),
    m_excludedAccountsHasBeenSet(false),
    m_lastUpdateTimeHasBeenSet(false)
{
  *this = jsonValue;
}

OrganizationConformancePack& OrganizationConformancePack::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("OrganizationConformancePackName"))
  {
    m_organizationConformancePackName = jsonValue.GetString("OrganizationConformancePackName");

    m_organizationConformancePackNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OrganizationConformancePackArn"))
  {
    m_organizationConformancePackArn = jsonValue.GetString("OrganizationConformancePackArn");

    m_organizationConformancePackArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DeliveryS3Bucket"))
  {
    m_deliveryS3Bucket = jsonValue.GetString("DeliveryS3Bucket");

    m_deliveryS3BucketHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DeliveryS3KeyPrefix"))
  {
    m_deliveryS3KeyPrefix = jsonValue.GetString("DeliveryS3KeyPrefix");

    m_deliveryS3KeyPrefixHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ConformancePackInputParameters"))
  {
    Aws::Utils::Array<JsonView> conformancePackInputParametersJsonList = jsonValue.GetArray("ConformancePackInputParameters");
    for(unsigned conformancePackInputParametersIndex = 0; conformancePackInputParametersIndex < conformancePackInputParametersJsonList.GetLength(); ++conformancePackInputParametersIndex)
    {
      m_conformancePackInputParameters.push_back(conformancePackInputParametersJsonList[conformancePackInputParametersIndex].AsObject());
    }
    m_conformancePackInputParametersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExcludedAccounts"))
  {
    Aws::Utils::Array<JsonView> excludedAccountsJsonList = jsonValue.GetArray("ExcludedAccounts");
    for(unsigned excludedAccountsIndex = 0; excludedAccountsIndex < excludedAccountsJsonList.GetLength(); ++excludedAccountsIndex)
    {
      m_excludedAccounts.push_back(excludedAccountsJsonList[excludedAccountsIndex].AsString());
    }
    m_excludedAccountsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastUpdateTime"))
  {
    m_lastUpdateTime = jsonValue.GetDouble("LastUpdateTime");

    m_lastUpdateTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue OrganizationConformancePack::Jsonize() const
{
  JsonValue payload;

  if(m_organizationConformancePackNameHasBeenSet)
  {
   payload.WithString("OrganizationConformancePackName", m_organizationConformancePackName);

  }

  if(m_organizationConformancePackArnHasBeenSet)
  {
   payload.WithString("OrganizationConformancePackArn", m_organizationConformancePackArn);

  }

  if(m_deliveryS3BucketHasBeenSet)
  {
   payload.WithString("DeliveryS3Bucket", m_deliveryS3Bucket);

  }

  if(m_deliveryS3KeyPrefixHasBeenSet)
  {
   payload.WithString("DeliveryS3KeyPrefix", m_deliveryS3KeyPrefix);

  }

  if(m_conformancePackInputParametersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> conformancePackInputParametersJsonList(m_conformancePackInputParameters.size());
   for(unsigned conformancePackInputParametersIndex = 0; conformancePackInputParametersIndex < conformancePackInputParametersJsonList.GetLength(); ++conformancePackInputParametersIndex)
   {
     conformancePackInputParametersJsonList[conformancePackInputParametersIndex].AsObject(m_conformancePackInputParameters[conformancePackInputParametersIndex].Jsonize());
   }
   payload.WithArray("ConformancePackInputParameters", std::move(conformancePackInputParametersJsonList));

  }

  if(m_excludedAccountsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> excludedAccountsJsonList(m_excludedAccounts.size());
   for(unsigned excludedAccountsIndex = 0; excludedAccountsIndex < excludedAccountsJsonList.GetLength(); ++excludedAccountsIndex)
   {
     excludedAccountsJsonList[excludedAccountsIndex].AsString(m_excludedAccounts[excludedAccountsIndex]);
   }
   payload.WithArray("ExcludedAccounts", std::move(excludedAccountsJsonList));

  }

  if(m_lastUpdateTimeHasBeenSet)
  {
   payload.WithDouble("LastUpdateTime", m_lastUpdateTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace ConfigService
} // namespace Aws

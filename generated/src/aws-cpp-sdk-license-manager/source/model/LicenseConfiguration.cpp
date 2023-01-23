/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/license-manager/model/LicenseConfiguration.h>
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

LicenseConfiguration::LicenseConfiguration() : 
    m_licenseConfigurationIdHasBeenSet(false),
    m_licenseConfigurationArnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_licenseCountingType(LicenseCountingType::NOT_SET),
    m_licenseCountingTypeHasBeenSet(false),
    m_licenseRulesHasBeenSet(false),
    m_licenseCount(0),
    m_licenseCountHasBeenSet(false),
    m_licenseCountHardLimit(false),
    m_licenseCountHardLimitHasBeenSet(false),
    m_disassociateWhenNotFound(false),
    m_disassociateWhenNotFoundHasBeenSet(false),
    m_consumedLicenses(0),
    m_consumedLicensesHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_ownerAccountIdHasBeenSet(false),
    m_consumedLicenseSummaryListHasBeenSet(false),
    m_managedResourceSummaryListHasBeenSet(false),
    m_productInformationListHasBeenSet(false),
    m_automatedDiscoveryInformationHasBeenSet(false)
{
}

LicenseConfiguration::LicenseConfiguration(JsonView jsonValue) : 
    m_licenseConfigurationIdHasBeenSet(false),
    m_licenseConfigurationArnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_licenseCountingType(LicenseCountingType::NOT_SET),
    m_licenseCountingTypeHasBeenSet(false),
    m_licenseRulesHasBeenSet(false),
    m_licenseCount(0),
    m_licenseCountHasBeenSet(false),
    m_licenseCountHardLimit(false),
    m_licenseCountHardLimitHasBeenSet(false),
    m_disassociateWhenNotFound(false),
    m_disassociateWhenNotFoundHasBeenSet(false),
    m_consumedLicenses(0),
    m_consumedLicensesHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_ownerAccountIdHasBeenSet(false),
    m_consumedLicenseSummaryListHasBeenSet(false),
    m_managedResourceSummaryListHasBeenSet(false),
    m_productInformationListHasBeenSet(false),
    m_automatedDiscoveryInformationHasBeenSet(false)
{
  *this = jsonValue;
}

LicenseConfiguration& LicenseConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("LicenseConfigurationId"))
  {
    m_licenseConfigurationId = jsonValue.GetString("LicenseConfigurationId");

    m_licenseConfigurationIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LicenseConfigurationArn"))
  {
    m_licenseConfigurationArn = jsonValue.GetString("LicenseConfigurationArn");

    m_licenseConfigurationArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LicenseCountingType"))
  {
    m_licenseCountingType = LicenseCountingTypeMapper::GetLicenseCountingTypeForName(jsonValue.GetString("LicenseCountingType"));

    m_licenseCountingTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LicenseRules"))
  {
    Aws::Utils::Array<JsonView> licenseRulesJsonList = jsonValue.GetArray("LicenseRules");
    for(unsigned licenseRulesIndex = 0; licenseRulesIndex < licenseRulesJsonList.GetLength(); ++licenseRulesIndex)
    {
      m_licenseRules.push_back(licenseRulesJsonList[licenseRulesIndex].AsString());
    }
    m_licenseRulesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LicenseCount"))
  {
    m_licenseCount = jsonValue.GetInt64("LicenseCount");

    m_licenseCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LicenseCountHardLimit"))
  {
    m_licenseCountHardLimit = jsonValue.GetBool("LicenseCountHardLimit");

    m_licenseCountHardLimitHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DisassociateWhenNotFound"))
  {
    m_disassociateWhenNotFound = jsonValue.GetBool("DisassociateWhenNotFound");

    m_disassociateWhenNotFoundHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ConsumedLicenses"))
  {
    m_consumedLicenses = jsonValue.GetInt64("ConsumedLicenses");

    m_consumedLicensesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = jsonValue.GetString("Status");

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OwnerAccountId"))
  {
    m_ownerAccountId = jsonValue.GetString("OwnerAccountId");

    m_ownerAccountIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ConsumedLicenseSummaryList"))
  {
    Aws::Utils::Array<JsonView> consumedLicenseSummaryListJsonList = jsonValue.GetArray("ConsumedLicenseSummaryList");
    for(unsigned consumedLicenseSummaryListIndex = 0; consumedLicenseSummaryListIndex < consumedLicenseSummaryListJsonList.GetLength(); ++consumedLicenseSummaryListIndex)
    {
      m_consumedLicenseSummaryList.push_back(consumedLicenseSummaryListJsonList[consumedLicenseSummaryListIndex].AsObject());
    }
    m_consumedLicenseSummaryListHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ManagedResourceSummaryList"))
  {
    Aws::Utils::Array<JsonView> managedResourceSummaryListJsonList = jsonValue.GetArray("ManagedResourceSummaryList");
    for(unsigned managedResourceSummaryListIndex = 0; managedResourceSummaryListIndex < managedResourceSummaryListJsonList.GetLength(); ++managedResourceSummaryListIndex)
    {
      m_managedResourceSummaryList.push_back(managedResourceSummaryListJsonList[managedResourceSummaryListIndex].AsObject());
    }
    m_managedResourceSummaryListHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProductInformationList"))
  {
    Aws::Utils::Array<JsonView> productInformationListJsonList = jsonValue.GetArray("ProductInformationList");
    for(unsigned productInformationListIndex = 0; productInformationListIndex < productInformationListJsonList.GetLength(); ++productInformationListIndex)
    {
      m_productInformationList.push_back(productInformationListJsonList[productInformationListIndex].AsObject());
    }
    m_productInformationListHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AutomatedDiscoveryInformation"))
  {
    m_automatedDiscoveryInformation = jsonValue.GetObject("AutomatedDiscoveryInformation");

    m_automatedDiscoveryInformationHasBeenSet = true;
  }

  return *this;
}

JsonValue LicenseConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_licenseConfigurationIdHasBeenSet)
  {
   payload.WithString("LicenseConfigurationId", m_licenseConfigurationId);

  }

  if(m_licenseConfigurationArnHasBeenSet)
  {
   payload.WithString("LicenseConfigurationArn", m_licenseConfigurationArn);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_licenseCountingTypeHasBeenSet)
  {
   payload.WithString("LicenseCountingType", LicenseCountingTypeMapper::GetNameForLicenseCountingType(m_licenseCountingType));
  }

  if(m_licenseRulesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> licenseRulesJsonList(m_licenseRules.size());
   for(unsigned licenseRulesIndex = 0; licenseRulesIndex < licenseRulesJsonList.GetLength(); ++licenseRulesIndex)
   {
     licenseRulesJsonList[licenseRulesIndex].AsString(m_licenseRules[licenseRulesIndex]);
   }
   payload.WithArray("LicenseRules", std::move(licenseRulesJsonList));

  }

  if(m_licenseCountHasBeenSet)
  {
   payload.WithInt64("LicenseCount", m_licenseCount);

  }

  if(m_licenseCountHardLimitHasBeenSet)
  {
   payload.WithBool("LicenseCountHardLimit", m_licenseCountHardLimit);

  }

  if(m_disassociateWhenNotFoundHasBeenSet)
  {
   payload.WithBool("DisassociateWhenNotFound", m_disassociateWhenNotFound);

  }

  if(m_consumedLicensesHasBeenSet)
  {
   payload.WithInt64("ConsumedLicenses", m_consumedLicenses);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", m_status);

  }

  if(m_ownerAccountIdHasBeenSet)
  {
   payload.WithString("OwnerAccountId", m_ownerAccountId);

  }

  if(m_consumedLicenseSummaryListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> consumedLicenseSummaryListJsonList(m_consumedLicenseSummaryList.size());
   for(unsigned consumedLicenseSummaryListIndex = 0; consumedLicenseSummaryListIndex < consumedLicenseSummaryListJsonList.GetLength(); ++consumedLicenseSummaryListIndex)
   {
     consumedLicenseSummaryListJsonList[consumedLicenseSummaryListIndex].AsObject(m_consumedLicenseSummaryList[consumedLicenseSummaryListIndex].Jsonize());
   }
   payload.WithArray("ConsumedLicenseSummaryList", std::move(consumedLicenseSummaryListJsonList));

  }

  if(m_managedResourceSummaryListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> managedResourceSummaryListJsonList(m_managedResourceSummaryList.size());
   for(unsigned managedResourceSummaryListIndex = 0; managedResourceSummaryListIndex < managedResourceSummaryListJsonList.GetLength(); ++managedResourceSummaryListIndex)
   {
     managedResourceSummaryListJsonList[managedResourceSummaryListIndex].AsObject(m_managedResourceSummaryList[managedResourceSummaryListIndex].Jsonize());
   }
   payload.WithArray("ManagedResourceSummaryList", std::move(managedResourceSummaryListJsonList));

  }

  if(m_productInformationListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> productInformationListJsonList(m_productInformationList.size());
   for(unsigned productInformationListIndex = 0; productInformationListIndex < productInformationListJsonList.GetLength(); ++productInformationListIndex)
   {
     productInformationListJsonList[productInformationListIndex].AsObject(m_productInformationList[productInformationListIndex].Jsonize());
   }
   payload.WithArray("ProductInformationList", std::move(productInformationListJsonList));

  }

  if(m_automatedDiscoveryInformationHasBeenSet)
  {
   payload.WithObject("AutomatedDiscoveryInformation", m_automatedDiscoveryInformation.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace LicenseManager
} // namespace Aws

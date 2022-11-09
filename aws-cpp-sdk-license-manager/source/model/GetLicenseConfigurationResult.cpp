/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/license-manager/model/GetLicenseConfigurationResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::LicenseManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetLicenseConfigurationResult::GetLicenseConfigurationResult() : 
    m_licenseCountingType(LicenseCountingType::NOT_SET),
    m_licenseCount(0),
    m_licenseCountHardLimit(false),
    m_consumedLicenses(0),
    m_disassociateWhenNotFound(false)
{
}

GetLicenseConfigurationResult::GetLicenseConfigurationResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_licenseCountingType(LicenseCountingType::NOT_SET),
    m_licenseCount(0),
    m_licenseCountHardLimit(false),
    m_consumedLicenses(0),
    m_disassociateWhenNotFound(false)
{
  *this = result;
}

GetLicenseConfigurationResult& GetLicenseConfigurationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("LicenseConfigurationId"))
  {
    m_licenseConfigurationId = jsonValue.GetString("LicenseConfigurationId");

  }

  if(jsonValue.ValueExists("LicenseConfigurationArn"))
  {
    m_licenseConfigurationArn = jsonValue.GetString("LicenseConfigurationArn");

  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

  }

  if(jsonValue.ValueExists("LicenseCountingType"))
  {
    m_licenseCountingType = LicenseCountingTypeMapper::GetLicenseCountingTypeForName(jsonValue.GetString("LicenseCountingType"));

  }

  if(jsonValue.ValueExists("LicenseRules"))
  {
    Aws::Utils::Array<JsonView> licenseRulesJsonList = jsonValue.GetArray("LicenseRules");
    for(unsigned licenseRulesIndex = 0; licenseRulesIndex < licenseRulesJsonList.GetLength(); ++licenseRulesIndex)
    {
      m_licenseRules.push_back(licenseRulesJsonList[licenseRulesIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("LicenseCount"))
  {
    m_licenseCount = jsonValue.GetInt64("LicenseCount");

  }

  if(jsonValue.ValueExists("LicenseCountHardLimit"))
  {
    m_licenseCountHardLimit = jsonValue.GetBool("LicenseCountHardLimit");

  }

  if(jsonValue.ValueExists("ConsumedLicenses"))
  {
    m_consumedLicenses = jsonValue.GetInt64("ConsumedLicenses");

  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = jsonValue.GetString("Status");

  }

  if(jsonValue.ValueExists("OwnerAccountId"))
  {
    m_ownerAccountId = jsonValue.GetString("OwnerAccountId");

  }

  if(jsonValue.ValueExists("ConsumedLicenseSummaryList"))
  {
    Aws::Utils::Array<JsonView> consumedLicenseSummaryListJsonList = jsonValue.GetArray("ConsumedLicenseSummaryList");
    for(unsigned consumedLicenseSummaryListIndex = 0; consumedLicenseSummaryListIndex < consumedLicenseSummaryListJsonList.GetLength(); ++consumedLicenseSummaryListIndex)
    {
      m_consumedLicenseSummaryList.push_back(consumedLicenseSummaryListJsonList[consumedLicenseSummaryListIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("ManagedResourceSummaryList"))
  {
    Aws::Utils::Array<JsonView> managedResourceSummaryListJsonList = jsonValue.GetArray("ManagedResourceSummaryList");
    for(unsigned managedResourceSummaryListIndex = 0; managedResourceSummaryListIndex < managedResourceSummaryListJsonList.GetLength(); ++managedResourceSummaryListIndex)
    {
      m_managedResourceSummaryList.push_back(managedResourceSummaryListJsonList[managedResourceSummaryListIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("Tags"))
  {
    Aws::Utils::Array<JsonView> tagsJsonList = jsonValue.GetArray("Tags");
    for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
    {
      m_tags.push_back(tagsJsonList[tagsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("ProductInformationList"))
  {
    Aws::Utils::Array<JsonView> productInformationListJsonList = jsonValue.GetArray("ProductInformationList");
    for(unsigned productInformationListIndex = 0; productInformationListIndex < productInformationListJsonList.GetLength(); ++productInformationListIndex)
    {
      m_productInformationList.push_back(productInformationListJsonList[productInformationListIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("AutomatedDiscoveryInformation"))
  {
    m_automatedDiscoveryInformation = jsonValue.GetObject("AutomatedDiscoveryInformation");

  }

  if(jsonValue.ValueExists("DisassociateWhenNotFound"))
  {
    m_disassociateWhenNotFound = jsonValue.GetBool("DisassociateWhenNotFound");

  }



  return *this;
}

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/license-manager/model/GetLicenseConfigurationResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::LicenseManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetLicenseConfigurationResult::GetLicenseConfigurationResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetLicenseConfigurationResult& GetLicenseConfigurationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
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
  if(jsonValue.ValueExists("Tags"))
  {
    Aws::Utils::Array<JsonView> tagsJsonList = jsonValue.GetArray("Tags");
    for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
    {
      m_tags.push_back(tagsJsonList[tagsIndex].AsObject());
    }
    m_tagsHasBeenSet = true;
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
  if(jsonValue.ValueExists("DisassociateWhenNotFound"))
  {
    m_disassociateWhenNotFound = jsonValue.GetBool("DisassociateWhenNotFound");
    m_disassociateWhenNotFoundHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}

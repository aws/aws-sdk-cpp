/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/license-manager/model/CheckoutBorrowLicenseResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::LicenseManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CheckoutBorrowLicenseResult::CheckoutBorrowLicenseResult()
{
}

CheckoutBorrowLicenseResult::CheckoutBorrowLicenseResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

CheckoutBorrowLicenseResult& CheckoutBorrowLicenseResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("LicenseArn"))
  {
    m_licenseArn = jsonValue.GetString("LicenseArn");

  }

  if(jsonValue.ValueExists("LicenseConsumptionToken"))
  {
    m_licenseConsumptionToken = jsonValue.GetString("LicenseConsumptionToken");

  }

  if(jsonValue.ValueExists("EntitlementsAllowed"))
  {
    Aws::Utils::Array<JsonView> entitlementsAllowedJsonList = jsonValue.GetArray("EntitlementsAllowed");
    for(unsigned entitlementsAllowedIndex = 0; entitlementsAllowedIndex < entitlementsAllowedJsonList.GetLength(); ++entitlementsAllowedIndex)
    {
      m_entitlementsAllowed.push_back(entitlementsAllowedJsonList[entitlementsAllowedIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NodeId"))
  {
    m_nodeId = jsonValue.GetString("NodeId");

  }

  if(jsonValue.ValueExists("SignedToken"))
  {
    m_signedToken = jsonValue.GetString("SignedToken");

  }

  if(jsonValue.ValueExists("IssuedAt"))
  {
    m_issuedAt = jsonValue.GetString("IssuedAt");

  }

  if(jsonValue.ValueExists("Expiration"))
  {
    m_expiration = jsonValue.GetString("Expiration");

  }

  if(jsonValue.ValueExists("CheckoutMetadata"))
  {
    Aws::Utils::Array<JsonView> checkoutMetadataJsonList = jsonValue.GetArray("CheckoutMetadata");
    for(unsigned checkoutMetadataIndex = 0; checkoutMetadataIndex < checkoutMetadataJsonList.GetLength(); ++checkoutMetadataIndex)
    {
      m_checkoutMetadata.push_back(checkoutMetadataJsonList[checkoutMetadataIndex].AsObject());
    }
  }



  return *this;
}

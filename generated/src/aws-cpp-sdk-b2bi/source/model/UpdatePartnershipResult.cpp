/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/b2bi/model/UpdatePartnershipResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::B2BI::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

UpdatePartnershipResult::UpdatePartnershipResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

UpdatePartnershipResult& UpdatePartnershipResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("profileId"))
  {
    m_profileId = jsonValue.GetString("profileId");
    m_profileIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("partnershipId"))
  {
    m_partnershipId = jsonValue.GetString("partnershipId");
    m_partnershipIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("partnershipArn"))
  {
    m_partnershipArn = jsonValue.GetString("partnershipArn");
    m_partnershipArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("email"))
  {
    m_email = jsonValue.GetString("email");
    m_emailHasBeenSet = true;
  }
  if(jsonValue.ValueExists("phone"))
  {
    m_phone = jsonValue.GetString("phone");
    m_phoneHasBeenSet = true;
  }
  if(jsonValue.ValueExists("capabilities"))
  {
    Aws::Utils::Array<JsonView> capabilitiesJsonList = jsonValue.GetArray("capabilities");
    for(unsigned capabilitiesIndex = 0; capabilitiesIndex < capabilitiesJsonList.GetLength(); ++capabilitiesIndex)
    {
      m_capabilities.push_back(capabilitiesJsonList[capabilitiesIndex].AsString());
    }
    m_capabilitiesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("capabilityOptions"))
  {
    m_capabilityOptions = jsonValue.GetObject("capabilityOptions");
    m_capabilityOptionsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("tradingPartnerId"))
  {
    m_tradingPartnerId = jsonValue.GetString("tradingPartnerId");
    m_tradingPartnerIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetString("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("modifiedAt"))
  {
    m_modifiedAt = jsonValue.GetString("modifiedAt");
    m_modifiedAtHasBeenSet = true;
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

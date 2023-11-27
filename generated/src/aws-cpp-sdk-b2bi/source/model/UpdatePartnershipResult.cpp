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

UpdatePartnershipResult::UpdatePartnershipResult()
{
}

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

  }

  if(jsonValue.ValueExists("partnershipId"))
  {
    m_partnershipId = jsonValue.GetString("partnershipId");

  }

  if(jsonValue.ValueExists("partnershipArn"))
  {
    m_partnershipArn = jsonValue.GetString("partnershipArn");

  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

  }

  if(jsonValue.ValueExists("email"))
  {
    m_email = jsonValue.GetString("email");

  }

  if(jsonValue.ValueExists("phone"))
  {
    m_phone = jsonValue.GetString("phone");

  }

  if(jsonValue.ValueExists("capabilities"))
  {
    Aws::Utils::Array<JsonView> capabilitiesJsonList = jsonValue.GetArray("capabilities");
    for(unsigned capabilitiesIndex = 0; capabilitiesIndex < capabilitiesJsonList.GetLength(); ++capabilitiesIndex)
    {
      m_capabilities.push_back(capabilitiesJsonList[capabilitiesIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("tradingPartnerId"))
  {
    m_tradingPartnerId = jsonValue.GetString("tradingPartnerId");

  }

  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetString("createdAt");

  }

  if(jsonValue.ValueExists("modifiedAt"))
  {
    m_modifiedAt = jsonValue.GetString("modifiedAt");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}

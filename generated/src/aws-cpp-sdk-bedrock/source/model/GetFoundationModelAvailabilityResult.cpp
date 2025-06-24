/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/GetFoundationModelAvailabilityResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Bedrock::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetFoundationModelAvailabilityResult::GetFoundationModelAvailabilityResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetFoundationModelAvailabilityResult& GetFoundationModelAvailabilityResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("modelId"))
  {
    m_modelId = jsonValue.GetString("modelId");
    m_modelIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("agreementAvailability"))
  {
    m_agreementAvailability = jsonValue.GetObject("agreementAvailability");
    m_agreementAvailabilityHasBeenSet = true;
  }
  if(jsonValue.ValueExists("authorizationStatus"))
  {
    m_authorizationStatus = AuthorizationStatusMapper::GetAuthorizationStatusForName(jsonValue.GetString("authorizationStatus"));
    m_authorizationStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("entitlementAvailability"))
  {
    m_entitlementAvailability = EntitlementAvailabilityMapper::GetEntitlementAvailabilityForName(jsonValue.GetString("entitlementAvailability"));
    m_entitlementAvailabilityHasBeenSet = true;
  }
  if(jsonValue.ValueExists("regionAvailability"))
  {
    m_regionAvailability = RegionAvailabilityMapper::GetRegionAvailabilityForName(jsonValue.GetString("regionAvailability"));
    m_regionAvailabilityHasBeenSet = true;
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

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudtrail/model/DisableFederationResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CloudTrail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DisableFederationResult::DisableFederationResult() : 
    m_federationStatus(FederationStatus::NOT_SET)
{
}

DisableFederationResult::DisableFederationResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_federationStatus(FederationStatus::NOT_SET)
{
  *this = result;
}

DisableFederationResult& DisableFederationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("EventDataStoreArn"))
  {
    m_eventDataStoreArn = jsonValue.GetString("EventDataStoreArn");

  }

  if(jsonValue.ValueExists("FederationStatus"))
  {
    m_federationStatus = FederationStatusMapper::GetFederationStatusForName(jsonValue.GetString("FederationStatus"));

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudtrail/model/EnableFederationResult.h>
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

EnableFederationResult::EnableFederationResult() : 
    m_federationStatus(FederationStatus::NOT_SET)
{
}

EnableFederationResult::EnableFederationResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_federationStatus(FederationStatus::NOT_SET)
{
  *this = result;
}

EnableFederationResult& EnableFederationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
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

  if(jsonValue.ValueExists("FederationRoleArn"))
  {
    m_federationRoleArn = jsonValue.GetString("FederationRoleArn");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}

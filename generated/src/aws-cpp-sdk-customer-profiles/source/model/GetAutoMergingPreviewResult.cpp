/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/customer-profiles/model/GetAutoMergingPreviewResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CustomerProfiles::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetAutoMergingPreviewResult::GetAutoMergingPreviewResult() : 
    m_numberOfMatchesInSample(0),
    m_numberOfProfilesInSample(0),
    m_numberOfProfilesWillBeMerged(0)
{
}

GetAutoMergingPreviewResult::GetAutoMergingPreviewResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_numberOfMatchesInSample(0),
    m_numberOfProfilesInSample(0),
    m_numberOfProfilesWillBeMerged(0)
{
  *this = result;
}

GetAutoMergingPreviewResult& GetAutoMergingPreviewResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("DomainName"))
  {
    m_domainName = jsonValue.GetString("DomainName");

  }

  if(jsonValue.ValueExists("NumberOfMatchesInSample"))
  {
    m_numberOfMatchesInSample = jsonValue.GetInt64("NumberOfMatchesInSample");

  }

  if(jsonValue.ValueExists("NumberOfProfilesInSample"))
  {
    m_numberOfProfilesInSample = jsonValue.GetInt64("NumberOfProfilesInSample");

  }

  if(jsonValue.ValueExists("NumberOfProfilesWillBeMerged"))
  {
    m_numberOfProfilesWillBeMerged = jsonValue.GetInt64("NumberOfProfilesWillBeMerged");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}

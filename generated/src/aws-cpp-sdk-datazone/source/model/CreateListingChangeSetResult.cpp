/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/CreateListingChangeSetResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::DataZone::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateListingChangeSetResult::CreateListingChangeSetResult() : 
    m_status(ListingStatus::NOT_SET)
{
}

CreateListingChangeSetResult::CreateListingChangeSetResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_status(ListingStatus::NOT_SET)
{
  *this = result;
}

CreateListingChangeSetResult& CreateListingChangeSetResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("listingId"))
  {
    m_listingId = jsonValue.GetString("listingId");

  }

  if(jsonValue.ValueExists("listingRevision"))
  {
    m_listingRevision = jsonValue.GetString("listingRevision");

  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = ListingStatusMapper::GetListingStatusForName(jsonValue.GetString("status"));

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}

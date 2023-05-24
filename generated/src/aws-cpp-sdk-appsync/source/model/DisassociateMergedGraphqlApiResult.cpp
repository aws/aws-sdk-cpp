/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appsync/model/DisassociateMergedGraphqlApiResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::AppSync::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DisassociateMergedGraphqlApiResult::DisassociateMergedGraphqlApiResult() : 
    m_sourceApiAssociationStatus(SourceApiAssociationStatus::NOT_SET)
{
}

DisassociateMergedGraphqlApiResult::DisassociateMergedGraphqlApiResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_sourceApiAssociationStatus(SourceApiAssociationStatus::NOT_SET)
{
  *this = result;
}

DisassociateMergedGraphqlApiResult& DisassociateMergedGraphqlApiResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("sourceApiAssociationStatus"))
  {
    m_sourceApiAssociationStatus = SourceApiAssociationStatusMapper::GetSourceApiAssociationStatusForName(jsonValue.GetString("sourceApiAssociationStatus"));

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}

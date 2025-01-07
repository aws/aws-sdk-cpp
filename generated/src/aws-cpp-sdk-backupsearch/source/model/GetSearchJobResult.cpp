/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backupsearch/model/GetSearchJobResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::BackupSearch::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetSearchJobResult::GetSearchJobResult() : 
    m_status(SearchJobState::NOT_SET)
{
}

GetSearchJobResult::GetSearchJobResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
  : GetSearchJobResult()
{
  *this = result;
}

GetSearchJobResult& GetSearchJobResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

  }

  if(jsonValue.ValueExists("SearchScopeSummary"))
  {
    m_searchScopeSummary = jsonValue.GetObject("SearchScopeSummary");

  }

  if(jsonValue.ValueExists("CurrentSearchProgress"))
  {
    m_currentSearchProgress = jsonValue.GetObject("CurrentSearchProgress");

  }

  if(jsonValue.ValueExists("StatusMessage"))
  {
    m_statusMessage = jsonValue.GetString("StatusMessage");

  }

  if(jsonValue.ValueExists("EncryptionKeyArn"))
  {
    m_encryptionKeyArn = jsonValue.GetString("EncryptionKeyArn");

  }

  if(jsonValue.ValueExists("CompletionTime"))
  {
    m_completionTime = jsonValue.GetDouble("CompletionTime");

  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = SearchJobStateMapper::GetSearchJobStateForName(jsonValue.GetString("Status"));

  }

  if(jsonValue.ValueExists("SearchScope"))
  {
    m_searchScope = jsonValue.GetObject("SearchScope");

  }

  if(jsonValue.ValueExists("ItemFilters"))
  {
    m_itemFilters = jsonValue.GetObject("ItemFilters");

  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

  }

  if(jsonValue.ValueExists("SearchJobIdentifier"))
  {
    m_searchJobIdentifier = jsonValue.GetString("SearchJobIdentifier");

  }

  if(jsonValue.ValueExists("SearchJobArn"))
  {
    m_searchJobArn = jsonValue.GetString("SearchJobArn");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}

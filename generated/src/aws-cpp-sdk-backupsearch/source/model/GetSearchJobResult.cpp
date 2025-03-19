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

GetSearchJobResult::GetSearchJobResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetSearchJobResult& GetSearchJobResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SearchScopeSummary"))
  {
    m_searchScopeSummary = jsonValue.GetObject("SearchScopeSummary");
    m_searchScopeSummaryHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CurrentSearchProgress"))
  {
    m_currentSearchProgress = jsonValue.GetObject("CurrentSearchProgress");
    m_currentSearchProgressHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StatusMessage"))
  {
    m_statusMessage = jsonValue.GetString("StatusMessage");
    m_statusMessageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EncryptionKeyArn"))
  {
    m_encryptionKeyArn = jsonValue.GetString("EncryptionKeyArn");
    m_encryptionKeyArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CompletionTime"))
  {
    m_completionTime = jsonValue.GetDouble("CompletionTime");
    m_completionTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Status"))
  {
    m_status = SearchJobStateMapper::GetSearchJobStateForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SearchScope"))
  {
    m_searchScope = jsonValue.GetObject("SearchScope");
    m_searchScopeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ItemFilters"))
  {
    m_itemFilters = jsonValue.GetObject("ItemFilters");
    m_itemFiltersHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");
    m_creationTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SearchJobIdentifier"))
  {
    m_searchJobIdentifier = jsonValue.GetString("SearchJobIdentifier");
    m_searchJobIdentifierHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SearchJobArn"))
  {
    m_searchJobArn = jsonValue.GetString("SearchJobArn");
    m_searchJobArnHasBeenSet = true;
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

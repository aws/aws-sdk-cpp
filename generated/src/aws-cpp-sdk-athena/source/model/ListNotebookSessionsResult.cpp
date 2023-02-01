/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/athena/model/ListNotebookSessionsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Athena::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListNotebookSessionsResult::ListNotebookSessionsResult()
{
}

ListNotebookSessionsResult::ListNotebookSessionsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListNotebookSessionsResult& ListNotebookSessionsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("NotebookSessionsList"))
  {
    Aws::Utils::Array<JsonView> notebookSessionsListJsonList = jsonValue.GetArray("NotebookSessionsList");
    for(unsigned notebookSessionsListIndex = 0; notebookSessionsListIndex < notebookSessionsListJsonList.GetLength(); ++notebookSessionsListIndex)
    {
      m_notebookSessionsList.push_back(notebookSessionsListJsonList[notebookSessionsListIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}

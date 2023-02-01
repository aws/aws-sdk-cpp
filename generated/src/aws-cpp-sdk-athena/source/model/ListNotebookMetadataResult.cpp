/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/athena/model/ListNotebookMetadataResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Athena::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListNotebookMetadataResult::ListNotebookMetadataResult()
{
}

ListNotebookMetadataResult::ListNotebookMetadataResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListNotebookMetadataResult& ListNotebookMetadataResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }

  if(jsonValue.ValueExists("NotebookMetadataList"))
  {
    Aws::Utils::Array<JsonView> notebookMetadataListJsonList = jsonValue.GetArray("NotebookMetadataList");
    for(unsigned notebookMetadataListIndex = 0; notebookMetadataListIndex < notebookMetadataListJsonList.GetLength(); ++notebookMetadataListIndex)
    {
      m_notebookMetadataList.push_back(notebookMetadataListJsonList[notebookMetadataListIndex].AsObject());
    }
  }



  return *this;
}

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticmapreduce/model/ListNotebookExecutionsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::EMR::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListNotebookExecutionsResult::ListNotebookExecutionsResult()
{
}

ListNotebookExecutionsResult::ListNotebookExecutionsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListNotebookExecutionsResult& ListNotebookExecutionsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("NotebookExecutions"))
  {
    Aws::Utils::Array<JsonView> notebookExecutionsJsonList = jsonValue.GetArray("NotebookExecutions");
    for(unsigned notebookExecutionsIndex = 0; notebookExecutionsIndex < notebookExecutionsJsonList.GetLength(); ++notebookExecutionsIndex)
    {
      m_notebookExecutions.push_back(notebookExecutionsJsonList[notebookExecutionsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("Marker"))
  {
    m_marker = jsonValue.GetString("Marker");

  }



  return *this;
}

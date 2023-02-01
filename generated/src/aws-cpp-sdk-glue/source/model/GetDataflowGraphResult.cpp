/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/GetDataflowGraphResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Glue::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetDataflowGraphResult::GetDataflowGraphResult()
{
}

GetDataflowGraphResult::GetDataflowGraphResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetDataflowGraphResult& GetDataflowGraphResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("DagNodes"))
  {
    Aws::Utils::Array<JsonView> dagNodesJsonList = jsonValue.GetArray("DagNodes");
    for(unsigned dagNodesIndex = 0; dagNodesIndex < dagNodesJsonList.GetLength(); ++dagNodesIndex)
    {
      m_dagNodes.push_back(dagNodesJsonList[dagNodesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("DagEdges"))
  {
    Aws::Utils::Array<JsonView> dagEdgesJsonList = jsonValue.GetArray("DagEdges");
    for(unsigned dagEdgesIndex = 0; dagEdgesIndex < dagEdgesJsonList.GetLength(); ++dagEdgesIndex)
    {
      m_dagEdges.push_back(dagEdgesJsonList[dagEdgesIndex].AsObject());
    }
  }



  return *this;
}

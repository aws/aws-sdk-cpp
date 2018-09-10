﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
    Array<JsonView> dagNodesJsonList = jsonValue.GetArray("DagNodes");
    for(unsigned dagNodesIndex = 0; dagNodesIndex < dagNodesJsonList.GetLength(); ++dagNodesIndex)
    {
      m_dagNodes.push_back(dagNodesJsonList[dagNodesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("DagEdges"))
  {
    Array<JsonView> dagEdgesJsonList = jsonValue.GetArray("DagEdges");
    for(unsigned dagEdgesIndex = 0; dagEdgesIndex < dagEdgesJsonList.GetLength(); ++dagEdgesIndex)
    {
      m_dagEdges.push_back(dagEdgesJsonList[dagEdgesIndex].AsObject());
    }
  }



  return *this;
}

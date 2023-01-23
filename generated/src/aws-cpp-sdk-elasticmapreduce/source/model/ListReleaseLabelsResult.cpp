/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticmapreduce/model/ListReleaseLabelsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::EMR::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListReleaseLabelsResult::ListReleaseLabelsResult()
{
}

ListReleaseLabelsResult::ListReleaseLabelsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListReleaseLabelsResult& ListReleaseLabelsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ReleaseLabels"))
  {
    Aws::Utils::Array<JsonView> releaseLabelsJsonList = jsonValue.GetArray("ReleaseLabels");
    for(unsigned releaseLabelsIndex = 0; releaseLabelsIndex < releaseLabelsJsonList.GetLength(); ++releaseLabelsIndex)
    {
      m_releaseLabels.push_back(releaseLabelsJsonList[releaseLabelsIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticmapreduce/model/ListBootstrapActionsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::EMR::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListBootstrapActionsResult::ListBootstrapActionsResult()
{
}

ListBootstrapActionsResult::ListBootstrapActionsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListBootstrapActionsResult& ListBootstrapActionsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("BootstrapActions"))
  {
    Aws::Utils::Array<JsonView> bootstrapActionsJsonList = jsonValue.GetArray("BootstrapActions");
    for(unsigned bootstrapActionsIndex = 0; bootstrapActionsIndex < bootstrapActionsJsonList.GetLength(); ++bootstrapActionsIndex)
    {
      m_bootstrapActions.push_back(bootstrapActionsJsonList[bootstrapActionsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("Marker"))
  {
    m_marker = jsonValue.GetString("Marker");

  }



  return *this;
}

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amplifyuibuilder/model/GetMetadataResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::AmplifyUIBuilder::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetMetadataResult::GetMetadataResult()
{
}

GetMetadataResult::GetMetadataResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetMetadataResult& GetMetadataResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("features"))
  {
    Aws::Map<Aws::String, JsonView> featuresJsonMap = jsonValue.GetObject("features").GetAllObjects();
    for(auto& featuresItem : featuresJsonMap)
    {
      m_features[featuresItem.first] = featuresItem.second.AsString();
    }
  }



  return *this;
}

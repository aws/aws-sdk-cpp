/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticmapreduce/model/ListSupportedInstanceTypesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::EMR::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListSupportedInstanceTypesResult::ListSupportedInstanceTypesResult()
{
}

ListSupportedInstanceTypesResult::ListSupportedInstanceTypesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListSupportedInstanceTypesResult& ListSupportedInstanceTypesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("SupportedInstanceTypes"))
  {
    Aws::Utils::Array<JsonView> supportedInstanceTypesJsonList = jsonValue.GetArray("SupportedInstanceTypes");
    for(unsigned supportedInstanceTypesIndex = 0; supportedInstanceTypesIndex < supportedInstanceTypesJsonList.GetLength(); ++supportedInstanceTypesIndex)
    {
      m_supportedInstanceTypes.push_back(supportedInstanceTypesJsonList[supportedInstanceTypesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("Marker"))
  {
    m_marker = jsonValue.GetString("Marker");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}

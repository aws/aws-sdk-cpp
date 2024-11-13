/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/b2bi/model/GenerateMappingResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::B2BI::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GenerateMappingResult::GenerateMappingResult() : 
    m_mappingAccuracy(0.0)
{
}

GenerateMappingResult::GenerateMappingResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
  : GenerateMappingResult()
{
  *this = result;
}

GenerateMappingResult& GenerateMappingResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("mappingTemplate"))
  {
    m_mappingTemplate = jsonValue.GetString("mappingTemplate");

  }

  if(jsonValue.ValueExists("mappingAccuracy"))
  {
    m_mappingAccuracy = jsonValue.GetDouble("mappingAccuracy");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}

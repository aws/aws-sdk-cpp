/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/finspace-data/model/GetProgrammaticAccessCredentialsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::FinSpaceData::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetProgrammaticAccessCredentialsResult::GetProgrammaticAccessCredentialsResult() : 
    m_durationInMinutes(0)
{
}

GetProgrammaticAccessCredentialsResult::GetProgrammaticAccessCredentialsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_durationInMinutes(0)
{
  *this = result;
}

GetProgrammaticAccessCredentialsResult& GetProgrammaticAccessCredentialsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("credentials"))
  {
    m_credentials = jsonValue.GetObject("credentials");

  }

  if(jsonValue.ValueExists("durationInMinutes"))
  {
    m_durationInMinutes = jsonValue.GetInt64("durationInMinutes");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codeguru-security/model/CreateUploadUrlResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CodeGuruSecurity::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateUploadUrlResult::CreateUploadUrlResult()
{
}

CreateUploadUrlResult::CreateUploadUrlResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

CreateUploadUrlResult& CreateUploadUrlResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("codeArtifactId"))
  {
    m_codeArtifactId = jsonValue.GetString("codeArtifactId");

  }

  if(jsonValue.ValueExists("requestHeaders"))
  {
    Aws::Map<Aws::String, JsonView> requestHeadersJsonMap = jsonValue.GetObject("requestHeaders").GetAllObjects();
    for(auto& requestHeadersItem : requestHeadersJsonMap)
    {
      m_requestHeaders[requestHeadersItem.first] = requestHeadersItem.second.AsString();
    }
  }

  if(jsonValue.ValueExists("s3Url"))
  {
    m_s3Url = jsonValue.GetString("s3Url");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}

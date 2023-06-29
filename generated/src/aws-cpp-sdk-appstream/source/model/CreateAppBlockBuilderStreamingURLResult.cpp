/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appstream/model/CreateAppBlockBuilderStreamingURLResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::AppStream::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateAppBlockBuilderStreamingURLResult::CreateAppBlockBuilderStreamingURLResult()
{
}

CreateAppBlockBuilderStreamingURLResult::CreateAppBlockBuilderStreamingURLResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

CreateAppBlockBuilderStreamingURLResult& CreateAppBlockBuilderStreamingURLResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("StreamingURL"))
  {
    m_streamingURL = jsonValue.GetString("StreamingURL");

  }

  if(jsonValue.ValueExists("Expires"))
  {
    m_expires = jsonValue.GetDouble("Expires");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}

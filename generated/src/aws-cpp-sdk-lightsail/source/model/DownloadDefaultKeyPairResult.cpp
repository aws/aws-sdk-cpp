﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/DownloadDefaultKeyPairResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Lightsail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DownloadDefaultKeyPairResult::DownloadDefaultKeyPairResult()
{
}

DownloadDefaultKeyPairResult::DownloadDefaultKeyPairResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DownloadDefaultKeyPairResult& DownloadDefaultKeyPairResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("publicKeyBase64"))
  {
    m_publicKeyBase64 = jsonValue.GetString("publicKeyBase64");

  }

  if(jsonValue.ValueExists("privateKeyBase64"))
  {
    m_privateKeyBase64 = jsonValue.GetString("privateKeyBase64");

  }

  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetDouble("createdAt");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}

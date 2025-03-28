﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticmapreduce/model/GetBlockPublicAccessConfigurationResult.h>
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

GetBlockPublicAccessConfigurationResult::GetBlockPublicAccessConfigurationResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetBlockPublicAccessConfigurationResult& GetBlockPublicAccessConfigurationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("BlockPublicAccessConfiguration"))
  {
    m_blockPublicAccessConfiguration = jsonValue.GetObject("BlockPublicAccessConfiguration");
    m_blockPublicAccessConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("BlockPublicAccessConfigurationMetadata"))
  {
    m_blockPublicAccessConfigurationMetadata = jsonValue.GetObject("BlockPublicAccessConfigurationMetadata");
    m_blockPublicAccessConfigurationMetadataHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}

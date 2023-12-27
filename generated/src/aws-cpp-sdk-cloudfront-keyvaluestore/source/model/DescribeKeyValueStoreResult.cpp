﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront-keyvaluestore/model/DescribeKeyValueStoreResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CloudFrontKeyValueStore::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeKeyValueStoreResult::DescribeKeyValueStoreResult() : 
    m_itemCount(0),
    m_totalSizeInBytes(0)
{
}

DescribeKeyValueStoreResult::DescribeKeyValueStoreResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_itemCount(0),
    m_totalSizeInBytes(0)
{
  *this = result;
}

DescribeKeyValueStoreResult& DescribeKeyValueStoreResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ItemCount"))
  {
    m_itemCount = jsonValue.GetInteger("ItemCount");

  }

  if(jsonValue.ValueExists("TotalSizeInBytes"))
  {
    m_totalSizeInBytes = jsonValue.GetInt64("TotalSizeInBytes");

  }

  if(jsonValue.ValueExists("KvsARN"))
  {
    m_kvsARN = jsonValue.GetString("KvsARN");

  }

  if(jsonValue.ValueExists("Created"))
  {
    m_created = jsonValue.GetDouble("Created");

  }

  if(jsonValue.ValueExists("LastModified"))
  {
    m_lastModified = jsonValue.GetDouble("LastModified");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& eTagIter = headers.find("etag");
  if(eTagIter != headers.end())
  {
    m_eTag = eTagIter->second;
  }

  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}

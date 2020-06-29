/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/storagegateway/model/DescribeBandwidthRateLimitResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::StorageGateway::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeBandwidthRateLimitResult::DescribeBandwidthRateLimitResult() : 
    m_averageUploadRateLimitInBitsPerSec(0),
    m_averageDownloadRateLimitInBitsPerSec(0)
{
}

DescribeBandwidthRateLimitResult::DescribeBandwidthRateLimitResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_averageUploadRateLimitInBitsPerSec(0),
    m_averageDownloadRateLimitInBitsPerSec(0)
{
  *this = result;
}

DescribeBandwidthRateLimitResult& DescribeBandwidthRateLimitResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("GatewayARN"))
  {
    m_gatewayARN = jsonValue.GetString("GatewayARN");

  }

  if(jsonValue.ValueExists("AverageUploadRateLimitInBitsPerSec"))
  {
    m_averageUploadRateLimitInBitsPerSec = jsonValue.GetInt64("AverageUploadRateLimitInBitsPerSec");

  }

  if(jsonValue.ValueExists("AverageDownloadRateLimitInBitsPerSec"))
  {
    m_averageDownloadRateLimitInBitsPerSec = jsonValue.GetInt64("AverageDownloadRateLimitInBitsPerSec");

  }



  return *this;
}

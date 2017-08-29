/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace StorageGateway
{
namespace Model
{
  /**
   * <p>A JSON object containing the following fields:</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/DescribeBandwidthRateLimitOutput">AWS
   * API Reference</a></p>
   */
  class AWS_STORAGEGATEWAY_API DescribeBandwidthRateLimitResult
  {
  public:
    DescribeBandwidthRateLimitResult();
    DescribeBandwidthRateLimitResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeBandwidthRateLimitResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const Aws::String& GetGatewayARN() const{ return m_gatewayARN; }

    
    inline void SetGatewayARN(const Aws::String& value) { m_gatewayARN = value; }

    
    inline void SetGatewayARN(Aws::String&& value) { m_gatewayARN = std::move(value); }

    
    inline void SetGatewayARN(const char* value) { m_gatewayARN.assign(value); }

    
    inline DescribeBandwidthRateLimitResult& WithGatewayARN(const Aws::String& value) { SetGatewayARN(value); return *this;}

    
    inline DescribeBandwidthRateLimitResult& WithGatewayARN(Aws::String&& value) { SetGatewayARN(std::move(value)); return *this;}

    
    inline DescribeBandwidthRateLimitResult& WithGatewayARN(const char* value) { SetGatewayARN(value); return *this;}


    /**
     * <p>The average upload bandwidth rate limit in bits per second. This field does
     * not appear in the response if the upload rate limit is not set.</p>
     */
    inline long long GetAverageUploadRateLimitInBitsPerSec() const{ return m_averageUploadRateLimitInBitsPerSec; }

    /**
     * <p>The average upload bandwidth rate limit in bits per second. This field does
     * not appear in the response if the upload rate limit is not set.</p>
     */
    inline void SetAverageUploadRateLimitInBitsPerSec(long long value) { m_averageUploadRateLimitInBitsPerSec = value; }

    /**
     * <p>The average upload bandwidth rate limit in bits per second. This field does
     * not appear in the response if the upload rate limit is not set.</p>
     */
    inline DescribeBandwidthRateLimitResult& WithAverageUploadRateLimitInBitsPerSec(long long value) { SetAverageUploadRateLimitInBitsPerSec(value); return *this;}


    /**
     * <p>The average download bandwidth rate limit in bits per second. This field does
     * not appear in the response if the download rate limit is not set.</p>
     */
    inline long long GetAverageDownloadRateLimitInBitsPerSec() const{ return m_averageDownloadRateLimitInBitsPerSec; }

    /**
     * <p>The average download bandwidth rate limit in bits per second. This field does
     * not appear in the response if the download rate limit is not set.</p>
     */
    inline void SetAverageDownloadRateLimitInBitsPerSec(long long value) { m_averageDownloadRateLimitInBitsPerSec = value; }

    /**
     * <p>The average download bandwidth rate limit in bits per second. This field does
     * not appear in the response if the download rate limit is not set.</p>
     */
    inline DescribeBandwidthRateLimitResult& WithAverageDownloadRateLimitInBitsPerSec(long long value) { SetAverageDownloadRateLimitInBitsPerSec(value); return *this;}

  private:

    Aws::String m_gatewayARN;

    long long m_averageUploadRateLimitInBitsPerSec;

    long long m_averageDownloadRateLimitInBitsPerSec;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws

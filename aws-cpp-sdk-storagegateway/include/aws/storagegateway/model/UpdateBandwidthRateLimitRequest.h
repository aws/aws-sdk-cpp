/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/storagegateway/StorageGatewayRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace StorageGateway
{
namespace Model
{

  /**
   * <p>A JSON object containing one or more of the following fields:</p> <ul> <li>
   * <p> <a>UpdateBandwidthRateLimitInput$AverageDownloadRateLimitInBitsPerSec</a>
   * </p> </li> <li> <p>
   * <a>UpdateBandwidthRateLimitInput$AverageUploadRateLimitInBitsPerSec</a> </p>
   * </li> </ul>
   */
  class AWS_STORAGEGATEWAY_API UpdateBandwidthRateLimitRequest : public StorageGatewayRequest
  {
  public:
    UpdateBandwidthRateLimitRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    
    inline const Aws::String& GetGatewayARN() const{ return m_gatewayARN; }

    
    inline void SetGatewayARN(const Aws::String& value) { m_gatewayARNHasBeenSet = true; m_gatewayARN = value; }

    
    inline void SetGatewayARN(Aws::String&& value) { m_gatewayARNHasBeenSet = true; m_gatewayARN = value; }

    
    inline void SetGatewayARN(const char* value) { m_gatewayARNHasBeenSet = true; m_gatewayARN.assign(value); }

    
    inline UpdateBandwidthRateLimitRequest& WithGatewayARN(const Aws::String& value) { SetGatewayARN(value); return *this;}

    
    inline UpdateBandwidthRateLimitRequest& WithGatewayARN(Aws::String&& value) { SetGatewayARN(value); return *this;}

    
    inline UpdateBandwidthRateLimitRequest& WithGatewayARN(const char* value) { SetGatewayARN(value); return *this;}

    /**
     * <p>The average upload bandwidth rate limit in bits per second.</p>
     */
    inline long long GetAverageUploadRateLimitInBitsPerSec() const{ return m_averageUploadRateLimitInBitsPerSec; }

    /**
     * <p>The average upload bandwidth rate limit in bits per second.</p>
     */
    inline void SetAverageUploadRateLimitInBitsPerSec(long long value) { m_averageUploadRateLimitInBitsPerSecHasBeenSet = true; m_averageUploadRateLimitInBitsPerSec = value; }

    /**
     * <p>The average upload bandwidth rate limit in bits per second.</p>
     */
    inline UpdateBandwidthRateLimitRequest& WithAverageUploadRateLimitInBitsPerSec(long long value) { SetAverageUploadRateLimitInBitsPerSec(value); return *this;}

    /**
     * <p>The average download bandwidth rate limit in bits per second.</p>
     */
    inline long long GetAverageDownloadRateLimitInBitsPerSec() const{ return m_averageDownloadRateLimitInBitsPerSec; }

    /**
     * <p>The average download bandwidth rate limit in bits per second.</p>
     */
    inline void SetAverageDownloadRateLimitInBitsPerSec(long long value) { m_averageDownloadRateLimitInBitsPerSecHasBeenSet = true; m_averageDownloadRateLimitInBitsPerSec = value; }

    /**
     * <p>The average download bandwidth rate limit in bits per second.</p>
     */
    inline UpdateBandwidthRateLimitRequest& WithAverageDownloadRateLimitInBitsPerSec(long long value) { SetAverageDownloadRateLimitInBitsPerSec(value); return *this;}

  private:
    Aws::String m_gatewayARN;
    bool m_gatewayARNHasBeenSet;
    long long m_averageUploadRateLimitInBitsPerSec;
    bool m_averageUploadRateLimitInBitsPerSecHasBeenSet;
    long long m_averageDownloadRateLimitInBitsPerSec;
    bool m_averageDownloadRateLimitInBitsPerSecHasBeenSet;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws

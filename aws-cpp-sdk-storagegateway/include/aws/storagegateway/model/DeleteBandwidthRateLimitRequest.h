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
   */
  class AWS_STORAGEGATEWAY_API DeleteBandwidthRateLimitRequest : public StorageGatewayRequest
  {
  public:
    DeleteBandwidthRateLimitRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    
    inline const Aws::String& GetGatewayARN() const{ return m_gatewayARN; }

    
    inline void SetGatewayARN(const Aws::String& value) { m_gatewayARNHasBeenSet = true; m_gatewayARN = value; }

    
    inline void SetGatewayARN(Aws::String&& value) { m_gatewayARNHasBeenSet = true; m_gatewayARN = value; }

    
    inline void SetGatewayARN(const char* value) { m_gatewayARNHasBeenSet = true; m_gatewayARN.assign(value); }

    
    inline DeleteBandwidthRateLimitRequest& WithGatewayARN(const Aws::String& value) { SetGatewayARN(value); return *this;}

    
    inline DeleteBandwidthRateLimitRequest& WithGatewayARN(Aws::String&& value) { SetGatewayARN(value); return *this;}

    
    inline DeleteBandwidthRateLimitRequest& WithGatewayARN(const char* value) { SetGatewayARN(value); return *this;}

    
    inline const Aws::String& GetBandwidthType() const{ return m_bandwidthType; }

    
    inline void SetBandwidthType(const Aws::String& value) { m_bandwidthTypeHasBeenSet = true; m_bandwidthType = value; }

    
    inline void SetBandwidthType(Aws::String&& value) { m_bandwidthTypeHasBeenSet = true; m_bandwidthType = value; }

    
    inline void SetBandwidthType(const char* value) { m_bandwidthTypeHasBeenSet = true; m_bandwidthType.assign(value); }

    
    inline DeleteBandwidthRateLimitRequest& WithBandwidthType(const Aws::String& value) { SetBandwidthType(value); return *this;}

    
    inline DeleteBandwidthRateLimitRequest& WithBandwidthType(Aws::String&& value) { SetBandwidthType(value); return *this;}

    
    inline DeleteBandwidthRateLimitRequest& WithBandwidthType(const char* value) { SetBandwidthType(value); return *this;}

  private:
    Aws::String m_gatewayARN;
    bool m_gatewayARNHasBeenSet;
    Aws::String m_bandwidthType;
    bool m_bandwidthTypeHasBeenSet;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws

﻿/*
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
   * <p>RetrieveTapeArchiveInput</p>
   */
  class AWS_STORAGEGATEWAY_API RetrieveTapeArchiveRequest : public StorageGatewayRequest
  {
  public:
    RetrieveTapeArchiveRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The Amazon Resource Name (ARN) of the virtual tape you want to retrieve from
     * the virtual tape shelf (VTS).</p>
     */
    inline const Aws::String& GetTapeARN() const{ return m_tapeARN; }

    /**
     * <p>The Amazon Resource Name (ARN) of the virtual tape you want to retrieve from
     * the virtual tape shelf (VTS).</p>
     */
    inline void SetTapeARN(const Aws::String& value) { m_tapeARNHasBeenSet = true; m_tapeARN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the virtual tape you want to retrieve from
     * the virtual tape shelf (VTS).</p>
     */
    inline void SetTapeARN(Aws::String&& value) { m_tapeARNHasBeenSet = true; m_tapeARN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the virtual tape you want to retrieve from
     * the virtual tape shelf (VTS).</p>
     */
    inline void SetTapeARN(const char* value) { m_tapeARNHasBeenSet = true; m_tapeARN.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the virtual tape you want to retrieve from
     * the virtual tape shelf (VTS).</p>
     */
    inline RetrieveTapeArchiveRequest& WithTapeARN(const Aws::String& value) { SetTapeARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the virtual tape you want to retrieve from
     * the virtual tape shelf (VTS).</p>
     */
    inline RetrieveTapeArchiveRequest& WithTapeARN(Aws::String&& value) { SetTapeARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the virtual tape you want to retrieve from
     * the virtual tape shelf (VTS).</p>
     */
    inline RetrieveTapeArchiveRequest& WithTapeARN(const char* value) { SetTapeARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the gateway you want to retrieve the
     * virtual tape to. Use the <a>ListGateways</a> operation to return a list of
     * gateways for your account and region.</p> <p>You retrieve archived virtual tapes
     * to only one gateway and the gateway must be a gateway-VTL.</p>
     */
    inline const Aws::String& GetGatewayARN() const{ return m_gatewayARN; }

    /**
     * <p>The Amazon Resource Name (ARN) of the gateway you want to retrieve the
     * virtual tape to. Use the <a>ListGateways</a> operation to return a list of
     * gateways for your account and region.</p> <p>You retrieve archived virtual tapes
     * to only one gateway and the gateway must be a gateway-VTL.</p>
     */
    inline void SetGatewayARN(const Aws::String& value) { m_gatewayARNHasBeenSet = true; m_gatewayARN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the gateway you want to retrieve the
     * virtual tape to. Use the <a>ListGateways</a> operation to return a list of
     * gateways for your account and region.</p> <p>You retrieve archived virtual tapes
     * to only one gateway and the gateway must be a gateway-VTL.</p>
     */
    inline void SetGatewayARN(Aws::String&& value) { m_gatewayARNHasBeenSet = true; m_gatewayARN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the gateway you want to retrieve the
     * virtual tape to. Use the <a>ListGateways</a> operation to return a list of
     * gateways for your account and region.</p> <p>You retrieve archived virtual tapes
     * to only one gateway and the gateway must be a gateway-VTL.</p>
     */
    inline void SetGatewayARN(const char* value) { m_gatewayARNHasBeenSet = true; m_gatewayARN.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the gateway you want to retrieve the
     * virtual tape to. Use the <a>ListGateways</a> operation to return a list of
     * gateways for your account and region.</p> <p>You retrieve archived virtual tapes
     * to only one gateway and the gateway must be a gateway-VTL.</p>
     */
    inline RetrieveTapeArchiveRequest& WithGatewayARN(const Aws::String& value) { SetGatewayARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the gateway you want to retrieve the
     * virtual tape to. Use the <a>ListGateways</a> operation to return a list of
     * gateways for your account and region.</p> <p>You retrieve archived virtual tapes
     * to only one gateway and the gateway must be a gateway-VTL.</p>
     */
    inline RetrieveTapeArchiveRequest& WithGatewayARN(Aws::String&& value) { SetGatewayARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the gateway you want to retrieve the
     * virtual tape to. Use the <a>ListGateways</a> operation to return a list of
     * gateways for your account and region.</p> <p>You retrieve archived virtual tapes
     * to only one gateway and the gateway must be a gateway-VTL.</p>
     */
    inline RetrieveTapeArchiveRequest& WithGatewayARN(const char* value) { SetGatewayARN(value); return *this;}

  private:
    Aws::String m_tapeARN;
    bool m_tapeARNHasBeenSet;
    Aws::String m_gatewayARN;
    bool m_gatewayARNHasBeenSet;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws

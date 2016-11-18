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
   * <p>DeleteTapeInput</p>
   */
  class AWS_STORAGEGATEWAY_API DeleteTapeRequest : public StorageGatewayRequest
  {
  public:
    DeleteTapeRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The unique Amazon Resource Name (ARN) of the gateway that the virtual tape to
     * delete is associated with. Use the <a>ListGateways</a> operation to return a
     * list of gateways for your account and region.</p>
     */
    inline const Aws::String& GetGatewayARN() const{ return m_gatewayARN; }

    /**
     * <p>The unique Amazon Resource Name (ARN) of the gateway that the virtual tape to
     * delete is associated with. Use the <a>ListGateways</a> operation to return a
     * list of gateways for your account and region.</p>
     */
    inline void SetGatewayARN(const Aws::String& value) { m_gatewayARNHasBeenSet = true; m_gatewayARN = value; }

    /**
     * <p>The unique Amazon Resource Name (ARN) of the gateway that the virtual tape to
     * delete is associated with. Use the <a>ListGateways</a> operation to return a
     * list of gateways for your account and region.</p>
     */
    inline void SetGatewayARN(Aws::String&& value) { m_gatewayARNHasBeenSet = true; m_gatewayARN = value; }

    /**
     * <p>The unique Amazon Resource Name (ARN) of the gateway that the virtual tape to
     * delete is associated with. Use the <a>ListGateways</a> operation to return a
     * list of gateways for your account and region.</p>
     */
    inline void SetGatewayARN(const char* value) { m_gatewayARNHasBeenSet = true; m_gatewayARN.assign(value); }

    /**
     * <p>The unique Amazon Resource Name (ARN) of the gateway that the virtual tape to
     * delete is associated with. Use the <a>ListGateways</a> operation to return a
     * list of gateways for your account and region.</p>
     */
    inline DeleteTapeRequest& WithGatewayARN(const Aws::String& value) { SetGatewayARN(value); return *this;}

    /**
     * <p>The unique Amazon Resource Name (ARN) of the gateway that the virtual tape to
     * delete is associated with. Use the <a>ListGateways</a> operation to return a
     * list of gateways for your account and region.</p>
     */
    inline DeleteTapeRequest& WithGatewayARN(Aws::String&& value) { SetGatewayARN(value); return *this;}

    /**
     * <p>The unique Amazon Resource Name (ARN) of the gateway that the virtual tape to
     * delete is associated with. Use the <a>ListGateways</a> operation to return a
     * list of gateways for your account and region.</p>
     */
    inline DeleteTapeRequest& WithGatewayARN(const char* value) { SetGatewayARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the virtual tape to delete.</p>
     */
    inline const Aws::String& GetTapeARN() const{ return m_tapeARN; }

    /**
     * <p>The Amazon Resource Name (ARN) of the virtual tape to delete.</p>
     */
    inline void SetTapeARN(const Aws::String& value) { m_tapeARNHasBeenSet = true; m_tapeARN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the virtual tape to delete.</p>
     */
    inline void SetTapeARN(Aws::String&& value) { m_tapeARNHasBeenSet = true; m_tapeARN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the virtual tape to delete.</p>
     */
    inline void SetTapeARN(const char* value) { m_tapeARNHasBeenSet = true; m_tapeARN.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the virtual tape to delete.</p>
     */
    inline DeleteTapeRequest& WithTapeARN(const Aws::String& value) { SetTapeARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the virtual tape to delete.</p>
     */
    inline DeleteTapeRequest& WithTapeARN(Aws::String&& value) { SetTapeARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the virtual tape to delete.</p>
     */
    inline DeleteTapeRequest& WithTapeARN(const char* value) { SetTapeARN(value); return *this;}

  private:
    Aws::String m_gatewayARN;
    bool m_gatewayARNHasBeenSet;
    Aws::String m_tapeARN;
    bool m_tapeARNHasBeenSet;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws

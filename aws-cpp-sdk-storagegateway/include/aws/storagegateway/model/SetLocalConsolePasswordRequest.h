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
   * <p>SetLocalConsolePasswordInput</p>
   */
  class AWS_STORAGEGATEWAY_API SetLocalConsolePasswordRequest : public StorageGatewayRequest
  {
  public:
    SetLocalConsolePasswordRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    
    inline const Aws::String& GetGatewayARN() const{ return m_gatewayARN; }

    
    inline void SetGatewayARN(const Aws::String& value) { m_gatewayARNHasBeenSet = true; m_gatewayARN = value; }

    
    inline void SetGatewayARN(Aws::String&& value) { m_gatewayARNHasBeenSet = true; m_gatewayARN = value; }

    
    inline void SetGatewayARN(const char* value) { m_gatewayARNHasBeenSet = true; m_gatewayARN.assign(value); }

    
    inline SetLocalConsolePasswordRequest& WithGatewayARN(const Aws::String& value) { SetGatewayARN(value); return *this;}

    
    inline SetLocalConsolePasswordRequest& WithGatewayARN(Aws::String&& value) { SetGatewayARN(value); return *this;}

    
    inline SetLocalConsolePasswordRequest& WithGatewayARN(const char* value) { SetGatewayARN(value); return *this;}

    /**
     * <p>The password you want to set for your VM local console.</p>
     */
    inline const Aws::String& GetLocalConsolePassword() const{ return m_localConsolePassword; }

    /**
     * <p>The password you want to set for your VM local console.</p>
     */
    inline void SetLocalConsolePassword(const Aws::String& value) { m_localConsolePasswordHasBeenSet = true; m_localConsolePassword = value; }

    /**
     * <p>The password you want to set for your VM local console.</p>
     */
    inline void SetLocalConsolePassword(Aws::String&& value) { m_localConsolePasswordHasBeenSet = true; m_localConsolePassword = value; }

    /**
     * <p>The password you want to set for your VM local console.</p>
     */
    inline void SetLocalConsolePassword(const char* value) { m_localConsolePasswordHasBeenSet = true; m_localConsolePassword.assign(value); }

    /**
     * <p>The password you want to set for your VM local console.</p>
     */
    inline SetLocalConsolePasswordRequest& WithLocalConsolePassword(const Aws::String& value) { SetLocalConsolePassword(value); return *this;}

    /**
     * <p>The password you want to set for your VM local console.</p>
     */
    inline SetLocalConsolePasswordRequest& WithLocalConsolePassword(Aws::String&& value) { SetLocalConsolePassword(value); return *this;}

    /**
     * <p>The password you want to set for your VM local console.</p>
     */
    inline SetLocalConsolePasswordRequest& WithLocalConsolePassword(const char* value) { SetLocalConsolePassword(value); return *this;}

  private:
    Aws::String m_gatewayARN;
    bool m_gatewayARNHasBeenSet;
    Aws::String m_localConsolePassword;
    bool m_localConsolePasswordHasBeenSet;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws

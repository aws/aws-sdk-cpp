/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
#include <aws/storagegateway/StorageGatewayRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace StorageGateway
{
namespace Model
{

  /**
   * <p>SetLocalConsolePasswordInput</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/SetLocalConsolePasswordInput">AWS
   * API Reference</a></p>
   */
  class SetLocalConsolePasswordRequest : public StorageGatewayRequest
  {
  public:
    AWS_STORAGEGATEWAY_API SetLocalConsolePasswordRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SetLocalConsolePassword"; }

    AWS_STORAGEGATEWAY_API Aws::String SerializePayload() const override;

    AWS_STORAGEGATEWAY_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    
    inline const Aws::String& GetGatewayARN() const{ return m_gatewayARN; }

    
    inline bool GatewayARNHasBeenSet() const { return m_gatewayARNHasBeenSet; }

    
    inline void SetGatewayARN(const Aws::String& value) { m_gatewayARNHasBeenSet = true; m_gatewayARN = value; }

    
    inline void SetGatewayARN(Aws::String&& value) { m_gatewayARNHasBeenSet = true; m_gatewayARN = std::move(value); }

    
    inline void SetGatewayARN(const char* value) { m_gatewayARNHasBeenSet = true; m_gatewayARN.assign(value); }

    
    inline SetLocalConsolePasswordRequest& WithGatewayARN(const Aws::String& value) { SetGatewayARN(value); return *this;}

    
    inline SetLocalConsolePasswordRequest& WithGatewayARN(Aws::String&& value) { SetGatewayARN(std::move(value)); return *this;}

    
    inline SetLocalConsolePasswordRequest& WithGatewayARN(const char* value) { SetGatewayARN(value); return *this;}


    /**
     * <p>The password you want to set for your VM local console.</p>
     */
    inline const Aws::String& GetLocalConsolePassword() const{ return m_localConsolePassword; }

    /**
     * <p>The password you want to set for your VM local console.</p>
     */
    inline bool LocalConsolePasswordHasBeenSet() const { return m_localConsolePasswordHasBeenSet; }

    /**
     * <p>The password you want to set for your VM local console.</p>
     */
    inline void SetLocalConsolePassword(const Aws::String& value) { m_localConsolePasswordHasBeenSet = true; m_localConsolePassword = value; }

    /**
     * <p>The password you want to set for your VM local console.</p>
     */
    inline void SetLocalConsolePassword(Aws::String&& value) { m_localConsolePasswordHasBeenSet = true; m_localConsolePassword = std::move(value); }

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
    inline SetLocalConsolePasswordRequest& WithLocalConsolePassword(Aws::String&& value) { SetLocalConsolePassword(std::move(value)); return *this;}

    /**
     * <p>The password you want to set for your VM local console.</p>
     */
    inline SetLocalConsolePasswordRequest& WithLocalConsolePassword(const char* value) { SetLocalConsolePassword(value); return *this;}

  private:

    Aws::String m_gatewayARN;
    bool m_gatewayARNHasBeenSet = false;

    Aws::String m_localConsolePassword;
    bool m_localConsolePasswordHasBeenSet = false;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws

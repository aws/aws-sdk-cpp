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
#include <aws/storagegateway/StorageGatewayRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/storagegateway/model/SMBSecurityStrategy.h>
#include <utility>

namespace Aws
{
namespace StorageGateway
{
namespace Model
{

  /**
   */
  class AWS_STORAGEGATEWAY_API UpdateSMBSecurityStrategyRequest : public StorageGatewayRequest
  {
  public:
    UpdateSMBSecurityStrategyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateSMBSecurityStrategy"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    
    inline const Aws::String& GetGatewayARN() const{ return m_gatewayARN; }

    
    inline bool GatewayARNHasBeenSet() const { return m_gatewayARNHasBeenSet; }

    
    inline void SetGatewayARN(const Aws::String& value) { m_gatewayARNHasBeenSet = true; m_gatewayARN = value; }

    
    inline void SetGatewayARN(Aws::String&& value) { m_gatewayARNHasBeenSet = true; m_gatewayARN = std::move(value); }

    
    inline void SetGatewayARN(const char* value) { m_gatewayARNHasBeenSet = true; m_gatewayARN.assign(value); }

    
    inline UpdateSMBSecurityStrategyRequest& WithGatewayARN(const Aws::String& value) { SetGatewayARN(value); return *this;}

    
    inline UpdateSMBSecurityStrategyRequest& WithGatewayARN(Aws::String&& value) { SetGatewayARN(std::move(value)); return *this;}

    
    inline UpdateSMBSecurityStrategyRequest& WithGatewayARN(const char* value) { SetGatewayARN(value); return *this;}


    /**
     * <p>Specifies the type of security strategy.</p> <p>ClientSpecified: SMBv1 is
     * enabled, SMB signing is offered but not required, SMB encryption is offered but
     * not required.</p> <p>MandatorySigning: SMBv1 is disabled, SMB signing is
     * required, SMB encryption is offered but not required.</p>
     * <p>MandatoryEncryption: SMBv1 is disabled, SMB signing is offered but not
     * required, SMB encryption is required.</p>
     */
    inline const SMBSecurityStrategy& GetSMBSecurityStrategy() const{ return m_sMBSecurityStrategy; }

    /**
     * <p>Specifies the type of security strategy.</p> <p>ClientSpecified: SMBv1 is
     * enabled, SMB signing is offered but not required, SMB encryption is offered but
     * not required.</p> <p>MandatorySigning: SMBv1 is disabled, SMB signing is
     * required, SMB encryption is offered but not required.</p>
     * <p>MandatoryEncryption: SMBv1 is disabled, SMB signing is offered but not
     * required, SMB encryption is required.</p>
     */
    inline bool SMBSecurityStrategyHasBeenSet() const { return m_sMBSecurityStrategyHasBeenSet; }

    /**
     * <p>Specifies the type of security strategy.</p> <p>ClientSpecified: SMBv1 is
     * enabled, SMB signing is offered but not required, SMB encryption is offered but
     * not required.</p> <p>MandatorySigning: SMBv1 is disabled, SMB signing is
     * required, SMB encryption is offered but not required.</p>
     * <p>MandatoryEncryption: SMBv1 is disabled, SMB signing is offered but not
     * required, SMB encryption is required.</p>
     */
    inline void SetSMBSecurityStrategy(const SMBSecurityStrategy& value) { m_sMBSecurityStrategyHasBeenSet = true; m_sMBSecurityStrategy = value; }

    /**
     * <p>Specifies the type of security strategy.</p> <p>ClientSpecified: SMBv1 is
     * enabled, SMB signing is offered but not required, SMB encryption is offered but
     * not required.</p> <p>MandatorySigning: SMBv1 is disabled, SMB signing is
     * required, SMB encryption is offered but not required.</p>
     * <p>MandatoryEncryption: SMBv1 is disabled, SMB signing is offered but not
     * required, SMB encryption is required.</p>
     */
    inline void SetSMBSecurityStrategy(SMBSecurityStrategy&& value) { m_sMBSecurityStrategyHasBeenSet = true; m_sMBSecurityStrategy = std::move(value); }

    /**
     * <p>Specifies the type of security strategy.</p> <p>ClientSpecified: SMBv1 is
     * enabled, SMB signing is offered but not required, SMB encryption is offered but
     * not required.</p> <p>MandatorySigning: SMBv1 is disabled, SMB signing is
     * required, SMB encryption is offered but not required.</p>
     * <p>MandatoryEncryption: SMBv1 is disabled, SMB signing is offered but not
     * required, SMB encryption is required.</p>
     */
    inline UpdateSMBSecurityStrategyRequest& WithSMBSecurityStrategy(const SMBSecurityStrategy& value) { SetSMBSecurityStrategy(value); return *this;}

    /**
     * <p>Specifies the type of security strategy.</p> <p>ClientSpecified: SMBv1 is
     * enabled, SMB signing is offered but not required, SMB encryption is offered but
     * not required.</p> <p>MandatorySigning: SMBv1 is disabled, SMB signing is
     * required, SMB encryption is offered but not required.</p>
     * <p>MandatoryEncryption: SMBv1 is disabled, SMB signing is offered but not
     * required, SMB encryption is required.</p>
     */
    inline UpdateSMBSecurityStrategyRequest& WithSMBSecurityStrategy(SMBSecurityStrategy&& value) { SetSMBSecurityStrategy(std::move(value)); return *this;}

  private:

    Aws::String m_gatewayARN;
    bool m_gatewayARNHasBeenSet;

    SMBSecurityStrategy m_sMBSecurityStrategy;
    bool m_sMBSecurityStrategyHasBeenSet;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws

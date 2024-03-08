/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/fsx/FSxRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace FSx
{
namespace Model
{

  /**
   */
  class UpdateSharedVpcConfigurationRequest : public FSxRequest
  {
  public:
    AWS_FSX_API UpdateSharedVpcConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateSharedVpcConfiguration"; }

    AWS_FSX_API Aws::String SerializePayload() const override;

    AWS_FSX_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Specifies whether participant accounts can create FSx for ONTAP Multi-AZ file
     * systems in shared subnets. Set to <code>true</code> to enable or
     * <code>false</code> to disable.</p>
     */
    inline const Aws::String& GetEnableFsxRouteTableUpdatesFromParticipantAccounts() const{ return m_enableFsxRouteTableUpdatesFromParticipantAccounts; }

    /**
     * <p>Specifies whether participant accounts can create FSx for ONTAP Multi-AZ file
     * systems in shared subnets. Set to <code>true</code> to enable or
     * <code>false</code> to disable.</p>
     */
    inline bool EnableFsxRouteTableUpdatesFromParticipantAccountsHasBeenSet() const { return m_enableFsxRouteTableUpdatesFromParticipantAccountsHasBeenSet; }

    /**
     * <p>Specifies whether participant accounts can create FSx for ONTAP Multi-AZ file
     * systems in shared subnets. Set to <code>true</code> to enable or
     * <code>false</code> to disable.</p>
     */
    inline void SetEnableFsxRouteTableUpdatesFromParticipantAccounts(const Aws::String& value) { m_enableFsxRouteTableUpdatesFromParticipantAccountsHasBeenSet = true; m_enableFsxRouteTableUpdatesFromParticipantAccounts = value; }

    /**
     * <p>Specifies whether participant accounts can create FSx for ONTAP Multi-AZ file
     * systems in shared subnets. Set to <code>true</code> to enable or
     * <code>false</code> to disable.</p>
     */
    inline void SetEnableFsxRouteTableUpdatesFromParticipantAccounts(Aws::String&& value) { m_enableFsxRouteTableUpdatesFromParticipantAccountsHasBeenSet = true; m_enableFsxRouteTableUpdatesFromParticipantAccounts = std::move(value); }

    /**
     * <p>Specifies whether participant accounts can create FSx for ONTAP Multi-AZ file
     * systems in shared subnets. Set to <code>true</code> to enable or
     * <code>false</code> to disable.</p>
     */
    inline void SetEnableFsxRouteTableUpdatesFromParticipantAccounts(const char* value) { m_enableFsxRouteTableUpdatesFromParticipantAccountsHasBeenSet = true; m_enableFsxRouteTableUpdatesFromParticipantAccounts.assign(value); }

    /**
     * <p>Specifies whether participant accounts can create FSx for ONTAP Multi-AZ file
     * systems in shared subnets. Set to <code>true</code> to enable or
     * <code>false</code> to disable.</p>
     */
    inline UpdateSharedVpcConfigurationRequest& WithEnableFsxRouteTableUpdatesFromParticipantAccounts(const Aws::String& value) { SetEnableFsxRouteTableUpdatesFromParticipantAccounts(value); return *this;}

    /**
     * <p>Specifies whether participant accounts can create FSx for ONTAP Multi-AZ file
     * systems in shared subnets. Set to <code>true</code> to enable or
     * <code>false</code> to disable.</p>
     */
    inline UpdateSharedVpcConfigurationRequest& WithEnableFsxRouteTableUpdatesFromParticipantAccounts(Aws::String&& value) { SetEnableFsxRouteTableUpdatesFromParticipantAccounts(std::move(value)); return *this;}

    /**
     * <p>Specifies whether participant accounts can create FSx for ONTAP Multi-AZ file
     * systems in shared subnets. Set to <code>true</code> to enable or
     * <code>false</code> to disable.</p>
     */
    inline UpdateSharedVpcConfigurationRequest& WithEnableFsxRouteTableUpdatesFromParticipantAccounts(const char* value) { SetEnableFsxRouteTableUpdatesFromParticipantAccounts(value); return *this;}


    
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }

    
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }

    
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }

    
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }

    
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }

    
    inline UpdateSharedVpcConfigurationRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}

    
    inline UpdateSharedVpcConfigurationRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}

    
    inline UpdateSharedVpcConfigurationRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}

  private:

    Aws::String m_enableFsxRouteTableUpdatesFromParticipantAccounts;
    bool m_enableFsxRouteTableUpdatesFromParticipantAccountsHasBeenSet = false;

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws

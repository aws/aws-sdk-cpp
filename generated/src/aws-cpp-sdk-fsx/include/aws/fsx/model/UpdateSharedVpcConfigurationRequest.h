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
    AWS_FSX_API UpdateSharedVpcConfigurationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateSharedVpcConfiguration"; }

    AWS_FSX_API Aws::String SerializePayload() const override;

    AWS_FSX_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Specifies whether participant accounts can create FSx for ONTAP Multi-AZ file
     * systems in shared subnets. Set to <code>true</code> to enable or
     * <code>false</code> to disable.</p>
     */
    inline const Aws::String& GetEnableFsxRouteTableUpdatesFromParticipantAccounts() const { return m_enableFsxRouteTableUpdatesFromParticipantAccounts; }
    inline bool EnableFsxRouteTableUpdatesFromParticipantAccountsHasBeenSet() const { return m_enableFsxRouteTableUpdatesFromParticipantAccountsHasBeenSet; }
    template<typename EnableFsxRouteTableUpdatesFromParticipantAccountsT = Aws::String>
    void SetEnableFsxRouteTableUpdatesFromParticipantAccounts(EnableFsxRouteTableUpdatesFromParticipantAccountsT&& value) { m_enableFsxRouteTableUpdatesFromParticipantAccountsHasBeenSet = true; m_enableFsxRouteTableUpdatesFromParticipantAccounts = std::forward<EnableFsxRouteTableUpdatesFromParticipantAccountsT>(value); }
    template<typename EnableFsxRouteTableUpdatesFromParticipantAccountsT = Aws::String>
    UpdateSharedVpcConfigurationRequest& WithEnableFsxRouteTableUpdatesFromParticipantAccounts(EnableFsxRouteTableUpdatesFromParticipantAccountsT&& value) { SetEnableFsxRouteTableUpdatesFromParticipantAccounts(std::forward<EnableFsxRouteTableUpdatesFromParticipantAccountsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetClientRequestToken() const { return m_clientRequestToken; }
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }
    template<typename ClientRequestTokenT = Aws::String>
    void SetClientRequestToken(ClientRequestTokenT&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::forward<ClientRequestTokenT>(value); }
    template<typename ClientRequestTokenT = Aws::String>
    UpdateSharedVpcConfigurationRequest& WithClientRequestToken(ClientRequestTokenT&& value) { SetClientRequestToken(std::forward<ClientRequestTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_enableFsxRouteTableUpdatesFromParticipantAccounts;
    bool m_enableFsxRouteTableUpdatesFromParticipantAccountsHasBeenSet = false;

    Aws::String m_clientRequestToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientRequestTokenHasBeenSet = true;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws

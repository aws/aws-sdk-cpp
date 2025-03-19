/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/ConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/TelephonyConfig.h>
#include <aws/connect/model/SignInConfig.h>
#include <aws/connect/model/AgentConfig.h>
#include <utility>

namespace Aws
{
namespace Connect
{
namespace Model
{

  /**
   */
  class UpdateTrafficDistributionRequest : public ConnectRequest
  {
  public:
    AWS_CONNECT_API UpdateTrafficDistributionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateTrafficDistribution"; }

    AWS_CONNECT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The identifier of the traffic distribution group. This can be the ID or the
     * ARN if the API is being called in the Region where the traffic distribution
     * group was created. The ARN must be provided if the call is from the replicated
     * Region. </p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    UpdateTrafficDistributionRequest& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The distribution of traffic between the instance and its replica(s).</p>
     */
    inline const TelephonyConfig& GetTelephonyConfig() const { return m_telephonyConfig; }
    inline bool TelephonyConfigHasBeenSet() const { return m_telephonyConfigHasBeenSet; }
    template<typename TelephonyConfigT = TelephonyConfig>
    void SetTelephonyConfig(TelephonyConfigT&& value) { m_telephonyConfigHasBeenSet = true; m_telephonyConfig = std::forward<TelephonyConfigT>(value); }
    template<typename TelephonyConfigT = TelephonyConfig>
    UpdateTrafficDistributionRequest& WithTelephonyConfig(TelephonyConfigT&& value) { SetTelephonyConfig(std::forward<TelephonyConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The distribution that determines which Amazon Web Services Regions should be
     * used to sign in agents in to both the instance and its replica(s).</p>
     */
    inline const SignInConfig& GetSignInConfig() const { return m_signInConfig; }
    inline bool SignInConfigHasBeenSet() const { return m_signInConfigHasBeenSet; }
    template<typename SignInConfigT = SignInConfig>
    void SetSignInConfig(SignInConfigT&& value) { m_signInConfigHasBeenSet = true; m_signInConfig = std::forward<SignInConfigT>(value); }
    template<typename SignInConfigT = SignInConfig>
    UpdateTrafficDistributionRequest& WithSignInConfig(SignInConfigT&& value) { SetSignInConfig(std::forward<SignInConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The distribution of agents between the instance and its replica(s).</p>
     */
    inline const AgentConfig& GetAgentConfig() const { return m_agentConfig; }
    inline bool AgentConfigHasBeenSet() const { return m_agentConfigHasBeenSet; }
    template<typename AgentConfigT = AgentConfig>
    void SetAgentConfig(AgentConfigT&& value) { m_agentConfigHasBeenSet = true; m_agentConfig = std::forward<AgentConfigT>(value); }
    template<typename AgentConfigT = AgentConfig>
    UpdateTrafficDistributionRequest& WithAgentConfig(AgentConfigT&& value) { SetAgentConfig(std::forward<AgentConfigT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    TelephonyConfig m_telephonyConfig;
    bool m_telephonyConfigHasBeenSet = false;

    SignInConfig m_signInConfig;
    bool m_signInConfigHasBeenSet = false;

    AgentConfig m_agentConfig;
    bool m_agentConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws

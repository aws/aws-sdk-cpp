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
    AWS_CONNECT_API UpdateTrafficDistributionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateTrafficDistribution"; }

    AWS_CONNECT_API Aws::String SerializePayload() const override;


    /**
     * <p>The identifier of the traffic distribution group. This can be the ID or the
     * ARN if the API is being called in the Region where the traffic distribution
     * group was created. The ARN must be provided if the call is from the replicated
     * Region. </p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The identifier of the traffic distribution group. This can be the ID or the
     * ARN if the API is being called in the Region where the traffic distribution
     * group was created. The ARN must be provided if the call is from the replicated
     * Region. </p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The identifier of the traffic distribution group. This can be the ID or the
     * ARN if the API is being called in the Region where the traffic distribution
     * group was created. The ARN must be provided if the call is from the replicated
     * Region. </p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The identifier of the traffic distribution group. This can be the ID or the
     * ARN if the API is being called in the Region where the traffic distribution
     * group was created. The ARN must be provided if the call is from the replicated
     * Region. </p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The identifier of the traffic distribution group. This can be the ID or the
     * ARN if the API is being called in the Region where the traffic distribution
     * group was created. The ARN must be provided if the call is from the replicated
     * Region. </p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The identifier of the traffic distribution group. This can be the ID or the
     * ARN if the API is being called in the Region where the traffic distribution
     * group was created. The ARN must be provided if the call is from the replicated
     * Region. </p>
     */
    inline UpdateTrafficDistributionRequest& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The identifier of the traffic distribution group. This can be the ID or the
     * ARN if the API is being called in the Region where the traffic distribution
     * group was created. The ARN must be provided if the call is from the replicated
     * Region. </p>
     */
    inline UpdateTrafficDistributionRequest& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the traffic distribution group. This can be the ID or the
     * ARN if the API is being called in the Region where the traffic distribution
     * group was created. The ARN must be provided if the call is from the replicated
     * Region. </p>
     */
    inline UpdateTrafficDistributionRequest& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The distribution of traffic between the instance and its replica(s).</p>
     */
    inline const TelephonyConfig& GetTelephonyConfig() const{ return m_telephonyConfig; }

    /**
     * <p>The distribution of traffic between the instance and its replica(s).</p>
     */
    inline bool TelephonyConfigHasBeenSet() const { return m_telephonyConfigHasBeenSet; }

    /**
     * <p>The distribution of traffic between the instance and its replica(s).</p>
     */
    inline void SetTelephonyConfig(const TelephonyConfig& value) { m_telephonyConfigHasBeenSet = true; m_telephonyConfig = value; }

    /**
     * <p>The distribution of traffic between the instance and its replica(s).</p>
     */
    inline void SetTelephonyConfig(TelephonyConfig&& value) { m_telephonyConfigHasBeenSet = true; m_telephonyConfig = std::move(value); }

    /**
     * <p>The distribution of traffic between the instance and its replica(s).</p>
     */
    inline UpdateTrafficDistributionRequest& WithTelephonyConfig(const TelephonyConfig& value) { SetTelephonyConfig(value); return *this;}

    /**
     * <p>The distribution of traffic between the instance and its replica(s).</p>
     */
    inline UpdateTrafficDistributionRequest& WithTelephonyConfig(TelephonyConfig&& value) { SetTelephonyConfig(std::move(value)); return *this;}


    /**
     * <p>The distribution that determines which Amazon Web Services Regions should be
     * used to sign in agents in to both the instance and its replica(s).</p>
     */
    inline const SignInConfig& GetSignInConfig() const{ return m_signInConfig; }

    /**
     * <p>The distribution that determines which Amazon Web Services Regions should be
     * used to sign in agents in to both the instance and its replica(s).</p>
     */
    inline bool SignInConfigHasBeenSet() const { return m_signInConfigHasBeenSet; }

    /**
     * <p>The distribution that determines which Amazon Web Services Regions should be
     * used to sign in agents in to both the instance and its replica(s).</p>
     */
    inline void SetSignInConfig(const SignInConfig& value) { m_signInConfigHasBeenSet = true; m_signInConfig = value; }

    /**
     * <p>The distribution that determines which Amazon Web Services Regions should be
     * used to sign in agents in to both the instance and its replica(s).</p>
     */
    inline void SetSignInConfig(SignInConfig&& value) { m_signInConfigHasBeenSet = true; m_signInConfig = std::move(value); }

    /**
     * <p>The distribution that determines which Amazon Web Services Regions should be
     * used to sign in agents in to both the instance and its replica(s).</p>
     */
    inline UpdateTrafficDistributionRequest& WithSignInConfig(const SignInConfig& value) { SetSignInConfig(value); return *this;}

    /**
     * <p>The distribution that determines which Amazon Web Services Regions should be
     * used to sign in agents in to both the instance and its replica(s).</p>
     */
    inline UpdateTrafficDistributionRequest& WithSignInConfig(SignInConfig&& value) { SetSignInConfig(std::move(value)); return *this;}


    /**
     * <p>The distribution of agents between the instance and its replica(s).</p>
     */
    inline const AgentConfig& GetAgentConfig() const{ return m_agentConfig; }

    /**
     * <p>The distribution of agents between the instance and its replica(s).</p>
     */
    inline bool AgentConfigHasBeenSet() const { return m_agentConfigHasBeenSet; }

    /**
     * <p>The distribution of agents between the instance and its replica(s).</p>
     */
    inline void SetAgentConfig(const AgentConfig& value) { m_agentConfigHasBeenSet = true; m_agentConfig = value; }

    /**
     * <p>The distribution of agents between the instance and its replica(s).</p>
     */
    inline void SetAgentConfig(AgentConfig&& value) { m_agentConfigHasBeenSet = true; m_agentConfig = std::move(value); }

    /**
     * <p>The distribution of agents between the instance and its replica(s).</p>
     */
    inline UpdateTrafficDistributionRequest& WithAgentConfig(const AgentConfig& value) { SetAgentConfig(value); return *this;}

    /**
     * <p>The distribution of agents between the instance and its replica(s).</p>
     */
    inline UpdateTrafficDistributionRequest& WithAgentConfig(AgentConfig&& value) { SetAgentConfig(std::move(value)); return *this;}

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

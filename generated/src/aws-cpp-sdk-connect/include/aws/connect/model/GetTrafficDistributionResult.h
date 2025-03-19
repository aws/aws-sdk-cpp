/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/TelephonyConfig.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/SignInConfig.h>
#include <aws/connect/model/AgentConfig.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Connect
{
namespace Model
{
  class GetTrafficDistributionResult
  {
  public:
    AWS_CONNECT_API GetTrafficDistributionResult() = default;
    AWS_CONNECT_API GetTrafficDistributionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API GetTrafficDistributionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The distribution of traffic between the instance and its replicas.</p>
     */
    inline const TelephonyConfig& GetTelephonyConfig() const { return m_telephonyConfig; }
    template<typename TelephonyConfigT = TelephonyConfig>
    void SetTelephonyConfig(TelephonyConfigT&& value) { m_telephonyConfigHasBeenSet = true; m_telephonyConfig = std::forward<TelephonyConfigT>(value); }
    template<typename TelephonyConfigT = TelephonyConfig>
    GetTrafficDistributionResult& WithTelephonyConfig(TelephonyConfigT&& value) { SetTelephonyConfig(std::forward<TelephonyConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the traffic distribution group. This can be the ID or the
     * ARN if the API is being called in the Region where the traffic distribution
     * group was created. The ARN must be provided if the call is from the replicated
     * Region.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    GetTrafficDistributionResult& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the traffic distribution group.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    GetTrafficDistributionResult& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The distribution that determines which Amazon Web Services Regions should be
     * used to sign in agents in to both the instance and its replica(s).</p>
     */
    inline const SignInConfig& GetSignInConfig() const { return m_signInConfig; }
    template<typename SignInConfigT = SignInConfig>
    void SetSignInConfig(SignInConfigT&& value) { m_signInConfigHasBeenSet = true; m_signInConfig = std::forward<SignInConfigT>(value); }
    template<typename SignInConfigT = SignInConfig>
    GetTrafficDistributionResult& WithSignInConfig(SignInConfigT&& value) { SetSignInConfig(std::forward<SignInConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The distribution of agents between the instance and its replica(s).</p>
     */
    inline const AgentConfig& GetAgentConfig() const { return m_agentConfig; }
    template<typename AgentConfigT = AgentConfig>
    void SetAgentConfig(AgentConfigT&& value) { m_agentConfigHasBeenSet = true; m_agentConfig = std::forward<AgentConfigT>(value); }
    template<typename AgentConfigT = AgentConfig>
    GetTrafficDistributionResult& WithAgentConfig(AgentConfigT&& value) { SetAgentConfig(std::forward<AgentConfigT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetTrafficDistributionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    TelephonyConfig m_telephonyConfig;
    bool m_telephonyConfigHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    SignInConfig m_signInConfig;
    bool m_signInConfigHasBeenSet = false;

    AgentConfig m_agentConfig;
    bool m_agentConfigHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws

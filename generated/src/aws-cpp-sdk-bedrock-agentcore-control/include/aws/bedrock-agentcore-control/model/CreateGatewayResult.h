/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/bedrock-agentcore-control/model/GatewayStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock-agentcore-control/model/GatewayProtocolType.h>
#include <aws/bedrock-agentcore-control/model/GatewayProtocolConfiguration.h>
#include <aws/bedrock-agentcore-control/model/AuthorizerType.h>
#include <aws/bedrock-agentcore-control/model/AuthorizerConfiguration.h>
#include <aws/bedrock-agentcore-control/model/WorkloadIdentityDetails.h>
#include <aws/bedrock-agentcore-control/model/ExceptionLevel.h>
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
namespace BedrockAgentCoreControl
{
namespace Model
{
  class CreateGatewayResult
  {
  public:
    AWS_BEDROCKAGENTCORECONTROL_API CreateGatewayResult() = default;
    AWS_BEDROCKAGENTCORECONTROL_API CreateGatewayResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCKAGENTCORECONTROL_API CreateGatewayResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the created gateway.</p>
     */
    inline const Aws::String& GetGatewayArn() const { return m_gatewayArn; }
    template<typename GatewayArnT = Aws::String>
    void SetGatewayArn(GatewayArnT&& value) { m_gatewayArnHasBeenSet = true; m_gatewayArn = std::forward<GatewayArnT>(value); }
    template<typename GatewayArnT = Aws::String>
    CreateGatewayResult& WithGatewayArn(GatewayArnT&& value) { SetGatewayArn(std::forward<GatewayArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the created gateway.</p>
     */
    inline const Aws::String& GetGatewayId() const { return m_gatewayId; }
    template<typename GatewayIdT = Aws::String>
    void SetGatewayId(GatewayIdT&& value) { m_gatewayIdHasBeenSet = true; m_gatewayId = std::forward<GatewayIdT>(value); }
    template<typename GatewayIdT = Aws::String>
    CreateGatewayResult& WithGatewayId(GatewayIdT&& value) { SetGatewayId(std::forward<GatewayIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL endpoint for the created gateway.</p>
     */
    inline const Aws::String& GetGatewayUrl() const { return m_gatewayUrl; }
    template<typename GatewayUrlT = Aws::String>
    void SetGatewayUrl(GatewayUrlT&& value) { m_gatewayUrlHasBeenSet = true; m_gatewayUrl = std::forward<GatewayUrlT>(value); }
    template<typename GatewayUrlT = Aws::String>
    CreateGatewayResult& WithGatewayUrl(GatewayUrlT&& value) { SetGatewayUrl(std::forward<GatewayUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the gateway was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    CreateGatewayResult& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the gateway was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    void SetUpdatedAt(UpdatedAtT&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::forward<UpdatedAtT>(value); }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    CreateGatewayResult& WithUpdatedAt(UpdatedAtT&& value) { SetUpdatedAt(std::forward<UpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the gateway.</p>
     */
    inline GatewayStatus GetStatus() const { return m_status; }
    inline void SetStatus(GatewayStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline CreateGatewayResult& WithStatus(GatewayStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reasons for the current status of the gateway.</p>
     */
    inline const Aws::Vector<Aws::String>& GetStatusReasons() const { return m_statusReasons; }
    template<typename StatusReasonsT = Aws::Vector<Aws::String>>
    void SetStatusReasons(StatusReasonsT&& value) { m_statusReasonsHasBeenSet = true; m_statusReasons = std::forward<StatusReasonsT>(value); }
    template<typename StatusReasonsT = Aws::Vector<Aws::String>>
    CreateGatewayResult& WithStatusReasons(StatusReasonsT&& value) { SetStatusReasons(std::forward<StatusReasonsT>(value)); return *this;}
    template<typename StatusReasonsT = Aws::String>
    CreateGatewayResult& AddStatusReasons(StatusReasonsT&& value) { m_statusReasonsHasBeenSet = true; m_statusReasons.emplace_back(std::forward<StatusReasonsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the gateway.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateGatewayResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the gateway.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CreateGatewayResult& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role associated with the
     * gateway.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    CreateGatewayResult& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The protocol type of the gateway.</p>
     */
    inline GatewayProtocolType GetProtocolType() const { return m_protocolType; }
    inline void SetProtocolType(GatewayProtocolType value) { m_protocolTypeHasBeenSet = true; m_protocolType = value; }
    inline CreateGatewayResult& WithProtocolType(GatewayProtocolType value) { SetProtocolType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration settings for the protocol used by the gateway.</p>
     */
    inline const GatewayProtocolConfiguration& GetProtocolConfiguration() const { return m_protocolConfiguration; }
    template<typename ProtocolConfigurationT = GatewayProtocolConfiguration>
    void SetProtocolConfiguration(ProtocolConfigurationT&& value) { m_protocolConfigurationHasBeenSet = true; m_protocolConfiguration = std::forward<ProtocolConfigurationT>(value); }
    template<typename ProtocolConfigurationT = GatewayProtocolConfiguration>
    CreateGatewayResult& WithProtocolConfiguration(ProtocolConfigurationT&& value) { SetProtocolConfiguration(std::forward<ProtocolConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of authorizer used by the gateway.</p>
     */
    inline AuthorizerType GetAuthorizerType() const { return m_authorizerType; }
    inline void SetAuthorizerType(AuthorizerType value) { m_authorizerTypeHasBeenSet = true; m_authorizerType = value; }
    inline CreateGatewayResult& WithAuthorizerType(AuthorizerType value) { SetAuthorizerType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The authorizer configuration for the created gateway.</p>
     */
    inline const AuthorizerConfiguration& GetAuthorizerConfiguration() const { return m_authorizerConfiguration; }
    template<typename AuthorizerConfigurationT = AuthorizerConfiguration>
    void SetAuthorizerConfiguration(AuthorizerConfigurationT&& value) { m_authorizerConfigurationHasBeenSet = true; m_authorizerConfiguration = std::forward<AuthorizerConfigurationT>(value); }
    template<typename AuthorizerConfigurationT = AuthorizerConfiguration>
    CreateGatewayResult& WithAuthorizerConfiguration(AuthorizerConfigurationT&& value) { SetAuthorizerConfiguration(std::forward<AuthorizerConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the KMS key used to encrypt data associated
     * with the gateway.</p>
     */
    inline const Aws::String& GetKmsKeyArn() const { return m_kmsKeyArn; }
    template<typename KmsKeyArnT = Aws::String>
    void SetKmsKeyArn(KmsKeyArnT&& value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn = std::forward<KmsKeyArnT>(value); }
    template<typename KmsKeyArnT = Aws::String>
    CreateGatewayResult& WithKmsKeyArn(KmsKeyArnT&& value) { SetKmsKeyArn(std::forward<KmsKeyArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The workload identity details for the created gateway.</p>
     */
    inline const WorkloadIdentityDetails& GetWorkloadIdentityDetails() const { return m_workloadIdentityDetails; }
    template<typename WorkloadIdentityDetailsT = WorkloadIdentityDetails>
    void SetWorkloadIdentityDetails(WorkloadIdentityDetailsT&& value) { m_workloadIdentityDetailsHasBeenSet = true; m_workloadIdentityDetails = std::forward<WorkloadIdentityDetailsT>(value); }
    template<typename WorkloadIdentityDetailsT = WorkloadIdentityDetails>
    CreateGatewayResult& WithWorkloadIdentityDetails(WorkloadIdentityDetailsT&& value) { SetWorkloadIdentityDetails(std::forward<WorkloadIdentityDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The level of detail in error messages returned when invoking the gateway.</p>
     * <ul> <li> <p>If the value is <code>DEBUG</code>, granular exception messages are
     * returned to help a user debug the gateway.</p> </li> <li> <p>If the value is
     * omitted, a generic error message is returned to the end user.</p> </li> </ul>
     */
    inline ExceptionLevel GetExceptionLevel() const { return m_exceptionLevel; }
    inline void SetExceptionLevel(ExceptionLevel value) { m_exceptionLevelHasBeenSet = true; m_exceptionLevel = value; }
    inline CreateGatewayResult& WithExceptionLevel(ExceptionLevel value) { SetExceptionLevel(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateGatewayResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_gatewayArn;
    bool m_gatewayArnHasBeenSet = false;

    Aws::String m_gatewayId;
    bool m_gatewayIdHasBeenSet = false;

    Aws::String m_gatewayUrl;
    bool m_gatewayUrlHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt{};
    bool m_updatedAtHasBeenSet = false;

    GatewayStatus m_status{GatewayStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Vector<Aws::String> m_statusReasons;
    bool m_statusReasonsHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    GatewayProtocolType m_protocolType{GatewayProtocolType::NOT_SET};
    bool m_protocolTypeHasBeenSet = false;

    GatewayProtocolConfiguration m_protocolConfiguration;
    bool m_protocolConfigurationHasBeenSet = false;

    AuthorizerType m_authorizerType{AuthorizerType::NOT_SET};
    bool m_authorizerTypeHasBeenSet = false;

    AuthorizerConfiguration m_authorizerConfiguration;
    bool m_authorizerConfigurationHasBeenSet = false;

    Aws::String m_kmsKeyArn;
    bool m_kmsKeyArnHasBeenSet = false;

    WorkloadIdentityDetails m_workloadIdentityDetails;
    bool m_workloadIdentityDetailsHasBeenSet = false;

    ExceptionLevel m_exceptionLevel{ExceptionLevel::NOT_SET};
    bool m_exceptionLevelHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentCoreControl
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock-agent/model/FlowAliasConcurrencyConfiguration.h>
#include <aws/core/utils/DateTime.h>
#include <aws/bedrock-agent/model/FlowAliasRoutingConfigurationListItem.h>
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
namespace BedrockAgent
{
namespace Model
{
  class GetFlowAliasResult
  {
  public:
    AWS_BEDROCKAGENT_API GetFlowAliasResult() = default;
    AWS_BEDROCKAGENT_API GetFlowAliasResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCKAGENT_API GetFlowAliasResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the alias.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    GetFlowAliasResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the flow.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    GetFlowAliasResult& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains information about the version that the alias is mapped to.</p>
     */
    inline const Aws::Vector<FlowAliasRoutingConfigurationListItem>& GetRoutingConfiguration() const { return m_routingConfiguration; }
    template<typename RoutingConfigurationT = Aws::Vector<FlowAliasRoutingConfigurationListItem>>
    void SetRoutingConfiguration(RoutingConfigurationT&& value) { m_routingConfigurationHasBeenSet = true; m_routingConfiguration = std::forward<RoutingConfigurationT>(value); }
    template<typename RoutingConfigurationT = Aws::Vector<FlowAliasRoutingConfigurationListItem>>
    GetFlowAliasResult& WithRoutingConfiguration(RoutingConfigurationT&& value) { SetRoutingConfiguration(std::forward<RoutingConfigurationT>(value)); return *this;}
    template<typename RoutingConfigurationT = FlowAliasRoutingConfigurationListItem>
    GetFlowAliasResult& AddRoutingConfiguration(RoutingConfigurationT&& value) { m_routingConfigurationHasBeenSet = true; m_routingConfiguration.emplace_back(std::forward<RoutingConfigurationT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The configuration that specifies how nodes in the flow are executed in
     * parallel.</p>
     */
    inline const FlowAliasConcurrencyConfiguration& GetConcurrencyConfiguration() const { return m_concurrencyConfiguration; }
    template<typename ConcurrencyConfigurationT = FlowAliasConcurrencyConfiguration>
    void SetConcurrencyConfiguration(ConcurrencyConfigurationT&& value) { m_concurrencyConfigurationHasBeenSet = true; m_concurrencyConfiguration = std::forward<ConcurrencyConfigurationT>(value); }
    template<typename ConcurrencyConfigurationT = FlowAliasConcurrencyConfiguration>
    GetFlowAliasResult& WithConcurrencyConfiguration(ConcurrencyConfigurationT&& value) { SetConcurrencyConfiguration(std::forward<ConcurrencyConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the flow that the alias belongs to.</p>
     */
    inline const Aws::String& GetFlowId() const { return m_flowId; }
    template<typename FlowIdT = Aws::String>
    void SetFlowId(FlowIdT&& value) { m_flowIdHasBeenSet = true; m_flowId = std::forward<FlowIdT>(value); }
    template<typename FlowIdT = Aws::String>
    GetFlowAliasResult& WithFlowId(FlowIdT&& value) { SetFlowId(std::forward<FlowIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the alias of the flow.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    GetFlowAliasResult& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the flow.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    GetFlowAliasResult& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the flow was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    GetFlowAliasResult& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the alias was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    void SetUpdatedAt(UpdatedAtT&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::forward<UpdatedAtT>(value); }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    GetFlowAliasResult& WithUpdatedAt(UpdatedAtT&& value) { SetUpdatedAt(std::forward<UpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetFlowAliasResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<FlowAliasRoutingConfigurationListItem> m_routingConfiguration;
    bool m_routingConfigurationHasBeenSet = false;

    FlowAliasConcurrencyConfiguration m_concurrencyConfiguration;
    bool m_concurrencyConfigurationHasBeenSet = false;

    Aws::String m_flowId;
    bool m_flowIdHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt{};
    bool m_updatedAtHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws

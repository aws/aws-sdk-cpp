/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class UpdateFlowAliasResult
  {
  public:
    AWS_BEDROCKAGENT_API UpdateFlowAliasResult();
    AWS_BEDROCKAGENT_API UpdateFlowAliasResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCKAGENT_API UpdateFlowAliasResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the flow.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline void SetArn(const Aws::String& value) { m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arn.assign(value); }
    inline UpdateFlowAliasResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline UpdateFlowAliasResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline UpdateFlowAliasResult& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the flow was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }
    inline UpdateFlowAliasResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline UpdateFlowAliasResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the flow.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline UpdateFlowAliasResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline UpdateFlowAliasResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline UpdateFlowAliasResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the flow.</p>
     */
    inline const Aws::String& GetFlowId() const{ return m_flowId; }
    inline void SetFlowId(const Aws::String& value) { m_flowId = value; }
    inline void SetFlowId(Aws::String&& value) { m_flowId = std::move(value); }
    inline void SetFlowId(const char* value) { m_flowId.assign(value); }
    inline UpdateFlowAliasResult& WithFlowId(const Aws::String& value) { SetFlowId(value); return *this;}
    inline UpdateFlowAliasResult& WithFlowId(Aws::String&& value) { SetFlowId(std::move(value)); return *this;}
    inline UpdateFlowAliasResult& WithFlowId(const char* value) { SetFlowId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the alias.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline void SetId(const Aws::String& value) { m_id = value; }
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }
    inline void SetId(const char* value) { m_id.assign(value); }
    inline UpdateFlowAliasResult& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline UpdateFlowAliasResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline UpdateFlowAliasResult& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the alias.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline UpdateFlowAliasResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline UpdateFlowAliasResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline UpdateFlowAliasResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains information about the version that the alias is mapped to.</p>
     */
    inline const Aws::Vector<FlowAliasRoutingConfigurationListItem>& GetRoutingConfiguration() const{ return m_routingConfiguration; }
    inline void SetRoutingConfiguration(const Aws::Vector<FlowAliasRoutingConfigurationListItem>& value) { m_routingConfiguration = value; }
    inline void SetRoutingConfiguration(Aws::Vector<FlowAliasRoutingConfigurationListItem>&& value) { m_routingConfiguration = std::move(value); }
    inline UpdateFlowAliasResult& WithRoutingConfiguration(const Aws::Vector<FlowAliasRoutingConfigurationListItem>& value) { SetRoutingConfiguration(value); return *this;}
    inline UpdateFlowAliasResult& WithRoutingConfiguration(Aws::Vector<FlowAliasRoutingConfigurationListItem>&& value) { SetRoutingConfiguration(std::move(value)); return *this;}
    inline UpdateFlowAliasResult& AddRoutingConfiguration(const FlowAliasRoutingConfigurationListItem& value) { m_routingConfiguration.push_back(value); return *this; }
    inline UpdateFlowAliasResult& AddRoutingConfiguration(FlowAliasRoutingConfigurationListItem&& value) { m_routingConfiguration.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The time at which the alias was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAt = value; }
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAt = std::move(value); }
    inline UpdateFlowAliasResult& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}
    inline UpdateFlowAliasResult& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UpdateFlowAliasResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UpdateFlowAliasResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UpdateFlowAliasResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;

    Aws::Utils::DateTime m_createdAt;

    Aws::String m_description;

    Aws::String m_flowId;

    Aws::String m_id;

    Aws::String m_name;

    Aws::Vector<FlowAliasRoutingConfigurationListItem> m_routingConfiguration;

    Aws::Utils::DateTime m_updatedAt;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws

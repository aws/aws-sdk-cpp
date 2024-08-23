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
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace BedrockAgent
{
namespace Model
{

  /**
   * <p>Contains information about an alias of a flow.</p> <p>This data type is used
   * in the following API operations:</p> <ul> <li> <p> <a
   * href="https://docs.aws.amazon.com/bedrock/latest/APIReference/API_agent_ListFlowAliases.html#API_agent_ListFlowAliases_ResponseSyntax">ListFlowAliases
   * response</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/FlowAliasSummary">AWS
   * API Reference</a></p>
   */
  class FlowAliasSummary
  {
  public:
    AWS_BEDROCKAGENT_API FlowAliasSummary();
    AWS_BEDROCKAGENT_API FlowAliasSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API FlowAliasSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the alias.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline FlowAliasSummary& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline FlowAliasSummary& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline FlowAliasSummary& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the alias was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }
    inline FlowAliasSummary& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline FlowAliasSummary& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the alias.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline FlowAliasSummary& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline FlowAliasSummary& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline FlowAliasSummary& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the flow.</p>
     */
    inline const Aws::String& GetFlowId() const{ return m_flowId; }
    inline bool FlowIdHasBeenSet() const { return m_flowIdHasBeenSet; }
    inline void SetFlowId(const Aws::String& value) { m_flowIdHasBeenSet = true; m_flowId = value; }
    inline void SetFlowId(Aws::String&& value) { m_flowIdHasBeenSet = true; m_flowId = std::move(value); }
    inline void SetFlowId(const char* value) { m_flowIdHasBeenSet = true; m_flowId.assign(value); }
    inline FlowAliasSummary& WithFlowId(const Aws::String& value) { SetFlowId(value); return *this;}
    inline FlowAliasSummary& WithFlowId(Aws::String&& value) { SetFlowId(std::move(value)); return *this;}
    inline FlowAliasSummary& WithFlowId(const char* value) { SetFlowId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the alias of the flow.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline FlowAliasSummary& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline FlowAliasSummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline FlowAliasSummary& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the alias.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline FlowAliasSummary& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline FlowAliasSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline FlowAliasSummary& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of configurations about the versions that the alias maps to.
     * Currently, you can only specify one.</p>
     */
    inline const Aws::Vector<FlowAliasRoutingConfigurationListItem>& GetRoutingConfiguration() const{ return m_routingConfiguration; }
    inline bool RoutingConfigurationHasBeenSet() const { return m_routingConfigurationHasBeenSet; }
    inline void SetRoutingConfiguration(const Aws::Vector<FlowAliasRoutingConfigurationListItem>& value) { m_routingConfigurationHasBeenSet = true; m_routingConfiguration = value; }
    inline void SetRoutingConfiguration(Aws::Vector<FlowAliasRoutingConfigurationListItem>&& value) { m_routingConfigurationHasBeenSet = true; m_routingConfiguration = std::move(value); }
    inline FlowAliasSummary& WithRoutingConfiguration(const Aws::Vector<FlowAliasRoutingConfigurationListItem>& value) { SetRoutingConfiguration(value); return *this;}
    inline FlowAliasSummary& WithRoutingConfiguration(Aws::Vector<FlowAliasRoutingConfigurationListItem>&& value) { SetRoutingConfiguration(std::move(value)); return *this;}
    inline FlowAliasSummary& AddRoutingConfiguration(const FlowAliasRoutingConfigurationListItem& value) { m_routingConfigurationHasBeenSet = true; m_routingConfiguration.push_back(value); return *this; }
    inline FlowAliasSummary& AddRoutingConfiguration(FlowAliasRoutingConfigurationListItem&& value) { m_routingConfigurationHasBeenSet = true; m_routingConfiguration.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The time at which the alias was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::move(value); }
    inline FlowAliasSummary& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}
    inline FlowAliasSummary& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_flowId;
    bool m_flowIdHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<FlowAliasRoutingConfigurationListItem> m_routingConfiguration;
    bool m_routingConfigurationHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt;
    bool m_updatedAtHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws

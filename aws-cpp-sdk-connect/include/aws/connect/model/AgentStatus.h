/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/AgentStatusType.h>
#include <aws/connect/model/AgentStatusState.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace Connect
{
namespace Model
{

  /**
   * <p>Contains information about an agent status.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/AgentStatus">AWS
   * API Reference</a></p>
   */
  class AgentStatus
  {
  public:
    AWS_CONNECT_API AgentStatus();
    AWS_CONNECT_API AgentStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API AgentStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the agent status.</p>
     */
    inline const Aws::String& GetAgentStatusARN() const{ return m_agentStatusARN; }

    /**
     * <p>The Amazon Resource Name (ARN) of the agent status.</p>
     */
    inline bool AgentStatusARNHasBeenSet() const { return m_agentStatusARNHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the agent status.</p>
     */
    inline void SetAgentStatusARN(const Aws::String& value) { m_agentStatusARNHasBeenSet = true; m_agentStatusARN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the agent status.</p>
     */
    inline void SetAgentStatusARN(Aws::String&& value) { m_agentStatusARNHasBeenSet = true; m_agentStatusARN = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the agent status.</p>
     */
    inline void SetAgentStatusARN(const char* value) { m_agentStatusARNHasBeenSet = true; m_agentStatusARN.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the agent status.</p>
     */
    inline AgentStatus& WithAgentStatusARN(const Aws::String& value) { SetAgentStatusARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the agent status.</p>
     */
    inline AgentStatus& WithAgentStatusARN(Aws::String&& value) { SetAgentStatusARN(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the agent status.</p>
     */
    inline AgentStatus& WithAgentStatusARN(const char* value) { SetAgentStatusARN(value); return *this;}


    /**
     * <p>The identifier of the agent status.</p>
     */
    inline const Aws::String& GetAgentStatusId() const{ return m_agentStatusId; }

    /**
     * <p>The identifier of the agent status.</p>
     */
    inline bool AgentStatusIdHasBeenSet() const { return m_agentStatusIdHasBeenSet; }

    /**
     * <p>The identifier of the agent status.</p>
     */
    inline void SetAgentStatusId(const Aws::String& value) { m_agentStatusIdHasBeenSet = true; m_agentStatusId = value; }

    /**
     * <p>The identifier of the agent status.</p>
     */
    inline void SetAgentStatusId(Aws::String&& value) { m_agentStatusIdHasBeenSet = true; m_agentStatusId = std::move(value); }

    /**
     * <p>The identifier of the agent status.</p>
     */
    inline void SetAgentStatusId(const char* value) { m_agentStatusIdHasBeenSet = true; m_agentStatusId.assign(value); }

    /**
     * <p>The identifier of the agent status.</p>
     */
    inline AgentStatus& WithAgentStatusId(const Aws::String& value) { SetAgentStatusId(value); return *this;}

    /**
     * <p>The identifier of the agent status.</p>
     */
    inline AgentStatus& WithAgentStatusId(Aws::String&& value) { SetAgentStatusId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the agent status.</p>
     */
    inline AgentStatus& WithAgentStatusId(const char* value) { SetAgentStatusId(value); return *this;}


    /**
     * <p>The name of the agent status.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the agent status.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the agent status.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the agent status.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the agent status.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the agent status.</p>
     */
    inline AgentStatus& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the agent status.</p>
     */
    inline AgentStatus& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the agent status.</p>
     */
    inline AgentStatus& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The description of the agent status.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the agent status.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the agent status.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the agent status.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the agent status.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the agent status.</p>
     */
    inline AgentStatus& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the agent status.</p>
     */
    inline AgentStatus& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the agent status.</p>
     */
    inline AgentStatus& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The type of agent status.</p>
     */
    inline const AgentStatusType& GetType() const{ return m_type; }

    /**
     * <p>The type of agent status.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of agent status.</p>
     */
    inline void SetType(const AgentStatusType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of agent status.</p>
     */
    inline void SetType(AgentStatusType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of agent status.</p>
     */
    inline AgentStatus& WithType(const AgentStatusType& value) { SetType(value); return *this;}

    /**
     * <p>The type of agent status.</p>
     */
    inline AgentStatus& WithType(AgentStatusType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The display order of the agent status.</p>
     */
    inline int GetDisplayOrder() const{ return m_displayOrder; }

    /**
     * <p>The display order of the agent status.</p>
     */
    inline bool DisplayOrderHasBeenSet() const { return m_displayOrderHasBeenSet; }

    /**
     * <p>The display order of the agent status.</p>
     */
    inline void SetDisplayOrder(int value) { m_displayOrderHasBeenSet = true; m_displayOrder = value; }

    /**
     * <p>The display order of the agent status.</p>
     */
    inline AgentStatus& WithDisplayOrder(int value) { SetDisplayOrder(value); return *this;}


    /**
     * <p>The state of the agent status.</p>
     */
    inline const AgentStatusState& GetState() const{ return m_state; }

    /**
     * <p>The state of the agent status.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The state of the agent status.</p>
     */
    inline void SetState(const AgentStatusState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The state of the agent status.</p>
     */
    inline void SetState(AgentStatusState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The state of the agent status.</p>
     */
    inline AgentStatus& WithState(const AgentStatusState& value) { SetState(value); return *this;}

    /**
     * <p>The state of the agent status.</p>
     */
    inline AgentStatus& WithState(AgentStatusState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline AgentStatus& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline AgentStatus& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline AgentStatus& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline AgentStatus& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline AgentStatus& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline AgentStatus& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline AgentStatus& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline AgentStatus& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline AgentStatus& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_agentStatusARN;
    bool m_agentStatusARNHasBeenSet = false;

    Aws::String m_agentStatusId;
    bool m_agentStatusIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    AgentStatusType m_type;
    bool m_typeHasBeenSet = false;

    int m_displayOrder;
    bool m_displayOrderHasBeenSet = false;

    AgentStatusState m_state;
    bool m_stateHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws

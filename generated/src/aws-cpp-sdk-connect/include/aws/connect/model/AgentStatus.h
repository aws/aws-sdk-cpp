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
#include <aws/core/utils/DateTime.h>
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
    AWS_CONNECT_API AgentStatus() = default;
    AWS_CONNECT_API AgentStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API AgentStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the agent status.</p>
     */
    inline const Aws::String& GetAgentStatusARN() const { return m_agentStatusARN; }
    inline bool AgentStatusARNHasBeenSet() const { return m_agentStatusARNHasBeenSet; }
    template<typename AgentStatusARNT = Aws::String>
    void SetAgentStatusARN(AgentStatusARNT&& value) { m_agentStatusARNHasBeenSet = true; m_agentStatusARN = std::forward<AgentStatusARNT>(value); }
    template<typename AgentStatusARNT = Aws::String>
    AgentStatus& WithAgentStatusARN(AgentStatusARNT&& value) { SetAgentStatusARN(std::forward<AgentStatusARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the agent status.</p>
     */
    inline const Aws::String& GetAgentStatusId() const { return m_agentStatusId; }
    inline bool AgentStatusIdHasBeenSet() const { return m_agentStatusIdHasBeenSet; }
    template<typename AgentStatusIdT = Aws::String>
    void SetAgentStatusId(AgentStatusIdT&& value) { m_agentStatusIdHasBeenSet = true; m_agentStatusId = std::forward<AgentStatusIdT>(value); }
    template<typename AgentStatusIdT = Aws::String>
    AgentStatus& WithAgentStatusId(AgentStatusIdT&& value) { SetAgentStatusId(std::forward<AgentStatusIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the agent status.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    AgentStatus& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the agent status.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    AgentStatus& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of agent status.</p>
     */
    inline AgentStatusType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(AgentStatusType value) { m_typeHasBeenSet = true; m_type = value; }
    inline AgentStatus& WithType(AgentStatusType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The display order of the agent status.</p>
     */
    inline int GetDisplayOrder() const { return m_displayOrder; }
    inline bool DisplayOrderHasBeenSet() const { return m_displayOrderHasBeenSet; }
    inline void SetDisplayOrder(int value) { m_displayOrderHasBeenSet = true; m_displayOrder = value; }
    inline AgentStatus& WithDisplayOrder(int value) { SetDisplayOrder(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the agent status.</p>
     */
    inline AgentStatusState GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(AgentStatusState value) { m_stateHasBeenSet = true; m_state = value; }
    inline AgentStatus& WithState(AgentStatusState value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "Tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    AgentStatus& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    AgentStatus& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The timestamp when this resource was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const { return m_lastModifiedTime; }
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    void SetLastModifiedTime(LastModifiedTimeT&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::forward<LastModifiedTimeT>(value); }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    AgentStatus& WithLastModifiedTime(LastModifiedTimeT&& value) { SetLastModifiedTime(std::forward<LastModifiedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Region where this resource was last modified.</p>
     */
    inline const Aws::String& GetLastModifiedRegion() const { return m_lastModifiedRegion; }
    inline bool LastModifiedRegionHasBeenSet() const { return m_lastModifiedRegionHasBeenSet; }
    template<typename LastModifiedRegionT = Aws::String>
    void SetLastModifiedRegion(LastModifiedRegionT&& value) { m_lastModifiedRegionHasBeenSet = true; m_lastModifiedRegion = std::forward<LastModifiedRegionT>(value); }
    template<typename LastModifiedRegionT = Aws::String>
    AgentStatus& WithLastModifiedRegion(LastModifiedRegionT&& value) { SetLastModifiedRegion(std::forward<LastModifiedRegionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_agentStatusARN;
    bool m_agentStatusARNHasBeenSet = false;

    Aws::String m_agentStatusId;
    bool m_agentStatusIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    AgentStatusType m_type{AgentStatusType::NOT_SET};
    bool m_typeHasBeenSet = false;

    int m_displayOrder{0};
    bool m_displayOrderHasBeenSet = false;

    AgentStatusState m_state{AgentStatusState::NOT_SET};
    bool m_stateHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime{};
    bool m_lastModifiedTimeHasBeenSet = false;

    Aws::String m_lastModifiedRegion;
    bool m_lastModifiedRegionHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws

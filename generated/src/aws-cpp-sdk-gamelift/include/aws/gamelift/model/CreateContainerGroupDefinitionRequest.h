﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/gamelift/GameLiftRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/gamelift/model/ContainerGroupType.h>
#include <aws/gamelift/model/GameServerContainerDefinitionInput.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/gamelift/model/ContainerOperatingSystem.h>
#include <aws/gamelift/model/SupportContainerDefinitionInput.h>
#include <aws/gamelift/model/Tag.h>
#include <utility>

namespace Aws
{
namespace GameLift
{
namespace Model
{

  /**
   */
  class CreateContainerGroupDefinitionRequest : public GameLiftRequest
  {
  public:
    AWS_GAMELIFT_API CreateContainerGroupDefinitionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateContainerGroupDefinition"; }

    AWS_GAMELIFT_API Aws::String SerializePayload() const override;

    AWS_GAMELIFT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>A descriptive identifier for the container group definition. The name value
     * must be unique in an Amazon Web Services Region.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateContainerGroupDefinitionRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of container group being defined. Container group type determines
     * how Amazon GameLift deploys the container group on each fleet instance.</p>
     * <p>Default value: <code>GAME_SERVER</code> </p>
     */
    inline ContainerGroupType GetContainerGroupType() const { return m_containerGroupType; }
    inline bool ContainerGroupTypeHasBeenSet() const { return m_containerGroupTypeHasBeenSet; }
    inline void SetContainerGroupType(ContainerGroupType value) { m_containerGroupTypeHasBeenSet = true; m_containerGroupType = value; }
    inline CreateContainerGroupDefinitionRequest& WithContainerGroupType(ContainerGroupType value) { SetContainerGroupType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum amount of memory (in MiB) to allocate to the container group. All
     * containers in the group share this memory. If you specify memory limits for an
     * individual container, the total value must be greater than any individual
     * container's memory limit.</p> <p>Default value: 1024</p>
     */
    inline int GetTotalMemoryLimitMebibytes() const { return m_totalMemoryLimitMebibytes; }
    inline bool TotalMemoryLimitMebibytesHasBeenSet() const { return m_totalMemoryLimitMebibytesHasBeenSet; }
    inline void SetTotalMemoryLimitMebibytes(int value) { m_totalMemoryLimitMebibytesHasBeenSet = true; m_totalMemoryLimitMebibytes = value; }
    inline CreateContainerGroupDefinitionRequest& WithTotalMemoryLimitMebibytes(int value) { SetTotalMemoryLimitMebibytes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum amount of vCPU units to allocate to the container group (1 vCPU
     * is equal to 1024 CPU units). All containers in the group share this memory. If
     * you specify vCPU limits for individual containers, the total value must be equal
     * to or greater than the sum of the CPU limits for all containers in the
     * group.</p> <p>Default value: 1</p>
     */
    inline double GetTotalVcpuLimit() const { return m_totalVcpuLimit; }
    inline bool TotalVcpuLimitHasBeenSet() const { return m_totalVcpuLimitHasBeenSet; }
    inline void SetTotalVcpuLimit(double value) { m_totalVcpuLimitHasBeenSet = true; m_totalVcpuLimit = value; }
    inline CreateContainerGroupDefinitionRequest& WithTotalVcpuLimit(double value) { SetTotalVcpuLimit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The definition for the game server container in this group. Define a game
     * server container only when the container group type is <code>GAME_SERVER</code>.
     * Game server containers specify a container image with your game server build.
     * You can pass in your container definitions as a JSON file.</p>
     */
    inline const GameServerContainerDefinitionInput& GetGameServerContainerDefinition() const { return m_gameServerContainerDefinition; }
    inline bool GameServerContainerDefinitionHasBeenSet() const { return m_gameServerContainerDefinitionHasBeenSet; }
    template<typename GameServerContainerDefinitionT = GameServerContainerDefinitionInput>
    void SetGameServerContainerDefinition(GameServerContainerDefinitionT&& value) { m_gameServerContainerDefinitionHasBeenSet = true; m_gameServerContainerDefinition = std::forward<GameServerContainerDefinitionT>(value); }
    template<typename GameServerContainerDefinitionT = GameServerContainerDefinitionInput>
    CreateContainerGroupDefinitionRequest& WithGameServerContainerDefinition(GameServerContainerDefinitionT&& value) { SetGameServerContainerDefinition(std::forward<GameServerContainerDefinitionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>One or more definition for support containers in this group. You can define a
     * support container in any type of container group. You can pass in your container
     * definitions as a JSON file.</p>
     */
    inline const Aws::Vector<SupportContainerDefinitionInput>& GetSupportContainerDefinitions() const { return m_supportContainerDefinitions; }
    inline bool SupportContainerDefinitionsHasBeenSet() const { return m_supportContainerDefinitionsHasBeenSet; }
    template<typename SupportContainerDefinitionsT = Aws::Vector<SupportContainerDefinitionInput>>
    void SetSupportContainerDefinitions(SupportContainerDefinitionsT&& value) { m_supportContainerDefinitionsHasBeenSet = true; m_supportContainerDefinitions = std::forward<SupportContainerDefinitionsT>(value); }
    template<typename SupportContainerDefinitionsT = Aws::Vector<SupportContainerDefinitionInput>>
    CreateContainerGroupDefinitionRequest& WithSupportContainerDefinitions(SupportContainerDefinitionsT&& value) { SetSupportContainerDefinitions(std::forward<SupportContainerDefinitionsT>(value)); return *this;}
    template<typename SupportContainerDefinitionsT = SupportContainerDefinitionInput>
    CreateContainerGroupDefinitionRequest& AddSupportContainerDefinitions(SupportContainerDefinitionsT&& value) { m_supportContainerDefinitionsHasBeenSet = true; m_supportContainerDefinitions.emplace_back(std::forward<SupportContainerDefinitionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The platform that all containers in the group use. Containers in a group must
     * run on the same operating system.</p> <p>Default value:
     * <code>AMAZON_LINUX_2023</code> </p>  <p>Amazon Linux 2 (AL2) will reach
     * end of support on 6/30/2025. See more details in the <a
     * href="https://aws.amazon.com/amazon-linux-2/faqs/">Amazon Linux 2 FAQs</a>. For
     * game servers that are hosted on AL2 and use Amazon GameLift server SDK 4.x,
     * first update the game server build to server SDK 5.x, and then deploy to AL2023
     * instances. See <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/reference-serversdk5-migration.html">
     * Migrate to Amazon GameLift server SDK version 5.</a> </p> 
     */
    inline ContainerOperatingSystem GetOperatingSystem() const { return m_operatingSystem; }
    inline bool OperatingSystemHasBeenSet() const { return m_operatingSystemHasBeenSet; }
    inline void SetOperatingSystem(ContainerOperatingSystem value) { m_operatingSystemHasBeenSet = true; m_operatingSystem = value; }
    inline CreateContainerGroupDefinitionRequest& WithOperatingSystem(ContainerOperatingSystem value) { SetOperatingSystem(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description for the initial version of this container group definition.
     * </p>
     */
    inline const Aws::String& GetVersionDescription() const { return m_versionDescription; }
    inline bool VersionDescriptionHasBeenSet() const { return m_versionDescriptionHasBeenSet; }
    template<typename VersionDescriptionT = Aws::String>
    void SetVersionDescription(VersionDescriptionT&& value) { m_versionDescriptionHasBeenSet = true; m_versionDescription = std::forward<VersionDescriptionT>(value); }
    template<typename VersionDescriptionT = Aws::String>
    CreateContainerGroupDefinitionRequest& WithVersionDescription(VersionDescriptionT&& value) { SetVersionDescription(std::forward<VersionDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of labels to assign to the container group definition resource. Tags
     * are developer-defined key-value pairs. Tagging Amazon Web Services resources are
     * useful for resource management, access management and cost allocation. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html"> Tagging
     * Amazon Web Services Resources</a> in the <i>Amazon Web Services General
     * Reference</i>. </p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateContainerGroupDefinitionRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateContainerGroupDefinitionRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    ContainerGroupType m_containerGroupType{ContainerGroupType::NOT_SET};
    bool m_containerGroupTypeHasBeenSet = false;

    int m_totalMemoryLimitMebibytes{0};
    bool m_totalMemoryLimitMebibytesHasBeenSet = false;

    double m_totalVcpuLimit{0.0};
    bool m_totalVcpuLimitHasBeenSet = false;

    GameServerContainerDefinitionInput m_gameServerContainerDefinition;
    bool m_gameServerContainerDefinitionHasBeenSet = false;

    Aws::Vector<SupportContainerDefinitionInput> m_supportContainerDefinitions;
    bool m_supportContainerDefinitionsHasBeenSet = false;

    ContainerOperatingSystem m_operatingSystem{ContainerOperatingSystem::NOT_SET};
    bool m_operatingSystemHasBeenSet = false;

    Aws::String m_versionDescription;
    bool m_versionDescriptionHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws

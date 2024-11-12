/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/gamelift/GameLiftRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/gamelift/model/GameServerContainerDefinitionInput.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/gamelift/model/ContainerOperatingSystem.h>
#include <aws/gamelift/model/SupportContainerDefinitionInput.h>
#include <utility>

namespace Aws
{
namespace GameLift
{
namespace Model
{

  /**
   */
  class UpdateContainerGroupDefinitionRequest : public GameLiftRequest
  {
  public:
    AWS_GAMELIFT_API UpdateContainerGroupDefinitionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateContainerGroupDefinition"; }

    AWS_GAMELIFT_API Aws::String SerializePayload() const override;

    AWS_GAMELIFT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>A descriptive identifier for the container group definition. The name value
     * must be unique in an Amazon Web Services Region.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline UpdateContainerGroupDefinitionRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline UpdateContainerGroupDefinitionRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline UpdateContainerGroupDefinitionRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An updated definition for the game server container in this group. Define a
     * game server container only when the container group type is
     * <code>GAME_SERVER</code>. You can pass in your container definitions as a JSON
     * file.</p>
     */
    inline const GameServerContainerDefinitionInput& GetGameServerContainerDefinition() const{ return m_gameServerContainerDefinition; }
    inline bool GameServerContainerDefinitionHasBeenSet() const { return m_gameServerContainerDefinitionHasBeenSet; }
    inline void SetGameServerContainerDefinition(const GameServerContainerDefinitionInput& value) { m_gameServerContainerDefinitionHasBeenSet = true; m_gameServerContainerDefinition = value; }
    inline void SetGameServerContainerDefinition(GameServerContainerDefinitionInput&& value) { m_gameServerContainerDefinitionHasBeenSet = true; m_gameServerContainerDefinition = std::move(value); }
    inline UpdateContainerGroupDefinitionRequest& WithGameServerContainerDefinition(const GameServerContainerDefinitionInput& value) { SetGameServerContainerDefinition(value); return *this;}
    inline UpdateContainerGroupDefinitionRequest& WithGameServerContainerDefinition(GameServerContainerDefinitionInput&& value) { SetGameServerContainerDefinition(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>One or more definitions for support containers in this group. You can define
     * a support container in any type of container group. You can pass in your
     * container definitions as a JSON file.</p>
     */
    inline const Aws::Vector<SupportContainerDefinitionInput>& GetSupportContainerDefinitions() const{ return m_supportContainerDefinitions; }
    inline bool SupportContainerDefinitionsHasBeenSet() const { return m_supportContainerDefinitionsHasBeenSet; }
    inline void SetSupportContainerDefinitions(const Aws::Vector<SupportContainerDefinitionInput>& value) { m_supportContainerDefinitionsHasBeenSet = true; m_supportContainerDefinitions = value; }
    inline void SetSupportContainerDefinitions(Aws::Vector<SupportContainerDefinitionInput>&& value) { m_supportContainerDefinitionsHasBeenSet = true; m_supportContainerDefinitions = std::move(value); }
    inline UpdateContainerGroupDefinitionRequest& WithSupportContainerDefinitions(const Aws::Vector<SupportContainerDefinitionInput>& value) { SetSupportContainerDefinitions(value); return *this;}
    inline UpdateContainerGroupDefinitionRequest& WithSupportContainerDefinitions(Aws::Vector<SupportContainerDefinitionInput>&& value) { SetSupportContainerDefinitions(std::move(value)); return *this;}
    inline UpdateContainerGroupDefinitionRequest& AddSupportContainerDefinitions(const SupportContainerDefinitionInput& value) { m_supportContainerDefinitionsHasBeenSet = true; m_supportContainerDefinitions.push_back(value); return *this; }
    inline UpdateContainerGroupDefinitionRequest& AddSupportContainerDefinitions(SupportContainerDefinitionInput&& value) { m_supportContainerDefinitionsHasBeenSet = true; m_supportContainerDefinitions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The maximum amount of memory (in MiB) to allocate to the container group. All
     * containers in the group share this memory. If you specify memory limits for an
     * individual container, the total value must be greater than any individual
     * container's memory limit.</p>
     */
    inline int GetTotalMemoryLimitMebibytes() const{ return m_totalMemoryLimitMebibytes; }
    inline bool TotalMemoryLimitMebibytesHasBeenSet() const { return m_totalMemoryLimitMebibytesHasBeenSet; }
    inline void SetTotalMemoryLimitMebibytes(int value) { m_totalMemoryLimitMebibytesHasBeenSet = true; m_totalMemoryLimitMebibytes = value; }
    inline UpdateContainerGroupDefinitionRequest& WithTotalMemoryLimitMebibytes(int value) { SetTotalMemoryLimitMebibytes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum amount of vCPU units to allocate to the container group (1 vCPU
     * is equal to 1024 CPU units). All containers in the group share this memory. If
     * you specify vCPU limits for individual containers, the total value must be equal
     * to or greater than the sum of the CPU limits for all containers in the
     * group.</p>
     */
    inline double GetTotalVcpuLimit() const{ return m_totalVcpuLimit; }
    inline bool TotalVcpuLimitHasBeenSet() const { return m_totalVcpuLimitHasBeenSet; }
    inline void SetTotalVcpuLimit(double value) { m_totalVcpuLimitHasBeenSet = true; m_totalVcpuLimit = value; }
    inline UpdateContainerGroupDefinitionRequest& WithTotalVcpuLimit(double value) { SetTotalVcpuLimit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description for this update to the container group definition. </p>
     */
    inline const Aws::String& GetVersionDescription() const{ return m_versionDescription; }
    inline bool VersionDescriptionHasBeenSet() const { return m_versionDescriptionHasBeenSet; }
    inline void SetVersionDescription(const Aws::String& value) { m_versionDescriptionHasBeenSet = true; m_versionDescription = value; }
    inline void SetVersionDescription(Aws::String&& value) { m_versionDescriptionHasBeenSet = true; m_versionDescription = std::move(value); }
    inline void SetVersionDescription(const char* value) { m_versionDescriptionHasBeenSet = true; m_versionDescription.assign(value); }
    inline UpdateContainerGroupDefinitionRequest& WithVersionDescription(const Aws::String& value) { SetVersionDescription(value); return *this;}
    inline UpdateContainerGroupDefinitionRequest& WithVersionDescription(Aws::String&& value) { SetVersionDescription(std::move(value)); return *this;}
    inline UpdateContainerGroupDefinitionRequest& WithVersionDescription(const char* value) { SetVersionDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The container group definition version to update. The new version starts with
     * values from the source version, and then updates values included in this
     * request. </p>
     */
    inline int GetSourceVersionNumber() const{ return m_sourceVersionNumber; }
    inline bool SourceVersionNumberHasBeenSet() const { return m_sourceVersionNumberHasBeenSet; }
    inline void SetSourceVersionNumber(int value) { m_sourceVersionNumberHasBeenSet = true; m_sourceVersionNumber = value; }
    inline UpdateContainerGroupDefinitionRequest& WithSourceVersionNumber(int value) { SetSourceVersionNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The platform that all containers in the group use. Containers in a group must
     * run on the same operating system.</p>  <p>Amazon Linux 2 (AL2) will reach
     * end of support on 6/30/2025. See more details in the <a
     * href="https://aws.amazon.com/amazon-linux-2/faqs/">Amazon Linux 2 FAQs</a>. For
     * game servers that are hosted on AL2 and use Amazon GameLift server SDK 4.x,
     * first update the game server build to server SDK 5.x, and then deploy to AL2023
     * instances. See <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/reference-serversdk5-migration.html">
     * Migrate to Amazon GameLift server SDK version 5.</a> </p> 
     */
    inline const ContainerOperatingSystem& GetOperatingSystem() const{ return m_operatingSystem; }
    inline bool OperatingSystemHasBeenSet() const { return m_operatingSystemHasBeenSet; }
    inline void SetOperatingSystem(const ContainerOperatingSystem& value) { m_operatingSystemHasBeenSet = true; m_operatingSystem = value; }
    inline void SetOperatingSystem(ContainerOperatingSystem&& value) { m_operatingSystemHasBeenSet = true; m_operatingSystem = std::move(value); }
    inline UpdateContainerGroupDefinitionRequest& WithOperatingSystem(const ContainerOperatingSystem& value) { SetOperatingSystem(value); return *this;}
    inline UpdateContainerGroupDefinitionRequest& WithOperatingSystem(ContainerOperatingSystem&& value) { SetOperatingSystem(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    GameServerContainerDefinitionInput m_gameServerContainerDefinition;
    bool m_gameServerContainerDefinitionHasBeenSet = false;

    Aws::Vector<SupportContainerDefinitionInput> m_supportContainerDefinitions;
    bool m_supportContainerDefinitionsHasBeenSet = false;

    int m_totalMemoryLimitMebibytes;
    bool m_totalMemoryLimitMebibytesHasBeenSet = false;

    double m_totalVcpuLimit;
    bool m_totalVcpuLimitHasBeenSet = false;

    Aws::String m_versionDescription;
    bool m_versionDescriptionHasBeenSet = false;

    int m_sourceVersionNumber;
    bool m_sourceVersionNumberHasBeenSet = false;

    ContainerOperatingSystem m_operatingSystem;
    bool m_operatingSystemHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws

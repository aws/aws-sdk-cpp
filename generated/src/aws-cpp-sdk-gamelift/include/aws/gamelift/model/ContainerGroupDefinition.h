/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/gamelift/model/ContainerOperatingSystem.h>
#include <aws/gamelift/model/ContainerGroupType.h>
#include <aws/gamelift/model/GameServerContainerDefinition.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/gamelift/model/ContainerGroupDefinitionStatus.h>
#include <aws/gamelift/model/SupportContainerDefinition.h>
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
namespace GameLift
{
namespace Model
{

  /**
   * <p>The properties that describe a container group resource. You can update all
   * properties of a container group definition properties. Updates to a container
   * group definition are saved as new versions. </p> <p> <b>Used with:</b> <a
   * href="https://docs.aws.amazon.com/gamelift/latest/apireference/API_CreateContainerGroupDefinition.html">CreateContainerGroupDefinition</a>
   * </p> <p> <b>Returned by:</b> <a
   * href="https://docs.aws.amazon.com/gamelift/latest/apireference/API_DescribeContainerGroupDefinition.html">DescribeContainerGroupDefinition</a>,
   * <a
   * href="https://docs.aws.amazon.com/gamelift/latest/apireference/API_ListContainerGroupDefinitions.html">ListContainerGroupDefinitions</a>,
   * <a
   * href="https://docs.aws.amazon.com/gamelift/latest/apireference/API_UpdateContainerGroupDefinition.html">UpdateContainerGroupDefinition</a>
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/ContainerGroupDefinition">AWS
   * API Reference</a></p>
   */
  class ContainerGroupDefinition
  {
  public:
    AWS_GAMELIFT_API ContainerGroupDefinition() = default;
    AWS_GAMELIFT_API ContainerGroupDefinition(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API ContainerGroupDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * that is assigned to an Amazon GameLift Servers
     * <code>ContainerGroupDefinition</code> resource. It uniquely identifies the
     * resource across all Amazon Web Services Regions. Format is
     * <code>arn:aws:gamelift:[region]::containergroupdefinition/[container group
     * definition name]:[version]</code>.</p>
     */
    inline const Aws::String& GetContainerGroupDefinitionArn() const { return m_containerGroupDefinitionArn; }
    inline bool ContainerGroupDefinitionArnHasBeenSet() const { return m_containerGroupDefinitionArnHasBeenSet; }
    template<typename ContainerGroupDefinitionArnT = Aws::String>
    void SetContainerGroupDefinitionArn(ContainerGroupDefinitionArnT&& value) { m_containerGroupDefinitionArnHasBeenSet = true; m_containerGroupDefinitionArn = std::forward<ContainerGroupDefinitionArnT>(value); }
    template<typename ContainerGroupDefinitionArnT = Aws::String>
    ContainerGroupDefinition& WithContainerGroupDefinitionArn(ContainerGroupDefinitionArnT&& value) { SetContainerGroupDefinitionArn(std::forward<ContainerGroupDefinitionArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A time stamp indicating when this data object was created. Format is a number
     * expressed in Unix time as milliseconds (for example
     * <code>"1469498468.057"</code>).</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    ContainerGroupDefinition& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The platform that all containers in the container group definition run
     * on.</p>  <p>Amazon Linux 2 (AL2) will reach end of support on 6/30/2025.
     * See more details in the <a
     * href="http://aws.amazon.com/amazon-linux-2/faqs/">Amazon Linux 2 FAQs</a>. For
     * game servers that are hosted on AL2 and use server SDK version 4.x for Amazon
     * GameLift Servers, first update the game server build to server SDK 5.x, and then
     * deploy to AL2023 instances. See <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/reference-serversdk5-migration.html">
     * Migrate to server SDK version 5.</a> </p> 
     */
    inline ContainerOperatingSystem GetOperatingSystem() const { return m_operatingSystem; }
    inline bool OperatingSystemHasBeenSet() const { return m_operatingSystemHasBeenSet; }
    inline void SetOperatingSystem(ContainerOperatingSystem value) { m_operatingSystemHasBeenSet = true; m_operatingSystem = value; }
    inline ContainerGroupDefinition& WithOperatingSystem(ContainerOperatingSystem value) { SetOperatingSystem(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A descriptive identifier for the container group definition. The name value
     * is unique in an Amazon Web Services Region.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    ContainerGroupDefinition& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of container group. Container group type determines how Amazon
     * GameLift Servers deploys the container group on each fleet instance.</p>
     */
    inline ContainerGroupType GetContainerGroupType() const { return m_containerGroupType; }
    inline bool ContainerGroupTypeHasBeenSet() const { return m_containerGroupTypeHasBeenSet; }
    inline void SetContainerGroupType(ContainerGroupType value) { m_containerGroupTypeHasBeenSet = true; m_containerGroupType = value; }
    inline ContainerGroupDefinition& WithContainerGroupType(ContainerGroupType value) { SetContainerGroupType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of memory (in MiB) on a fleet instance to allocate for the
     * container group. All containers in the group share these resources. </p> <p>You
     * can set a limit for each container definition in the group. If individual
     * containers have limits, this total value must be greater than any individual
     * container's memory limit.</p>
     */
    inline int GetTotalMemoryLimitMebibytes() const { return m_totalMemoryLimitMebibytes; }
    inline bool TotalMemoryLimitMebibytesHasBeenSet() const { return m_totalMemoryLimitMebibytesHasBeenSet; }
    inline void SetTotalMemoryLimitMebibytes(int value) { m_totalMemoryLimitMebibytesHasBeenSet = true; m_totalMemoryLimitMebibytes = value; }
    inline ContainerGroupDefinition& WithTotalMemoryLimitMebibytes(int value) { SetTotalMemoryLimitMebibytes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of vCPU units on a fleet instance to allocate for the container
     * group (1 vCPU is equal to 1024 CPU units). All containers in the group share
     * these resources. You can set a limit for each container definition in the group.
     * If individual containers have limits, this total value must be equal to or
     * greater than the sum of the limits for each container in the group.</p>
     */
    inline double GetTotalVcpuLimit() const { return m_totalVcpuLimit; }
    inline bool TotalVcpuLimitHasBeenSet() const { return m_totalVcpuLimitHasBeenSet; }
    inline void SetTotalVcpuLimit(double value) { m_totalVcpuLimitHasBeenSet = true; m_totalVcpuLimit = value; }
    inline ContainerGroupDefinition& WithTotalVcpuLimit(double value) { SetTotalVcpuLimit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The definition for the game server container in this group. This property is
     * used only when the container group type is <code>GAME_SERVER</code>. This
     * container definition specifies a container image with the game server build.
     * </p>
     */
    inline const GameServerContainerDefinition& GetGameServerContainerDefinition() const { return m_gameServerContainerDefinition; }
    inline bool GameServerContainerDefinitionHasBeenSet() const { return m_gameServerContainerDefinitionHasBeenSet; }
    template<typename GameServerContainerDefinitionT = GameServerContainerDefinition>
    void SetGameServerContainerDefinition(GameServerContainerDefinitionT&& value) { m_gameServerContainerDefinitionHasBeenSet = true; m_gameServerContainerDefinition = std::forward<GameServerContainerDefinitionT>(value); }
    template<typename GameServerContainerDefinitionT = GameServerContainerDefinition>
    ContainerGroupDefinition& WithGameServerContainerDefinition(GameServerContainerDefinitionT&& value) { SetGameServerContainerDefinition(std::forward<GameServerContainerDefinitionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The set of definitions for support containers in this group. A container
     * group definition might have zero support container definitions. Support
     * container can be used in any type of container group.</p>
     */
    inline const Aws::Vector<SupportContainerDefinition>& GetSupportContainerDefinitions() const { return m_supportContainerDefinitions; }
    inline bool SupportContainerDefinitionsHasBeenSet() const { return m_supportContainerDefinitionsHasBeenSet; }
    template<typename SupportContainerDefinitionsT = Aws::Vector<SupportContainerDefinition>>
    void SetSupportContainerDefinitions(SupportContainerDefinitionsT&& value) { m_supportContainerDefinitionsHasBeenSet = true; m_supportContainerDefinitions = std::forward<SupportContainerDefinitionsT>(value); }
    template<typename SupportContainerDefinitionsT = Aws::Vector<SupportContainerDefinition>>
    ContainerGroupDefinition& WithSupportContainerDefinitions(SupportContainerDefinitionsT&& value) { SetSupportContainerDefinitions(std::forward<SupportContainerDefinitionsT>(value)); return *this;}
    template<typename SupportContainerDefinitionsT = SupportContainerDefinition>
    ContainerGroupDefinition& AddSupportContainerDefinitions(SupportContainerDefinitionsT&& value) { m_supportContainerDefinitionsHasBeenSet = true; m_supportContainerDefinitions.emplace_back(std::forward<SupportContainerDefinitionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates the version of a particular container group definition. This number
     * is incremented automatically when you update a container group definition. You
     * can view, update, or delete individual versions or the entire container group
     * definition.</p>
     */
    inline int GetVersionNumber() const { return m_versionNumber; }
    inline bool VersionNumberHasBeenSet() const { return m_versionNumberHasBeenSet; }
    inline void SetVersionNumber(int value) { m_versionNumberHasBeenSet = true; m_versionNumber = value; }
    inline ContainerGroupDefinition& WithVersionNumber(int value) { SetVersionNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional description that was provided for a container group definition
     * update. Each version can have a unique description.</p>
     */
    inline const Aws::String& GetVersionDescription() const { return m_versionDescription; }
    inline bool VersionDescriptionHasBeenSet() const { return m_versionDescriptionHasBeenSet; }
    template<typename VersionDescriptionT = Aws::String>
    void SetVersionDescription(VersionDescriptionT&& value) { m_versionDescriptionHasBeenSet = true; m_versionDescription = std::forward<VersionDescriptionT>(value); }
    template<typename VersionDescriptionT = Aws::String>
    ContainerGroupDefinition& WithVersionDescription(VersionDescriptionT&& value) { SetVersionDescription(std::forward<VersionDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Current status of the container group definition resource. Values
     * include:</p> <ul> <li> <p> <code>COPYING</code> -- Amazon GameLift Servers is in
     * the process of making copies of all container images that are defined in the
     * group. While in this state, the resource can't be used to create a container
     * fleet.</p> </li> <li> <p> <code>READY</code> -- Amazon GameLift Servers has
     * copied the registry images for all containers that are defined in the group. You
     * can use a container group definition in this status to create a container fleet.
     * </p> </li> <li> <p> <code>FAILED</code> -- Amazon GameLift Servers failed to
     * create a valid container group definition resource. For more details on the
     * cause of the failure, see <code>StatusReason</code>. A container group
     * definition resource in failed status will be deleted within a few minutes.</p>
     * </li> </ul>
     */
    inline ContainerGroupDefinitionStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(ContainerGroupDefinitionStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline ContainerGroupDefinition& WithStatus(ContainerGroupDefinitionStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Additional information about a container group definition that's in
     * <code>FAILED</code> status. Possible reasons include:</p> <ul> <li> <p>An
     * internal issue prevented Amazon GameLift Servers from creating the container
     * group definition resource. Delete the failed resource and call <a
     * href="https://docs.aws.amazon.com/gamelift/latest/apireference/API_CreateContainerGroupDefinition.html">CreateContainerGroupDefinition</a>again.
     * </p> </li> <li> <p>An access-denied message means that you don't have
     * permissions to access the container image on ECR. See <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-iam-policy-examples.html.html">
     * IAM permission examples</a> for help setting up required IAM permissions for
     * Amazon GameLift Servers.</p> </li> <li> <p>The <code>ImageUri</code> value for
     * at least one of the containers in the container group definition was invalid or
     * not found in the current Amazon Web Services account.</p> </li> <li> <p>At least
     * one of the container images referenced in the container group definition exceeds
     * the allowed size. For size limits, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/gamelift.html"> Amazon
     * GameLift Servers endpoints and quotas</a>.</p> </li> <li> <p>At least one of the
     * container images referenced in the container group definition uses a different
     * operating system than the one defined for the container group.</p> </li> </ul>
     */
    inline const Aws::String& GetStatusReason() const { return m_statusReason; }
    inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }
    template<typename StatusReasonT = Aws::String>
    void SetStatusReason(StatusReasonT&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::forward<StatusReasonT>(value); }
    template<typename StatusReasonT = Aws::String>
    ContainerGroupDefinition& WithStatusReason(StatusReasonT&& value) { SetStatusReason(std::forward<StatusReasonT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_containerGroupDefinitionArn;
    bool m_containerGroupDefinitionArnHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    ContainerOperatingSystem m_operatingSystem{ContainerOperatingSystem::NOT_SET};
    bool m_operatingSystemHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    ContainerGroupType m_containerGroupType{ContainerGroupType::NOT_SET};
    bool m_containerGroupTypeHasBeenSet = false;

    int m_totalMemoryLimitMebibytes{0};
    bool m_totalMemoryLimitMebibytesHasBeenSet = false;

    double m_totalVcpuLimit{0.0};
    bool m_totalVcpuLimitHasBeenSet = false;

    GameServerContainerDefinition m_gameServerContainerDefinition;
    bool m_gameServerContainerDefinitionHasBeenSet = false;

    Aws::Vector<SupportContainerDefinition> m_supportContainerDefinitions;
    bool m_supportContainerDefinitionsHasBeenSet = false;

    int m_versionNumber{0};
    bool m_versionNumberHasBeenSet = false;

    Aws::String m_versionDescription;
    bool m_versionDescriptionHasBeenSet = false;

    ContainerGroupDefinitionStatus m_status{ContainerGroupDefinitionStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_statusReason;
    bool m_statusReasonHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws

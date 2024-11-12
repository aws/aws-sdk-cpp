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
   * group definition are saved as new versions. </p> <p> <b>Used with:</b>
   * <a>CreateContainerGroupDefinition</a> </p> <p> <b>Returned by:</b>
   * <a>DescribeContainerGroupDefinition</a>, <a>ListContainerGroupDefinitions</a>,
   * <a>UpdateContainerGroupDefinition</a> </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/ContainerGroupDefinition">AWS
   * API Reference</a></p>
   */
  class ContainerGroupDefinition
  {
  public:
    AWS_GAMELIFT_API ContainerGroupDefinition();
    AWS_GAMELIFT_API ContainerGroupDefinition(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API ContainerGroupDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * that is assigned to an Amazon GameLift <code>ContainerGroupDefinition</code>
     * resource. It uniquely identifies the resource across all Amazon Web Services
     * Regions. Format is
     * <code>arn:aws:gamelift:[region]::containergroupdefinition/[container group
     * definition name]:[version]</code>.</p>
     */
    inline const Aws::String& GetContainerGroupDefinitionArn() const{ return m_containerGroupDefinitionArn; }
    inline bool ContainerGroupDefinitionArnHasBeenSet() const { return m_containerGroupDefinitionArnHasBeenSet; }
    inline void SetContainerGroupDefinitionArn(const Aws::String& value) { m_containerGroupDefinitionArnHasBeenSet = true; m_containerGroupDefinitionArn = value; }
    inline void SetContainerGroupDefinitionArn(Aws::String&& value) { m_containerGroupDefinitionArnHasBeenSet = true; m_containerGroupDefinitionArn = std::move(value); }
    inline void SetContainerGroupDefinitionArn(const char* value) { m_containerGroupDefinitionArnHasBeenSet = true; m_containerGroupDefinitionArn.assign(value); }
    inline ContainerGroupDefinition& WithContainerGroupDefinitionArn(const Aws::String& value) { SetContainerGroupDefinitionArn(value); return *this;}
    inline ContainerGroupDefinition& WithContainerGroupDefinitionArn(Aws::String&& value) { SetContainerGroupDefinitionArn(std::move(value)); return *this;}
    inline ContainerGroupDefinition& WithContainerGroupDefinitionArn(const char* value) { SetContainerGroupDefinitionArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A time stamp indicating when this data object was created. Format is a number
     * expressed in Unix time as milliseconds (for example
     * <code>"1469498468.057"</code>).</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }
    inline ContainerGroupDefinition& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline ContainerGroupDefinition& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The platform that all containers in the container group definition run
     * on.</p>  <p>Amazon Linux 2 (AL2) will reach end of support on 6/30/2025.
     * See more details in the <a
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
    inline ContainerGroupDefinition& WithOperatingSystem(const ContainerOperatingSystem& value) { SetOperatingSystem(value); return *this;}
    inline ContainerGroupDefinition& WithOperatingSystem(ContainerOperatingSystem&& value) { SetOperatingSystem(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A descriptive identifier for the container group definition. The name value
     * is unique in an Amazon Web Services Region.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline ContainerGroupDefinition& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline ContainerGroupDefinition& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline ContainerGroupDefinition& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of container group. Container group type determines how Amazon
     * GameLift deploys the container group on each fleet instance.</p>
     */
    inline const ContainerGroupType& GetContainerGroupType() const{ return m_containerGroupType; }
    inline bool ContainerGroupTypeHasBeenSet() const { return m_containerGroupTypeHasBeenSet; }
    inline void SetContainerGroupType(const ContainerGroupType& value) { m_containerGroupTypeHasBeenSet = true; m_containerGroupType = value; }
    inline void SetContainerGroupType(ContainerGroupType&& value) { m_containerGroupTypeHasBeenSet = true; m_containerGroupType = std::move(value); }
    inline ContainerGroupDefinition& WithContainerGroupType(const ContainerGroupType& value) { SetContainerGroupType(value); return *this;}
    inline ContainerGroupDefinition& WithContainerGroupType(ContainerGroupType&& value) { SetContainerGroupType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of memory (in MiB) on a fleet instance to allocate for the
     * container group. All containers in the group share these resources. </p> <p>You
     * can set a limit for each container definition in the group. If individual
     * containers have limits, this total value must be greater than any individual
     * container's memory limit.</p>
     */
    inline int GetTotalMemoryLimitMebibytes() const{ return m_totalMemoryLimitMebibytes; }
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
    inline double GetTotalVcpuLimit() const{ return m_totalVcpuLimit; }
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
    inline const GameServerContainerDefinition& GetGameServerContainerDefinition() const{ return m_gameServerContainerDefinition; }
    inline bool GameServerContainerDefinitionHasBeenSet() const { return m_gameServerContainerDefinitionHasBeenSet; }
    inline void SetGameServerContainerDefinition(const GameServerContainerDefinition& value) { m_gameServerContainerDefinitionHasBeenSet = true; m_gameServerContainerDefinition = value; }
    inline void SetGameServerContainerDefinition(GameServerContainerDefinition&& value) { m_gameServerContainerDefinitionHasBeenSet = true; m_gameServerContainerDefinition = std::move(value); }
    inline ContainerGroupDefinition& WithGameServerContainerDefinition(const GameServerContainerDefinition& value) { SetGameServerContainerDefinition(value); return *this;}
    inline ContainerGroupDefinition& WithGameServerContainerDefinition(GameServerContainerDefinition&& value) { SetGameServerContainerDefinition(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The set of definitions for support containers in this group. A container
     * group definition might have zero support container definitions. Support
     * container can be used in any type of container group.</p>
     */
    inline const Aws::Vector<SupportContainerDefinition>& GetSupportContainerDefinitions() const{ return m_supportContainerDefinitions; }
    inline bool SupportContainerDefinitionsHasBeenSet() const { return m_supportContainerDefinitionsHasBeenSet; }
    inline void SetSupportContainerDefinitions(const Aws::Vector<SupportContainerDefinition>& value) { m_supportContainerDefinitionsHasBeenSet = true; m_supportContainerDefinitions = value; }
    inline void SetSupportContainerDefinitions(Aws::Vector<SupportContainerDefinition>&& value) { m_supportContainerDefinitionsHasBeenSet = true; m_supportContainerDefinitions = std::move(value); }
    inline ContainerGroupDefinition& WithSupportContainerDefinitions(const Aws::Vector<SupportContainerDefinition>& value) { SetSupportContainerDefinitions(value); return *this;}
    inline ContainerGroupDefinition& WithSupportContainerDefinitions(Aws::Vector<SupportContainerDefinition>&& value) { SetSupportContainerDefinitions(std::move(value)); return *this;}
    inline ContainerGroupDefinition& AddSupportContainerDefinitions(const SupportContainerDefinition& value) { m_supportContainerDefinitionsHasBeenSet = true; m_supportContainerDefinitions.push_back(value); return *this; }
    inline ContainerGroupDefinition& AddSupportContainerDefinitions(SupportContainerDefinition&& value) { m_supportContainerDefinitionsHasBeenSet = true; m_supportContainerDefinitions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates the version of a particular container group definition. This number
     * is incremented automatically when you update a container group definition. You
     * can view, update, or delete individual versions or the entire container group
     * definition.</p>
     */
    inline int GetVersionNumber() const{ return m_versionNumber; }
    inline bool VersionNumberHasBeenSet() const { return m_versionNumberHasBeenSet; }
    inline void SetVersionNumber(int value) { m_versionNumberHasBeenSet = true; m_versionNumber = value; }
    inline ContainerGroupDefinition& WithVersionNumber(int value) { SetVersionNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional description that was provided for a container group definition
     * update. Each version can have a unique description.</p>
     */
    inline const Aws::String& GetVersionDescription() const{ return m_versionDescription; }
    inline bool VersionDescriptionHasBeenSet() const { return m_versionDescriptionHasBeenSet; }
    inline void SetVersionDescription(const Aws::String& value) { m_versionDescriptionHasBeenSet = true; m_versionDescription = value; }
    inline void SetVersionDescription(Aws::String&& value) { m_versionDescriptionHasBeenSet = true; m_versionDescription = std::move(value); }
    inline void SetVersionDescription(const char* value) { m_versionDescriptionHasBeenSet = true; m_versionDescription.assign(value); }
    inline ContainerGroupDefinition& WithVersionDescription(const Aws::String& value) { SetVersionDescription(value); return *this;}
    inline ContainerGroupDefinition& WithVersionDescription(Aws::String&& value) { SetVersionDescription(std::move(value)); return *this;}
    inline ContainerGroupDefinition& WithVersionDescription(const char* value) { SetVersionDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Current status of the container group definition resource. Values
     * include:</p> <ul> <li> <p> <code>COPYING</code> -- Amazon GameLift is in the
     * process of making copies of all container images that are defined in the group.
     * While in this state, the resource can't be used to create a container fleet.</p>
     * </li> <li> <p> <code>READY</code> -- Amazon GameLift has copied the registry
     * images for all containers that are defined in the group. You can use a container
     * group definition in this status to create a container fleet. </p> </li> <li> <p>
     * <code>FAILED</code> -- Amazon GameLift failed to create a valid container group
     * definition resource. For more details on the cause of the failure, see
     * <code>StatusReason</code>. A container group definition resource in failed
     * status will be deleted within a few minutes.</p> </li> </ul>
     */
    inline const ContainerGroupDefinitionStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const ContainerGroupDefinitionStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(ContainerGroupDefinitionStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline ContainerGroupDefinition& WithStatus(const ContainerGroupDefinitionStatus& value) { SetStatus(value); return *this;}
    inline ContainerGroupDefinition& WithStatus(ContainerGroupDefinitionStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Additional information about a container group definition that's in
     * <code>FAILED</code> status. Possible reasons include:</p> <ul> <li> <p>An
     * internal issue prevented Amazon GameLift from creating the container group
     * definition resource. Delete the failed resource and call
     * <a>CreateContainerGroupDefinition</a>again. </p> </li> <li> <p>An access-denied
     * message means that you don't have permissions to access the container image on
     * ECR. See <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-iam-policy-examples.html">
     * IAM permission examples</a> for help setting up required IAM permissions for
     * Amazon GameLift.</p> </li> <li> <p>The <code>ImageUri</code> value for at least
     * one of the containers in the container group definition was invalid or not found
     * in the current Amazon Web Services account.</p> </li> <li> <p>At least one of
     * the container images referenced in the container group definition exceeds the
     * allowed size. For size limits, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/gamelift.html"> Amazon
     * GameLift endpoints and quotas</a>.</p> </li> <li> <p>At least one of the
     * container images referenced in the container group definition uses a different
     * operating system than the one defined for the container group.</p> </li> </ul>
     */
    inline const Aws::String& GetStatusReason() const{ return m_statusReason; }
    inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }
    inline void SetStatusReason(const Aws::String& value) { m_statusReasonHasBeenSet = true; m_statusReason = value; }
    inline void SetStatusReason(Aws::String&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::move(value); }
    inline void SetStatusReason(const char* value) { m_statusReasonHasBeenSet = true; m_statusReason.assign(value); }
    inline ContainerGroupDefinition& WithStatusReason(const Aws::String& value) { SetStatusReason(value); return *this;}
    inline ContainerGroupDefinition& WithStatusReason(Aws::String&& value) { SetStatusReason(std::move(value)); return *this;}
    inline ContainerGroupDefinition& WithStatusReason(const char* value) { SetStatusReason(value); return *this;}
    ///@}
  private:

    Aws::String m_containerGroupDefinitionArn;
    bool m_containerGroupDefinitionArnHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    ContainerOperatingSystem m_operatingSystem;
    bool m_operatingSystemHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    ContainerGroupType m_containerGroupType;
    bool m_containerGroupTypeHasBeenSet = false;

    int m_totalMemoryLimitMebibytes;
    bool m_totalMemoryLimitMebibytesHasBeenSet = false;

    double m_totalVcpuLimit;
    bool m_totalVcpuLimitHasBeenSet = false;

    GameServerContainerDefinition m_gameServerContainerDefinition;
    bool m_gameServerContainerDefinitionHasBeenSet = false;

    Aws::Vector<SupportContainerDefinition> m_supportContainerDefinitions;
    bool m_supportContainerDefinitionsHasBeenSet = false;

    int m_versionNumber;
    bool m_versionNumberHasBeenSet = false;

    Aws::String m_versionDescription;
    bool m_versionDescriptionHasBeenSet = false;

    ContainerGroupDefinitionStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_statusReason;
    bool m_statusReasonHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/gamelift/model/ContainerOperatingSystem.h>
#include <aws/gamelift/model/ContainerSchedulingStrategy.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/gamelift/model/ContainerGroupDefinitionStatus.h>
#include <aws/gamelift/model/ContainerDefinition.h>
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
   * <p> <b>This data type is used with the Amazon GameLift containers feature, which
   * is currently in public preview.</b> </p> <p>The properties that describe a
   * container group resource. Container group definition properties can't be
   * updated. To change a property, create a new container group definition.</p> <p>
   * <b>Used with:</b> <a>CreateContainerGroupDefinition</a> </p> <p> <b>Returned
   * by:</b> <a>DescribeContainerGroupDefinition</a>,
   * <a>ListContainerGroupDefinitions</a> </p><p><h3>See Also:</h3>   <a
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


    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * that is assigned to an Amazon GameLift <code>ContainerGroupDefinition</code>
     * resource. It uniquely identifies the resource across all Amazon Web Services
     * Regions. Format is
     * <code>arn:aws:gamelift:&lt;region&gt;::containergroupdefinition/[container group
     * definition name]</code>.</p>
     */
    inline const Aws::String& GetContainerGroupDefinitionArn() const{ return m_containerGroupDefinitionArn; }

    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * that is assigned to an Amazon GameLift <code>ContainerGroupDefinition</code>
     * resource. It uniquely identifies the resource across all Amazon Web Services
     * Regions. Format is
     * <code>arn:aws:gamelift:&lt;region&gt;::containergroupdefinition/[container group
     * definition name]</code>.</p>
     */
    inline bool ContainerGroupDefinitionArnHasBeenSet() const { return m_containerGroupDefinitionArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * that is assigned to an Amazon GameLift <code>ContainerGroupDefinition</code>
     * resource. It uniquely identifies the resource across all Amazon Web Services
     * Regions. Format is
     * <code>arn:aws:gamelift:&lt;region&gt;::containergroupdefinition/[container group
     * definition name]</code>.</p>
     */
    inline void SetContainerGroupDefinitionArn(const Aws::String& value) { m_containerGroupDefinitionArnHasBeenSet = true; m_containerGroupDefinitionArn = value; }

    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * that is assigned to an Amazon GameLift <code>ContainerGroupDefinition</code>
     * resource. It uniquely identifies the resource across all Amazon Web Services
     * Regions. Format is
     * <code>arn:aws:gamelift:&lt;region&gt;::containergroupdefinition/[container group
     * definition name]</code>.</p>
     */
    inline void SetContainerGroupDefinitionArn(Aws::String&& value) { m_containerGroupDefinitionArnHasBeenSet = true; m_containerGroupDefinitionArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * that is assigned to an Amazon GameLift <code>ContainerGroupDefinition</code>
     * resource. It uniquely identifies the resource across all Amazon Web Services
     * Regions. Format is
     * <code>arn:aws:gamelift:&lt;region&gt;::containergroupdefinition/[container group
     * definition name]</code>.</p>
     */
    inline void SetContainerGroupDefinitionArn(const char* value) { m_containerGroupDefinitionArnHasBeenSet = true; m_containerGroupDefinitionArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * that is assigned to an Amazon GameLift <code>ContainerGroupDefinition</code>
     * resource. It uniquely identifies the resource across all Amazon Web Services
     * Regions. Format is
     * <code>arn:aws:gamelift:&lt;region&gt;::containergroupdefinition/[container group
     * definition name]</code>.</p>
     */
    inline ContainerGroupDefinition& WithContainerGroupDefinitionArn(const Aws::String& value) { SetContainerGroupDefinitionArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * that is assigned to an Amazon GameLift <code>ContainerGroupDefinition</code>
     * resource. It uniquely identifies the resource across all Amazon Web Services
     * Regions. Format is
     * <code>arn:aws:gamelift:&lt;region&gt;::containergroupdefinition/[container group
     * definition name]</code>.</p>
     */
    inline ContainerGroupDefinition& WithContainerGroupDefinitionArn(Aws::String&& value) { SetContainerGroupDefinitionArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * that is assigned to an Amazon GameLift <code>ContainerGroupDefinition</code>
     * resource. It uniquely identifies the resource across all Amazon Web Services
     * Regions. Format is
     * <code>arn:aws:gamelift:&lt;region&gt;::containergroupdefinition/[container group
     * definition name]</code>.</p>
     */
    inline ContainerGroupDefinition& WithContainerGroupDefinitionArn(const char* value) { SetContainerGroupDefinitionArn(value); return *this;}


    /**
     * <p>A time stamp indicating when this data object was created. Format is a number
     * expressed in Unix time as milliseconds (for example
     * <code>"1469498468.057"</code>).</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>A time stamp indicating when this data object was created. Format is a number
     * expressed in Unix time as milliseconds (for example
     * <code>"1469498468.057"</code>).</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>A time stamp indicating when this data object was created. Format is a number
     * expressed in Unix time as milliseconds (for example
     * <code>"1469498468.057"</code>).</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>A time stamp indicating when this data object was created. Format is a number
     * expressed in Unix time as milliseconds (for example
     * <code>"1469498468.057"</code>).</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>A time stamp indicating when this data object was created. Format is a number
     * expressed in Unix time as milliseconds (for example
     * <code>"1469498468.057"</code>).</p>
     */
    inline ContainerGroupDefinition& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>A time stamp indicating when this data object was created. Format is a number
     * expressed in Unix time as milliseconds (for example
     * <code>"1469498468.057"</code>).</p>
     */
    inline ContainerGroupDefinition& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The platform required for all containers in the container group
     * definition.</p>
     */
    inline const ContainerOperatingSystem& GetOperatingSystem() const{ return m_operatingSystem; }

    /**
     * <p>The platform required for all containers in the container group
     * definition.</p>
     */
    inline bool OperatingSystemHasBeenSet() const { return m_operatingSystemHasBeenSet; }

    /**
     * <p>The platform required for all containers in the container group
     * definition.</p>
     */
    inline void SetOperatingSystem(const ContainerOperatingSystem& value) { m_operatingSystemHasBeenSet = true; m_operatingSystem = value; }

    /**
     * <p>The platform required for all containers in the container group
     * definition.</p>
     */
    inline void SetOperatingSystem(ContainerOperatingSystem&& value) { m_operatingSystemHasBeenSet = true; m_operatingSystem = std::move(value); }

    /**
     * <p>The platform required for all containers in the container group
     * definition.</p>
     */
    inline ContainerGroupDefinition& WithOperatingSystem(const ContainerOperatingSystem& value) { SetOperatingSystem(value); return *this;}

    /**
     * <p>The platform required for all containers in the container group
     * definition.</p>
     */
    inline ContainerGroupDefinition& WithOperatingSystem(ContainerOperatingSystem&& value) { SetOperatingSystem(std::move(value)); return *this;}


    /**
     * <p>A descriptive identifier for the container group definition. The name value
     * is unique in an Amazon Web Services Region.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>A descriptive identifier for the container group definition. The name value
     * is unique in an Amazon Web Services Region.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>A descriptive identifier for the container group definition. The name value
     * is unique in an Amazon Web Services Region.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>A descriptive identifier for the container group definition. The name value
     * is unique in an Amazon Web Services Region.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>A descriptive identifier for the container group definition. The name value
     * is unique in an Amazon Web Services Region.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>A descriptive identifier for the container group definition. The name value
     * is unique in an Amazon Web Services Region.</p>
     */
    inline ContainerGroupDefinition& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>A descriptive identifier for the container group definition. The name value
     * is unique in an Amazon Web Services Region.</p>
     */
    inline ContainerGroupDefinition& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>A descriptive identifier for the container group definition. The name value
     * is unique in an Amazon Web Services Region.</p>
     */
    inline ContainerGroupDefinition& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The method for deploying the container group across fleet instances. A
     * replica container group might have multiple copies on each fleet instance. A
     * daemon container group maintains only one copy per fleet instance.</p>
     */
    inline const ContainerSchedulingStrategy& GetSchedulingStrategy() const{ return m_schedulingStrategy; }

    /**
     * <p>The method for deploying the container group across fleet instances. A
     * replica container group might have multiple copies on each fleet instance. A
     * daemon container group maintains only one copy per fleet instance.</p>
     */
    inline bool SchedulingStrategyHasBeenSet() const { return m_schedulingStrategyHasBeenSet; }

    /**
     * <p>The method for deploying the container group across fleet instances. A
     * replica container group might have multiple copies on each fleet instance. A
     * daemon container group maintains only one copy per fleet instance.</p>
     */
    inline void SetSchedulingStrategy(const ContainerSchedulingStrategy& value) { m_schedulingStrategyHasBeenSet = true; m_schedulingStrategy = value; }

    /**
     * <p>The method for deploying the container group across fleet instances. A
     * replica container group might have multiple copies on each fleet instance. A
     * daemon container group maintains only one copy per fleet instance.</p>
     */
    inline void SetSchedulingStrategy(ContainerSchedulingStrategy&& value) { m_schedulingStrategyHasBeenSet = true; m_schedulingStrategy = std::move(value); }

    /**
     * <p>The method for deploying the container group across fleet instances. A
     * replica container group might have multiple copies on each fleet instance. A
     * daemon container group maintains only one copy per fleet instance.</p>
     */
    inline ContainerGroupDefinition& WithSchedulingStrategy(const ContainerSchedulingStrategy& value) { SetSchedulingStrategy(value); return *this;}

    /**
     * <p>The method for deploying the container group across fleet instances. A
     * replica container group might have multiple copies on each fleet instance. A
     * daemon container group maintains only one copy per fleet instance.</p>
     */
    inline ContainerGroupDefinition& WithSchedulingStrategy(ContainerSchedulingStrategy&& value) { SetSchedulingStrategy(std::move(value)); return *this;}


    /**
     * <p>The amount of memory (in MiB) on a fleet instance to allocate for the
     * container group. All containers in the group share these resources. </p> <p>You
     * can set additional limits for each <a>ContainerDefinition</a> in the group. If
     * individual containers have limits, this value must meet the following
     * requirements: </p> <ul> <li> <p>Equal to or greater than the sum of all
     * container-specific soft memory limits in the group.</p> </li> <li> <p>Equal to
     * or greater than any container-specific hard limits in the group.</p> </li> </ul>
     * <p>For more details on memory allocation, see the <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/containers-design-fleet">Container
     * fleet design guide</a>.</p>
     */
    inline int GetTotalMemoryLimit() const{ return m_totalMemoryLimit; }

    /**
     * <p>The amount of memory (in MiB) on a fleet instance to allocate for the
     * container group. All containers in the group share these resources. </p> <p>You
     * can set additional limits for each <a>ContainerDefinition</a> in the group. If
     * individual containers have limits, this value must meet the following
     * requirements: </p> <ul> <li> <p>Equal to or greater than the sum of all
     * container-specific soft memory limits in the group.</p> </li> <li> <p>Equal to
     * or greater than any container-specific hard limits in the group.</p> </li> </ul>
     * <p>For more details on memory allocation, see the <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/containers-design-fleet">Container
     * fleet design guide</a>.</p>
     */
    inline bool TotalMemoryLimitHasBeenSet() const { return m_totalMemoryLimitHasBeenSet; }

    /**
     * <p>The amount of memory (in MiB) on a fleet instance to allocate for the
     * container group. All containers in the group share these resources. </p> <p>You
     * can set additional limits for each <a>ContainerDefinition</a> in the group. If
     * individual containers have limits, this value must meet the following
     * requirements: </p> <ul> <li> <p>Equal to or greater than the sum of all
     * container-specific soft memory limits in the group.</p> </li> <li> <p>Equal to
     * or greater than any container-specific hard limits in the group.</p> </li> </ul>
     * <p>For more details on memory allocation, see the <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/containers-design-fleet">Container
     * fleet design guide</a>.</p>
     */
    inline void SetTotalMemoryLimit(int value) { m_totalMemoryLimitHasBeenSet = true; m_totalMemoryLimit = value; }

    /**
     * <p>The amount of memory (in MiB) on a fleet instance to allocate for the
     * container group. All containers in the group share these resources. </p> <p>You
     * can set additional limits for each <a>ContainerDefinition</a> in the group. If
     * individual containers have limits, this value must meet the following
     * requirements: </p> <ul> <li> <p>Equal to or greater than the sum of all
     * container-specific soft memory limits in the group.</p> </li> <li> <p>Equal to
     * or greater than any container-specific hard limits in the group.</p> </li> </ul>
     * <p>For more details on memory allocation, see the <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/containers-design-fleet">Container
     * fleet design guide</a>.</p>
     */
    inline ContainerGroupDefinition& WithTotalMemoryLimit(int value) { SetTotalMemoryLimit(value); return *this;}


    /**
     * <p>The amount of CPU units on a fleet instance to allocate for the container
     * group. All containers in the group share these resources. This property is an
     * integer value in CPU units (1 vCPU is equal to 1024 CPU units). </p> <p>You can
     * set additional limits for each <a>ContainerDefinition</a> in the group. If
     * individual containers have limits, this value must be equal to or greater than
     * the sum of all container-specific CPU limits in the group.</p> <p>For more
     * details on memory allocation, see the <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/containers-design-fleet">Container
     * fleet design guide</a>.</p>
     */
    inline int GetTotalCpuLimit() const{ return m_totalCpuLimit; }

    /**
     * <p>The amount of CPU units on a fleet instance to allocate for the container
     * group. All containers in the group share these resources. This property is an
     * integer value in CPU units (1 vCPU is equal to 1024 CPU units). </p> <p>You can
     * set additional limits for each <a>ContainerDefinition</a> in the group. If
     * individual containers have limits, this value must be equal to or greater than
     * the sum of all container-specific CPU limits in the group.</p> <p>For more
     * details on memory allocation, see the <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/containers-design-fleet">Container
     * fleet design guide</a>.</p>
     */
    inline bool TotalCpuLimitHasBeenSet() const { return m_totalCpuLimitHasBeenSet; }

    /**
     * <p>The amount of CPU units on a fleet instance to allocate for the container
     * group. All containers in the group share these resources. This property is an
     * integer value in CPU units (1 vCPU is equal to 1024 CPU units). </p> <p>You can
     * set additional limits for each <a>ContainerDefinition</a> in the group. If
     * individual containers have limits, this value must be equal to or greater than
     * the sum of all container-specific CPU limits in the group.</p> <p>For more
     * details on memory allocation, see the <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/containers-design-fleet">Container
     * fleet design guide</a>.</p>
     */
    inline void SetTotalCpuLimit(int value) { m_totalCpuLimitHasBeenSet = true; m_totalCpuLimit = value; }

    /**
     * <p>The amount of CPU units on a fleet instance to allocate for the container
     * group. All containers in the group share these resources. This property is an
     * integer value in CPU units (1 vCPU is equal to 1024 CPU units). </p> <p>You can
     * set additional limits for each <a>ContainerDefinition</a> in the group. If
     * individual containers have limits, this value must be equal to or greater than
     * the sum of all container-specific CPU limits in the group.</p> <p>For more
     * details on memory allocation, see the <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/containers-design-fleet">Container
     * fleet design guide</a>.</p>
     */
    inline ContainerGroupDefinition& WithTotalCpuLimit(int value) { SetTotalCpuLimit(value); return *this;}


    /**
     * <p> The set of container definitions that are included in the container group.
     * </p>
     */
    inline const Aws::Vector<ContainerDefinition>& GetContainerDefinitions() const{ return m_containerDefinitions; }

    /**
     * <p> The set of container definitions that are included in the container group.
     * </p>
     */
    inline bool ContainerDefinitionsHasBeenSet() const { return m_containerDefinitionsHasBeenSet; }

    /**
     * <p> The set of container definitions that are included in the container group.
     * </p>
     */
    inline void SetContainerDefinitions(const Aws::Vector<ContainerDefinition>& value) { m_containerDefinitionsHasBeenSet = true; m_containerDefinitions = value; }

    /**
     * <p> The set of container definitions that are included in the container group.
     * </p>
     */
    inline void SetContainerDefinitions(Aws::Vector<ContainerDefinition>&& value) { m_containerDefinitionsHasBeenSet = true; m_containerDefinitions = std::move(value); }

    /**
     * <p> The set of container definitions that are included in the container group.
     * </p>
     */
    inline ContainerGroupDefinition& WithContainerDefinitions(const Aws::Vector<ContainerDefinition>& value) { SetContainerDefinitions(value); return *this;}

    /**
     * <p> The set of container definitions that are included in the container group.
     * </p>
     */
    inline ContainerGroupDefinition& WithContainerDefinitions(Aws::Vector<ContainerDefinition>&& value) { SetContainerDefinitions(std::move(value)); return *this;}

    /**
     * <p> The set of container definitions that are included in the container group.
     * </p>
     */
    inline ContainerGroupDefinition& AddContainerDefinitions(const ContainerDefinition& value) { m_containerDefinitionsHasBeenSet = true; m_containerDefinitions.push_back(value); return *this; }

    /**
     * <p> The set of container definitions that are included in the container group.
     * </p>
     */
    inline ContainerGroupDefinition& AddContainerDefinitions(ContainerDefinition&& value) { m_containerDefinitionsHasBeenSet = true; m_containerDefinitions.push_back(std::move(value)); return *this; }


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
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

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
    inline void SetStatus(const ContainerGroupDefinitionStatus& value) { m_statusHasBeenSet = true; m_status = value; }

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
    inline void SetStatus(ContainerGroupDefinitionStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

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
    inline ContainerGroupDefinition& WithStatus(const ContainerGroupDefinitionStatus& value) { SetStatus(value); return *this;}

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
    inline ContainerGroupDefinition& WithStatus(ContainerGroupDefinitionStatus&& value) { SetStatus(std::move(value)); return *this;}


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
    inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }

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
    inline void SetStatusReason(const Aws::String& value) { m_statusReasonHasBeenSet = true; m_statusReason = value; }

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
    inline void SetStatusReason(Aws::String&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::move(value); }

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
    inline void SetStatusReason(const char* value) { m_statusReasonHasBeenSet = true; m_statusReason.assign(value); }

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
    inline ContainerGroupDefinition& WithStatusReason(const Aws::String& value) { SetStatusReason(value); return *this;}

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
    inline ContainerGroupDefinition& WithStatusReason(Aws::String&& value) { SetStatusReason(std::move(value)); return *this;}

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
    inline ContainerGroupDefinition& WithStatusReason(const char* value) { SetStatusReason(value); return *this;}

  private:

    Aws::String m_containerGroupDefinitionArn;
    bool m_containerGroupDefinitionArnHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    ContainerOperatingSystem m_operatingSystem;
    bool m_operatingSystemHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    ContainerSchedulingStrategy m_schedulingStrategy;
    bool m_schedulingStrategyHasBeenSet = false;

    int m_totalMemoryLimit;
    bool m_totalMemoryLimitHasBeenSet = false;

    int m_totalCpuLimit;
    bool m_totalCpuLimitHasBeenSet = false;

    Aws::Vector<ContainerDefinition> m_containerDefinitions;
    bool m_containerDefinitionsHasBeenSet = false;

    ContainerGroupDefinitionStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_statusReason;
    bool m_statusReasonHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws

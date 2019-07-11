/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/events/CloudWatchEvents_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/events/model/LaunchType.h>
#include <aws/events/model/NetworkConfiguration.h>
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
namespace CloudWatchEvents
{
namespace Model
{

  /**
   * <p>The custom parameters to be used when the target is an Amazon ECS
   * task.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/events-2015-10-07/EcsParameters">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDWATCHEVENTS_API EcsParameters
  {
  public:
    EcsParameters();
    EcsParameters(Aws::Utils::Json::JsonView jsonValue);
    EcsParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ARN of the task definition to use if the event target is an Amazon ECS
     * task. </p>
     */
    inline const Aws::String& GetTaskDefinitionArn() const{ return m_taskDefinitionArn; }

    /**
     * <p>The ARN of the task definition to use if the event target is an Amazon ECS
     * task. </p>
     */
    inline bool TaskDefinitionArnHasBeenSet() const { return m_taskDefinitionArnHasBeenSet; }

    /**
     * <p>The ARN of the task definition to use if the event target is an Amazon ECS
     * task. </p>
     */
    inline void SetTaskDefinitionArn(const Aws::String& value) { m_taskDefinitionArnHasBeenSet = true; m_taskDefinitionArn = value; }

    /**
     * <p>The ARN of the task definition to use if the event target is an Amazon ECS
     * task. </p>
     */
    inline void SetTaskDefinitionArn(Aws::String&& value) { m_taskDefinitionArnHasBeenSet = true; m_taskDefinitionArn = std::move(value); }

    /**
     * <p>The ARN of the task definition to use if the event target is an Amazon ECS
     * task. </p>
     */
    inline void SetTaskDefinitionArn(const char* value) { m_taskDefinitionArnHasBeenSet = true; m_taskDefinitionArn.assign(value); }

    /**
     * <p>The ARN of the task definition to use if the event target is an Amazon ECS
     * task. </p>
     */
    inline EcsParameters& WithTaskDefinitionArn(const Aws::String& value) { SetTaskDefinitionArn(value); return *this;}

    /**
     * <p>The ARN of the task definition to use if the event target is an Amazon ECS
     * task. </p>
     */
    inline EcsParameters& WithTaskDefinitionArn(Aws::String&& value) { SetTaskDefinitionArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the task definition to use if the event target is an Amazon ECS
     * task. </p>
     */
    inline EcsParameters& WithTaskDefinitionArn(const char* value) { SetTaskDefinitionArn(value); return *this;}


    /**
     * <p>The number of tasks to create based on <code>TaskDefinition</code>. The
     * default is 1.</p>
     */
    inline int GetTaskCount() const{ return m_taskCount; }

    /**
     * <p>The number of tasks to create based on <code>TaskDefinition</code>. The
     * default is 1.</p>
     */
    inline bool TaskCountHasBeenSet() const { return m_taskCountHasBeenSet; }

    /**
     * <p>The number of tasks to create based on <code>TaskDefinition</code>. The
     * default is 1.</p>
     */
    inline void SetTaskCount(int value) { m_taskCountHasBeenSet = true; m_taskCount = value; }

    /**
     * <p>The number of tasks to create based on <code>TaskDefinition</code>. The
     * default is 1.</p>
     */
    inline EcsParameters& WithTaskCount(int value) { SetTaskCount(value); return *this;}


    /**
     * <p>Specifies the launch type on which your task is running. The launch type that
     * you specify here must match one of the launch type (compatibilities) of the
     * target task. The <code>FARGATE</code> value is supported only in the Regions
     * where AWS Fargate with Amazon ECS is supported. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/AWS-Fargate.html">AWS
     * Fargate on Amazon ECS</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline const LaunchType& GetLaunchType() const{ return m_launchType; }

    /**
     * <p>Specifies the launch type on which your task is running. The launch type that
     * you specify here must match one of the launch type (compatibilities) of the
     * target task. The <code>FARGATE</code> value is supported only in the Regions
     * where AWS Fargate with Amazon ECS is supported. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/AWS-Fargate.html">AWS
     * Fargate on Amazon ECS</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline bool LaunchTypeHasBeenSet() const { return m_launchTypeHasBeenSet; }

    /**
     * <p>Specifies the launch type on which your task is running. The launch type that
     * you specify here must match one of the launch type (compatibilities) of the
     * target task. The <code>FARGATE</code> value is supported only in the Regions
     * where AWS Fargate with Amazon ECS is supported. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/AWS-Fargate.html">AWS
     * Fargate on Amazon ECS</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline void SetLaunchType(const LaunchType& value) { m_launchTypeHasBeenSet = true; m_launchType = value; }

    /**
     * <p>Specifies the launch type on which your task is running. The launch type that
     * you specify here must match one of the launch type (compatibilities) of the
     * target task. The <code>FARGATE</code> value is supported only in the Regions
     * where AWS Fargate with Amazon ECS is supported. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/AWS-Fargate.html">AWS
     * Fargate on Amazon ECS</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline void SetLaunchType(LaunchType&& value) { m_launchTypeHasBeenSet = true; m_launchType = std::move(value); }

    /**
     * <p>Specifies the launch type on which your task is running. The launch type that
     * you specify here must match one of the launch type (compatibilities) of the
     * target task. The <code>FARGATE</code> value is supported only in the Regions
     * where AWS Fargate with Amazon ECS is supported. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/AWS-Fargate.html">AWS
     * Fargate on Amazon ECS</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline EcsParameters& WithLaunchType(const LaunchType& value) { SetLaunchType(value); return *this;}

    /**
     * <p>Specifies the launch type on which your task is running. The launch type that
     * you specify here must match one of the launch type (compatibilities) of the
     * target task. The <code>FARGATE</code> value is supported only in the Regions
     * where AWS Fargate with Amazon ECS is supported. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/AWS-Fargate.html">AWS
     * Fargate on Amazon ECS</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline EcsParameters& WithLaunchType(LaunchType&& value) { SetLaunchType(std::move(value)); return *this;}


    /**
     * <p>Use this structure if the ECS task uses the <code>awsvpc</code> network mode.
     * This structure specifies the VPC subnets and security groups associated with the
     * task and whether a public IP address is to be used. This structure is required
     * if <code>LaunchType</code> is <code>FARGATE</code> because the
     * <code>awsvpc</code> mode is required for Fargate tasks.</p> <p>If you specify
     * <code>NetworkConfiguration</code> when the target ECS task doesn't use the
     * <code>awsvpc</code> network mode, the task fails.</p>
     */
    inline const NetworkConfiguration& GetNetworkConfiguration() const{ return m_networkConfiguration; }

    /**
     * <p>Use this structure if the ECS task uses the <code>awsvpc</code> network mode.
     * This structure specifies the VPC subnets and security groups associated with the
     * task and whether a public IP address is to be used. This structure is required
     * if <code>LaunchType</code> is <code>FARGATE</code> because the
     * <code>awsvpc</code> mode is required for Fargate tasks.</p> <p>If you specify
     * <code>NetworkConfiguration</code> when the target ECS task doesn't use the
     * <code>awsvpc</code> network mode, the task fails.</p>
     */
    inline bool NetworkConfigurationHasBeenSet() const { return m_networkConfigurationHasBeenSet; }

    /**
     * <p>Use this structure if the ECS task uses the <code>awsvpc</code> network mode.
     * This structure specifies the VPC subnets and security groups associated with the
     * task and whether a public IP address is to be used. This structure is required
     * if <code>LaunchType</code> is <code>FARGATE</code> because the
     * <code>awsvpc</code> mode is required for Fargate tasks.</p> <p>If you specify
     * <code>NetworkConfiguration</code> when the target ECS task doesn't use the
     * <code>awsvpc</code> network mode, the task fails.</p>
     */
    inline void SetNetworkConfiguration(const NetworkConfiguration& value) { m_networkConfigurationHasBeenSet = true; m_networkConfiguration = value; }

    /**
     * <p>Use this structure if the ECS task uses the <code>awsvpc</code> network mode.
     * This structure specifies the VPC subnets and security groups associated with the
     * task and whether a public IP address is to be used. This structure is required
     * if <code>LaunchType</code> is <code>FARGATE</code> because the
     * <code>awsvpc</code> mode is required for Fargate tasks.</p> <p>If you specify
     * <code>NetworkConfiguration</code> when the target ECS task doesn't use the
     * <code>awsvpc</code> network mode, the task fails.</p>
     */
    inline void SetNetworkConfiguration(NetworkConfiguration&& value) { m_networkConfigurationHasBeenSet = true; m_networkConfiguration = std::move(value); }

    /**
     * <p>Use this structure if the ECS task uses the <code>awsvpc</code> network mode.
     * This structure specifies the VPC subnets and security groups associated with the
     * task and whether a public IP address is to be used. This structure is required
     * if <code>LaunchType</code> is <code>FARGATE</code> because the
     * <code>awsvpc</code> mode is required for Fargate tasks.</p> <p>If you specify
     * <code>NetworkConfiguration</code> when the target ECS task doesn't use the
     * <code>awsvpc</code> network mode, the task fails.</p>
     */
    inline EcsParameters& WithNetworkConfiguration(const NetworkConfiguration& value) { SetNetworkConfiguration(value); return *this;}

    /**
     * <p>Use this structure if the ECS task uses the <code>awsvpc</code> network mode.
     * This structure specifies the VPC subnets and security groups associated with the
     * task and whether a public IP address is to be used. This structure is required
     * if <code>LaunchType</code> is <code>FARGATE</code> because the
     * <code>awsvpc</code> mode is required for Fargate tasks.</p> <p>If you specify
     * <code>NetworkConfiguration</code> when the target ECS task doesn't use the
     * <code>awsvpc</code> network mode, the task fails.</p>
     */
    inline EcsParameters& WithNetworkConfiguration(NetworkConfiguration&& value) { SetNetworkConfiguration(std::move(value)); return *this;}


    /**
     * <p>Specifies the platform version for the task. Specify only the numeric portion
     * of the platform version, such as <code>1.1.0</code>.</p> <p>This structure is
     * used only if <code>LaunchType</code> is <code>FARGATE</code>. For more
     * information about valid platform versions, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/platform_versions.html">AWS
     * Fargate Platform Versions</a> in the <i>Amazon Elastic Container Service
     * Developer Guide</i>.</p>
     */
    inline const Aws::String& GetPlatformVersion() const{ return m_platformVersion; }

    /**
     * <p>Specifies the platform version for the task. Specify only the numeric portion
     * of the platform version, such as <code>1.1.0</code>.</p> <p>This structure is
     * used only if <code>LaunchType</code> is <code>FARGATE</code>. For more
     * information about valid platform versions, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/platform_versions.html">AWS
     * Fargate Platform Versions</a> in the <i>Amazon Elastic Container Service
     * Developer Guide</i>.</p>
     */
    inline bool PlatformVersionHasBeenSet() const { return m_platformVersionHasBeenSet; }

    /**
     * <p>Specifies the platform version for the task. Specify only the numeric portion
     * of the platform version, such as <code>1.1.0</code>.</p> <p>This structure is
     * used only if <code>LaunchType</code> is <code>FARGATE</code>. For more
     * information about valid platform versions, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/platform_versions.html">AWS
     * Fargate Platform Versions</a> in the <i>Amazon Elastic Container Service
     * Developer Guide</i>.</p>
     */
    inline void SetPlatformVersion(const Aws::String& value) { m_platformVersionHasBeenSet = true; m_platformVersion = value; }

    /**
     * <p>Specifies the platform version for the task. Specify only the numeric portion
     * of the platform version, such as <code>1.1.0</code>.</p> <p>This structure is
     * used only if <code>LaunchType</code> is <code>FARGATE</code>. For more
     * information about valid platform versions, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/platform_versions.html">AWS
     * Fargate Platform Versions</a> in the <i>Amazon Elastic Container Service
     * Developer Guide</i>.</p>
     */
    inline void SetPlatformVersion(Aws::String&& value) { m_platformVersionHasBeenSet = true; m_platformVersion = std::move(value); }

    /**
     * <p>Specifies the platform version for the task. Specify only the numeric portion
     * of the platform version, such as <code>1.1.0</code>.</p> <p>This structure is
     * used only if <code>LaunchType</code> is <code>FARGATE</code>. For more
     * information about valid platform versions, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/platform_versions.html">AWS
     * Fargate Platform Versions</a> in the <i>Amazon Elastic Container Service
     * Developer Guide</i>.</p>
     */
    inline void SetPlatformVersion(const char* value) { m_platformVersionHasBeenSet = true; m_platformVersion.assign(value); }

    /**
     * <p>Specifies the platform version for the task. Specify only the numeric portion
     * of the platform version, such as <code>1.1.0</code>.</p> <p>This structure is
     * used only if <code>LaunchType</code> is <code>FARGATE</code>. For more
     * information about valid platform versions, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/platform_versions.html">AWS
     * Fargate Platform Versions</a> in the <i>Amazon Elastic Container Service
     * Developer Guide</i>.</p>
     */
    inline EcsParameters& WithPlatformVersion(const Aws::String& value) { SetPlatformVersion(value); return *this;}

    /**
     * <p>Specifies the platform version for the task. Specify only the numeric portion
     * of the platform version, such as <code>1.1.0</code>.</p> <p>This structure is
     * used only if <code>LaunchType</code> is <code>FARGATE</code>. For more
     * information about valid platform versions, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/platform_versions.html">AWS
     * Fargate Platform Versions</a> in the <i>Amazon Elastic Container Service
     * Developer Guide</i>.</p>
     */
    inline EcsParameters& WithPlatformVersion(Aws::String&& value) { SetPlatformVersion(std::move(value)); return *this;}

    /**
     * <p>Specifies the platform version for the task. Specify only the numeric portion
     * of the platform version, such as <code>1.1.0</code>.</p> <p>This structure is
     * used only if <code>LaunchType</code> is <code>FARGATE</code>. For more
     * information about valid platform versions, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/platform_versions.html">AWS
     * Fargate Platform Versions</a> in the <i>Amazon Elastic Container Service
     * Developer Guide</i>.</p>
     */
    inline EcsParameters& WithPlatformVersion(const char* value) { SetPlatformVersion(value); return *this;}


    /**
     * <p>Specifies an ECS task group for the task. The maximum length is 255
     * characters.</p>
     */
    inline const Aws::String& GetGroup() const{ return m_group; }

    /**
     * <p>Specifies an ECS task group for the task. The maximum length is 255
     * characters.</p>
     */
    inline bool GroupHasBeenSet() const { return m_groupHasBeenSet; }

    /**
     * <p>Specifies an ECS task group for the task. The maximum length is 255
     * characters.</p>
     */
    inline void SetGroup(const Aws::String& value) { m_groupHasBeenSet = true; m_group = value; }

    /**
     * <p>Specifies an ECS task group for the task. The maximum length is 255
     * characters.</p>
     */
    inline void SetGroup(Aws::String&& value) { m_groupHasBeenSet = true; m_group = std::move(value); }

    /**
     * <p>Specifies an ECS task group for the task. The maximum length is 255
     * characters.</p>
     */
    inline void SetGroup(const char* value) { m_groupHasBeenSet = true; m_group.assign(value); }

    /**
     * <p>Specifies an ECS task group for the task. The maximum length is 255
     * characters.</p>
     */
    inline EcsParameters& WithGroup(const Aws::String& value) { SetGroup(value); return *this;}

    /**
     * <p>Specifies an ECS task group for the task. The maximum length is 255
     * characters.</p>
     */
    inline EcsParameters& WithGroup(Aws::String&& value) { SetGroup(std::move(value)); return *this;}

    /**
     * <p>Specifies an ECS task group for the task. The maximum length is 255
     * characters.</p>
     */
    inline EcsParameters& WithGroup(const char* value) { SetGroup(value); return *this;}

  private:

    Aws::String m_taskDefinitionArn;
    bool m_taskDefinitionArnHasBeenSet;

    int m_taskCount;
    bool m_taskCountHasBeenSet;

    LaunchType m_launchType;
    bool m_launchTypeHasBeenSet;

    NetworkConfiguration m_networkConfiguration;
    bool m_networkConfigurationHasBeenSet;

    Aws::String m_platformVersion;
    bool m_platformVersionHasBeenSet;

    Aws::String m_group;
    bool m_groupHasBeenSet;
  };

} // namespace Model
} // namespace CloudWatchEvents
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/ecs/ECSRequest.h>
#include <aws/ecs/model/SettingName.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ECS
{
namespace Model
{

  /**
   */
  class PutAccountSettingDefaultRequest : public ECSRequest
  {
  public:
    AWS_ECS_API PutAccountSettingDefaultRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutAccountSettingDefault"; }

    AWS_ECS_API Aws::String SerializePayload() const override;

    AWS_ECS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The resource name for which to modify the account setting.</p> <p>The
     * following are the valid values for the account setting name.</p> <ul> <li> <p>
     * <code>serviceLongArnFormat</code> - When modified, the Amazon Resource Name
     * (ARN) and resource ID format of the resource type for a specified user, role, or
     * the root user for an account is affected. The opt-in and opt-out account setting
     * must be set for each Amazon ECS resource separately. The ARN and resource ID
     * format of a resource is defined by the opt-in status of the user or role that
     * created the resource. You must turn on this setting to use Amazon ECS features
     * such as resource tagging.</p> </li> <li> <p> <code>taskLongArnFormat</code> -
     * When modified, the Amazon Resource Name (ARN) and resource ID format of the
     * resource type for a specified user, role, or the root user for an account is
     * affected. The opt-in and opt-out account setting must be set for each Amazon ECS
     * resource separately. The ARN and resource ID format of a resource is defined by
     * the opt-in status of the user or role that created the resource. You must turn
     * on this setting to use Amazon ECS features such as resource tagging.</p> </li>
     * <li> <p> <code>containerInstanceLongArnFormat</code> - When modified, the Amazon
     * Resource Name (ARN) and resource ID format of the resource type for a specified
     * user, role, or the root user for an account is affected. The opt-in and opt-out
     * account setting must be set for each Amazon ECS resource separately. The ARN and
     * resource ID format of a resource is defined by the opt-in status of the user or
     * role that created the resource. You must turn on this setting to use Amazon ECS
     * features such as resource tagging.</p> </li> <li> <p>
     * <code>awsvpcTrunking</code> - When modified, the elastic network interface (ENI)
     * limit for any new container instances that support the feature is changed. If
     * <code>awsvpcTrunking</code> is turned on, any new container instances that
     * support the feature are launched have the increased ENI limits available to
     * them. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/container-instance-eni.html">Elastic
     * Network Interface Trunking</a> in the <i>Amazon Elastic Container Service
     * Developer Guide</i>.</p> </li> <li> <p> <code>containerInsights</code> - When
     * modified, the default setting indicating whether Amazon Web Services CloudWatch
     * Container Insights is turned on for your clusters is changed. If
     * <code>containerInsights</code> is turned on, any new clusters that are created
     * will have Container Insights turned on unless you disable it during cluster
     * creation. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/cloudwatch-container-insights.html">CloudWatch
     * Container Insights</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p> </li> <li> <p> <code>dualStackIPv6</code> - When turned on, when
     * using a VPC in dual stack mode, your tasks using the <code>awsvpc</code> network
     * mode can have an IPv6 address assigned. For more information on using IPv6 with
     * tasks launched on Amazon EC2 instances, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task-networking-awsvpc.html#task-networking-vpc-dual-stack">Using
     * a VPC in dual-stack mode</a>. For more information on using IPv6 with tasks
     * launched on Fargate, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/fargate-task-networking.html#fargate-task-networking-vpc-dual-stack">Using
     * a VPC in dual-stack mode</a>.</p> </li> <li> <p> <code>fargateFIPSMode</code> -
     * If you specify <code>fargateFIPSMode</code>, Fargate FIPS 140 compliance is
     * affected.</p> </li> <li> <p> <code>fargateTaskRetirementWaitPeriod</code> - When
     * Amazon Web Services determines that a security or infrastructure update is
     * needed for an Amazon ECS task hosted on Fargate, the tasks need to be stopped
     * and new tasks launched to replace them. Use
     * <code>fargateTaskRetirementWaitPeriod</code> to configure the wait time to
     * retire a Fargate task. For information about the Fargate tasks maintenance, see
     * <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task-maintenance.html">Amazon
     * Web Services Fargate task maintenance</a> in the <i>Amazon ECS Developer
     * Guide</i>.</p> </li> <li> <p> <code>tagResourceAuthorization</code> - Amazon ECS
     * is introducing tagging authorization for resource creation. Users must have
     * permissions for actions that create the resource, such as
     * <code>ecsCreateCluster</code>. If tags are specified when you create a resource,
     * Amazon Web Services performs additional authorization to verify if users or
     * roles have permissions to create tags. Therefore, you must grant explicit
     * permissions to use the <code>ecs:TagResource</code> action. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/supported-iam-actions-tagging.html">Grant
     * permission to tag resources on creation</a> in the <i>Amazon ECS Developer
     * Guide</i>.</p> </li> <li> <p> <code>guardDutyActivate</code> - The
     * <code>guardDutyActivate</code> parameter is read-only in Amazon ECS and
     * indicates whether Amazon ECS Runtime Monitoring is enabled or disabled by your
     * security administrator in your Amazon ECS account. Amazon GuardDuty controls
     * this account setting on your behalf. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-guard-duty-integration.html">Protecting
     * Amazon ECS workloads with Amazon ECS Runtime Monitoring</a>.</p> </li> </ul>
     */
    inline const SettingName& GetName() const{ return m_name; }

    /**
     * <p>The resource name for which to modify the account setting.</p> <p>The
     * following are the valid values for the account setting name.</p> <ul> <li> <p>
     * <code>serviceLongArnFormat</code> - When modified, the Amazon Resource Name
     * (ARN) and resource ID format of the resource type for a specified user, role, or
     * the root user for an account is affected. The opt-in and opt-out account setting
     * must be set for each Amazon ECS resource separately. The ARN and resource ID
     * format of a resource is defined by the opt-in status of the user or role that
     * created the resource. You must turn on this setting to use Amazon ECS features
     * such as resource tagging.</p> </li> <li> <p> <code>taskLongArnFormat</code> -
     * When modified, the Amazon Resource Name (ARN) and resource ID format of the
     * resource type for a specified user, role, or the root user for an account is
     * affected. The opt-in and opt-out account setting must be set for each Amazon ECS
     * resource separately. The ARN and resource ID format of a resource is defined by
     * the opt-in status of the user or role that created the resource. You must turn
     * on this setting to use Amazon ECS features such as resource tagging.</p> </li>
     * <li> <p> <code>containerInstanceLongArnFormat</code> - When modified, the Amazon
     * Resource Name (ARN) and resource ID format of the resource type for a specified
     * user, role, or the root user for an account is affected. The opt-in and opt-out
     * account setting must be set for each Amazon ECS resource separately. The ARN and
     * resource ID format of a resource is defined by the opt-in status of the user or
     * role that created the resource. You must turn on this setting to use Amazon ECS
     * features such as resource tagging.</p> </li> <li> <p>
     * <code>awsvpcTrunking</code> - When modified, the elastic network interface (ENI)
     * limit for any new container instances that support the feature is changed. If
     * <code>awsvpcTrunking</code> is turned on, any new container instances that
     * support the feature are launched have the increased ENI limits available to
     * them. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/container-instance-eni.html">Elastic
     * Network Interface Trunking</a> in the <i>Amazon Elastic Container Service
     * Developer Guide</i>.</p> </li> <li> <p> <code>containerInsights</code> - When
     * modified, the default setting indicating whether Amazon Web Services CloudWatch
     * Container Insights is turned on for your clusters is changed. If
     * <code>containerInsights</code> is turned on, any new clusters that are created
     * will have Container Insights turned on unless you disable it during cluster
     * creation. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/cloudwatch-container-insights.html">CloudWatch
     * Container Insights</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p> </li> <li> <p> <code>dualStackIPv6</code> - When turned on, when
     * using a VPC in dual stack mode, your tasks using the <code>awsvpc</code> network
     * mode can have an IPv6 address assigned. For more information on using IPv6 with
     * tasks launched on Amazon EC2 instances, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task-networking-awsvpc.html#task-networking-vpc-dual-stack">Using
     * a VPC in dual-stack mode</a>. For more information on using IPv6 with tasks
     * launched on Fargate, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/fargate-task-networking.html#fargate-task-networking-vpc-dual-stack">Using
     * a VPC in dual-stack mode</a>.</p> </li> <li> <p> <code>fargateFIPSMode</code> -
     * If you specify <code>fargateFIPSMode</code>, Fargate FIPS 140 compliance is
     * affected.</p> </li> <li> <p> <code>fargateTaskRetirementWaitPeriod</code> - When
     * Amazon Web Services determines that a security or infrastructure update is
     * needed for an Amazon ECS task hosted on Fargate, the tasks need to be stopped
     * and new tasks launched to replace them. Use
     * <code>fargateTaskRetirementWaitPeriod</code> to configure the wait time to
     * retire a Fargate task. For information about the Fargate tasks maintenance, see
     * <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task-maintenance.html">Amazon
     * Web Services Fargate task maintenance</a> in the <i>Amazon ECS Developer
     * Guide</i>.</p> </li> <li> <p> <code>tagResourceAuthorization</code> - Amazon ECS
     * is introducing tagging authorization for resource creation. Users must have
     * permissions for actions that create the resource, such as
     * <code>ecsCreateCluster</code>. If tags are specified when you create a resource,
     * Amazon Web Services performs additional authorization to verify if users or
     * roles have permissions to create tags. Therefore, you must grant explicit
     * permissions to use the <code>ecs:TagResource</code> action. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/supported-iam-actions-tagging.html">Grant
     * permission to tag resources on creation</a> in the <i>Amazon ECS Developer
     * Guide</i>.</p> </li> <li> <p> <code>guardDutyActivate</code> - The
     * <code>guardDutyActivate</code> parameter is read-only in Amazon ECS and
     * indicates whether Amazon ECS Runtime Monitoring is enabled or disabled by your
     * security administrator in your Amazon ECS account. Amazon GuardDuty controls
     * this account setting on your behalf. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-guard-duty-integration.html">Protecting
     * Amazon ECS workloads with Amazon ECS Runtime Monitoring</a>.</p> </li> </ul>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The resource name for which to modify the account setting.</p> <p>The
     * following are the valid values for the account setting name.</p> <ul> <li> <p>
     * <code>serviceLongArnFormat</code> - When modified, the Amazon Resource Name
     * (ARN) and resource ID format of the resource type for a specified user, role, or
     * the root user for an account is affected. The opt-in and opt-out account setting
     * must be set for each Amazon ECS resource separately. The ARN and resource ID
     * format of a resource is defined by the opt-in status of the user or role that
     * created the resource. You must turn on this setting to use Amazon ECS features
     * such as resource tagging.</p> </li> <li> <p> <code>taskLongArnFormat</code> -
     * When modified, the Amazon Resource Name (ARN) and resource ID format of the
     * resource type for a specified user, role, or the root user for an account is
     * affected. The opt-in and opt-out account setting must be set for each Amazon ECS
     * resource separately. The ARN and resource ID format of a resource is defined by
     * the opt-in status of the user or role that created the resource. You must turn
     * on this setting to use Amazon ECS features such as resource tagging.</p> </li>
     * <li> <p> <code>containerInstanceLongArnFormat</code> - When modified, the Amazon
     * Resource Name (ARN) and resource ID format of the resource type for a specified
     * user, role, or the root user for an account is affected. The opt-in and opt-out
     * account setting must be set for each Amazon ECS resource separately. The ARN and
     * resource ID format of a resource is defined by the opt-in status of the user or
     * role that created the resource. You must turn on this setting to use Amazon ECS
     * features such as resource tagging.</p> </li> <li> <p>
     * <code>awsvpcTrunking</code> - When modified, the elastic network interface (ENI)
     * limit for any new container instances that support the feature is changed. If
     * <code>awsvpcTrunking</code> is turned on, any new container instances that
     * support the feature are launched have the increased ENI limits available to
     * them. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/container-instance-eni.html">Elastic
     * Network Interface Trunking</a> in the <i>Amazon Elastic Container Service
     * Developer Guide</i>.</p> </li> <li> <p> <code>containerInsights</code> - When
     * modified, the default setting indicating whether Amazon Web Services CloudWatch
     * Container Insights is turned on for your clusters is changed. If
     * <code>containerInsights</code> is turned on, any new clusters that are created
     * will have Container Insights turned on unless you disable it during cluster
     * creation. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/cloudwatch-container-insights.html">CloudWatch
     * Container Insights</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p> </li> <li> <p> <code>dualStackIPv6</code> - When turned on, when
     * using a VPC in dual stack mode, your tasks using the <code>awsvpc</code> network
     * mode can have an IPv6 address assigned. For more information on using IPv6 with
     * tasks launched on Amazon EC2 instances, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task-networking-awsvpc.html#task-networking-vpc-dual-stack">Using
     * a VPC in dual-stack mode</a>. For more information on using IPv6 with tasks
     * launched on Fargate, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/fargate-task-networking.html#fargate-task-networking-vpc-dual-stack">Using
     * a VPC in dual-stack mode</a>.</p> </li> <li> <p> <code>fargateFIPSMode</code> -
     * If you specify <code>fargateFIPSMode</code>, Fargate FIPS 140 compliance is
     * affected.</p> </li> <li> <p> <code>fargateTaskRetirementWaitPeriod</code> - When
     * Amazon Web Services determines that a security or infrastructure update is
     * needed for an Amazon ECS task hosted on Fargate, the tasks need to be stopped
     * and new tasks launched to replace them. Use
     * <code>fargateTaskRetirementWaitPeriod</code> to configure the wait time to
     * retire a Fargate task. For information about the Fargate tasks maintenance, see
     * <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task-maintenance.html">Amazon
     * Web Services Fargate task maintenance</a> in the <i>Amazon ECS Developer
     * Guide</i>.</p> </li> <li> <p> <code>tagResourceAuthorization</code> - Amazon ECS
     * is introducing tagging authorization for resource creation. Users must have
     * permissions for actions that create the resource, such as
     * <code>ecsCreateCluster</code>. If tags are specified when you create a resource,
     * Amazon Web Services performs additional authorization to verify if users or
     * roles have permissions to create tags. Therefore, you must grant explicit
     * permissions to use the <code>ecs:TagResource</code> action. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/supported-iam-actions-tagging.html">Grant
     * permission to tag resources on creation</a> in the <i>Amazon ECS Developer
     * Guide</i>.</p> </li> <li> <p> <code>guardDutyActivate</code> - The
     * <code>guardDutyActivate</code> parameter is read-only in Amazon ECS and
     * indicates whether Amazon ECS Runtime Monitoring is enabled or disabled by your
     * security administrator in your Amazon ECS account. Amazon GuardDuty controls
     * this account setting on your behalf. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-guard-duty-integration.html">Protecting
     * Amazon ECS workloads with Amazon ECS Runtime Monitoring</a>.</p> </li> </ul>
     */
    inline void SetName(const SettingName& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The resource name for which to modify the account setting.</p> <p>The
     * following are the valid values for the account setting name.</p> <ul> <li> <p>
     * <code>serviceLongArnFormat</code> - When modified, the Amazon Resource Name
     * (ARN) and resource ID format of the resource type for a specified user, role, or
     * the root user for an account is affected. The opt-in and opt-out account setting
     * must be set for each Amazon ECS resource separately. The ARN and resource ID
     * format of a resource is defined by the opt-in status of the user or role that
     * created the resource. You must turn on this setting to use Amazon ECS features
     * such as resource tagging.</p> </li> <li> <p> <code>taskLongArnFormat</code> -
     * When modified, the Amazon Resource Name (ARN) and resource ID format of the
     * resource type for a specified user, role, or the root user for an account is
     * affected. The opt-in and opt-out account setting must be set for each Amazon ECS
     * resource separately. The ARN and resource ID format of a resource is defined by
     * the opt-in status of the user or role that created the resource. You must turn
     * on this setting to use Amazon ECS features such as resource tagging.</p> </li>
     * <li> <p> <code>containerInstanceLongArnFormat</code> - When modified, the Amazon
     * Resource Name (ARN) and resource ID format of the resource type for a specified
     * user, role, or the root user for an account is affected. The opt-in and opt-out
     * account setting must be set for each Amazon ECS resource separately. The ARN and
     * resource ID format of a resource is defined by the opt-in status of the user or
     * role that created the resource. You must turn on this setting to use Amazon ECS
     * features such as resource tagging.</p> </li> <li> <p>
     * <code>awsvpcTrunking</code> - When modified, the elastic network interface (ENI)
     * limit for any new container instances that support the feature is changed. If
     * <code>awsvpcTrunking</code> is turned on, any new container instances that
     * support the feature are launched have the increased ENI limits available to
     * them. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/container-instance-eni.html">Elastic
     * Network Interface Trunking</a> in the <i>Amazon Elastic Container Service
     * Developer Guide</i>.</p> </li> <li> <p> <code>containerInsights</code> - When
     * modified, the default setting indicating whether Amazon Web Services CloudWatch
     * Container Insights is turned on for your clusters is changed. If
     * <code>containerInsights</code> is turned on, any new clusters that are created
     * will have Container Insights turned on unless you disable it during cluster
     * creation. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/cloudwatch-container-insights.html">CloudWatch
     * Container Insights</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p> </li> <li> <p> <code>dualStackIPv6</code> - When turned on, when
     * using a VPC in dual stack mode, your tasks using the <code>awsvpc</code> network
     * mode can have an IPv6 address assigned. For more information on using IPv6 with
     * tasks launched on Amazon EC2 instances, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task-networking-awsvpc.html#task-networking-vpc-dual-stack">Using
     * a VPC in dual-stack mode</a>. For more information on using IPv6 with tasks
     * launched on Fargate, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/fargate-task-networking.html#fargate-task-networking-vpc-dual-stack">Using
     * a VPC in dual-stack mode</a>.</p> </li> <li> <p> <code>fargateFIPSMode</code> -
     * If you specify <code>fargateFIPSMode</code>, Fargate FIPS 140 compliance is
     * affected.</p> </li> <li> <p> <code>fargateTaskRetirementWaitPeriod</code> - When
     * Amazon Web Services determines that a security or infrastructure update is
     * needed for an Amazon ECS task hosted on Fargate, the tasks need to be stopped
     * and new tasks launched to replace them. Use
     * <code>fargateTaskRetirementWaitPeriod</code> to configure the wait time to
     * retire a Fargate task. For information about the Fargate tasks maintenance, see
     * <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task-maintenance.html">Amazon
     * Web Services Fargate task maintenance</a> in the <i>Amazon ECS Developer
     * Guide</i>.</p> </li> <li> <p> <code>tagResourceAuthorization</code> - Amazon ECS
     * is introducing tagging authorization for resource creation. Users must have
     * permissions for actions that create the resource, such as
     * <code>ecsCreateCluster</code>. If tags are specified when you create a resource,
     * Amazon Web Services performs additional authorization to verify if users or
     * roles have permissions to create tags. Therefore, you must grant explicit
     * permissions to use the <code>ecs:TagResource</code> action. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/supported-iam-actions-tagging.html">Grant
     * permission to tag resources on creation</a> in the <i>Amazon ECS Developer
     * Guide</i>.</p> </li> <li> <p> <code>guardDutyActivate</code> - The
     * <code>guardDutyActivate</code> parameter is read-only in Amazon ECS and
     * indicates whether Amazon ECS Runtime Monitoring is enabled or disabled by your
     * security administrator in your Amazon ECS account. Amazon GuardDuty controls
     * this account setting on your behalf. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-guard-duty-integration.html">Protecting
     * Amazon ECS workloads with Amazon ECS Runtime Monitoring</a>.</p> </li> </ul>
     */
    inline void SetName(SettingName&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The resource name for which to modify the account setting.</p> <p>The
     * following are the valid values for the account setting name.</p> <ul> <li> <p>
     * <code>serviceLongArnFormat</code> - When modified, the Amazon Resource Name
     * (ARN) and resource ID format of the resource type for a specified user, role, or
     * the root user for an account is affected. The opt-in and opt-out account setting
     * must be set for each Amazon ECS resource separately. The ARN and resource ID
     * format of a resource is defined by the opt-in status of the user or role that
     * created the resource. You must turn on this setting to use Amazon ECS features
     * such as resource tagging.</p> </li> <li> <p> <code>taskLongArnFormat</code> -
     * When modified, the Amazon Resource Name (ARN) and resource ID format of the
     * resource type for a specified user, role, or the root user for an account is
     * affected. The opt-in and opt-out account setting must be set for each Amazon ECS
     * resource separately. The ARN and resource ID format of a resource is defined by
     * the opt-in status of the user or role that created the resource. You must turn
     * on this setting to use Amazon ECS features such as resource tagging.</p> </li>
     * <li> <p> <code>containerInstanceLongArnFormat</code> - When modified, the Amazon
     * Resource Name (ARN) and resource ID format of the resource type for a specified
     * user, role, or the root user for an account is affected. The opt-in and opt-out
     * account setting must be set for each Amazon ECS resource separately. The ARN and
     * resource ID format of a resource is defined by the opt-in status of the user or
     * role that created the resource. You must turn on this setting to use Amazon ECS
     * features such as resource tagging.</p> </li> <li> <p>
     * <code>awsvpcTrunking</code> - When modified, the elastic network interface (ENI)
     * limit for any new container instances that support the feature is changed. If
     * <code>awsvpcTrunking</code> is turned on, any new container instances that
     * support the feature are launched have the increased ENI limits available to
     * them. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/container-instance-eni.html">Elastic
     * Network Interface Trunking</a> in the <i>Amazon Elastic Container Service
     * Developer Guide</i>.</p> </li> <li> <p> <code>containerInsights</code> - When
     * modified, the default setting indicating whether Amazon Web Services CloudWatch
     * Container Insights is turned on for your clusters is changed. If
     * <code>containerInsights</code> is turned on, any new clusters that are created
     * will have Container Insights turned on unless you disable it during cluster
     * creation. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/cloudwatch-container-insights.html">CloudWatch
     * Container Insights</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p> </li> <li> <p> <code>dualStackIPv6</code> - When turned on, when
     * using a VPC in dual stack mode, your tasks using the <code>awsvpc</code> network
     * mode can have an IPv6 address assigned. For more information on using IPv6 with
     * tasks launched on Amazon EC2 instances, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task-networking-awsvpc.html#task-networking-vpc-dual-stack">Using
     * a VPC in dual-stack mode</a>. For more information on using IPv6 with tasks
     * launched on Fargate, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/fargate-task-networking.html#fargate-task-networking-vpc-dual-stack">Using
     * a VPC in dual-stack mode</a>.</p> </li> <li> <p> <code>fargateFIPSMode</code> -
     * If you specify <code>fargateFIPSMode</code>, Fargate FIPS 140 compliance is
     * affected.</p> </li> <li> <p> <code>fargateTaskRetirementWaitPeriod</code> - When
     * Amazon Web Services determines that a security or infrastructure update is
     * needed for an Amazon ECS task hosted on Fargate, the tasks need to be stopped
     * and new tasks launched to replace them. Use
     * <code>fargateTaskRetirementWaitPeriod</code> to configure the wait time to
     * retire a Fargate task. For information about the Fargate tasks maintenance, see
     * <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task-maintenance.html">Amazon
     * Web Services Fargate task maintenance</a> in the <i>Amazon ECS Developer
     * Guide</i>.</p> </li> <li> <p> <code>tagResourceAuthorization</code> - Amazon ECS
     * is introducing tagging authorization for resource creation. Users must have
     * permissions for actions that create the resource, such as
     * <code>ecsCreateCluster</code>. If tags are specified when you create a resource,
     * Amazon Web Services performs additional authorization to verify if users or
     * roles have permissions to create tags. Therefore, you must grant explicit
     * permissions to use the <code>ecs:TagResource</code> action. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/supported-iam-actions-tagging.html">Grant
     * permission to tag resources on creation</a> in the <i>Amazon ECS Developer
     * Guide</i>.</p> </li> <li> <p> <code>guardDutyActivate</code> - The
     * <code>guardDutyActivate</code> parameter is read-only in Amazon ECS and
     * indicates whether Amazon ECS Runtime Monitoring is enabled or disabled by your
     * security administrator in your Amazon ECS account. Amazon GuardDuty controls
     * this account setting on your behalf. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-guard-duty-integration.html">Protecting
     * Amazon ECS workloads with Amazon ECS Runtime Monitoring</a>.</p> </li> </ul>
     */
    inline PutAccountSettingDefaultRequest& WithName(const SettingName& value) { SetName(value); return *this;}

    /**
     * <p>The resource name for which to modify the account setting.</p> <p>The
     * following are the valid values for the account setting name.</p> <ul> <li> <p>
     * <code>serviceLongArnFormat</code> - When modified, the Amazon Resource Name
     * (ARN) and resource ID format of the resource type for a specified user, role, or
     * the root user for an account is affected. The opt-in and opt-out account setting
     * must be set for each Amazon ECS resource separately. The ARN and resource ID
     * format of a resource is defined by the opt-in status of the user or role that
     * created the resource. You must turn on this setting to use Amazon ECS features
     * such as resource tagging.</p> </li> <li> <p> <code>taskLongArnFormat</code> -
     * When modified, the Amazon Resource Name (ARN) and resource ID format of the
     * resource type for a specified user, role, or the root user for an account is
     * affected. The opt-in and opt-out account setting must be set for each Amazon ECS
     * resource separately. The ARN and resource ID format of a resource is defined by
     * the opt-in status of the user or role that created the resource. You must turn
     * on this setting to use Amazon ECS features such as resource tagging.</p> </li>
     * <li> <p> <code>containerInstanceLongArnFormat</code> - When modified, the Amazon
     * Resource Name (ARN) and resource ID format of the resource type for a specified
     * user, role, or the root user for an account is affected. The opt-in and opt-out
     * account setting must be set for each Amazon ECS resource separately. The ARN and
     * resource ID format of a resource is defined by the opt-in status of the user or
     * role that created the resource. You must turn on this setting to use Amazon ECS
     * features such as resource tagging.</p> </li> <li> <p>
     * <code>awsvpcTrunking</code> - When modified, the elastic network interface (ENI)
     * limit for any new container instances that support the feature is changed. If
     * <code>awsvpcTrunking</code> is turned on, any new container instances that
     * support the feature are launched have the increased ENI limits available to
     * them. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/container-instance-eni.html">Elastic
     * Network Interface Trunking</a> in the <i>Amazon Elastic Container Service
     * Developer Guide</i>.</p> </li> <li> <p> <code>containerInsights</code> - When
     * modified, the default setting indicating whether Amazon Web Services CloudWatch
     * Container Insights is turned on for your clusters is changed. If
     * <code>containerInsights</code> is turned on, any new clusters that are created
     * will have Container Insights turned on unless you disable it during cluster
     * creation. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/cloudwatch-container-insights.html">CloudWatch
     * Container Insights</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p> </li> <li> <p> <code>dualStackIPv6</code> - When turned on, when
     * using a VPC in dual stack mode, your tasks using the <code>awsvpc</code> network
     * mode can have an IPv6 address assigned. For more information on using IPv6 with
     * tasks launched on Amazon EC2 instances, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task-networking-awsvpc.html#task-networking-vpc-dual-stack">Using
     * a VPC in dual-stack mode</a>. For more information on using IPv6 with tasks
     * launched on Fargate, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/fargate-task-networking.html#fargate-task-networking-vpc-dual-stack">Using
     * a VPC in dual-stack mode</a>.</p> </li> <li> <p> <code>fargateFIPSMode</code> -
     * If you specify <code>fargateFIPSMode</code>, Fargate FIPS 140 compliance is
     * affected.</p> </li> <li> <p> <code>fargateTaskRetirementWaitPeriod</code> - When
     * Amazon Web Services determines that a security or infrastructure update is
     * needed for an Amazon ECS task hosted on Fargate, the tasks need to be stopped
     * and new tasks launched to replace them. Use
     * <code>fargateTaskRetirementWaitPeriod</code> to configure the wait time to
     * retire a Fargate task. For information about the Fargate tasks maintenance, see
     * <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task-maintenance.html">Amazon
     * Web Services Fargate task maintenance</a> in the <i>Amazon ECS Developer
     * Guide</i>.</p> </li> <li> <p> <code>tagResourceAuthorization</code> - Amazon ECS
     * is introducing tagging authorization for resource creation. Users must have
     * permissions for actions that create the resource, such as
     * <code>ecsCreateCluster</code>. If tags are specified when you create a resource,
     * Amazon Web Services performs additional authorization to verify if users or
     * roles have permissions to create tags. Therefore, you must grant explicit
     * permissions to use the <code>ecs:TagResource</code> action. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/supported-iam-actions-tagging.html">Grant
     * permission to tag resources on creation</a> in the <i>Amazon ECS Developer
     * Guide</i>.</p> </li> <li> <p> <code>guardDutyActivate</code> - The
     * <code>guardDutyActivate</code> parameter is read-only in Amazon ECS and
     * indicates whether Amazon ECS Runtime Monitoring is enabled or disabled by your
     * security administrator in your Amazon ECS account. Amazon GuardDuty controls
     * this account setting on your behalf. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-guard-duty-integration.html">Protecting
     * Amazon ECS workloads with Amazon ECS Runtime Monitoring</a>.</p> </li> </ul>
     */
    inline PutAccountSettingDefaultRequest& WithName(SettingName&& value) { SetName(std::move(value)); return *this;}


    /**
     * <p>The account setting value for the specified principal ARN. Accepted values
     * are <code>enabled</code>, <code>disabled</code>, <code>on</code>, and
     * <code>off</code>.</p> <p>When you specify
     * <code>fargateTaskRetirementWaitPeriod</code> for the <code>name</code>, the
     * following are the valid values:</p> <ul> <li> <p> <code>0</code> - Amazon Web
     * Services sends the notification, and immediately retires the affected tasks.</p>
     * </li> <li> <p> <code>7</code> - Amazon Web Services sends the notification, and
     * waits 7 calendar days to retire the tasks.</p> </li> <li> <p> <code>14</code> -
     * Amazon Web Services sends the notification, and waits 14 calendar days to retire
     * the tasks.</p> </li> </ul>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The account setting value for the specified principal ARN. Accepted values
     * are <code>enabled</code>, <code>disabled</code>, <code>on</code>, and
     * <code>off</code>.</p> <p>When you specify
     * <code>fargateTaskRetirementWaitPeriod</code> for the <code>name</code>, the
     * following are the valid values:</p> <ul> <li> <p> <code>0</code> - Amazon Web
     * Services sends the notification, and immediately retires the affected tasks.</p>
     * </li> <li> <p> <code>7</code> - Amazon Web Services sends the notification, and
     * waits 7 calendar days to retire the tasks.</p> </li> <li> <p> <code>14</code> -
     * Amazon Web Services sends the notification, and waits 14 calendar days to retire
     * the tasks.</p> </li> </ul>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The account setting value for the specified principal ARN. Accepted values
     * are <code>enabled</code>, <code>disabled</code>, <code>on</code>, and
     * <code>off</code>.</p> <p>When you specify
     * <code>fargateTaskRetirementWaitPeriod</code> for the <code>name</code>, the
     * following are the valid values:</p> <ul> <li> <p> <code>0</code> - Amazon Web
     * Services sends the notification, and immediately retires the affected tasks.</p>
     * </li> <li> <p> <code>7</code> - Amazon Web Services sends the notification, and
     * waits 7 calendar days to retire the tasks.</p> </li> <li> <p> <code>14</code> -
     * Amazon Web Services sends the notification, and waits 14 calendar days to retire
     * the tasks.</p> </li> </ul>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The account setting value for the specified principal ARN. Accepted values
     * are <code>enabled</code>, <code>disabled</code>, <code>on</code>, and
     * <code>off</code>.</p> <p>When you specify
     * <code>fargateTaskRetirementWaitPeriod</code> for the <code>name</code>, the
     * following are the valid values:</p> <ul> <li> <p> <code>0</code> - Amazon Web
     * Services sends the notification, and immediately retires the affected tasks.</p>
     * </li> <li> <p> <code>7</code> - Amazon Web Services sends the notification, and
     * waits 7 calendar days to retire the tasks.</p> </li> <li> <p> <code>14</code> -
     * Amazon Web Services sends the notification, and waits 14 calendar days to retire
     * the tasks.</p> </li> </ul>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The account setting value for the specified principal ARN. Accepted values
     * are <code>enabled</code>, <code>disabled</code>, <code>on</code>, and
     * <code>off</code>.</p> <p>When you specify
     * <code>fargateTaskRetirementWaitPeriod</code> for the <code>name</code>, the
     * following are the valid values:</p> <ul> <li> <p> <code>0</code> - Amazon Web
     * Services sends the notification, and immediately retires the affected tasks.</p>
     * </li> <li> <p> <code>7</code> - Amazon Web Services sends the notification, and
     * waits 7 calendar days to retire the tasks.</p> </li> <li> <p> <code>14</code> -
     * Amazon Web Services sends the notification, and waits 14 calendar days to retire
     * the tasks.</p> </li> </ul>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The account setting value for the specified principal ARN. Accepted values
     * are <code>enabled</code>, <code>disabled</code>, <code>on</code>, and
     * <code>off</code>.</p> <p>When you specify
     * <code>fargateTaskRetirementWaitPeriod</code> for the <code>name</code>, the
     * following are the valid values:</p> <ul> <li> <p> <code>0</code> - Amazon Web
     * Services sends the notification, and immediately retires the affected tasks.</p>
     * </li> <li> <p> <code>7</code> - Amazon Web Services sends the notification, and
     * waits 7 calendar days to retire the tasks.</p> </li> <li> <p> <code>14</code> -
     * Amazon Web Services sends the notification, and waits 14 calendar days to retire
     * the tasks.</p> </li> </ul>
     */
    inline PutAccountSettingDefaultRequest& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The account setting value for the specified principal ARN. Accepted values
     * are <code>enabled</code>, <code>disabled</code>, <code>on</code>, and
     * <code>off</code>.</p> <p>When you specify
     * <code>fargateTaskRetirementWaitPeriod</code> for the <code>name</code>, the
     * following are the valid values:</p> <ul> <li> <p> <code>0</code> - Amazon Web
     * Services sends the notification, and immediately retires the affected tasks.</p>
     * </li> <li> <p> <code>7</code> - Amazon Web Services sends the notification, and
     * waits 7 calendar days to retire the tasks.</p> </li> <li> <p> <code>14</code> -
     * Amazon Web Services sends the notification, and waits 14 calendar days to retire
     * the tasks.</p> </li> </ul>
     */
    inline PutAccountSettingDefaultRequest& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The account setting value for the specified principal ARN. Accepted values
     * are <code>enabled</code>, <code>disabled</code>, <code>on</code>, and
     * <code>off</code>.</p> <p>When you specify
     * <code>fargateTaskRetirementWaitPeriod</code> for the <code>name</code>, the
     * following are the valid values:</p> <ul> <li> <p> <code>0</code> - Amazon Web
     * Services sends the notification, and immediately retires the affected tasks.</p>
     * </li> <li> <p> <code>7</code> - Amazon Web Services sends the notification, and
     * waits 7 calendar days to retire the tasks.</p> </li> <li> <p> <code>14</code> -
     * Amazon Web Services sends the notification, and waits 14 calendar days to retire
     * the tasks.</p> </li> </ul>
     */
    inline PutAccountSettingDefaultRequest& WithValue(const char* value) { SetValue(value); return *this;}

  private:

    SettingName m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws

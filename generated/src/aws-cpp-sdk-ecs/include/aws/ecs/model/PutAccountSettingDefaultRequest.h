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
     * <p>The resource name for which to modify the account setting. If you specify
     * <code>serviceLongArnFormat</code>, the ARN for your Amazon ECS services is
     * affected. If you specify <code>taskLongArnFormat</code>, the ARN and resource ID
     * for your Amazon ECS tasks is affected. If you specify
     * <code>containerInstanceLongArnFormat</code>, the ARN and resource ID for your
     * Amazon ECS container instances is affected. If you specify
     * <code>awsvpcTrunking</code>, the ENI limit for your Amazon ECS container
     * instances is affected. If you specify <code>containerInsights</code>, the
     * default setting for Amazon Web Services CloudWatch Container Insights for your
     * clusters is affected. If you specify <code>tagResourceAuthorization</code>, the
     * opt-in option for tagging resources on creation is affected. For information
     * about the opt-in timeline, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-account-settings.html#tag-resources">Tagging
     * authorization timeline</a> in the <i>Amazon ECS Developer Guide</i>. If you
     * specify <code>fargateTaskRetirementWaitPeriod</code>, the default wait time to
     * retire a Fargate task due to required maintenance is affected.</p> <p>When you
     * specify <code>fargateFIPSMode</code> for the <code>name</code> and
     * <code>enabled</code> for the <code>value</code>, Fargate uses FIPS-140 compliant
     * cryptographic algorithms on your tasks. For more information about FIPS-140
     * compliance with Fargate, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-fips-compliance.html">
     * Amazon Web Services Fargate Federal Information Processing Standard (FIPS) 140-2
     * compliance</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p> <p>When Amazon Web Services determines that a security or
     * infrastructure update is needed for an Amazon ECS task hosted on Fargate, the
     * tasks need to be stopped and new tasks launched to replace them. Use
     * <code>fargateTaskRetirementWaitPeriod</code> to set the wait time to retire a
     * Fargate task to the default. For information about the Fargate tasks
     * maintenance, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task-maintenance.html">Amazon
     * Web Services Fargate task maintenance</a> in the <i>Amazon ECS Developer
     * Guide</i>.</p> <p>The <code>guardDutyActivate</code> parameter is read-only in
     * Amazon ECS and indicates whether Amazon ECS Runtime Monitoring is enabled or
     * disabled by your security administrator in your Amazon ECS account. Amazon
     * GuardDuty controls this account setting on your behalf. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-guard-duty-integration.html">Protecting
     * Amazon ECS workloads with Amazon ECS Runtime Monitoring</a>.</p>
     */
    inline const SettingName& GetName() const{ return m_name; }

    /**
     * <p>The resource name for which to modify the account setting. If you specify
     * <code>serviceLongArnFormat</code>, the ARN for your Amazon ECS services is
     * affected. If you specify <code>taskLongArnFormat</code>, the ARN and resource ID
     * for your Amazon ECS tasks is affected. If you specify
     * <code>containerInstanceLongArnFormat</code>, the ARN and resource ID for your
     * Amazon ECS container instances is affected. If you specify
     * <code>awsvpcTrunking</code>, the ENI limit for your Amazon ECS container
     * instances is affected. If you specify <code>containerInsights</code>, the
     * default setting for Amazon Web Services CloudWatch Container Insights for your
     * clusters is affected. If you specify <code>tagResourceAuthorization</code>, the
     * opt-in option for tagging resources on creation is affected. For information
     * about the opt-in timeline, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-account-settings.html#tag-resources">Tagging
     * authorization timeline</a> in the <i>Amazon ECS Developer Guide</i>. If you
     * specify <code>fargateTaskRetirementWaitPeriod</code>, the default wait time to
     * retire a Fargate task due to required maintenance is affected.</p> <p>When you
     * specify <code>fargateFIPSMode</code> for the <code>name</code> and
     * <code>enabled</code> for the <code>value</code>, Fargate uses FIPS-140 compliant
     * cryptographic algorithms on your tasks. For more information about FIPS-140
     * compliance with Fargate, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-fips-compliance.html">
     * Amazon Web Services Fargate Federal Information Processing Standard (FIPS) 140-2
     * compliance</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p> <p>When Amazon Web Services determines that a security or
     * infrastructure update is needed for an Amazon ECS task hosted on Fargate, the
     * tasks need to be stopped and new tasks launched to replace them. Use
     * <code>fargateTaskRetirementWaitPeriod</code> to set the wait time to retire a
     * Fargate task to the default. For information about the Fargate tasks
     * maintenance, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task-maintenance.html">Amazon
     * Web Services Fargate task maintenance</a> in the <i>Amazon ECS Developer
     * Guide</i>.</p> <p>The <code>guardDutyActivate</code> parameter is read-only in
     * Amazon ECS and indicates whether Amazon ECS Runtime Monitoring is enabled or
     * disabled by your security administrator in your Amazon ECS account. Amazon
     * GuardDuty controls this account setting on your behalf. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-guard-duty-integration.html">Protecting
     * Amazon ECS workloads with Amazon ECS Runtime Monitoring</a>.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The resource name for which to modify the account setting. If you specify
     * <code>serviceLongArnFormat</code>, the ARN for your Amazon ECS services is
     * affected. If you specify <code>taskLongArnFormat</code>, the ARN and resource ID
     * for your Amazon ECS tasks is affected. If you specify
     * <code>containerInstanceLongArnFormat</code>, the ARN and resource ID for your
     * Amazon ECS container instances is affected. If you specify
     * <code>awsvpcTrunking</code>, the ENI limit for your Amazon ECS container
     * instances is affected. If you specify <code>containerInsights</code>, the
     * default setting for Amazon Web Services CloudWatch Container Insights for your
     * clusters is affected. If you specify <code>tagResourceAuthorization</code>, the
     * opt-in option for tagging resources on creation is affected. For information
     * about the opt-in timeline, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-account-settings.html#tag-resources">Tagging
     * authorization timeline</a> in the <i>Amazon ECS Developer Guide</i>. If you
     * specify <code>fargateTaskRetirementWaitPeriod</code>, the default wait time to
     * retire a Fargate task due to required maintenance is affected.</p> <p>When you
     * specify <code>fargateFIPSMode</code> for the <code>name</code> and
     * <code>enabled</code> for the <code>value</code>, Fargate uses FIPS-140 compliant
     * cryptographic algorithms on your tasks. For more information about FIPS-140
     * compliance with Fargate, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-fips-compliance.html">
     * Amazon Web Services Fargate Federal Information Processing Standard (FIPS) 140-2
     * compliance</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p> <p>When Amazon Web Services determines that a security or
     * infrastructure update is needed for an Amazon ECS task hosted on Fargate, the
     * tasks need to be stopped and new tasks launched to replace them. Use
     * <code>fargateTaskRetirementWaitPeriod</code> to set the wait time to retire a
     * Fargate task to the default. For information about the Fargate tasks
     * maintenance, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task-maintenance.html">Amazon
     * Web Services Fargate task maintenance</a> in the <i>Amazon ECS Developer
     * Guide</i>.</p> <p>The <code>guardDutyActivate</code> parameter is read-only in
     * Amazon ECS and indicates whether Amazon ECS Runtime Monitoring is enabled or
     * disabled by your security administrator in your Amazon ECS account. Amazon
     * GuardDuty controls this account setting on your behalf. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-guard-duty-integration.html">Protecting
     * Amazon ECS workloads with Amazon ECS Runtime Monitoring</a>.</p>
     */
    inline void SetName(const SettingName& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The resource name for which to modify the account setting. If you specify
     * <code>serviceLongArnFormat</code>, the ARN for your Amazon ECS services is
     * affected. If you specify <code>taskLongArnFormat</code>, the ARN and resource ID
     * for your Amazon ECS tasks is affected. If you specify
     * <code>containerInstanceLongArnFormat</code>, the ARN and resource ID for your
     * Amazon ECS container instances is affected. If you specify
     * <code>awsvpcTrunking</code>, the ENI limit for your Amazon ECS container
     * instances is affected. If you specify <code>containerInsights</code>, the
     * default setting for Amazon Web Services CloudWatch Container Insights for your
     * clusters is affected. If you specify <code>tagResourceAuthorization</code>, the
     * opt-in option for tagging resources on creation is affected. For information
     * about the opt-in timeline, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-account-settings.html#tag-resources">Tagging
     * authorization timeline</a> in the <i>Amazon ECS Developer Guide</i>. If you
     * specify <code>fargateTaskRetirementWaitPeriod</code>, the default wait time to
     * retire a Fargate task due to required maintenance is affected.</p> <p>When you
     * specify <code>fargateFIPSMode</code> for the <code>name</code> and
     * <code>enabled</code> for the <code>value</code>, Fargate uses FIPS-140 compliant
     * cryptographic algorithms on your tasks. For more information about FIPS-140
     * compliance with Fargate, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-fips-compliance.html">
     * Amazon Web Services Fargate Federal Information Processing Standard (FIPS) 140-2
     * compliance</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p> <p>When Amazon Web Services determines that a security or
     * infrastructure update is needed for an Amazon ECS task hosted on Fargate, the
     * tasks need to be stopped and new tasks launched to replace them. Use
     * <code>fargateTaskRetirementWaitPeriod</code> to set the wait time to retire a
     * Fargate task to the default. For information about the Fargate tasks
     * maintenance, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task-maintenance.html">Amazon
     * Web Services Fargate task maintenance</a> in the <i>Amazon ECS Developer
     * Guide</i>.</p> <p>The <code>guardDutyActivate</code> parameter is read-only in
     * Amazon ECS and indicates whether Amazon ECS Runtime Monitoring is enabled or
     * disabled by your security administrator in your Amazon ECS account. Amazon
     * GuardDuty controls this account setting on your behalf. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-guard-duty-integration.html">Protecting
     * Amazon ECS workloads with Amazon ECS Runtime Monitoring</a>.</p>
     */
    inline void SetName(SettingName&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The resource name for which to modify the account setting. If you specify
     * <code>serviceLongArnFormat</code>, the ARN for your Amazon ECS services is
     * affected. If you specify <code>taskLongArnFormat</code>, the ARN and resource ID
     * for your Amazon ECS tasks is affected. If you specify
     * <code>containerInstanceLongArnFormat</code>, the ARN and resource ID for your
     * Amazon ECS container instances is affected. If you specify
     * <code>awsvpcTrunking</code>, the ENI limit for your Amazon ECS container
     * instances is affected. If you specify <code>containerInsights</code>, the
     * default setting for Amazon Web Services CloudWatch Container Insights for your
     * clusters is affected. If you specify <code>tagResourceAuthorization</code>, the
     * opt-in option for tagging resources on creation is affected. For information
     * about the opt-in timeline, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-account-settings.html#tag-resources">Tagging
     * authorization timeline</a> in the <i>Amazon ECS Developer Guide</i>. If you
     * specify <code>fargateTaskRetirementWaitPeriod</code>, the default wait time to
     * retire a Fargate task due to required maintenance is affected.</p> <p>When you
     * specify <code>fargateFIPSMode</code> for the <code>name</code> and
     * <code>enabled</code> for the <code>value</code>, Fargate uses FIPS-140 compliant
     * cryptographic algorithms on your tasks. For more information about FIPS-140
     * compliance with Fargate, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-fips-compliance.html">
     * Amazon Web Services Fargate Federal Information Processing Standard (FIPS) 140-2
     * compliance</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p> <p>When Amazon Web Services determines that a security or
     * infrastructure update is needed for an Amazon ECS task hosted on Fargate, the
     * tasks need to be stopped and new tasks launched to replace them. Use
     * <code>fargateTaskRetirementWaitPeriod</code> to set the wait time to retire a
     * Fargate task to the default. For information about the Fargate tasks
     * maintenance, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task-maintenance.html">Amazon
     * Web Services Fargate task maintenance</a> in the <i>Amazon ECS Developer
     * Guide</i>.</p> <p>The <code>guardDutyActivate</code> parameter is read-only in
     * Amazon ECS and indicates whether Amazon ECS Runtime Monitoring is enabled or
     * disabled by your security administrator in your Amazon ECS account. Amazon
     * GuardDuty controls this account setting on your behalf. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-guard-duty-integration.html">Protecting
     * Amazon ECS workloads with Amazon ECS Runtime Monitoring</a>.</p>
     */
    inline PutAccountSettingDefaultRequest& WithName(const SettingName& value) { SetName(value); return *this;}

    /**
     * <p>The resource name for which to modify the account setting. If you specify
     * <code>serviceLongArnFormat</code>, the ARN for your Amazon ECS services is
     * affected. If you specify <code>taskLongArnFormat</code>, the ARN and resource ID
     * for your Amazon ECS tasks is affected. If you specify
     * <code>containerInstanceLongArnFormat</code>, the ARN and resource ID for your
     * Amazon ECS container instances is affected. If you specify
     * <code>awsvpcTrunking</code>, the ENI limit for your Amazon ECS container
     * instances is affected. If you specify <code>containerInsights</code>, the
     * default setting for Amazon Web Services CloudWatch Container Insights for your
     * clusters is affected. If you specify <code>tagResourceAuthorization</code>, the
     * opt-in option for tagging resources on creation is affected. For information
     * about the opt-in timeline, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-account-settings.html#tag-resources">Tagging
     * authorization timeline</a> in the <i>Amazon ECS Developer Guide</i>. If you
     * specify <code>fargateTaskRetirementWaitPeriod</code>, the default wait time to
     * retire a Fargate task due to required maintenance is affected.</p> <p>When you
     * specify <code>fargateFIPSMode</code> for the <code>name</code> and
     * <code>enabled</code> for the <code>value</code>, Fargate uses FIPS-140 compliant
     * cryptographic algorithms on your tasks. For more information about FIPS-140
     * compliance with Fargate, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-fips-compliance.html">
     * Amazon Web Services Fargate Federal Information Processing Standard (FIPS) 140-2
     * compliance</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p> <p>When Amazon Web Services determines that a security or
     * infrastructure update is needed for an Amazon ECS task hosted on Fargate, the
     * tasks need to be stopped and new tasks launched to replace them. Use
     * <code>fargateTaskRetirementWaitPeriod</code> to set the wait time to retire a
     * Fargate task to the default. For information about the Fargate tasks
     * maintenance, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task-maintenance.html">Amazon
     * Web Services Fargate task maintenance</a> in the <i>Amazon ECS Developer
     * Guide</i>.</p> <p>The <code>guardDutyActivate</code> parameter is read-only in
     * Amazon ECS and indicates whether Amazon ECS Runtime Monitoring is enabled or
     * disabled by your security administrator in your Amazon ECS account. Amazon
     * GuardDuty controls this account setting on your behalf. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-guard-duty-integration.html">Protecting
     * Amazon ECS workloads with Amazon ECS Runtime Monitoring</a>.</p>
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

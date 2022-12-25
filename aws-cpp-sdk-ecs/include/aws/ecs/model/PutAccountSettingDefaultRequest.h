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
     * <p>The resource name for which to modify the account setting. If
     * <code>serviceLongArnFormat</code> is specified, the ARN for your Amazon ECS
     * services is affected. If <code>taskLongArnFormat</code> is specified, the ARN
     * and resource ID for your Amazon ECS tasks is affected. If
     * <code>containerInstanceLongArnFormat</code> is specified, the ARN and resource
     * ID for your Amazon ECS container instances is affected. If
     * <code>awsvpcTrunking</code> is specified, the ENI limit for your Amazon ECS
     * container instances is affected. If <code>containerInsights</code> is specified,
     * the default setting for CloudWatch Container Insights for your clusters is
     * affected.</p> <p>Fargate is transitioning from task count-based quotas to
     * vCPU-based quotas. You can set the name to <code>fargateVCPULimit</code> to opt
     * in or opt out of the vCPU-based quotas. For information about the opt in
     * timeline, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-account-settings.html#fargate-quota-timeline">Fargate
     * vCPU-based quotas timeline</a> in the <i>Amazon ECS Developer Guide</i>.</p>
     */
    inline const SettingName& GetName() const{ return m_name; }

    /**
     * <p>The resource name for which to modify the account setting. If
     * <code>serviceLongArnFormat</code> is specified, the ARN for your Amazon ECS
     * services is affected. If <code>taskLongArnFormat</code> is specified, the ARN
     * and resource ID for your Amazon ECS tasks is affected. If
     * <code>containerInstanceLongArnFormat</code> is specified, the ARN and resource
     * ID for your Amazon ECS container instances is affected. If
     * <code>awsvpcTrunking</code> is specified, the ENI limit for your Amazon ECS
     * container instances is affected. If <code>containerInsights</code> is specified,
     * the default setting for CloudWatch Container Insights for your clusters is
     * affected.</p> <p>Fargate is transitioning from task count-based quotas to
     * vCPU-based quotas. You can set the name to <code>fargateVCPULimit</code> to opt
     * in or opt out of the vCPU-based quotas. For information about the opt in
     * timeline, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-account-settings.html#fargate-quota-timeline">Fargate
     * vCPU-based quotas timeline</a> in the <i>Amazon ECS Developer Guide</i>.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The resource name for which to modify the account setting. If
     * <code>serviceLongArnFormat</code> is specified, the ARN for your Amazon ECS
     * services is affected. If <code>taskLongArnFormat</code> is specified, the ARN
     * and resource ID for your Amazon ECS tasks is affected. If
     * <code>containerInstanceLongArnFormat</code> is specified, the ARN and resource
     * ID for your Amazon ECS container instances is affected. If
     * <code>awsvpcTrunking</code> is specified, the ENI limit for your Amazon ECS
     * container instances is affected. If <code>containerInsights</code> is specified,
     * the default setting for CloudWatch Container Insights for your clusters is
     * affected.</p> <p>Fargate is transitioning from task count-based quotas to
     * vCPU-based quotas. You can set the name to <code>fargateVCPULimit</code> to opt
     * in or opt out of the vCPU-based quotas. For information about the opt in
     * timeline, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-account-settings.html#fargate-quota-timeline">Fargate
     * vCPU-based quotas timeline</a> in the <i>Amazon ECS Developer Guide</i>.</p>
     */
    inline void SetName(const SettingName& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The resource name for which to modify the account setting. If
     * <code>serviceLongArnFormat</code> is specified, the ARN for your Amazon ECS
     * services is affected. If <code>taskLongArnFormat</code> is specified, the ARN
     * and resource ID for your Amazon ECS tasks is affected. If
     * <code>containerInstanceLongArnFormat</code> is specified, the ARN and resource
     * ID for your Amazon ECS container instances is affected. If
     * <code>awsvpcTrunking</code> is specified, the ENI limit for your Amazon ECS
     * container instances is affected. If <code>containerInsights</code> is specified,
     * the default setting for CloudWatch Container Insights for your clusters is
     * affected.</p> <p>Fargate is transitioning from task count-based quotas to
     * vCPU-based quotas. You can set the name to <code>fargateVCPULimit</code> to opt
     * in or opt out of the vCPU-based quotas. For information about the opt in
     * timeline, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-account-settings.html#fargate-quota-timeline">Fargate
     * vCPU-based quotas timeline</a> in the <i>Amazon ECS Developer Guide</i>.</p>
     */
    inline void SetName(SettingName&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The resource name for which to modify the account setting. If
     * <code>serviceLongArnFormat</code> is specified, the ARN for your Amazon ECS
     * services is affected. If <code>taskLongArnFormat</code> is specified, the ARN
     * and resource ID for your Amazon ECS tasks is affected. If
     * <code>containerInstanceLongArnFormat</code> is specified, the ARN and resource
     * ID for your Amazon ECS container instances is affected. If
     * <code>awsvpcTrunking</code> is specified, the ENI limit for your Amazon ECS
     * container instances is affected. If <code>containerInsights</code> is specified,
     * the default setting for CloudWatch Container Insights for your clusters is
     * affected.</p> <p>Fargate is transitioning from task count-based quotas to
     * vCPU-based quotas. You can set the name to <code>fargateVCPULimit</code> to opt
     * in or opt out of the vCPU-based quotas. For information about the opt in
     * timeline, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-account-settings.html#fargate-quota-timeline">Fargate
     * vCPU-based quotas timeline</a> in the <i>Amazon ECS Developer Guide</i>.</p>
     */
    inline PutAccountSettingDefaultRequest& WithName(const SettingName& value) { SetName(value); return *this;}

    /**
     * <p>The resource name for which to modify the account setting. If
     * <code>serviceLongArnFormat</code> is specified, the ARN for your Amazon ECS
     * services is affected. If <code>taskLongArnFormat</code> is specified, the ARN
     * and resource ID for your Amazon ECS tasks is affected. If
     * <code>containerInstanceLongArnFormat</code> is specified, the ARN and resource
     * ID for your Amazon ECS container instances is affected. If
     * <code>awsvpcTrunking</code> is specified, the ENI limit for your Amazon ECS
     * container instances is affected. If <code>containerInsights</code> is specified,
     * the default setting for CloudWatch Container Insights for your clusters is
     * affected.</p> <p>Fargate is transitioning from task count-based quotas to
     * vCPU-based quotas. You can set the name to <code>fargateVCPULimit</code> to opt
     * in or opt out of the vCPU-based quotas. For information about the opt in
     * timeline, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-account-settings.html#fargate-quota-timeline">Fargate
     * vCPU-based quotas timeline</a> in the <i>Amazon ECS Developer Guide</i>.</p>
     */
    inline PutAccountSettingDefaultRequest& WithName(SettingName&& value) { SetName(std::move(value)); return *this;}


    /**
     * <p>The account setting value for the specified principal ARN. Accepted values
     * are <code>enabled</code> and <code>disabled</code>.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The account setting value for the specified principal ARN. Accepted values
     * are <code>enabled</code> and <code>disabled</code>.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The account setting value for the specified principal ARN. Accepted values
     * are <code>enabled</code> and <code>disabled</code>.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The account setting value for the specified principal ARN. Accepted values
     * are <code>enabled</code> and <code>disabled</code>.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The account setting value for the specified principal ARN. Accepted values
     * are <code>enabled</code> and <code>disabled</code>.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The account setting value for the specified principal ARN. Accepted values
     * are <code>enabled</code> and <code>disabled</code>.</p>
     */
    inline PutAccountSettingDefaultRequest& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The account setting value for the specified principal ARN. Accepted values
     * are <code>enabled</code> and <code>disabled</code>.</p>
     */
    inline PutAccountSettingDefaultRequest& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The account setting value for the specified principal ARN. Accepted values
     * are <code>enabled</code> and <code>disabled</code>.</p>
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

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apprunner/AppRunner_EXPORTS.h>
#include <aws/apprunner/AppRunnerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace AppRunner
{
namespace Model
{

  /**
   */
  class DeleteAutoScalingConfigurationRequest : public AppRunnerRequest
  {
  public:
    AWS_APPRUNNER_API DeleteAutoScalingConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteAutoScalingConfiguration"; }

    AWS_APPRUNNER_API Aws::String SerializePayload() const override;

    AWS_APPRUNNER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the App Runner auto scaling configuration
     * that you want to delete.</p> <p>The ARN can be a full auto scaling configuration
     * ARN, or a partial ARN ending with either <code>.../<i>name</i> </code> or
     * <code>.../<i>name</i>/<i>revision</i> </code>. If a revision isn't specified,
     * the latest active revision is deleted.</p>
     */
    inline const Aws::String& GetAutoScalingConfigurationArn() const{ return m_autoScalingConfigurationArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the App Runner auto scaling configuration
     * that you want to delete.</p> <p>The ARN can be a full auto scaling configuration
     * ARN, or a partial ARN ending with either <code>.../<i>name</i> </code> or
     * <code>.../<i>name</i>/<i>revision</i> </code>. If a revision isn't specified,
     * the latest active revision is deleted.</p>
     */
    inline bool AutoScalingConfigurationArnHasBeenSet() const { return m_autoScalingConfigurationArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the App Runner auto scaling configuration
     * that you want to delete.</p> <p>The ARN can be a full auto scaling configuration
     * ARN, or a partial ARN ending with either <code>.../<i>name</i> </code> or
     * <code>.../<i>name</i>/<i>revision</i> </code>. If a revision isn't specified,
     * the latest active revision is deleted.</p>
     */
    inline void SetAutoScalingConfigurationArn(const Aws::String& value) { m_autoScalingConfigurationArnHasBeenSet = true; m_autoScalingConfigurationArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the App Runner auto scaling configuration
     * that you want to delete.</p> <p>The ARN can be a full auto scaling configuration
     * ARN, or a partial ARN ending with either <code>.../<i>name</i> </code> or
     * <code>.../<i>name</i>/<i>revision</i> </code>. If a revision isn't specified,
     * the latest active revision is deleted.</p>
     */
    inline void SetAutoScalingConfigurationArn(Aws::String&& value) { m_autoScalingConfigurationArnHasBeenSet = true; m_autoScalingConfigurationArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the App Runner auto scaling configuration
     * that you want to delete.</p> <p>The ARN can be a full auto scaling configuration
     * ARN, or a partial ARN ending with either <code>.../<i>name</i> </code> or
     * <code>.../<i>name</i>/<i>revision</i> </code>. If a revision isn't specified,
     * the latest active revision is deleted.</p>
     */
    inline void SetAutoScalingConfigurationArn(const char* value) { m_autoScalingConfigurationArnHasBeenSet = true; m_autoScalingConfigurationArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the App Runner auto scaling configuration
     * that you want to delete.</p> <p>The ARN can be a full auto scaling configuration
     * ARN, or a partial ARN ending with either <code>.../<i>name</i> </code> or
     * <code>.../<i>name</i>/<i>revision</i> </code>. If a revision isn't specified,
     * the latest active revision is deleted.</p>
     */
    inline DeleteAutoScalingConfigurationRequest& WithAutoScalingConfigurationArn(const Aws::String& value) { SetAutoScalingConfigurationArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the App Runner auto scaling configuration
     * that you want to delete.</p> <p>The ARN can be a full auto scaling configuration
     * ARN, or a partial ARN ending with either <code>.../<i>name</i> </code> or
     * <code>.../<i>name</i>/<i>revision</i> </code>. If a revision isn't specified,
     * the latest active revision is deleted.</p>
     */
    inline DeleteAutoScalingConfigurationRequest& WithAutoScalingConfigurationArn(Aws::String&& value) { SetAutoScalingConfigurationArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the App Runner auto scaling configuration
     * that you want to delete.</p> <p>The ARN can be a full auto scaling configuration
     * ARN, or a partial ARN ending with either <code>.../<i>name</i> </code> or
     * <code>.../<i>name</i>/<i>revision</i> </code>. If a revision isn't specified,
     * the latest active revision is deleted.</p>
     */
    inline DeleteAutoScalingConfigurationRequest& WithAutoScalingConfigurationArn(const char* value) { SetAutoScalingConfigurationArn(value); return *this;}

  private:

    Aws::String m_autoScalingConfigurationArn;
    bool m_autoScalingConfigurationArnHasBeenSet = false;
  };

} // namespace Model
} // namespace AppRunner
} // namespace Aws

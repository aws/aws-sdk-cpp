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


    /**
     * <p>Set to <code>true</code> to delete all of the revisions associated with the
     * <code>AutoScalingConfigurationArn</code> parameter value.</p> <p>When
     * <code>DeleteAllRevisions</code> is set to <code>true</code>, the only valid
     * value for the Amazon Resource Name (ARN) is a partial ARN ending with:
     * <code>.../name</code>.</p>
     */
    inline bool GetDeleteAllRevisions() const{ return m_deleteAllRevisions; }

    /**
     * <p>Set to <code>true</code> to delete all of the revisions associated with the
     * <code>AutoScalingConfigurationArn</code> parameter value.</p> <p>When
     * <code>DeleteAllRevisions</code> is set to <code>true</code>, the only valid
     * value for the Amazon Resource Name (ARN) is a partial ARN ending with:
     * <code>.../name</code>.</p>
     */
    inline bool DeleteAllRevisionsHasBeenSet() const { return m_deleteAllRevisionsHasBeenSet; }

    /**
     * <p>Set to <code>true</code> to delete all of the revisions associated with the
     * <code>AutoScalingConfigurationArn</code> parameter value.</p> <p>When
     * <code>DeleteAllRevisions</code> is set to <code>true</code>, the only valid
     * value for the Amazon Resource Name (ARN) is a partial ARN ending with:
     * <code>.../name</code>.</p>
     */
    inline void SetDeleteAllRevisions(bool value) { m_deleteAllRevisionsHasBeenSet = true; m_deleteAllRevisions = value; }

    /**
     * <p>Set to <code>true</code> to delete all of the revisions associated with the
     * <code>AutoScalingConfigurationArn</code> parameter value.</p> <p>When
     * <code>DeleteAllRevisions</code> is set to <code>true</code>, the only valid
     * value for the Amazon Resource Name (ARN) is a partial ARN ending with:
     * <code>.../name</code>.</p>
     */
    inline DeleteAutoScalingConfigurationRequest& WithDeleteAllRevisions(bool value) { SetDeleteAllRevisions(value); return *this;}

  private:

    Aws::String m_autoScalingConfigurationArn;
    bool m_autoScalingConfigurationArnHasBeenSet = false;

    bool m_deleteAllRevisions;
    bool m_deleteAllRevisionsHasBeenSet = false;
  };

} // namespace Model
} // namespace AppRunner
} // namespace Aws

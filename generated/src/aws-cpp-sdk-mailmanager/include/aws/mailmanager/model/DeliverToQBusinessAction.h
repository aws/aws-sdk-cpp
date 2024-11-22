/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mailmanager/MailManager_EXPORTS.h>
#include <aws/mailmanager/model/ActionFailurePolicy.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace MailManager
{
namespace Model
{

  /**
   * <p>The action to deliver incoming emails to an Amazon Q Business application for
   * indexing.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mailmanager-2023-10-17/DeliverToQBusinessAction">AWS
   * API Reference</a></p>
   */
  class DeliverToQBusinessAction
  {
  public:
    AWS_MAILMANAGER_API DeliverToQBusinessAction();
    AWS_MAILMANAGER_API DeliverToQBusinessAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAILMANAGER_API DeliverToQBusinessAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAILMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A policy that states what to do in the case of failure. The action will fail
     * if there are configuration errors. For example, the specified application has
     * been deleted or the role lacks necessary permissions to call the
     * qbusiness:BatchPutDocument API.</p>
     */
    inline const ActionFailurePolicy& GetActionFailurePolicy() const{ return m_actionFailurePolicy; }
    inline bool ActionFailurePolicyHasBeenSet() const { return m_actionFailurePolicyHasBeenSet; }
    inline void SetActionFailurePolicy(const ActionFailurePolicy& value) { m_actionFailurePolicyHasBeenSet = true; m_actionFailurePolicy = value; }
    inline void SetActionFailurePolicy(ActionFailurePolicy&& value) { m_actionFailurePolicyHasBeenSet = true; m_actionFailurePolicy = std::move(value); }
    inline DeliverToQBusinessAction& WithActionFailurePolicy(const ActionFailurePolicy& value) { SetActionFailurePolicy(value); return *this;}
    inline DeliverToQBusinessAction& WithActionFailurePolicy(ActionFailurePolicy&& value) { SetActionFailurePolicy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the Amazon Q Business application instance where the
     * email content will be delivered.</p>
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }
    inline void SetApplicationId(const Aws::String& value) { m_applicationIdHasBeenSet = true; m_applicationId = value; }
    inline void SetApplicationId(Aws::String&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::move(value); }
    inline void SetApplicationId(const char* value) { m_applicationIdHasBeenSet = true; m_applicationId.assign(value); }
    inline DeliverToQBusinessAction& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}
    inline DeliverToQBusinessAction& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}
    inline DeliverToQBusinessAction& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the knowledge base index within the Amazon Q Business
     * application where the email content will be stored and indexed.</p>
     */
    inline const Aws::String& GetIndexId() const{ return m_indexId; }
    inline bool IndexIdHasBeenSet() const { return m_indexIdHasBeenSet; }
    inline void SetIndexId(const Aws::String& value) { m_indexIdHasBeenSet = true; m_indexId = value; }
    inline void SetIndexId(Aws::String&& value) { m_indexIdHasBeenSet = true; m_indexId = std::move(value); }
    inline void SetIndexId(const char* value) { m_indexIdHasBeenSet = true; m_indexId.assign(value); }
    inline DeliverToQBusinessAction& WithIndexId(const Aws::String& value) { SetIndexId(value); return *this;}
    inline DeliverToQBusinessAction& WithIndexId(Aws::String&& value) { SetIndexId(std::move(value)); return *this;}
    inline DeliverToQBusinessAction& WithIndexId(const char* value) { SetIndexId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the IAM Role to use while delivering to
     * Amazon Q Business. This role must have access to the qbusiness:BatchPutDocument
     * API for the given application and index.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }
    inline DeliverToQBusinessAction& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}
    inline DeliverToQBusinessAction& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}
    inline DeliverToQBusinessAction& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}
    ///@}
  private:

    ActionFailurePolicy m_actionFailurePolicy;
    bool m_actionFailurePolicyHasBeenSet = false;

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet = false;

    Aws::String m_indexId;
    bool m_indexIdHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace MailManager
} // namespace Aws

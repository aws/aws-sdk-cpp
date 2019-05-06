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
#include <aws/sns/SNS_EXPORTS.h>
#include <aws/sns/SNSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace SNS
{
namespace Model
{

  /**
   */
  class AWS_SNS_API AddPermissionRequest : public SNSRequest
  {
  public:
    AddPermissionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AddPermission"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The ARN of the topic whose access control policy you wish to modify.</p>
     */
    inline const Aws::String& GetTopicArn() const{ return m_topicArn; }

    /**
     * <p>The ARN of the topic whose access control policy you wish to modify.</p>
     */
    inline bool TopicArnHasBeenSet() const { return m_topicArnHasBeenSet; }

    /**
     * <p>The ARN of the topic whose access control policy you wish to modify.</p>
     */
    inline void SetTopicArn(const Aws::String& value) { m_topicArnHasBeenSet = true; m_topicArn = value; }

    /**
     * <p>The ARN of the topic whose access control policy you wish to modify.</p>
     */
    inline void SetTopicArn(Aws::String&& value) { m_topicArnHasBeenSet = true; m_topicArn = std::move(value); }

    /**
     * <p>The ARN of the topic whose access control policy you wish to modify.</p>
     */
    inline void SetTopicArn(const char* value) { m_topicArnHasBeenSet = true; m_topicArn.assign(value); }

    /**
     * <p>The ARN of the topic whose access control policy you wish to modify.</p>
     */
    inline AddPermissionRequest& WithTopicArn(const Aws::String& value) { SetTopicArn(value); return *this;}

    /**
     * <p>The ARN of the topic whose access control policy you wish to modify.</p>
     */
    inline AddPermissionRequest& WithTopicArn(Aws::String&& value) { SetTopicArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the topic whose access control policy you wish to modify.</p>
     */
    inline AddPermissionRequest& WithTopicArn(const char* value) { SetTopicArn(value); return *this;}


    /**
     * <p>A unique identifier for the new policy statement.</p>
     */
    inline const Aws::String& GetLabel() const{ return m_label; }

    /**
     * <p>A unique identifier for the new policy statement.</p>
     */
    inline bool LabelHasBeenSet() const { return m_labelHasBeenSet; }

    /**
     * <p>A unique identifier for the new policy statement.</p>
     */
    inline void SetLabel(const Aws::String& value) { m_labelHasBeenSet = true; m_label = value; }

    /**
     * <p>A unique identifier for the new policy statement.</p>
     */
    inline void SetLabel(Aws::String&& value) { m_labelHasBeenSet = true; m_label = std::move(value); }

    /**
     * <p>A unique identifier for the new policy statement.</p>
     */
    inline void SetLabel(const char* value) { m_labelHasBeenSet = true; m_label.assign(value); }

    /**
     * <p>A unique identifier for the new policy statement.</p>
     */
    inline AddPermissionRequest& WithLabel(const Aws::String& value) { SetLabel(value); return *this;}

    /**
     * <p>A unique identifier for the new policy statement.</p>
     */
    inline AddPermissionRequest& WithLabel(Aws::String&& value) { SetLabel(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the new policy statement.</p>
     */
    inline AddPermissionRequest& WithLabel(const char* value) { SetLabel(value); return *this;}


    /**
     * <p>The AWS account IDs of the users (principals) who will be given access to the
     * specified actions. The users must have AWS accounts, but do not need to be
     * signed up for this service.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAWSAccountId() const{ return m_aWSAccountId; }

    /**
     * <p>The AWS account IDs of the users (principals) who will be given access to the
     * specified actions. The users must have AWS accounts, but do not need to be
     * signed up for this service.</p>
     */
    inline bool AWSAccountIdHasBeenSet() const { return m_aWSAccountIdHasBeenSet; }

    /**
     * <p>The AWS account IDs of the users (principals) who will be given access to the
     * specified actions. The users must have AWS accounts, but do not need to be
     * signed up for this service.</p>
     */
    inline void SetAWSAccountId(const Aws::Vector<Aws::String>& value) { m_aWSAccountIdHasBeenSet = true; m_aWSAccountId = value; }

    /**
     * <p>The AWS account IDs of the users (principals) who will be given access to the
     * specified actions. The users must have AWS accounts, but do not need to be
     * signed up for this service.</p>
     */
    inline void SetAWSAccountId(Aws::Vector<Aws::String>&& value) { m_aWSAccountIdHasBeenSet = true; m_aWSAccountId = std::move(value); }

    /**
     * <p>The AWS account IDs of the users (principals) who will be given access to the
     * specified actions. The users must have AWS accounts, but do not need to be
     * signed up for this service.</p>
     */
    inline AddPermissionRequest& WithAWSAccountId(const Aws::Vector<Aws::String>& value) { SetAWSAccountId(value); return *this;}

    /**
     * <p>The AWS account IDs of the users (principals) who will be given access to the
     * specified actions. The users must have AWS accounts, but do not need to be
     * signed up for this service.</p>
     */
    inline AddPermissionRequest& WithAWSAccountId(Aws::Vector<Aws::String>&& value) { SetAWSAccountId(std::move(value)); return *this;}

    /**
     * <p>The AWS account IDs of the users (principals) who will be given access to the
     * specified actions. The users must have AWS accounts, but do not need to be
     * signed up for this service.</p>
     */
    inline AddPermissionRequest& AddAWSAccountId(const Aws::String& value) { m_aWSAccountIdHasBeenSet = true; m_aWSAccountId.push_back(value); return *this; }

    /**
     * <p>The AWS account IDs of the users (principals) who will be given access to the
     * specified actions. The users must have AWS accounts, but do not need to be
     * signed up for this service.</p>
     */
    inline AddPermissionRequest& AddAWSAccountId(Aws::String&& value) { m_aWSAccountIdHasBeenSet = true; m_aWSAccountId.push_back(std::move(value)); return *this; }

    /**
     * <p>The AWS account IDs of the users (principals) who will be given access to the
     * specified actions. The users must have AWS accounts, but do not need to be
     * signed up for this service.</p>
     */
    inline AddPermissionRequest& AddAWSAccountId(const char* value) { m_aWSAccountIdHasBeenSet = true; m_aWSAccountId.push_back(value); return *this; }


    /**
     * <p>The action you want to allow for the specified principal(s).</p> <p>Valid
     * values: any Amazon SNS action name.</p>
     */
    inline const Aws::Vector<Aws::String>& GetActionName() const{ return m_actionName; }

    /**
     * <p>The action you want to allow for the specified principal(s).</p> <p>Valid
     * values: any Amazon SNS action name.</p>
     */
    inline bool ActionNameHasBeenSet() const { return m_actionNameHasBeenSet; }

    /**
     * <p>The action you want to allow for the specified principal(s).</p> <p>Valid
     * values: any Amazon SNS action name.</p>
     */
    inline void SetActionName(const Aws::Vector<Aws::String>& value) { m_actionNameHasBeenSet = true; m_actionName = value; }

    /**
     * <p>The action you want to allow for the specified principal(s).</p> <p>Valid
     * values: any Amazon SNS action name.</p>
     */
    inline void SetActionName(Aws::Vector<Aws::String>&& value) { m_actionNameHasBeenSet = true; m_actionName = std::move(value); }

    /**
     * <p>The action you want to allow for the specified principal(s).</p> <p>Valid
     * values: any Amazon SNS action name.</p>
     */
    inline AddPermissionRequest& WithActionName(const Aws::Vector<Aws::String>& value) { SetActionName(value); return *this;}

    /**
     * <p>The action you want to allow for the specified principal(s).</p> <p>Valid
     * values: any Amazon SNS action name.</p>
     */
    inline AddPermissionRequest& WithActionName(Aws::Vector<Aws::String>&& value) { SetActionName(std::move(value)); return *this;}

    /**
     * <p>The action you want to allow for the specified principal(s).</p> <p>Valid
     * values: any Amazon SNS action name.</p>
     */
    inline AddPermissionRequest& AddActionName(const Aws::String& value) { m_actionNameHasBeenSet = true; m_actionName.push_back(value); return *this; }

    /**
     * <p>The action you want to allow for the specified principal(s).</p> <p>Valid
     * values: any Amazon SNS action name.</p>
     */
    inline AddPermissionRequest& AddActionName(Aws::String&& value) { m_actionNameHasBeenSet = true; m_actionName.push_back(std::move(value)); return *this; }

    /**
     * <p>The action you want to allow for the specified principal(s).</p> <p>Valid
     * values: any Amazon SNS action name.</p>
     */
    inline AddPermissionRequest& AddActionName(const char* value) { m_actionNameHasBeenSet = true; m_actionName.push_back(value); return *this; }

  private:

    Aws::String m_topicArn;
    bool m_topicArnHasBeenSet;

    Aws::String m_label;
    bool m_labelHasBeenSet;

    Aws::Vector<Aws::String> m_aWSAccountId;
    bool m_aWSAccountIdHasBeenSet;

    Aws::Vector<Aws::String> m_actionName;
    bool m_actionNameHasBeenSet;
  };

} // namespace Model
} // namespace SNS
} // namespace Aws

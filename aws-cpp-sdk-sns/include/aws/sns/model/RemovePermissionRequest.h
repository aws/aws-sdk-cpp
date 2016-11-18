/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

namespace Aws
{
namespace SNS
{
namespace Model
{

  /**
   * <p>Input for RemovePermission action.</p>
   */
  class AWS_SNS_API RemovePermissionRequest : public SNSRequest
  {
  public:
    RemovePermissionRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The ARN of the topic whose access control policy you wish to modify.</p>
     */
    inline const Aws::String& GetTopicArn() const{ return m_topicArn; }

    /**
     * <p>The ARN of the topic whose access control policy you wish to modify.</p>
     */
    inline void SetTopicArn(const Aws::String& value) { m_topicArnHasBeenSet = true; m_topicArn = value; }

    /**
     * <p>The ARN of the topic whose access control policy you wish to modify.</p>
     */
    inline void SetTopicArn(Aws::String&& value) { m_topicArnHasBeenSet = true; m_topicArn = value; }

    /**
     * <p>The ARN of the topic whose access control policy you wish to modify.</p>
     */
    inline void SetTopicArn(const char* value) { m_topicArnHasBeenSet = true; m_topicArn.assign(value); }

    /**
     * <p>The ARN of the topic whose access control policy you wish to modify.</p>
     */
    inline RemovePermissionRequest& WithTopicArn(const Aws::String& value) { SetTopicArn(value); return *this;}

    /**
     * <p>The ARN of the topic whose access control policy you wish to modify.</p>
     */
    inline RemovePermissionRequest& WithTopicArn(Aws::String&& value) { SetTopicArn(value); return *this;}

    /**
     * <p>The ARN of the topic whose access control policy you wish to modify.</p>
     */
    inline RemovePermissionRequest& WithTopicArn(const char* value) { SetTopicArn(value); return *this;}

    /**
     * <p>The unique label of the statement you want to remove.</p>
     */
    inline const Aws::String& GetLabel() const{ return m_label; }

    /**
     * <p>The unique label of the statement you want to remove.</p>
     */
    inline void SetLabel(const Aws::String& value) { m_labelHasBeenSet = true; m_label = value; }

    /**
     * <p>The unique label of the statement you want to remove.</p>
     */
    inline void SetLabel(Aws::String&& value) { m_labelHasBeenSet = true; m_label = value; }

    /**
     * <p>The unique label of the statement you want to remove.</p>
     */
    inline void SetLabel(const char* value) { m_labelHasBeenSet = true; m_label.assign(value); }

    /**
     * <p>The unique label of the statement you want to remove.</p>
     */
    inline RemovePermissionRequest& WithLabel(const Aws::String& value) { SetLabel(value); return *this;}

    /**
     * <p>The unique label of the statement you want to remove.</p>
     */
    inline RemovePermissionRequest& WithLabel(Aws::String&& value) { SetLabel(value); return *this;}

    /**
     * <p>The unique label of the statement you want to remove.</p>
     */
    inline RemovePermissionRequest& WithLabel(const char* value) { SetLabel(value); return *this;}

  private:
    Aws::String m_topicArn;
    bool m_topicArnHasBeenSet;
    Aws::String m_label;
    bool m_labelHasBeenSet;
  };

} // namespace Model
} // namespace SNS
} // namespace Aws

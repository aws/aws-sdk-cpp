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
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class AWS_EC2_API CancelImportTaskRequest : public EC2Request
  {
  public:
    CancelImportTaskRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CancelImportTask"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The reason for canceling the task.</p>
     */
    inline const Aws::String& GetCancelReason() const{ return m_cancelReason; }

    /**
     * <p>The reason for canceling the task.</p>
     */
    inline bool CancelReasonHasBeenSet() const { return m_cancelReasonHasBeenSet; }

    /**
     * <p>The reason for canceling the task.</p>
     */
    inline void SetCancelReason(const Aws::String& value) { m_cancelReasonHasBeenSet = true; m_cancelReason = value; }

    /**
     * <p>The reason for canceling the task.</p>
     */
    inline void SetCancelReason(Aws::String&& value) { m_cancelReasonHasBeenSet = true; m_cancelReason = std::move(value); }

    /**
     * <p>The reason for canceling the task.</p>
     */
    inline void SetCancelReason(const char* value) { m_cancelReasonHasBeenSet = true; m_cancelReason.assign(value); }

    /**
     * <p>The reason for canceling the task.</p>
     */
    inline CancelImportTaskRequest& WithCancelReason(const Aws::String& value) { SetCancelReason(value); return *this;}

    /**
     * <p>The reason for canceling the task.</p>
     */
    inline CancelImportTaskRequest& WithCancelReason(Aws::String&& value) { SetCancelReason(std::move(value)); return *this;}

    /**
     * <p>The reason for canceling the task.</p>
     */
    inline CancelImportTaskRequest& WithCancelReason(const char* value) { SetCancelReason(value); return *this;}


    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const{ return m_dryRun; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline CancelImportTaskRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}


    /**
     * <p>The ID of the import image or import snapshot task to be canceled.</p>
     */
    inline const Aws::String& GetImportTaskId() const{ return m_importTaskId; }

    /**
     * <p>The ID of the import image or import snapshot task to be canceled.</p>
     */
    inline bool ImportTaskIdHasBeenSet() const { return m_importTaskIdHasBeenSet; }

    /**
     * <p>The ID of the import image or import snapshot task to be canceled.</p>
     */
    inline void SetImportTaskId(const Aws::String& value) { m_importTaskIdHasBeenSet = true; m_importTaskId = value; }

    /**
     * <p>The ID of the import image or import snapshot task to be canceled.</p>
     */
    inline void SetImportTaskId(Aws::String&& value) { m_importTaskIdHasBeenSet = true; m_importTaskId = std::move(value); }

    /**
     * <p>The ID of the import image or import snapshot task to be canceled.</p>
     */
    inline void SetImportTaskId(const char* value) { m_importTaskIdHasBeenSet = true; m_importTaskId.assign(value); }

    /**
     * <p>The ID of the import image or import snapshot task to be canceled.</p>
     */
    inline CancelImportTaskRequest& WithImportTaskId(const Aws::String& value) { SetImportTaskId(value); return *this;}

    /**
     * <p>The ID of the import image or import snapshot task to be canceled.</p>
     */
    inline CancelImportTaskRequest& WithImportTaskId(Aws::String&& value) { SetImportTaskId(std::move(value)); return *this;}

    /**
     * <p>The ID of the import image or import snapshot task to be canceled.</p>
     */
    inline CancelImportTaskRequest& WithImportTaskId(const char* value) { SetImportTaskId(value); return *this;}

  private:

    Aws::String m_cancelReason;
    bool m_cancelReasonHasBeenSet;

    bool m_dryRun;
    bool m_dryRunHasBeenSet;

    Aws::String m_importTaskId;
    bool m_importTaskIdHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws

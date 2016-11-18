﻿/*
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
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   * <p>Contains the parameters for CancelConversionTask.</p>
   */
  class AWS_EC2_API CancelConversionTaskRequest : public EC2Request
  {
  public:
    CancelConversionTaskRequest();
    Aws::String SerializePayload() const override;

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
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline CancelConversionTaskRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}

    /**
     * <p>The ID of the conversion task.</p>
     */
    inline const Aws::String& GetConversionTaskId() const{ return m_conversionTaskId; }

    /**
     * <p>The ID of the conversion task.</p>
     */
    inline void SetConversionTaskId(const Aws::String& value) { m_conversionTaskIdHasBeenSet = true; m_conversionTaskId = value; }

    /**
     * <p>The ID of the conversion task.</p>
     */
    inline void SetConversionTaskId(Aws::String&& value) { m_conversionTaskIdHasBeenSet = true; m_conversionTaskId = value; }

    /**
     * <p>The ID of the conversion task.</p>
     */
    inline void SetConversionTaskId(const char* value) { m_conversionTaskIdHasBeenSet = true; m_conversionTaskId.assign(value); }

    /**
     * <p>The ID of the conversion task.</p>
     */
    inline CancelConversionTaskRequest& WithConversionTaskId(const Aws::String& value) { SetConversionTaskId(value); return *this;}

    /**
     * <p>The ID of the conversion task.</p>
     */
    inline CancelConversionTaskRequest& WithConversionTaskId(Aws::String&& value) { SetConversionTaskId(value); return *this;}

    /**
     * <p>The ID of the conversion task.</p>
     */
    inline CancelConversionTaskRequest& WithConversionTaskId(const char* value) { SetConversionTaskId(value); return *this;}

    /**
     * <p>The reason for canceling the conversion task.</p>
     */
    inline const Aws::String& GetReasonMessage() const{ return m_reasonMessage; }

    /**
     * <p>The reason for canceling the conversion task.</p>
     */
    inline void SetReasonMessage(const Aws::String& value) { m_reasonMessageHasBeenSet = true; m_reasonMessage = value; }

    /**
     * <p>The reason for canceling the conversion task.</p>
     */
    inline void SetReasonMessage(Aws::String&& value) { m_reasonMessageHasBeenSet = true; m_reasonMessage = value; }

    /**
     * <p>The reason for canceling the conversion task.</p>
     */
    inline void SetReasonMessage(const char* value) { m_reasonMessageHasBeenSet = true; m_reasonMessage.assign(value); }

    /**
     * <p>The reason for canceling the conversion task.</p>
     */
    inline CancelConversionTaskRequest& WithReasonMessage(const Aws::String& value) { SetReasonMessage(value); return *this;}

    /**
     * <p>The reason for canceling the conversion task.</p>
     */
    inline CancelConversionTaskRequest& WithReasonMessage(Aws::String&& value) { SetReasonMessage(value); return *this;}

    /**
     * <p>The reason for canceling the conversion task.</p>
     */
    inline CancelConversionTaskRequest& WithReasonMessage(const char* value) { SetReasonMessage(value); return *this;}

  private:
    bool m_dryRun;
    bool m_dryRunHasBeenSet;
    Aws::String m_conversionTaskId;
    bool m_conversionTaskIdHasBeenSet;
    Aws::String m_reasonMessage;
    bool m_reasonMessageHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws

﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class CancelConversionTaskRequest : public EC2Request
  {
  public:
    AWS_EC2_API CancelConversionTaskRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CancelConversionTask"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The ID of the conversion task.</p>
     */
    inline const Aws::String& GetConversionTaskId() const{ return m_conversionTaskId; }
    inline bool ConversionTaskIdHasBeenSet() const { return m_conversionTaskIdHasBeenSet; }
    inline void SetConversionTaskId(const Aws::String& value) { m_conversionTaskIdHasBeenSet = true; m_conversionTaskId = value; }
    inline void SetConversionTaskId(Aws::String&& value) { m_conversionTaskIdHasBeenSet = true; m_conversionTaskId = std::move(value); }
    inline void SetConversionTaskId(const char* value) { m_conversionTaskIdHasBeenSet = true; m_conversionTaskId.assign(value); }
    inline CancelConversionTaskRequest& WithConversionTaskId(const Aws::String& value) { SetConversionTaskId(value); return *this;}
    inline CancelConversionTaskRequest& WithConversionTaskId(Aws::String&& value) { SetConversionTaskId(std::move(value)); return *this;}
    inline CancelConversionTaskRequest& WithConversionTaskId(const char* value) { SetConversionTaskId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const{ return m_dryRun; }
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }
    inline CancelConversionTaskRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason for canceling the conversion task.</p>
     */
    inline const Aws::String& GetReasonMessage() const{ return m_reasonMessage; }
    inline bool ReasonMessageHasBeenSet() const { return m_reasonMessageHasBeenSet; }
    inline void SetReasonMessage(const Aws::String& value) { m_reasonMessageHasBeenSet = true; m_reasonMessage = value; }
    inline void SetReasonMessage(Aws::String&& value) { m_reasonMessageHasBeenSet = true; m_reasonMessage = std::move(value); }
    inline void SetReasonMessage(const char* value) { m_reasonMessageHasBeenSet = true; m_reasonMessage.assign(value); }
    inline CancelConversionTaskRequest& WithReasonMessage(const Aws::String& value) { SetReasonMessage(value); return *this;}
    inline CancelConversionTaskRequest& WithReasonMessage(Aws::String&& value) { SetReasonMessage(std::move(value)); return *this;}
    inline CancelConversionTaskRequest& WithReasonMessage(const char* value) { SetReasonMessage(value); return *this;}
    ///@}
  private:

    Aws::String m_conversionTaskId;
    bool m_conversionTaskIdHasBeenSet = false;

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;

    Aws::String m_reasonMessage;
    bool m_reasonMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutmetrics/LookoutMetrics_EXPORTS.h>
#include <aws/lookoutmetrics/LookoutMetricsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace LookoutMetrics
{
namespace Model
{

  /**
   */
  class DescribeAlertRequest : public LookoutMetricsRequest
  {
  public:
    AWS_LOOKOUTMETRICS_API DescribeAlertRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeAlert"; }

    AWS_LOOKOUTMETRICS_API Aws::String SerializePayload() const override;


    /**
     * <p>The ARN of the alert to describe.</p>
     */
    inline const Aws::String& GetAlertArn() const{ return m_alertArn; }

    /**
     * <p>The ARN of the alert to describe.</p>
     */
    inline bool AlertArnHasBeenSet() const { return m_alertArnHasBeenSet; }

    /**
     * <p>The ARN of the alert to describe.</p>
     */
    inline void SetAlertArn(const Aws::String& value) { m_alertArnHasBeenSet = true; m_alertArn = value; }

    /**
     * <p>The ARN of the alert to describe.</p>
     */
    inline void SetAlertArn(Aws::String&& value) { m_alertArnHasBeenSet = true; m_alertArn = std::move(value); }

    /**
     * <p>The ARN of the alert to describe.</p>
     */
    inline void SetAlertArn(const char* value) { m_alertArnHasBeenSet = true; m_alertArn.assign(value); }

    /**
     * <p>The ARN of the alert to describe.</p>
     */
    inline DescribeAlertRequest& WithAlertArn(const Aws::String& value) { SetAlertArn(value); return *this;}

    /**
     * <p>The ARN of the alert to describe.</p>
     */
    inline DescribeAlertRequest& WithAlertArn(Aws::String&& value) { SetAlertArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the alert to describe.</p>
     */
    inline DescribeAlertRequest& WithAlertArn(const char* value) { SetAlertArn(value); return *this;}

  private:

    Aws::String m_alertArn;
    bool m_alertArnHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutMetrics
} // namespace Aws

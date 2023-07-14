﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/IoTRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace IoT
{
namespace Model
{

  /**
   */
  class AWS_IOT_API DeleteCustomMetricRequest : public IoTRequest
  {
  public:
    DeleteCustomMetricRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteCustomMetric"; }

    Aws::String SerializePayload() const override;


    /**
     * <p> The name of the custom metric. </p>
     */
    inline const Aws::String& GetMetricName() const{ return m_metricName; }

    /**
     * <p> The name of the custom metric. </p>
     */
    inline bool MetricNameHasBeenSet() const { return m_metricNameHasBeenSet; }

    /**
     * <p> The name of the custom metric. </p>
     */
    inline void SetMetricName(const Aws::String& value) { m_metricNameHasBeenSet = true; m_metricName = value; }

    /**
     * <p> The name of the custom metric. </p>
     */
    inline void SetMetricName(Aws::String&& value) { m_metricNameHasBeenSet = true; m_metricName = std::move(value); }

    /**
     * <p> The name of the custom metric. </p>
     */
    inline void SetMetricName(const char* value) { m_metricNameHasBeenSet = true; m_metricName.assign(value); }

    /**
     * <p> The name of the custom metric. </p>
     */
    inline DeleteCustomMetricRequest& WithMetricName(const Aws::String& value) { SetMetricName(value); return *this;}

    /**
     * <p> The name of the custom metric. </p>
     */
    inline DeleteCustomMetricRequest& WithMetricName(Aws::String&& value) { SetMetricName(std::move(value)); return *this;}

    /**
     * <p> The name of the custom metric. </p>
     */
    inline DeleteCustomMetricRequest& WithMetricName(const char* value) { SetMetricName(value); return *this;}

  private:

    Aws::String m_metricName;
    bool m_metricNameHasBeenSet;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws

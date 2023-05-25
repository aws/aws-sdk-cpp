/**
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
  class UpdateCustomMetricRequest : public IoTRequest
  {
  public:
    AWS_IOT_API UpdateCustomMetricRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateCustomMetric"; }

    AWS_IOT_API Aws::String SerializePayload() const override;


    /**
     * <p> The name of the custom metric. Cannot be updated. </p>
     */
    inline const Aws::String& GetMetricName() const{ return m_metricName; }

    /**
     * <p> The name of the custom metric. Cannot be updated. </p>
     */
    inline bool MetricNameHasBeenSet() const { return m_metricNameHasBeenSet; }

    /**
     * <p> The name of the custom metric. Cannot be updated. </p>
     */
    inline void SetMetricName(const Aws::String& value) { m_metricNameHasBeenSet = true; m_metricName = value; }

    /**
     * <p> The name of the custom metric. Cannot be updated. </p>
     */
    inline void SetMetricName(Aws::String&& value) { m_metricNameHasBeenSet = true; m_metricName = std::move(value); }

    /**
     * <p> The name of the custom metric. Cannot be updated. </p>
     */
    inline void SetMetricName(const char* value) { m_metricNameHasBeenSet = true; m_metricName.assign(value); }

    /**
     * <p> The name of the custom metric. Cannot be updated. </p>
     */
    inline UpdateCustomMetricRequest& WithMetricName(const Aws::String& value) { SetMetricName(value); return *this;}

    /**
     * <p> The name of the custom metric. Cannot be updated. </p>
     */
    inline UpdateCustomMetricRequest& WithMetricName(Aws::String&& value) { SetMetricName(std::move(value)); return *this;}

    /**
     * <p> The name of the custom metric. Cannot be updated. </p>
     */
    inline UpdateCustomMetricRequest& WithMetricName(const char* value) { SetMetricName(value); return *this;}


    /**
     * <p> Field represents a friendly name in the console for the custom metric, it
     * doesn't have to be unique. Don't use this name as the metric identifier in the
     * device metric report. Can be updated. </p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }

    /**
     * <p> Field represents a friendly name in the console for the custom metric, it
     * doesn't have to be unique. Don't use this name as the metric identifier in the
     * device metric report. Can be updated. </p>
     */
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }

    /**
     * <p> Field represents a friendly name in the console for the custom metric, it
     * doesn't have to be unique. Don't use this name as the metric identifier in the
     * device metric report. Can be updated. </p>
     */
    inline void SetDisplayName(const Aws::String& value) { m_displayNameHasBeenSet = true; m_displayName = value; }

    /**
     * <p> Field represents a friendly name in the console for the custom metric, it
     * doesn't have to be unique. Don't use this name as the metric identifier in the
     * device metric report. Can be updated. </p>
     */
    inline void SetDisplayName(Aws::String&& value) { m_displayNameHasBeenSet = true; m_displayName = std::move(value); }

    /**
     * <p> Field represents a friendly name in the console for the custom metric, it
     * doesn't have to be unique. Don't use this name as the metric identifier in the
     * device metric report. Can be updated. </p>
     */
    inline void SetDisplayName(const char* value) { m_displayNameHasBeenSet = true; m_displayName.assign(value); }

    /**
     * <p> Field represents a friendly name in the console for the custom metric, it
     * doesn't have to be unique. Don't use this name as the metric identifier in the
     * device metric report. Can be updated. </p>
     */
    inline UpdateCustomMetricRequest& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}

    /**
     * <p> Field represents a friendly name in the console for the custom metric, it
     * doesn't have to be unique. Don't use this name as the metric identifier in the
     * device metric report. Can be updated. </p>
     */
    inline UpdateCustomMetricRequest& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}

    /**
     * <p> Field represents a friendly name in the console for the custom metric, it
     * doesn't have to be unique. Don't use this name as the metric identifier in the
     * device metric report. Can be updated. </p>
     */
    inline UpdateCustomMetricRequest& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}

  private:

    Aws::String m_metricName;
    bool m_metricNameHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws

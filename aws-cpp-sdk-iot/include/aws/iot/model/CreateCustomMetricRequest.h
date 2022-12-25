/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/IoTRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/CustomMetricType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iot/model/Tag.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace IoT
{
namespace Model
{

  /**
   */
  class CreateCustomMetricRequest : public IoTRequest
  {
  public:
    AWS_IOT_API CreateCustomMetricRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateCustomMetric"; }

    AWS_IOT_API Aws::String SerializePayload() const override;


    /**
     * <p> The name of the custom metric. This will be used in the metric report
     * submitted from the device/thing. The name can't begin with <code>aws:</code>.
     * You can't change the name after you define it.</p>
     */
    inline const Aws::String& GetMetricName() const{ return m_metricName; }

    /**
     * <p> The name of the custom metric. This will be used in the metric report
     * submitted from the device/thing. The name can't begin with <code>aws:</code>.
     * You can't change the name after you define it.</p>
     */
    inline bool MetricNameHasBeenSet() const { return m_metricNameHasBeenSet; }

    /**
     * <p> The name of the custom metric. This will be used in the metric report
     * submitted from the device/thing. The name can't begin with <code>aws:</code>.
     * You can't change the name after you define it.</p>
     */
    inline void SetMetricName(const Aws::String& value) { m_metricNameHasBeenSet = true; m_metricName = value; }

    /**
     * <p> The name of the custom metric. This will be used in the metric report
     * submitted from the device/thing. The name can't begin with <code>aws:</code>.
     * You can't change the name after you define it.</p>
     */
    inline void SetMetricName(Aws::String&& value) { m_metricNameHasBeenSet = true; m_metricName = std::move(value); }

    /**
     * <p> The name of the custom metric. This will be used in the metric report
     * submitted from the device/thing. The name can't begin with <code>aws:</code>.
     * You can't change the name after you define it.</p>
     */
    inline void SetMetricName(const char* value) { m_metricNameHasBeenSet = true; m_metricName.assign(value); }

    /**
     * <p> The name of the custom metric. This will be used in the metric report
     * submitted from the device/thing. The name can't begin with <code>aws:</code>.
     * You can't change the name after you define it.</p>
     */
    inline CreateCustomMetricRequest& WithMetricName(const Aws::String& value) { SetMetricName(value); return *this;}

    /**
     * <p> The name of the custom metric. This will be used in the metric report
     * submitted from the device/thing. The name can't begin with <code>aws:</code>.
     * You can't change the name after you define it.</p>
     */
    inline CreateCustomMetricRequest& WithMetricName(Aws::String&& value) { SetMetricName(std::move(value)); return *this;}

    /**
     * <p> The name of the custom metric. This will be used in the metric report
     * submitted from the device/thing. The name can't begin with <code>aws:</code>.
     * You can't change the name after you define it.</p>
     */
    inline CreateCustomMetricRequest& WithMetricName(const char* value) { SetMetricName(value); return *this;}


    /**
     * <p> The friendly name in the console for the custom metric. This name doesn't
     * have to be unique. Don't use this name as the metric identifier in the device
     * metric report. You can update the friendly name after you define it.</p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }

    /**
     * <p> The friendly name in the console for the custom metric. This name doesn't
     * have to be unique. Don't use this name as the metric identifier in the device
     * metric report. You can update the friendly name after you define it.</p>
     */
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }

    /**
     * <p> The friendly name in the console for the custom metric. This name doesn't
     * have to be unique. Don't use this name as the metric identifier in the device
     * metric report. You can update the friendly name after you define it.</p>
     */
    inline void SetDisplayName(const Aws::String& value) { m_displayNameHasBeenSet = true; m_displayName = value; }

    /**
     * <p> The friendly name in the console for the custom metric. This name doesn't
     * have to be unique. Don't use this name as the metric identifier in the device
     * metric report. You can update the friendly name after you define it.</p>
     */
    inline void SetDisplayName(Aws::String&& value) { m_displayNameHasBeenSet = true; m_displayName = std::move(value); }

    /**
     * <p> The friendly name in the console for the custom metric. This name doesn't
     * have to be unique. Don't use this name as the metric identifier in the device
     * metric report. You can update the friendly name after you define it.</p>
     */
    inline void SetDisplayName(const char* value) { m_displayNameHasBeenSet = true; m_displayName.assign(value); }

    /**
     * <p> The friendly name in the console for the custom metric. This name doesn't
     * have to be unique. Don't use this name as the metric identifier in the device
     * metric report. You can update the friendly name after you define it.</p>
     */
    inline CreateCustomMetricRequest& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}

    /**
     * <p> The friendly name in the console for the custom metric. This name doesn't
     * have to be unique. Don't use this name as the metric identifier in the device
     * metric report. You can update the friendly name after you define it.</p>
     */
    inline CreateCustomMetricRequest& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}

    /**
     * <p> The friendly name in the console for the custom metric. This name doesn't
     * have to be unique. Don't use this name as the metric identifier in the device
     * metric report. You can update the friendly name after you define it.</p>
     */
    inline CreateCustomMetricRequest& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}


    /**
     * <p> The type of the custom metric. </p>  <p>The type
     * <code>number</code> only takes a single metric value as an input, but when you
     * submit the metrics value in the DeviceMetrics report, you must pass it as an
     * array with a single value.</p> 
     */
    inline const CustomMetricType& GetMetricType() const{ return m_metricType; }

    /**
     * <p> The type of the custom metric. </p>  <p>The type
     * <code>number</code> only takes a single metric value as an input, but when you
     * submit the metrics value in the DeviceMetrics report, you must pass it as an
     * array with a single value.</p> 
     */
    inline bool MetricTypeHasBeenSet() const { return m_metricTypeHasBeenSet; }

    /**
     * <p> The type of the custom metric. </p>  <p>The type
     * <code>number</code> only takes a single metric value as an input, but when you
     * submit the metrics value in the DeviceMetrics report, you must pass it as an
     * array with a single value.</p> 
     */
    inline void SetMetricType(const CustomMetricType& value) { m_metricTypeHasBeenSet = true; m_metricType = value; }

    /**
     * <p> The type of the custom metric. </p>  <p>The type
     * <code>number</code> only takes a single metric value as an input, but when you
     * submit the metrics value in the DeviceMetrics report, you must pass it as an
     * array with a single value.</p> 
     */
    inline void SetMetricType(CustomMetricType&& value) { m_metricTypeHasBeenSet = true; m_metricType = std::move(value); }

    /**
     * <p> The type of the custom metric. </p>  <p>The type
     * <code>number</code> only takes a single metric value as an input, but when you
     * submit the metrics value in the DeviceMetrics report, you must pass it as an
     * array with a single value.</p> 
     */
    inline CreateCustomMetricRequest& WithMetricType(const CustomMetricType& value) { SetMetricType(value); return *this;}

    /**
     * <p> The type of the custom metric. </p>  <p>The type
     * <code>number</code> only takes a single metric value as an input, but when you
     * submit the metrics value in the DeviceMetrics report, you must pass it as an
     * array with a single value.</p> 
     */
    inline CreateCustomMetricRequest& WithMetricType(CustomMetricType&& value) { SetMetricType(std::move(value)); return *this;}


    /**
     * <p> Metadata that can be used to manage the custom metric. </p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p> Metadata that can be used to manage the custom metric. </p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p> Metadata that can be used to manage the custom metric. </p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p> Metadata that can be used to manage the custom metric. </p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p> Metadata that can be used to manage the custom metric. </p>
     */
    inline CreateCustomMetricRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p> Metadata that can be used to manage the custom metric. </p>
     */
    inline CreateCustomMetricRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p> Metadata that can be used to manage the custom metric. </p>
     */
    inline CreateCustomMetricRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p> Metadata that can be used to manage the custom metric. </p>
     */
    inline CreateCustomMetricRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>Each custom metric must have a unique client request token. If you try to
     * create a new custom metric that already exists with a different token, an
     * exception occurs. If you omit this value, Amazon Web Services SDKs will
     * automatically generate a unique client request. </p>
     */
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }

    /**
     * <p>Each custom metric must have a unique client request token. If you try to
     * create a new custom metric that already exists with a different token, an
     * exception occurs. If you omit this value, Amazon Web Services SDKs will
     * automatically generate a unique client request. </p>
     */
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }

    /**
     * <p>Each custom metric must have a unique client request token. If you try to
     * create a new custom metric that already exists with a different token, an
     * exception occurs. If you omit this value, Amazon Web Services SDKs will
     * automatically generate a unique client request. </p>
     */
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }

    /**
     * <p>Each custom metric must have a unique client request token. If you try to
     * create a new custom metric that already exists with a different token, an
     * exception occurs. If you omit this value, Amazon Web Services SDKs will
     * automatically generate a unique client request. </p>
     */
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }

    /**
     * <p>Each custom metric must have a unique client request token. If you try to
     * create a new custom metric that already exists with a different token, an
     * exception occurs. If you omit this value, Amazon Web Services SDKs will
     * automatically generate a unique client request. </p>
     */
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }

    /**
     * <p>Each custom metric must have a unique client request token. If you try to
     * create a new custom metric that already exists with a different token, an
     * exception occurs. If you omit this value, Amazon Web Services SDKs will
     * automatically generate a unique client request. </p>
     */
    inline CreateCustomMetricRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}

    /**
     * <p>Each custom metric must have a unique client request token. If you try to
     * create a new custom metric that already exists with a different token, an
     * exception occurs. If you omit this value, Amazon Web Services SDKs will
     * automatically generate a unique client request. </p>
     */
    inline CreateCustomMetricRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}

    /**
     * <p>Each custom metric must have a unique client request token. If you try to
     * create a new custom metric that already exists with a different token, an
     * exception occurs. If you omit this value, Amazon Web Services SDKs will
     * automatically generate a unique client request. </p>
     */
    inline CreateCustomMetricRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}

  private:

    Aws::String m_metricName;
    bool m_metricNameHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    CustomMetricType m_metricType;
    bool m_metricTypeHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws

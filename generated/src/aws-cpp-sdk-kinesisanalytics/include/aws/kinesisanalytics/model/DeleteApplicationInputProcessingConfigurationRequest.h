﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisanalytics/KinesisAnalytics_EXPORTS.h>
#include <aws/kinesisanalytics/KinesisAnalyticsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace KinesisAnalytics
{
namespace Model
{

  /**
   */
  class DeleteApplicationInputProcessingConfigurationRequest : public KinesisAnalyticsRequest
  {
  public:
    AWS_KINESISANALYTICS_API DeleteApplicationInputProcessingConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteApplicationInputProcessingConfiguration"; }

    AWS_KINESISANALYTICS_API Aws::String SerializePayload() const override;

    AWS_KINESISANALYTICS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Kinesis Analytics application name.</p>
     */
    inline const Aws::String& GetApplicationName() const{ return m_applicationName; }
    inline bool ApplicationNameHasBeenSet() const { return m_applicationNameHasBeenSet; }
    inline void SetApplicationName(const Aws::String& value) { m_applicationNameHasBeenSet = true; m_applicationName = value; }
    inline void SetApplicationName(Aws::String&& value) { m_applicationNameHasBeenSet = true; m_applicationName = std::move(value); }
    inline void SetApplicationName(const char* value) { m_applicationNameHasBeenSet = true; m_applicationName.assign(value); }
    inline DeleteApplicationInputProcessingConfigurationRequest& WithApplicationName(const Aws::String& value) { SetApplicationName(value); return *this;}
    inline DeleteApplicationInputProcessingConfigurationRequest& WithApplicationName(Aws::String&& value) { SetApplicationName(std::move(value)); return *this;}
    inline DeleteApplicationInputProcessingConfigurationRequest& WithApplicationName(const char* value) { SetApplicationName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version ID of the Kinesis Analytics application.</p>
     */
    inline long long GetCurrentApplicationVersionId() const{ return m_currentApplicationVersionId; }
    inline bool CurrentApplicationVersionIdHasBeenSet() const { return m_currentApplicationVersionIdHasBeenSet; }
    inline void SetCurrentApplicationVersionId(long long value) { m_currentApplicationVersionIdHasBeenSet = true; m_currentApplicationVersionId = value; }
    inline DeleteApplicationInputProcessingConfigurationRequest& WithCurrentApplicationVersionId(long long value) { SetCurrentApplicationVersionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the input configuration from which to delete the input processing
     * configuration. You can get a list of the input IDs for an application by using
     * the <a
     * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/API_DescribeApplication.html">DescribeApplication</a>
     * operation.</p>
     */
    inline const Aws::String& GetInputId() const{ return m_inputId; }
    inline bool InputIdHasBeenSet() const { return m_inputIdHasBeenSet; }
    inline void SetInputId(const Aws::String& value) { m_inputIdHasBeenSet = true; m_inputId = value; }
    inline void SetInputId(Aws::String&& value) { m_inputIdHasBeenSet = true; m_inputId = std::move(value); }
    inline void SetInputId(const char* value) { m_inputIdHasBeenSet = true; m_inputId.assign(value); }
    inline DeleteApplicationInputProcessingConfigurationRequest& WithInputId(const Aws::String& value) { SetInputId(value); return *this;}
    inline DeleteApplicationInputProcessingConfigurationRequest& WithInputId(Aws::String&& value) { SetInputId(std::move(value)); return *this;}
    inline DeleteApplicationInputProcessingConfigurationRequest& WithInputId(const char* value) { SetInputId(value); return *this;}
    ///@}
  private:

    Aws::String m_applicationName;
    bool m_applicationNameHasBeenSet = false;

    long long m_currentApplicationVersionId;
    bool m_currentApplicationVersionIdHasBeenSet = false;

    Aws::String m_inputId;
    bool m_inputIdHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisAnalytics
} // namespace Aws

﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2_EXPORTS.h>
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kinesisanalyticsv2/model/InputProcessingConfiguration.h>
#include <utility>

namespace Aws
{
namespace KinesisAnalyticsV2
{
namespace Model
{

  /**
   */
  class AWS_KINESISANALYTICSV2_API AddApplicationInputProcessingConfigurationRequest : public KinesisAnalyticsV2Request
  {
  public:
    AddApplicationInputProcessingConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AddApplicationInputProcessingConfiguration"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the application to which you want to add the input processing
     * configuration.</p>
     */
    inline const Aws::String& GetApplicationName() const{ return m_applicationName; }

    /**
     * <p>The name of the application to which you want to add the input processing
     * configuration.</p>
     */
    inline bool ApplicationNameHasBeenSet() const { return m_applicationNameHasBeenSet; }

    /**
     * <p>The name of the application to which you want to add the input processing
     * configuration.</p>
     */
    inline void SetApplicationName(const Aws::String& value) { m_applicationNameHasBeenSet = true; m_applicationName = value; }

    /**
     * <p>The name of the application to which you want to add the input processing
     * configuration.</p>
     */
    inline void SetApplicationName(Aws::String&& value) { m_applicationNameHasBeenSet = true; m_applicationName = std::move(value); }

    /**
     * <p>The name of the application to which you want to add the input processing
     * configuration.</p>
     */
    inline void SetApplicationName(const char* value) { m_applicationNameHasBeenSet = true; m_applicationName.assign(value); }

    /**
     * <p>The name of the application to which you want to add the input processing
     * configuration.</p>
     */
    inline AddApplicationInputProcessingConfigurationRequest& WithApplicationName(const Aws::String& value) { SetApplicationName(value); return *this;}

    /**
     * <p>The name of the application to which you want to add the input processing
     * configuration.</p>
     */
    inline AddApplicationInputProcessingConfigurationRequest& WithApplicationName(Aws::String&& value) { SetApplicationName(std::move(value)); return *this;}

    /**
     * <p>The name of the application to which you want to add the input processing
     * configuration.</p>
     */
    inline AddApplicationInputProcessingConfigurationRequest& WithApplicationName(const char* value) { SetApplicationName(value); return *this;}


    /**
     * <p>The version of the application to which you want to add the input processing
     * configuration. You can use the <a>DescribeApplication</a> operation to get the
     * current application version. If the version specified is not the current
     * version, the <code>ConcurrentModificationException</code> is returned.</p>
     */
    inline long long GetCurrentApplicationVersionId() const{ return m_currentApplicationVersionId; }

    /**
     * <p>The version of the application to which you want to add the input processing
     * configuration. You can use the <a>DescribeApplication</a> operation to get the
     * current application version. If the version specified is not the current
     * version, the <code>ConcurrentModificationException</code> is returned.</p>
     */
    inline bool CurrentApplicationVersionIdHasBeenSet() const { return m_currentApplicationVersionIdHasBeenSet; }

    /**
     * <p>The version of the application to which you want to add the input processing
     * configuration. You can use the <a>DescribeApplication</a> operation to get the
     * current application version. If the version specified is not the current
     * version, the <code>ConcurrentModificationException</code> is returned.</p>
     */
    inline void SetCurrentApplicationVersionId(long long value) { m_currentApplicationVersionIdHasBeenSet = true; m_currentApplicationVersionId = value; }

    /**
     * <p>The version of the application to which you want to add the input processing
     * configuration. You can use the <a>DescribeApplication</a> operation to get the
     * current application version. If the version specified is not the current
     * version, the <code>ConcurrentModificationException</code> is returned.</p>
     */
    inline AddApplicationInputProcessingConfigurationRequest& WithCurrentApplicationVersionId(long long value) { SetCurrentApplicationVersionId(value); return *this;}


    /**
     * <p>The ID of the input configuration to add the input processing configuration
     * to. You can get a list of the input IDs for an application using the
     * <a>DescribeApplication</a> operation.</p>
     */
    inline const Aws::String& GetInputId() const{ return m_inputId; }

    /**
     * <p>The ID of the input configuration to add the input processing configuration
     * to. You can get a list of the input IDs for an application using the
     * <a>DescribeApplication</a> operation.</p>
     */
    inline bool InputIdHasBeenSet() const { return m_inputIdHasBeenSet; }

    /**
     * <p>The ID of the input configuration to add the input processing configuration
     * to. You can get a list of the input IDs for an application using the
     * <a>DescribeApplication</a> operation.</p>
     */
    inline void SetInputId(const Aws::String& value) { m_inputIdHasBeenSet = true; m_inputId = value; }

    /**
     * <p>The ID of the input configuration to add the input processing configuration
     * to. You can get a list of the input IDs for an application using the
     * <a>DescribeApplication</a> operation.</p>
     */
    inline void SetInputId(Aws::String&& value) { m_inputIdHasBeenSet = true; m_inputId = std::move(value); }

    /**
     * <p>The ID of the input configuration to add the input processing configuration
     * to. You can get a list of the input IDs for an application using the
     * <a>DescribeApplication</a> operation.</p>
     */
    inline void SetInputId(const char* value) { m_inputIdHasBeenSet = true; m_inputId.assign(value); }

    /**
     * <p>The ID of the input configuration to add the input processing configuration
     * to. You can get a list of the input IDs for an application using the
     * <a>DescribeApplication</a> operation.</p>
     */
    inline AddApplicationInputProcessingConfigurationRequest& WithInputId(const Aws::String& value) { SetInputId(value); return *this;}

    /**
     * <p>The ID of the input configuration to add the input processing configuration
     * to. You can get a list of the input IDs for an application using the
     * <a>DescribeApplication</a> operation.</p>
     */
    inline AddApplicationInputProcessingConfigurationRequest& WithInputId(Aws::String&& value) { SetInputId(std::move(value)); return *this;}

    /**
     * <p>The ID of the input configuration to add the input processing configuration
     * to. You can get a list of the input IDs for an application using the
     * <a>DescribeApplication</a> operation.</p>
     */
    inline AddApplicationInputProcessingConfigurationRequest& WithInputId(const char* value) { SetInputId(value); return *this;}


    /**
     * <p>The <a>InputProcessingConfiguration</a> to add to the application.</p>
     */
    inline const InputProcessingConfiguration& GetInputProcessingConfiguration() const{ return m_inputProcessingConfiguration; }

    /**
     * <p>The <a>InputProcessingConfiguration</a> to add to the application.</p>
     */
    inline bool InputProcessingConfigurationHasBeenSet() const { return m_inputProcessingConfigurationHasBeenSet; }

    /**
     * <p>The <a>InputProcessingConfiguration</a> to add to the application.</p>
     */
    inline void SetInputProcessingConfiguration(const InputProcessingConfiguration& value) { m_inputProcessingConfigurationHasBeenSet = true; m_inputProcessingConfiguration = value; }

    /**
     * <p>The <a>InputProcessingConfiguration</a> to add to the application.</p>
     */
    inline void SetInputProcessingConfiguration(InputProcessingConfiguration&& value) { m_inputProcessingConfigurationHasBeenSet = true; m_inputProcessingConfiguration = std::move(value); }

    /**
     * <p>The <a>InputProcessingConfiguration</a> to add to the application.</p>
     */
    inline AddApplicationInputProcessingConfigurationRequest& WithInputProcessingConfiguration(const InputProcessingConfiguration& value) { SetInputProcessingConfiguration(value); return *this;}

    /**
     * <p>The <a>InputProcessingConfiguration</a> to add to the application.</p>
     */
    inline AddApplicationInputProcessingConfigurationRequest& WithInputProcessingConfiguration(InputProcessingConfiguration&& value) { SetInputProcessingConfiguration(std::move(value)); return *this;}

  private:

    Aws::String m_applicationName;
    bool m_applicationNameHasBeenSet;

    long long m_currentApplicationVersionId;
    bool m_currentApplicationVersionIdHasBeenSet;

    Aws::String m_inputId;
    bool m_inputIdHasBeenSet;

    InputProcessingConfiguration m_inputProcessingConfiguration;
    bool m_inputProcessingConfigurationHasBeenSet;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws

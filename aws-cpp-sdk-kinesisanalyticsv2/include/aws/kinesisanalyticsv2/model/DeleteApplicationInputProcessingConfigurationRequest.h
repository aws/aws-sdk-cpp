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
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2_EXPORTS.h>
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace KinesisAnalyticsV2
{
namespace Model
{

  /**
   */
  class AWS_KINESISANALYTICSV2_API DeleteApplicationInputProcessingConfigurationRequest : public KinesisAnalyticsV2Request
  {
  public:
    DeleteApplicationInputProcessingConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteApplicationInputProcessingConfiguration"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the application.</p>
     */
    inline const Aws::String& GetApplicationName() const{ return m_applicationName; }

    /**
     * <p>The name of the application.</p>
     */
    inline bool ApplicationNameHasBeenSet() const { return m_applicationNameHasBeenSet; }

    /**
     * <p>The name of the application.</p>
     */
    inline void SetApplicationName(const Aws::String& value) { m_applicationNameHasBeenSet = true; m_applicationName = value; }

    /**
     * <p>The name of the application.</p>
     */
    inline void SetApplicationName(Aws::String&& value) { m_applicationNameHasBeenSet = true; m_applicationName = std::move(value); }

    /**
     * <p>The name of the application.</p>
     */
    inline void SetApplicationName(const char* value) { m_applicationNameHasBeenSet = true; m_applicationName.assign(value); }

    /**
     * <p>The name of the application.</p>
     */
    inline DeleteApplicationInputProcessingConfigurationRequest& WithApplicationName(const Aws::String& value) { SetApplicationName(value); return *this;}

    /**
     * <p>The name of the application.</p>
     */
    inline DeleteApplicationInputProcessingConfigurationRequest& WithApplicationName(Aws::String&& value) { SetApplicationName(std::move(value)); return *this;}

    /**
     * <p>The name of the application.</p>
     */
    inline DeleteApplicationInputProcessingConfigurationRequest& WithApplicationName(const char* value) { SetApplicationName(value); return *this;}


    /**
     * <p>The application version. You can use the <a>DescribeApplication</a> operation
     * to get the current application version. If the version specified is not the
     * current version, the <code>ConcurrentModificationException</code> is returned.
     * </p>
     */
    inline long long GetCurrentApplicationVersionId() const{ return m_currentApplicationVersionId; }

    /**
     * <p>The application version. You can use the <a>DescribeApplication</a> operation
     * to get the current application version. If the version specified is not the
     * current version, the <code>ConcurrentModificationException</code> is returned.
     * </p>
     */
    inline bool CurrentApplicationVersionIdHasBeenSet() const { return m_currentApplicationVersionIdHasBeenSet; }

    /**
     * <p>The application version. You can use the <a>DescribeApplication</a> operation
     * to get the current application version. If the version specified is not the
     * current version, the <code>ConcurrentModificationException</code> is returned.
     * </p>
     */
    inline void SetCurrentApplicationVersionId(long long value) { m_currentApplicationVersionIdHasBeenSet = true; m_currentApplicationVersionId = value; }

    /**
     * <p>The application version. You can use the <a>DescribeApplication</a> operation
     * to get the current application version. If the version specified is not the
     * current version, the <code>ConcurrentModificationException</code> is returned.
     * </p>
     */
    inline DeleteApplicationInputProcessingConfigurationRequest& WithCurrentApplicationVersionId(long long value) { SetCurrentApplicationVersionId(value); return *this;}


    /**
     * <p>The ID of the input configuration from which to delete the input processing
     * configuration. You can get a list of the input IDs for an application by using
     * the <a>DescribeApplication</a> operation.</p>
     */
    inline const Aws::String& GetInputId() const{ return m_inputId; }

    /**
     * <p>The ID of the input configuration from which to delete the input processing
     * configuration. You can get a list of the input IDs for an application by using
     * the <a>DescribeApplication</a> operation.</p>
     */
    inline bool InputIdHasBeenSet() const { return m_inputIdHasBeenSet; }

    /**
     * <p>The ID of the input configuration from which to delete the input processing
     * configuration. You can get a list of the input IDs for an application by using
     * the <a>DescribeApplication</a> operation.</p>
     */
    inline void SetInputId(const Aws::String& value) { m_inputIdHasBeenSet = true; m_inputId = value; }

    /**
     * <p>The ID of the input configuration from which to delete the input processing
     * configuration. You can get a list of the input IDs for an application by using
     * the <a>DescribeApplication</a> operation.</p>
     */
    inline void SetInputId(Aws::String&& value) { m_inputIdHasBeenSet = true; m_inputId = std::move(value); }

    /**
     * <p>The ID of the input configuration from which to delete the input processing
     * configuration. You can get a list of the input IDs for an application by using
     * the <a>DescribeApplication</a> operation.</p>
     */
    inline void SetInputId(const char* value) { m_inputIdHasBeenSet = true; m_inputId.assign(value); }

    /**
     * <p>The ID of the input configuration from which to delete the input processing
     * configuration. You can get a list of the input IDs for an application by using
     * the <a>DescribeApplication</a> operation.</p>
     */
    inline DeleteApplicationInputProcessingConfigurationRequest& WithInputId(const Aws::String& value) { SetInputId(value); return *this;}

    /**
     * <p>The ID of the input configuration from which to delete the input processing
     * configuration. You can get a list of the input IDs for an application by using
     * the <a>DescribeApplication</a> operation.</p>
     */
    inline DeleteApplicationInputProcessingConfigurationRequest& WithInputId(Aws::String&& value) { SetInputId(std::move(value)); return *this;}

    /**
     * <p>The ID of the input configuration from which to delete the input processing
     * configuration. You can get a list of the input IDs for an application by using
     * the <a>DescribeApplication</a> operation.</p>
     */
    inline DeleteApplicationInputProcessingConfigurationRequest& WithInputId(const char* value) { SetInputId(value); return *this;}

  private:

    Aws::String m_applicationName;
    bool m_applicationNameHasBeenSet;

    long long m_currentApplicationVersionId;
    bool m_currentApplicationVersionIdHasBeenSet;

    Aws::String m_inputId;
    bool m_inputIdHasBeenSet;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws

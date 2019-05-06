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
#include <aws/kinesisanalyticsv2/model/Input.h>
#include <utility>

namespace Aws
{
namespace KinesisAnalyticsV2
{
namespace Model
{

  /**
   */
  class AWS_KINESISANALYTICSV2_API AddApplicationInputRequest : public KinesisAnalyticsV2Request
  {
  public:
    AddApplicationInputRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AddApplicationInput"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of your existing application to which you want to add the streaming
     * source.</p>
     */
    inline const Aws::String& GetApplicationName() const{ return m_applicationName; }

    /**
     * <p>The name of your existing application to which you want to add the streaming
     * source.</p>
     */
    inline bool ApplicationNameHasBeenSet() const { return m_applicationNameHasBeenSet; }

    /**
     * <p>The name of your existing application to which you want to add the streaming
     * source.</p>
     */
    inline void SetApplicationName(const Aws::String& value) { m_applicationNameHasBeenSet = true; m_applicationName = value; }

    /**
     * <p>The name of your existing application to which you want to add the streaming
     * source.</p>
     */
    inline void SetApplicationName(Aws::String&& value) { m_applicationNameHasBeenSet = true; m_applicationName = std::move(value); }

    /**
     * <p>The name of your existing application to which you want to add the streaming
     * source.</p>
     */
    inline void SetApplicationName(const char* value) { m_applicationNameHasBeenSet = true; m_applicationName.assign(value); }

    /**
     * <p>The name of your existing application to which you want to add the streaming
     * source.</p>
     */
    inline AddApplicationInputRequest& WithApplicationName(const Aws::String& value) { SetApplicationName(value); return *this;}

    /**
     * <p>The name of your existing application to which you want to add the streaming
     * source.</p>
     */
    inline AddApplicationInputRequest& WithApplicationName(Aws::String&& value) { SetApplicationName(std::move(value)); return *this;}

    /**
     * <p>The name of your existing application to which you want to add the streaming
     * source.</p>
     */
    inline AddApplicationInputRequest& WithApplicationName(const char* value) { SetApplicationName(value); return *this;}


    /**
     * <p>The current version of your application. You can use the
     * <a>DescribeApplication</a> operation to find the current application
     * version.</p>
     */
    inline long long GetCurrentApplicationVersionId() const{ return m_currentApplicationVersionId; }

    /**
     * <p>The current version of your application. You can use the
     * <a>DescribeApplication</a> operation to find the current application
     * version.</p>
     */
    inline bool CurrentApplicationVersionIdHasBeenSet() const { return m_currentApplicationVersionIdHasBeenSet; }

    /**
     * <p>The current version of your application. You can use the
     * <a>DescribeApplication</a> operation to find the current application
     * version.</p>
     */
    inline void SetCurrentApplicationVersionId(long long value) { m_currentApplicationVersionIdHasBeenSet = true; m_currentApplicationVersionId = value; }

    /**
     * <p>The current version of your application. You can use the
     * <a>DescribeApplication</a> operation to find the current application
     * version.</p>
     */
    inline AddApplicationInputRequest& WithCurrentApplicationVersionId(long long value) { SetCurrentApplicationVersionId(value); return *this;}


    /**
     * <p>The <a>Input</a> to add.</p>
     */
    inline const Input& GetInput() const{ return m_input; }

    /**
     * <p>The <a>Input</a> to add.</p>
     */
    inline bool InputHasBeenSet() const { return m_inputHasBeenSet; }

    /**
     * <p>The <a>Input</a> to add.</p>
     */
    inline void SetInput(const Input& value) { m_inputHasBeenSet = true; m_input = value; }

    /**
     * <p>The <a>Input</a> to add.</p>
     */
    inline void SetInput(Input&& value) { m_inputHasBeenSet = true; m_input = std::move(value); }

    /**
     * <p>The <a>Input</a> to add.</p>
     */
    inline AddApplicationInputRequest& WithInput(const Input& value) { SetInput(value); return *this;}

    /**
     * <p>The <a>Input</a> to add.</p>
     */
    inline AddApplicationInputRequest& WithInput(Input&& value) { SetInput(std::move(value)); return *this;}

  private:

    Aws::String m_applicationName;
    bool m_applicationNameHasBeenSet;

    long long m_currentApplicationVersionId;
    bool m_currentApplicationVersionIdHasBeenSet;

    Input m_input;
    bool m_inputHasBeenSet;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws

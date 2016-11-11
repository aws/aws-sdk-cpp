/*
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
#include <aws/kinesisanalytics/KinesisAnalytics_EXPORTS.h>
#include <aws/kinesisanalytics/KinesisAnalyticsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kinesisanalytics/model/Input.h>

namespace Aws
{
namespace KinesisAnalytics
{
namespace Model
{

  /**
   * <p/>
   */
  class AWS_KINESISANALYTICS_API AddApplicationInputRequest : public KinesisAnalyticsRequest
  {
  public:
    AddApplicationInputRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>Name of your existing Amazon Kinesis Analytics application to which you want
     * to add the streaming source.</p>
     */
    inline const Aws::String& GetApplicationName() const{ return m_applicationName; }

    /**
     * <p>Name of your existing Amazon Kinesis Analytics application to which you want
     * to add the streaming source.</p>
     */
    inline void SetApplicationName(const Aws::String& value) { m_applicationNameHasBeenSet = true; m_applicationName = value; }

    /**
     * <p>Name of your existing Amazon Kinesis Analytics application to which you want
     * to add the streaming source.</p>
     */
    inline void SetApplicationName(Aws::String&& value) { m_applicationNameHasBeenSet = true; m_applicationName = value; }

    /**
     * <p>Name of your existing Amazon Kinesis Analytics application to which you want
     * to add the streaming source.</p>
     */
    inline void SetApplicationName(const char* value) { m_applicationNameHasBeenSet = true; m_applicationName.assign(value); }

    /**
     * <p>Name of your existing Amazon Kinesis Analytics application to which you want
     * to add the streaming source.</p>
     */
    inline AddApplicationInputRequest& WithApplicationName(const Aws::String& value) { SetApplicationName(value); return *this;}

    /**
     * <p>Name of your existing Amazon Kinesis Analytics application to which you want
     * to add the streaming source.</p>
     */
    inline AddApplicationInputRequest& WithApplicationName(Aws::String&& value) { SetApplicationName(value); return *this;}

    /**
     * <p>Name of your existing Amazon Kinesis Analytics application to which you want
     * to add the streaming source.</p>
     */
    inline AddApplicationInputRequest& WithApplicationName(const char* value) { SetApplicationName(value); return *this;}

    /**
     * <p>Current version of your Amazon Kinesis Analytics application. You can use the
     * <a>DescribeApplication</a> operation to find the current application
     * version.</p>
     */
    inline long long GetCurrentApplicationVersionId() const{ return m_currentApplicationVersionId; }

    /**
     * <p>Current version of your Amazon Kinesis Analytics application. You can use the
     * <a>DescribeApplication</a> operation to find the current application
     * version.</p>
     */
    inline void SetCurrentApplicationVersionId(long long value) { m_currentApplicationVersionIdHasBeenSet = true; m_currentApplicationVersionId = value; }

    /**
     * <p>Current version of your Amazon Kinesis Analytics application. You can use the
     * <a>DescribeApplication</a> operation to find the current application
     * version.</p>
     */
    inline AddApplicationInputRequest& WithCurrentApplicationVersionId(long long value) { SetCurrentApplicationVersionId(value); return *this;}

    
    inline const Input& GetInput() const{ return m_input; }

    
    inline void SetInput(const Input& value) { m_inputHasBeenSet = true; m_input = value; }

    
    inline void SetInput(Input&& value) { m_inputHasBeenSet = true; m_input = value; }

    
    inline AddApplicationInputRequest& WithInput(const Input& value) { SetInput(value); return *this;}

    
    inline AddApplicationInputRequest& WithInput(Input&& value) { SetInput(value); return *this;}

  private:
    Aws::String m_applicationName;
    bool m_applicationNameHasBeenSet;
    long long m_currentApplicationVersionId;
    bool m_currentApplicationVersionIdHasBeenSet;
    Input m_input;
    bool m_inputHasBeenSet;
  };

} // namespace Model
} // namespace KinesisAnalytics
} // namespace Aws

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
#include <aws/core/utils/DateTime.h>

namespace Aws
{
namespace KinesisAnalytics
{
namespace Model
{

  /**
   * <p/>
   */
  class AWS_KINESISANALYTICS_API DeleteApplicationRequest : public KinesisAnalyticsRequest
  {
  public:
    DeleteApplicationRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>Name of the Amazon Kinesis Analytics application to delete.</p>
     */
    inline const Aws::String& GetApplicationName() const{ return m_applicationName; }

    /**
     * <p>Name of the Amazon Kinesis Analytics application to delete.</p>
     */
    inline void SetApplicationName(const Aws::String& value) { m_applicationNameHasBeenSet = true; m_applicationName = value; }

    /**
     * <p>Name of the Amazon Kinesis Analytics application to delete.</p>
     */
    inline void SetApplicationName(Aws::String&& value) { m_applicationNameHasBeenSet = true; m_applicationName = value; }

    /**
     * <p>Name of the Amazon Kinesis Analytics application to delete.</p>
     */
    inline void SetApplicationName(const char* value) { m_applicationNameHasBeenSet = true; m_applicationName.assign(value); }

    /**
     * <p>Name of the Amazon Kinesis Analytics application to delete.</p>
     */
    inline DeleteApplicationRequest& WithApplicationName(const Aws::String& value) { SetApplicationName(value); return *this;}

    /**
     * <p>Name of the Amazon Kinesis Analytics application to delete.</p>
     */
    inline DeleteApplicationRequest& WithApplicationName(Aws::String&& value) { SetApplicationName(value); return *this;}

    /**
     * <p>Name of the Amazon Kinesis Analytics application to delete.</p>
     */
    inline DeleteApplicationRequest& WithApplicationName(const char* value) { SetApplicationName(value); return *this;}

    /**
     * <p> You can use the <code>DescribeApplication</code> operation to get this
     * value. </p>
     */
    inline const Aws::Utils::DateTime& GetCreateTimestamp() const{ return m_createTimestamp; }

    /**
     * <p> You can use the <code>DescribeApplication</code> operation to get this
     * value. </p>
     */
    inline void SetCreateTimestamp(const Aws::Utils::DateTime& value) { m_createTimestampHasBeenSet = true; m_createTimestamp = value; }

    /**
     * <p> You can use the <code>DescribeApplication</code> operation to get this
     * value. </p>
     */
    inline void SetCreateTimestamp(Aws::Utils::DateTime&& value) { m_createTimestampHasBeenSet = true; m_createTimestamp = value; }

    /**
     * <p> You can use the <code>DescribeApplication</code> operation to get this
     * value. </p>
     */
    inline DeleteApplicationRequest& WithCreateTimestamp(const Aws::Utils::DateTime& value) { SetCreateTimestamp(value); return *this;}

    /**
     * <p> You can use the <code>DescribeApplication</code> operation to get this
     * value. </p>
     */
    inline DeleteApplicationRequest& WithCreateTimestamp(Aws::Utils::DateTime&& value) { SetCreateTimestamp(value); return *this;}

  private:
    Aws::String m_applicationName;
    bool m_applicationNameHasBeenSet;
    Aws::Utils::DateTime m_createTimestamp;
    bool m_createTimestampHasBeenSet;
  };

} // namespace Model
} // namespace KinesisAnalytics
} // namespace Aws

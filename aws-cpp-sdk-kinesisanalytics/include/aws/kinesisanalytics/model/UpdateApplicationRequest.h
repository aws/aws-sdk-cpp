﻿/*
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
#include <aws/kinesisanalytics/model/ApplicationUpdate.h>

namespace Aws
{
namespace KinesisAnalytics
{
namespace Model
{

  /**
   */
  class AWS_KINESISANALYTICS_API UpdateApplicationRequest : public KinesisAnalyticsRequest
  {
  public:
    UpdateApplicationRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>Name of the Kinesis Analytics application to update.</p>
     */
    inline const Aws::String& GetApplicationName() const{ return m_applicationName; }

    /**
     * <p>Name of the Kinesis Analytics application to update.</p>
     */
    inline void SetApplicationName(const Aws::String& value) { m_applicationNameHasBeenSet = true; m_applicationName = value; }

    /**
     * <p>Name of the Kinesis Analytics application to update.</p>
     */
    inline void SetApplicationName(Aws::String&& value) { m_applicationNameHasBeenSet = true; m_applicationName = value; }

    /**
     * <p>Name of the Kinesis Analytics application to update.</p>
     */
    inline void SetApplicationName(const char* value) { m_applicationNameHasBeenSet = true; m_applicationName.assign(value); }

    /**
     * <p>Name of the Kinesis Analytics application to update.</p>
     */
    inline UpdateApplicationRequest& WithApplicationName(const Aws::String& value) { SetApplicationName(value); return *this;}

    /**
     * <p>Name of the Kinesis Analytics application to update.</p>
     */
    inline UpdateApplicationRequest& WithApplicationName(Aws::String&& value) { SetApplicationName(value); return *this;}

    /**
     * <p>Name of the Kinesis Analytics application to update.</p>
     */
    inline UpdateApplicationRequest& WithApplicationName(const char* value) { SetApplicationName(value); return *this;}

    /**
     * <p>The current application version ID. You can use the
     * <a>DescribeApplication</a> operation to get this value.</p>
     */
    inline long long GetCurrentApplicationVersionId() const{ return m_currentApplicationVersionId; }

    /**
     * <p>The current application version ID. You can use the
     * <a>DescribeApplication</a> operation to get this value.</p>
     */
    inline void SetCurrentApplicationVersionId(long long value) { m_currentApplicationVersionIdHasBeenSet = true; m_currentApplicationVersionId = value; }

    /**
     * <p>The current application version ID. You can use the
     * <a>DescribeApplication</a> operation to get this value.</p>
     */
    inline UpdateApplicationRequest& WithCurrentApplicationVersionId(long long value) { SetCurrentApplicationVersionId(value); return *this;}

    /**
     * <p>Describes application updates.</p>
     */
    inline const ApplicationUpdate& GetApplicationUpdate() const{ return m_applicationUpdate; }

    /**
     * <p>Describes application updates.</p>
     */
    inline void SetApplicationUpdate(const ApplicationUpdate& value) { m_applicationUpdateHasBeenSet = true; m_applicationUpdate = value; }

    /**
     * <p>Describes application updates.</p>
     */
    inline void SetApplicationUpdate(ApplicationUpdate&& value) { m_applicationUpdateHasBeenSet = true; m_applicationUpdate = value; }

    /**
     * <p>Describes application updates.</p>
     */
    inline UpdateApplicationRequest& WithApplicationUpdate(const ApplicationUpdate& value) { SetApplicationUpdate(value); return *this;}

    /**
     * <p>Describes application updates.</p>
     */
    inline UpdateApplicationRequest& WithApplicationUpdate(ApplicationUpdate&& value) { SetApplicationUpdate(value); return *this;}

  private:
    Aws::String m_applicationName;
    bool m_applicationNameHasBeenSet;
    long long m_currentApplicationVersionId;
    bool m_currentApplicationVersionIdHasBeenSet;
    ApplicationUpdate m_applicationUpdate;
    bool m_applicationUpdateHasBeenSet;
  };

} // namespace Model
} // namespace KinesisAnalytics
} // namespace Aws

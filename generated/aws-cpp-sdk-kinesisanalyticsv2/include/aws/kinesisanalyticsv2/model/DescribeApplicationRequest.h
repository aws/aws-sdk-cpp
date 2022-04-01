﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class AWS_KINESISANALYTICSV2_API DescribeApplicationRequest : public KinesisAnalyticsV2Request
  {
  public:
    DescribeApplicationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeApplication"; }

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
    inline DescribeApplicationRequest& WithApplicationName(const Aws::String& value) { SetApplicationName(value); return *this;}

    /**
     * <p>The name of the application.</p>
     */
    inline DescribeApplicationRequest& WithApplicationName(Aws::String&& value) { SetApplicationName(std::move(value)); return *this;}

    /**
     * <p>The name of the application.</p>
     */
    inline DescribeApplicationRequest& WithApplicationName(const char* value) { SetApplicationName(value); return *this;}


    /**
     * <p>Displays verbose information about a Kinesis Data Analytics application,
     * including the application's job plan.</p>
     */
    inline bool GetIncludeAdditionalDetails() const{ return m_includeAdditionalDetails; }

    /**
     * <p>Displays verbose information about a Kinesis Data Analytics application,
     * including the application's job plan.</p>
     */
    inline bool IncludeAdditionalDetailsHasBeenSet() const { return m_includeAdditionalDetailsHasBeenSet; }

    /**
     * <p>Displays verbose information about a Kinesis Data Analytics application,
     * including the application's job plan.</p>
     */
    inline void SetIncludeAdditionalDetails(bool value) { m_includeAdditionalDetailsHasBeenSet = true; m_includeAdditionalDetails = value; }

    /**
     * <p>Displays verbose information about a Kinesis Data Analytics application,
     * including the application's job plan.</p>
     */
    inline DescribeApplicationRequest& WithIncludeAdditionalDetails(bool value) { SetIncludeAdditionalDetails(value); return *this;}

  private:

    Aws::String m_applicationName;
    bool m_applicationNameHasBeenSet;

    bool m_includeAdditionalDetails;
    bool m_includeAdditionalDetailsHasBeenSet;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws

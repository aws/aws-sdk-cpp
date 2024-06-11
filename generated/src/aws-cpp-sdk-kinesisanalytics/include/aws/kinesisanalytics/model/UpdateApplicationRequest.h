﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisanalytics/KinesisAnalytics_EXPORTS.h>
#include <aws/kinesisanalytics/KinesisAnalyticsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kinesisanalytics/model/ApplicationUpdate.h>
#include <utility>

namespace Aws
{
namespace KinesisAnalytics
{
namespace Model
{

  /**
   */
  class UpdateApplicationRequest : public KinesisAnalyticsRequest
  {
  public:
    AWS_KINESISANALYTICS_API UpdateApplicationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateApplication"; }

    AWS_KINESISANALYTICS_API Aws::String SerializePayload() const override;

    AWS_KINESISANALYTICS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Name of the Amazon Kinesis Analytics application to update.</p>
     */
    inline const Aws::String& GetApplicationName() const{ return m_applicationName; }
    inline bool ApplicationNameHasBeenSet() const { return m_applicationNameHasBeenSet; }
    inline void SetApplicationName(const Aws::String& value) { m_applicationNameHasBeenSet = true; m_applicationName = value; }
    inline void SetApplicationName(Aws::String&& value) { m_applicationNameHasBeenSet = true; m_applicationName = std::move(value); }
    inline void SetApplicationName(const char* value) { m_applicationNameHasBeenSet = true; m_applicationName.assign(value); }
    inline UpdateApplicationRequest& WithApplicationName(const Aws::String& value) { SetApplicationName(value); return *this;}
    inline UpdateApplicationRequest& WithApplicationName(Aws::String&& value) { SetApplicationName(std::move(value)); return *this;}
    inline UpdateApplicationRequest& WithApplicationName(const char* value) { SetApplicationName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current application version ID. You can use the <a
     * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/API_DescribeApplication.html">DescribeApplication</a>
     * operation to get this value.</p>
     */
    inline long long GetCurrentApplicationVersionId() const{ return m_currentApplicationVersionId; }
    inline bool CurrentApplicationVersionIdHasBeenSet() const { return m_currentApplicationVersionIdHasBeenSet; }
    inline void SetCurrentApplicationVersionId(long long value) { m_currentApplicationVersionIdHasBeenSet = true; m_currentApplicationVersionId = value; }
    inline UpdateApplicationRequest& WithCurrentApplicationVersionId(long long value) { SetCurrentApplicationVersionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes application updates.</p>
     */
    inline const ApplicationUpdate& GetApplicationUpdate() const{ return m_applicationUpdate; }
    inline bool ApplicationUpdateHasBeenSet() const { return m_applicationUpdateHasBeenSet; }
    inline void SetApplicationUpdate(const ApplicationUpdate& value) { m_applicationUpdateHasBeenSet = true; m_applicationUpdate = value; }
    inline void SetApplicationUpdate(ApplicationUpdate&& value) { m_applicationUpdateHasBeenSet = true; m_applicationUpdate = std::move(value); }
    inline UpdateApplicationRequest& WithApplicationUpdate(const ApplicationUpdate& value) { SetApplicationUpdate(value); return *this;}
    inline UpdateApplicationRequest& WithApplicationUpdate(ApplicationUpdate&& value) { SetApplicationUpdate(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_applicationName;
    bool m_applicationNameHasBeenSet = false;

    long long m_currentApplicationVersionId;
    bool m_currentApplicationVersionIdHasBeenSet = false;

    ApplicationUpdate m_applicationUpdate;
    bool m_applicationUpdateHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisAnalytics
} // namespace Aws

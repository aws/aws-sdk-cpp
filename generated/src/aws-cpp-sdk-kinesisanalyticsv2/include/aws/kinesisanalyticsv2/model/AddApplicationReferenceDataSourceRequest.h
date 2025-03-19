/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2_EXPORTS.h>
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kinesisanalyticsv2/model/ReferenceDataSource.h>
#include <utility>

namespace Aws
{
namespace KinesisAnalyticsV2
{
namespace Model
{

  /**
   */
  class AddApplicationReferenceDataSourceRequest : public KinesisAnalyticsV2Request
  {
  public:
    AWS_KINESISANALYTICSV2_API AddApplicationReferenceDataSourceRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AddApplicationReferenceDataSource"; }

    AWS_KINESISANALYTICSV2_API Aws::String SerializePayload() const override;

    AWS_KINESISANALYTICSV2_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of an existing application.</p>
     */
    inline const Aws::String& GetApplicationName() const { return m_applicationName; }
    inline bool ApplicationNameHasBeenSet() const { return m_applicationNameHasBeenSet; }
    template<typename ApplicationNameT = Aws::String>
    void SetApplicationName(ApplicationNameT&& value) { m_applicationNameHasBeenSet = true; m_applicationName = std::forward<ApplicationNameT>(value); }
    template<typename ApplicationNameT = Aws::String>
    AddApplicationReferenceDataSourceRequest& WithApplicationName(ApplicationNameT&& value) { SetApplicationName(std::forward<ApplicationNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the application for which you are adding the reference data
     * source. You can use the <a>DescribeApplication</a> operation to get the current
     * application version. If the version specified is not the current version, the
     * <code>ConcurrentModificationException</code> is returned.</p>
     */
    inline long long GetCurrentApplicationVersionId() const { return m_currentApplicationVersionId; }
    inline bool CurrentApplicationVersionIdHasBeenSet() const { return m_currentApplicationVersionIdHasBeenSet; }
    inline void SetCurrentApplicationVersionId(long long value) { m_currentApplicationVersionIdHasBeenSet = true; m_currentApplicationVersionId = value; }
    inline AddApplicationReferenceDataSourceRequest& WithCurrentApplicationVersionId(long long value) { SetCurrentApplicationVersionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reference data source can be an object in your Amazon S3 bucket. Kinesis
     * Data Analytics reads the object and copies the data into the in-application
     * table that is created. You provide an S3 bucket, object key name, and the
     * resulting in-application table that is created. </p>
     */
    inline const ReferenceDataSource& GetReferenceDataSource() const { return m_referenceDataSource; }
    inline bool ReferenceDataSourceHasBeenSet() const { return m_referenceDataSourceHasBeenSet; }
    template<typename ReferenceDataSourceT = ReferenceDataSource>
    void SetReferenceDataSource(ReferenceDataSourceT&& value) { m_referenceDataSourceHasBeenSet = true; m_referenceDataSource = std::forward<ReferenceDataSourceT>(value); }
    template<typename ReferenceDataSourceT = ReferenceDataSource>
    AddApplicationReferenceDataSourceRequest& WithReferenceDataSource(ReferenceDataSourceT&& value) { SetReferenceDataSource(std::forward<ReferenceDataSourceT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_applicationName;
    bool m_applicationNameHasBeenSet = false;

    long long m_currentApplicationVersionId{0};
    bool m_currentApplicationVersionIdHasBeenSet = false;

    ReferenceDataSource m_referenceDataSource;
    bool m_referenceDataSourceHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws

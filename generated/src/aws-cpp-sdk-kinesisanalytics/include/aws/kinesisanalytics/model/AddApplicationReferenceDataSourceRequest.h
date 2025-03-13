/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisanalytics/KinesisAnalytics_EXPORTS.h>
#include <aws/kinesisanalytics/KinesisAnalyticsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kinesisanalytics/model/ReferenceDataSource.h>
#include <utility>

namespace Aws
{
namespace KinesisAnalytics
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalytics-2015-08-14/AddApplicationReferenceDataSourceRequest">AWS
   * API Reference</a></p>
   */
  class AddApplicationReferenceDataSourceRequest : public KinesisAnalyticsRequest
  {
  public:
    AWS_KINESISANALYTICS_API AddApplicationReferenceDataSourceRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AddApplicationReferenceDataSource"; }

    AWS_KINESISANALYTICS_API Aws::String SerializePayload() const override;

    AWS_KINESISANALYTICS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Name of an existing application.</p>
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
     * <p>Version of the application for which you are adding the reference data
     * source. You can use the <a
     * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/API_DescribeApplication.html">DescribeApplication</a>
     * operation to get the current application version. If the version specified is
     * not the current version, the <code>ConcurrentModificationException</code> is
     * returned.</p>
     */
    inline long long GetCurrentApplicationVersionId() const { return m_currentApplicationVersionId; }
    inline bool CurrentApplicationVersionIdHasBeenSet() const { return m_currentApplicationVersionIdHasBeenSet; }
    inline void SetCurrentApplicationVersionId(long long value) { m_currentApplicationVersionIdHasBeenSet = true; m_currentApplicationVersionId = value; }
    inline AddApplicationReferenceDataSourceRequest& WithCurrentApplicationVersionId(long long value) { SetCurrentApplicationVersionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reference data source can be an object in your Amazon S3 bucket. Amazon
     * Kinesis Analytics reads the object and copies the data into the in-application
     * table that is created. You provide an S3 bucket, object key name, and the
     * resulting in-application table that is created. You must also provide an IAM
     * role with the necessary permissions that Amazon Kinesis Analytics can assume to
     * read the object from your S3 bucket on your behalf.</p>
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
} // namespace KinesisAnalytics
} // namespace Aws

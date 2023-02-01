/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisanalytics/KinesisAnalytics_EXPORTS.h>
#include <aws/kinesisanalytics/KinesisAnalyticsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace KinesisAnalytics
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalytics-2015-08-14/DeleteApplicationRequest">AWS
   * API Reference</a></p>
   */
  class DeleteApplicationRequest : public KinesisAnalyticsRequest
  {
  public:
    AWS_KINESISANALYTICS_API DeleteApplicationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteApplication"; }

    AWS_KINESISANALYTICS_API Aws::String SerializePayload() const override;

    AWS_KINESISANALYTICS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Name of the Amazon Kinesis Analytics application to delete.</p>
     */
    inline const Aws::String& GetApplicationName() const{ return m_applicationName; }

    /**
     * <p>Name of the Amazon Kinesis Analytics application to delete.</p>
     */
    inline bool ApplicationNameHasBeenSet() const { return m_applicationNameHasBeenSet; }

    /**
     * <p>Name of the Amazon Kinesis Analytics application to delete.</p>
     */
    inline void SetApplicationName(const Aws::String& value) { m_applicationNameHasBeenSet = true; m_applicationName = value; }

    /**
     * <p>Name of the Amazon Kinesis Analytics application to delete.</p>
     */
    inline void SetApplicationName(Aws::String&& value) { m_applicationNameHasBeenSet = true; m_applicationName = std::move(value); }

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
    inline DeleteApplicationRequest& WithApplicationName(Aws::String&& value) { SetApplicationName(std::move(value)); return *this;}

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
    inline bool CreateTimestampHasBeenSet() const { return m_createTimestampHasBeenSet; }

    /**
     * <p> You can use the <code>DescribeApplication</code> operation to get this
     * value. </p>
     */
    inline void SetCreateTimestamp(const Aws::Utils::DateTime& value) { m_createTimestampHasBeenSet = true; m_createTimestamp = value; }

    /**
     * <p> You can use the <code>DescribeApplication</code> operation to get this
     * value. </p>
     */
    inline void SetCreateTimestamp(Aws::Utils::DateTime&& value) { m_createTimestampHasBeenSet = true; m_createTimestamp = std::move(value); }

    /**
     * <p> You can use the <code>DescribeApplication</code> operation to get this
     * value. </p>
     */
    inline DeleteApplicationRequest& WithCreateTimestamp(const Aws::Utils::DateTime& value) { SetCreateTimestamp(value); return *this;}

    /**
     * <p> You can use the <code>DescribeApplication</code> operation to get this
     * value. </p>
     */
    inline DeleteApplicationRequest& WithCreateTimestamp(Aws::Utils::DateTime&& value) { SetCreateTimestamp(std::move(value)); return *this;}

  private:

    Aws::String m_applicationName;
    bool m_applicationNameHasBeenSet = false;

    Aws::Utils::DateTime m_createTimestamp;
    bool m_createTimestampHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisAnalytics
} // namespace Aws

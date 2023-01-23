/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2_EXPORTS.h>
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kinesisanalyticsv2/model/Output.h>
#include <utility>

namespace Aws
{
namespace KinesisAnalyticsV2
{
namespace Model
{

  /**
   */
  class AddApplicationOutputRequest : public KinesisAnalyticsV2Request
  {
  public:
    AWS_KINESISANALYTICSV2_API AddApplicationOutputRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AddApplicationOutput"; }

    AWS_KINESISANALYTICSV2_API Aws::String SerializePayload() const override;

    AWS_KINESISANALYTICSV2_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the application to which you want to add the output
     * configuration.</p>
     */
    inline const Aws::String& GetApplicationName() const{ return m_applicationName; }

    /**
     * <p>The name of the application to which you want to add the output
     * configuration.</p>
     */
    inline bool ApplicationNameHasBeenSet() const { return m_applicationNameHasBeenSet; }

    /**
     * <p>The name of the application to which you want to add the output
     * configuration.</p>
     */
    inline void SetApplicationName(const Aws::String& value) { m_applicationNameHasBeenSet = true; m_applicationName = value; }

    /**
     * <p>The name of the application to which you want to add the output
     * configuration.</p>
     */
    inline void SetApplicationName(Aws::String&& value) { m_applicationNameHasBeenSet = true; m_applicationName = std::move(value); }

    /**
     * <p>The name of the application to which you want to add the output
     * configuration.</p>
     */
    inline void SetApplicationName(const char* value) { m_applicationNameHasBeenSet = true; m_applicationName.assign(value); }

    /**
     * <p>The name of the application to which you want to add the output
     * configuration.</p>
     */
    inline AddApplicationOutputRequest& WithApplicationName(const Aws::String& value) { SetApplicationName(value); return *this;}

    /**
     * <p>The name of the application to which you want to add the output
     * configuration.</p>
     */
    inline AddApplicationOutputRequest& WithApplicationName(Aws::String&& value) { SetApplicationName(std::move(value)); return *this;}

    /**
     * <p>The name of the application to which you want to add the output
     * configuration.</p>
     */
    inline AddApplicationOutputRequest& WithApplicationName(const char* value) { SetApplicationName(value); return *this;}


    /**
     * <p>The version of the application to which you want to add the output
     * configuration. You can use the <a>DescribeApplication</a> operation to get the
     * current application version. If the version specified is not the current
     * version, the <code>ConcurrentModificationException</code> is returned. </p>
     */
    inline long long GetCurrentApplicationVersionId() const{ return m_currentApplicationVersionId; }

    /**
     * <p>The version of the application to which you want to add the output
     * configuration. You can use the <a>DescribeApplication</a> operation to get the
     * current application version. If the version specified is not the current
     * version, the <code>ConcurrentModificationException</code> is returned. </p>
     */
    inline bool CurrentApplicationVersionIdHasBeenSet() const { return m_currentApplicationVersionIdHasBeenSet; }

    /**
     * <p>The version of the application to which you want to add the output
     * configuration. You can use the <a>DescribeApplication</a> operation to get the
     * current application version. If the version specified is not the current
     * version, the <code>ConcurrentModificationException</code> is returned. </p>
     */
    inline void SetCurrentApplicationVersionId(long long value) { m_currentApplicationVersionIdHasBeenSet = true; m_currentApplicationVersionId = value; }

    /**
     * <p>The version of the application to which you want to add the output
     * configuration. You can use the <a>DescribeApplication</a> operation to get the
     * current application version. If the version specified is not the current
     * version, the <code>ConcurrentModificationException</code> is returned. </p>
     */
    inline AddApplicationOutputRequest& WithCurrentApplicationVersionId(long long value) { SetCurrentApplicationVersionId(value); return *this;}


    /**
     * <p>An array of objects, each describing one output configuration. In the output
     * configuration, you specify the name of an in-application stream, a destination
     * (that is, a Kinesis data stream, a Kinesis Data Firehose delivery stream, or an
     * Amazon Lambda function), and record the formation to use when writing to the
     * destination.</p>
     */
    inline const Output& GetOutput() const{ return m_output; }

    /**
     * <p>An array of objects, each describing one output configuration. In the output
     * configuration, you specify the name of an in-application stream, a destination
     * (that is, a Kinesis data stream, a Kinesis Data Firehose delivery stream, or an
     * Amazon Lambda function), and record the formation to use when writing to the
     * destination.</p>
     */
    inline bool OutputHasBeenSet() const { return m_outputHasBeenSet; }

    /**
     * <p>An array of objects, each describing one output configuration. In the output
     * configuration, you specify the name of an in-application stream, a destination
     * (that is, a Kinesis data stream, a Kinesis Data Firehose delivery stream, or an
     * Amazon Lambda function), and record the formation to use when writing to the
     * destination.</p>
     */
    inline void SetOutput(const Output& value) { m_outputHasBeenSet = true; m_output = value; }

    /**
     * <p>An array of objects, each describing one output configuration. In the output
     * configuration, you specify the name of an in-application stream, a destination
     * (that is, a Kinesis data stream, a Kinesis Data Firehose delivery stream, or an
     * Amazon Lambda function), and record the formation to use when writing to the
     * destination.</p>
     */
    inline void SetOutput(Output&& value) { m_outputHasBeenSet = true; m_output = std::move(value); }

    /**
     * <p>An array of objects, each describing one output configuration. In the output
     * configuration, you specify the name of an in-application stream, a destination
     * (that is, a Kinesis data stream, a Kinesis Data Firehose delivery stream, or an
     * Amazon Lambda function), and record the formation to use when writing to the
     * destination.</p>
     */
    inline AddApplicationOutputRequest& WithOutput(const Output& value) { SetOutput(value); return *this;}

    /**
     * <p>An array of objects, each describing one output configuration. In the output
     * configuration, you specify the name of an in-application stream, a destination
     * (that is, a Kinesis data stream, a Kinesis Data Firehose delivery stream, or an
     * Amazon Lambda function), and record the formation to use when writing to the
     * destination.</p>
     */
    inline AddApplicationOutputRequest& WithOutput(Output&& value) { SetOutput(std::move(value)); return *this;}

  private:

    Aws::String m_applicationName;
    bool m_applicationNameHasBeenSet = false;

    long long m_currentApplicationVersionId;
    bool m_currentApplicationVersionIdHasBeenSet = false;

    Output m_output;
    bool m_outputHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws

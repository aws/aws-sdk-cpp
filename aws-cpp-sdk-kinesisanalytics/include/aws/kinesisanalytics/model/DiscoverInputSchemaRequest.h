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
#include <aws/kinesisanalytics/model/InputStartingPositionConfiguration.h>

namespace Aws
{
namespace KinesisAnalytics
{
namespace Model
{

  /**
   * <p/>
   */
  class AWS_KINESISANALYTICS_API DiscoverInputSchemaRequest : public KinesisAnalyticsRequest
  {
  public:
    DiscoverInputSchemaRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>Amazon Resource Name (ARN) of the streaming source.</p>
     */
    inline const Aws::String& GetResourceARN() const{ return m_resourceARN; }

    /**
     * <p>Amazon Resource Name (ARN) of the streaming source.</p>
     */
    inline void SetResourceARN(const Aws::String& value) { m_resourceARNHasBeenSet = true; m_resourceARN = value; }

    /**
     * <p>Amazon Resource Name (ARN) of the streaming source.</p>
     */
    inline void SetResourceARN(Aws::String&& value) { m_resourceARNHasBeenSet = true; m_resourceARN = value; }

    /**
     * <p>Amazon Resource Name (ARN) of the streaming source.</p>
     */
    inline void SetResourceARN(const char* value) { m_resourceARNHasBeenSet = true; m_resourceARN.assign(value); }

    /**
     * <p>Amazon Resource Name (ARN) of the streaming source.</p>
     */
    inline DiscoverInputSchemaRequest& WithResourceARN(const Aws::String& value) { SetResourceARN(value); return *this;}

    /**
     * <p>Amazon Resource Name (ARN) of the streaming source.</p>
     */
    inline DiscoverInputSchemaRequest& WithResourceARN(Aws::String&& value) { SetResourceARN(value); return *this;}

    /**
     * <p>Amazon Resource Name (ARN) of the streaming source.</p>
     */
    inline DiscoverInputSchemaRequest& WithResourceARN(const char* value) { SetResourceARN(value); return *this;}

    /**
     * <p>ARN of the IAM role that Amazon Kinesis Analytics can assume to access the
     * stream on your behalf.</p>
     */
    inline const Aws::String& GetRoleARN() const{ return m_roleARN; }

    /**
     * <p>ARN of the IAM role that Amazon Kinesis Analytics can assume to access the
     * stream on your behalf.</p>
     */
    inline void SetRoleARN(const Aws::String& value) { m_roleARNHasBeenSet = true; m_roleARN = value; }

    /**
     * <p>ARN of the IAM role that Amazon Kinesis Analytics can assume to access the
     * stream on your behalf.</p>
     */
    inline void SetRoleARN(Aws::String&& value) { m_roleARNHasBeenSet = true; m_roleARN = value; }

    /**
     * <p>ARN of the IAM role that Amazon Kinesis Analytics can assume to access the
     * stream on your behalf.</p>
     */
    inline void SetRoleARN(const char* value) { m_roleARNHasBeenSet = true; m_roleARN.assign(value); }

    /**
     * <p>ARN of the IAM role that Amazon Kinesis Analytics can assume to access the
     * stream on your behalf.</p>
     */
    inline DiscoverInputSchemaRequest& WithRoleARN(const Aws::String& value) { SetRoleARN(value); return *this;}

    /**
     * <p>ARN of the IAM role that Amazon Kinesis Analytics can assume to access the
     * stream on your behalf.</p>
     */
    inline DiscoverInputSchemaRequest& WithRoleARN(Aws::String&& value) { SetRoleARN(value); return *this;}

    /**
     * <p>ARN of the IAM role that Amazon Kinesis Analytics can assume to access the
     * stream on your behalf.</p>
     */
    inline DiscoverInputSchemaRequest& WithRoleARN(const char* value) { SetRoleARN(value); return *this;}

    /**
     * <p>Point at which you want Amazon Kinesis Analytics to start reading records
     * from the specified streaming source discovery purposes.</p>
     */
    inline const InputStartingPositionConfiguration& GetInputStartingPositionConfiguration() const{ return m_inputStartingPositionConfiguration; }

    /**
     * <p>Point at which you want Amazon Kinesis Analytics to start reading records
     * from the specified streaming source discovery purposes.</p>
     */
    inline void SetInputStartingPositionConfiguration(const InputStartingPositionConfiguration& value) { m_inputStartingPositionConfigurationHasBeenSet = true; m_inputStartingPositionConfiguration = value; }

    /**
     * <p>Point at which you want Amazon Kinesis Analytics to start reading records
     * from the specified streaming source discovery purposes.</p>
     */
    inline void SetInputStartingPositionConfiguration(InputStartingPositionConfiguration&& value) { m_inputStartingPositionConfigurationHasBeenSet = true; m_inputStartingPositionConfiguration = value; }

    /**
     * <p>Point at which you want Amazon Kinesis Analytics to start reading records
     * from the specified streaming source discovery purposes.</p>
     */
    inline DiscoverInputSchemaRequest& WithInputStartingPositionConfiguration(const InputStartingPositionConfiguration& value) { SetInputStartingPositionConfiguration(value); return *this;}

    /**
     * <p>Point at which you want Amazon Kinesis Analytics to start reading records
     * from the specified streaming source discovery purposes.</p>
     */
    inline DiscoverInputSchemaRequest& WithInputStartingPositionConfiguration(InputStartingPositionConfiguration&& value) { SetInputStartingPositionConfiguration(value); return *this;}

  private:
    Aws::String m_resourceARN;
    bool m_resourceARNHasBeenSet;
    Aws::String m_roleARN;
    bool m_roleARNHasBeenSet;
    InputStartingPositionConfiguration m_inputStartingPositionConfiguration;
    bool m_inputStartingPositionConfigurationHasBeenSet;
  };

} // namespace Model
} // namespace KinesisAnalytics
} // namespace Aws

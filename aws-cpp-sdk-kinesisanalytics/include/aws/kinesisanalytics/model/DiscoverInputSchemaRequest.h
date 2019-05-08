/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/kinesisanalytics/model/S3Configuration.h>
#include <aws/kinesisanalytics/model/InputProcessingConfiguration.h>
#include <utility>

namespace Aws
{
namespace KinesisAnalytics
{
namespace Model
{

  /**
   */
  class AWS_KINESISANALYTICS_API DiscoverInputSchemaRequest : public KinesisAnalyticsRequest
  {
  public:
    DiscoverInputSchemaRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DiscoverInputSchema"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Amazon Resource Name (ARN) of the streaming source.</p>
     */
    inline const Aws::String& GetResourceARN() const{ return m_resourceARN; }

    /**
     * <p>Amazon Resource Name (ARN) of the streaming source.</p>
     */
    inline bool ResourceARNHasBeenSet() const { return m_resourceARNHasBeenSet; }

    /**
     * <p>Amazon Resource Name (ARN) of the streaming source.</p>
     */
    inline void SetResourceARN(const Aws::String& value) { m_resourceARNHasBeenSet = true; m_resourceARN = value; }

    /**
     * <p>Amazon Resource Name (ARN) of the streaming source.</p>
     */
    inline void SetResourceARN(Aws::String&& value) { m_resourceARNHasBeenSet = true; m_resourceARN = std::move(value); }

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
    inline DiscoverInputSchemaRequest& WithResourceARN(Aws::String&& value) { SetResourceARN(std::move(value)); return *this;}

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
    inline bool RoleARNHasBeenSet() const { return m_roleARNHasBeenSet; }

    /**
     * <p>ARN of the IAM role that Amazon Kinesis Analytics can assume to access the
     * stream on your behalf.</p>
     */
    inline void SetRoleARN(const Aws::String& value) { m_roleARNHasBeenSet = true; m_roleARN = value; }

    /**
     * <p>ARN of the IAM role that Amazon Kinesis Analytics can assume to access the
     * stream on your behalf.</p>
     */
    inline void SetRoleARN(Aws::String&& value) { m_roleARNHasBeenSet = true; m_roleARN = std::move(value); }

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
    inline DiscoverInputSchemaRequest& WithRoleARN(Aws::String&& value) { SetRoleARN(std::move(value)); return *this;}

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
    inline bool InputStartingPositionConfigurationHasBeenSet() const { return m_inputStartingPositionConfigurationHasBeenSet; }

    /**
     * <p>Point at which you want Amazon Kinesis Analytics to start reading records
     * from the specified streaming source discovery purposes.</p>
     */
    inline void SetInputStartingPositionConfiguration(const InputStartingPositionConfiguration& value) { m_inputStartingPositionConfigurationHasBeenSet = true; m_inputStartingPositionConfiguration = value; }

    /**
     * <p>Point at which you want Amazon Kinesis Analytics to start reading records
     * from the specified streaming source discovery purposes.</p>
     */
    inline void SetInputStartingPositionConfiguration(InputStartingPositionConfiguration&& value) { m_inputStartingPositionConfigurationHasBeenSet = true; m_inputStartingPositionConfiguration = std::move(value); }

    /**
     * <p>Point at which you want Amazon Kinesis Analytics to start reading records
     * from the specified streaming source discovery purposes.</p>
     */
    inline DiscoverInputSchemaRequest& WithInputStartingPositionConfiguration(const InputStartingPositionConfiguration& value) { SetInputStartingPositionConfiguration(value); return *this;}

    /**
     * <p>Point at which you want Amazon Kinesis Analytics to start reading records
     * from the specified streaming source discovery purposes.</p>
     */
    inline DiscoverInputSchemaRequest& WithInputStartingPositionConfiguration(InputStartingPositionConfiguration&& value) { SetInputStartingPositionConfiguration(std::move(value)); return *this;}


    /**
     * <p>Specify this parameter to discover a schema from data in an Amazon S3
     * object.</p>
     */
    inline const S3Configuration& GetS3Configuration() const{ return m_s3Configuration; }

    /**
     * <p>Specify this parameter to discover a schema from data in an Amazon S3
     * object.</p>
     */
    inline bool S3ConfigurationHasBeenSet() const { return m_s3ConfigurationHasBeenSet; }

    /**
     * <p>Specify this parameter to discover a schema from data in an Amazon S3
     * object.</p>
     */
    inline void SetS3Configuration(const S3Configuration& value) { m_s3ConfigurationHasBeenSet = true; m_s3Configuration = value; }

    /**
     * <p>Specify this parameter to discover a schema from data in an Amazon S3
     * object.</p>
     */
    inline void SetS3Configuration(S3Configuration&& value) { m_s3ConfigurationHasBeenSet = true; m_s3Configuration = std::move(value); }

    /**
     * <p>Specify this parameter to discover a schema from data in an Amazon S3
     * object.</p>
     */
    inline DiscoverInputSchemaRequest& WithS3Configuration(const S3Configuration& value) { SetS3Configuration(value); return *this;}

    /**
     * <p>Specify this parameter to discover a schema from data in an Amazon S3
     * object.</p>
     */
    inline DiscoverInputSchemaRequest& WithS3Configuration(S3Configuration&& value) { SetS3Configuration(std::move(value)); return *this;}


    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/API_InputProcessingConfiguration.html">InputProcessingConfiguration</a>
     * to use to preprocess the records before discovering the schema of the
     * records.</p>
     */
    inline const InputProcessingConfiguration& GetInputProcessingConfiguration() const{ return m_inputProcessingConfiguration; }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/API_InputProcessingConfiguration.html">InputProcessingConfiguration</a>
     * to use to preprocess the records before discovering the schema of the
     * records.</p>
     */
    inline bool InputProcessingConfigurationHasBeenSet() const { return m_inputProcessingConfigurationHasBeenSet; }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/API_InputProcessingConfiguration.html">InputProcessingConfiguration</a>
     * to use to preprocess the records before discovering the schema of the
     * records.</p>
     */
    inline void SetInputProcessingConfiguration(const InputProcessingConfiguration& value) { m_inputProcessingConfigurationHasBeenSet = true; m_inputProcessingConfiguration = value; }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/API_InputProcessingConfiguration.html">InputProcessingConfiguration</a>
     * to use to preprocess the records before discovering the schema of the
     * records.</p>
     */
    inline void SetInputProcessingConfiguration(InputProcessingConfiguration&& value) { m_inputProcessingConfigurationHasBeenSet = true; m_inputProcessingConfiguration = std::move(value); }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/API_InputProcessingConfiguration.html">InputProcessingConfiguration</a>
     * to use to preprocess the records before discovering the schema of the
     * records.</p>
     */
    inline DiscoverInputSchemaRequest& WithInputProcessingConfiguration(const InputProcessingConfiguration& value) { SetInputProcessingConfiguration(value); return *this;}

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/API_InputProcessingConfiguration.html">InputProcessingConfiguration</a>
     * to use to preprocess the records before discovering the schema of the
     * records.</p>
     */
    inline DiscoverInputSchemaRequest& WithInputProcessingConfiguration(InputProcessingConfiguration&& value) { SetInputProcessingConfiguration(std::move(value)); return *this;}

  private:

    Aws::String m_resourceARN;
    bool m_resourceARNHasBeenSet;

    Aws::String m_roleARN;
    bool m_roleARNHasBeenSet;

    InputStartingPositionConfiguration m_inputStartingPositionConfiguration;
    bool m_inputStartingPositionConfigurationHasBeenSet;

    S3Configuration m_s3Configuration;
    bool m_s3ConfigurationHasBeenSet;

    InputProcessingConfiguration m_inputProcessingConfiguration;
    bool m_inputProcessingConfigurationHasBeenSet;
  };

} // namespace Model
} // namespace KinesisAnalytics
} // namespace Aws

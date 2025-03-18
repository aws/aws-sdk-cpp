/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2_EXPORTS.h>
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kinesisanalyticsv2/model/InputStartingPositionConfiguration.h>
#include <aws/kinesisanalyticsv2/model/S3Configuration.h>
#include <aws/kinesisanalyticsv2/model/InputProcessingConfiguration.h>
#include <utility>

namespace Aws
{
namespace KinesisAnalyticsV2
{
namespace Model
{

  /**
   */
  class DiscoverInputSchemaRequest : public KinesisAnalyticsV2Request
  {
  public:
    AWS_KINESISANALYTICSV2_API DiscoverInputSchemaRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DiscoverInputSchema"; }

    AWS_KINESISANALYTICSV2_API Aws::String SerializePayload() const override;

    AWS_KINESISANALYTICSV2_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the streaming source.</p>
     */
    inline const Aws::String& GetResourceARN() const { return m_resourceARN; }
    inline bool ResourceARNHasBeenSet() const { return m_resourceARNHasBeenSet; }
    template<typename ResourceARNT = Aws::String>
    void SetResourceARN(ResourceARNT&& value) { m_resourceARNHasBeenSet = true; m_resourceARN = std::forward<ResourceARNT>(value); }
    template<typename ResourceARNT = Aws::String>
    DiscoverInputSchemaRequest& WithResourceARN(ResourceARNT&& value) { SetResourceARN(std::forward<ResourceARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the role that is used to access the streaming source.</p>
     */
    inline const Aws::String& GetServiceExecutionRole() const { return m_serviceExecutionRole; }
    inline bool ServiceExecutionRoleHasBeenSet() const { return m_serviceExecutionRoleHasBeenSet; }
    template<typename ServiceExecutionRoleT = Aws::String>
    void SetServiceExecutionRole(ServiceExecutionRoleT&& value) { m_serviceExecutionRoleHasBeenSet = true; m_serviceExecutionRole = std::forward<ServiceExecutionRoleT>(value); }
    template<typename ServiceExecutionRoleT = Aws::String>
    DiscoverInputSchemaRequest& WithServiceExecutionRole(ServiceExecutionRoleT&& value) { SetServiceExecutionRole(std::forward<ServiceExecutionRoleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The point at which you want Kinesis Data Analytics to start reading records
     * from the specified streaming source for discovery purposes.</p>
     */
    inline const InputStartingPositionConfiguration& GetInputStartingPositionConfiguration() const { return m_inputStartingPositionConfiguration; }
    inline bool InputStartingPositionConfigurationHasBeenSet() const { return m_inputStartingPositionConfigurationHasBeenSet; }
    template<typename InputStartingPositionConfigurationT = InputStartingPositionConfiguration>
    void SetInputStartingPositionConfiguration(InputStartingPositionConfigurationT&& value) { m_inputStartingPositionConfigurationHasBeenSet = true; m_inputStartingPositionConfiguration = std::forward<InputStartingPositionConfigurationT>(value); }
    template<typename InputStartingPositionConfigurationT = InputStartingPositionConfiguration>
    DiscoverInputSchemaRequest& WithInputStartingPositionConfiguration(InputStartingPositionConfigurationT&& value) { SetInputStartingPositionConfiguration(std::forward<InputStartingPositionConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify this parameter to discover a schema from data in an Amazon S3
     * object.</p>
     */
    inline const S3Configuration& GetS3Configuration() const { return m_s3Configuration; }
    inline bool S3ConfigurationHasBeenSet() const { return m_s3ConfigurationHasBeenSet; }
    template<typename S3ConfigurationT = S3Configuration>
    void SetS3Configuration(S3ConfigurationT&& value) { m_s3ConfigurationHasBeenSet = true; m_s3Configuration = std::forward<S3ConfigurationT>(value); }
    template<typename S3ConfigurationT = S3Configuration>
    DiscoverInputSchemaRequest& WithS3Configuration(S3ConfigurationT&& value) { SetS3Configuration(std::forward<S3ConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <a>InputProcessingConfiguration</a> to use to preprocess the records
     * before discovering the schema of the records.</p>
     */
    inline const InputProcessingConfiguration& GetInputProcessingConfiguration() const { return m_inputProcessingConfiguration; }
    inline bool InputProcessingConfigurationHasBeenSet() const { return m_inputProcessingConfigurationHasBeenSet; }
    template<typename InputProcessingConfigurationT = InputProcessingConfiguration>
    void SetInputProcessingConfiguration(InputProcessingConfigurationT&& value) { m_inputProcessingConfigurationHasBeenSet = true; m_inputProcessingConfiguration = std::forward<InputProcessingConfigurationT>(value); }
    template<typename InputProcessingConfigurationT = InputProcessingConfiguration>
    DiscoverInputSchemaRequest& WithInputProcessingConfiguration(InputProcessingConfigurationT&& value) { SetInputProcessingConfiguration(std::forward<InputProcessingConfigurationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_resourceARN;
    bool m_resourceARNHasBeenSet = false;

    Aws::String m_serviceExecutionRole;
    bool m_serviceExecutionRoleHasBeenSet = false;

    InputStartingPositionConfiguration m_inputStartingPositionConfiguration;
    bool m_inputStartingPositionConfigurationHasBeenSet = false;

    S3Configuration m_s3Configuration;
    bool m_s3ConfigurationHasBeenSet = false;

    InputProcessingConfiguration m_inputProcessingConfiguration;
    bool m_inputProcessingConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws

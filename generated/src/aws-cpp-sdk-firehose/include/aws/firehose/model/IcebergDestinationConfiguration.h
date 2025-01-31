﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/firehose/Firehose_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/firehose/model/SchemaEvolutionConfiguration.h>
#include <aws/firehose/model/TableCreationConfiguration.h>
#include <aws/firehose/model/BufferingHints.h>
#include <aws/firehose/model/CloudWatchLoggingOptions.h>
#include <aws/firehose/model/ProcessingConfiguration.h>
#include <aws/firehose/model/IcebergS3BackupMode.h>
#include <aws/firehose/model/RetryOptions.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/firehose/model/CatalogConfiguration.h>
#include <aws/firehose/model/S3DestinationConfiguration.h>
#include <aws/firehose/model/DestinationTableConfiguration.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Firehose
{
namespace Model
{

  /**
   * <p> Specifies the destination configure settings for Apache Iceberg Table.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/firehose-2015-08-04/IcebergDestinationConfiguration">AWS
   * API Reference</a></p>
   */
  class IcebergDestinationConfiguration
  {
  public:
    AWS_FIREHOSE_API IcebergDestinationConfiguration();
    AWS_FIREHOSE_API IcebergDestinationConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API IcebergDestinationConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> Provides a list of <code>DestinationTableConfigurations</code> which
     * Firehose uses to deliver data to Apache Iceberg Tables. Firehose will write data
     * with insert if table specific configuration is not provided here.</p>
     */
    inline const Aws::Vector<DestinationTableConfiguration>& GetDestinationTableConfigurationList() const{ return m_destinationTableConfigurationList; }
    inline bool DestinationTableConfigurationListHasBeenSet() const { return m_destinationTableConfigurationListHasBeenSet; }
    inline void SetDestinationTableConfigurationList(const Aws::Vector<DestinationTableConfiguration>& value) { m_destinationTableConfigurationListHasBeenSet = true; m_destinationTableConfigurationList = value; }
    inline void SetDestinationTableConfigurationList(Aws::Vector<DestinationTableConfiguration>&& value) { m_destinationTableConfigurationListHasBeenSet = true; m_destinationTableConfigurationList = std::move(value); }
    inline IcebergDestinationConfiguration& WithDestinationTableConfigurationList(const Aws::Vector<DestinationTableConfiguration>& value) { SetDestinationTableConfigurationList(value); return *this;}
    inline IcebergDestinationConfiguration& WithDestinationTableConfigurationList(Aws::Vector<DestinationTableConfiguration>&& value) { SetDestinationTableConfigurationList(std::move(value)); return *this;}
    inline IcebergDestinationConfiguration& AddDestinationTableConfigurationList(const DestinationTableConfiguration& value) { m_destinationTableConfigurationListHasBeenSet = true; m_destinationTableConfigurationList.push_back(value); return *this; }
    inline IcebergDestinationConfiguration& AddDestinationTableConfigurationList(DestinationTableConfiguration&& value) { m_destinationTableConfigurationListHasBeenSet = true; m_destinationTableConfigurationList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The configuration to enable automatic schema evolution.</p> <p>Amazon Data
     * Firehose is in preview release and is subject to change.</p>
     */
    inline const SchemaEvolutionConfiguration& GetSchemaEvolutionConfiguration() const{ return m_schemaEvolutionConfiguration; }
    inline bool SchemaEvolutionConfigurationHasBeenSet() const { return m_schemaEvolutionConfigurationHasBeenSet; }
    inline void SetSchemaEvolutionConfiguration(const SchemaEvolutionConfiguration& value) { m_schemaEvolutionConfigurationHasBeenSet = true; m_schemaEvolutionConfiguration = value; }
    inline void SetSchemaEvolutionConfiguration(SchemaEvolutionConfiguration&& value) { m_schemaEvolutionConfigurationHasBeenSet = true; m_schemaEvolutionConfiguration = std::move(value); }
    inline IcebergDestinationConfiguration& WithSchemaEvolutionConfiguration(const SchemaEvolutionConfiguration& value) { SetSchemaEvolutionConfiguration(value); return *this;}
    inline IcebergDestinationConfiguration& WithSchemaEvolutionConfiguration(SchemaEvolutionConfiguration&& value) { SetSchemaEvolutionConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration to enable automatic table creation.</p> <p>Amazon Data
     * Firehose is in preview release and is subject to change.</p>
     */
    inline const TableCreationConfiguration& GetTableCreationConfiguration() const{ return m_tableCreationConfiguration; }
    inline bool TableCreationConfigurationHasBeenSet() const { return m_tableCreationConfigurationHasBeenSet; }
    inline void SetTableCreationConfiguration(const TableCreationConfiguration& value) { m_tableCreationConfigurationHasBeenSet = true; m_tableCreationConfiguration = value; }
    inline void SetTableCreationConfiguration(TableCreationConfiguration&& value) { m_tableCreationConfigurationHasBeenSet = true; m_tableCreationConfiguration = std::move(value); }
    inline IcebergDestinationConfiguration& WithTableCreationConfiguration(const TableCreationConfiguration& value) { SetTableCreationConfiguration(value); return *this;}
    inline IcebergDestinationConfiguration& WithTableCreationConfiguration(TableCreationConfiguration&& value) { SetTableCreationConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const BufferingHints& GetBufferingHints() const{ return m_bufferingHints; }
    inline bool BufferingHintsHasBeenSet() const { return m_bufferingHintsHasBeenSet; }
    inline void SetBufferingHints(const BufferingHints& value) { m_bufferingHintsHasBeenSet = true; m_bufferingHints = value; }
    inline void SetBufferingHints(BufferingHints&& value) { m_bufferingHintsHasBeenSet = true; m_bufferingHints = std::move(value); }
    inline IcebergDestinationConfiguration& WithBufferingHints(const BufferingHints& value) { SetBufferingHints(value); return *this;}
    inline IcebergDestinationConfiguration& WithBufferingHints(BufferingHints&& value) { SetBufferingHints(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const CloudWatchLoggingOptions& GetCloudWatchLoggingOptions() const{ return m_cloudWatchLoggingOptions; }
    inline bool CloudWatchLoggingOptionsHasBeenSet() const { return m_cloudWatchLoggingOptionsHasBeenSet; }
    inline void SetCloudWatchLoggingOptions(const CloudWatchLoggingOptions& value) { m_cloudWatchLoggingOptionsHasBeenSet = true; m_cloudWatchLoggingOptions = value; }
    inline void SetCloudWatchLoggingOptions(CloudWatchLoggingOptions&& value) { m_cloudWatchLoggingOptionsHasBeenSet = true; m_cloudWatchLoggingOptions = std::move(value); }
    inline IcebergDestinationConfiguration& WithCloudWatchLoggingOptions(const CloudWatchLoggingOptions& value) { SetCloudWatchLoggingOptions(value); return *this;}
    inline IcebergDestinationConfiguration& WithCloudWatchLoggingOptions(CloudWatchLoggingOptions&& value) { SetCloudWatchLoggingOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const ProcessingConfiguration& GetProcessingConfiguration() const{ return m_processingConfiguration; }
    inline bool ProcessingConfigurationHasBeenSet() const { return m_processingConfigurationHasBeenSet; }
    inline void SetProcessingConfiguration(const ProcessingConfiguration& value) { m_processingConfigurationHasBeenSet = true; m_processingConfiguration = value; }
    inline void SetProcessingConfiguration(ProcessingConfiguration&& value) { m_processingConfigurationHasBeenSet = true; m_processingConfiguration = std::move(value); }
    inline IcebergDestinationConfiguration& WithProcessingConfiguration(const ProcessingConfiguration& value) { SetProcessingConfiguration(value); return *this;}
    inline IcebergDestinationConfiguration& WithProcessingConfiguration(ProcessingConfiguration&& value) { SetProcessingConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Describes how Firehose will backup records. Currently,S3 backup only
     * supports <code>FailedDataOnly</code>. </p>
     */
    inline const IcebergS3BackupMode& GetS3BackupMode() const{ return m_s3BackupMode; }
    inline bool S3BackupModeHasBeenSet() const { return m_s3BackupModeHasBeenSet; }
    inline void SetS3BackupMode(const IcebergS3BackupMode& value) { m_s3BackupModeHasBeenSet = true; m_s3BackupMode = value; }
    inline void SetS3BackupMode(IcebergS3BackupMode&& value) { m_s3BackupModeHasBeenSet = true; m_s3BackupMode = std::move(value); }
    inline IcebergDestinationConfiguration& WithS3BackupMode(const IcebergS3BackupMode& value) { SetS3BackupMode(value); return *this;}
    inline IcebergDestinationConfiguration& WithS3BackupMode(IcebergS3BackupMode&& value) { SetS3BackupMode(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const RetryOptions& GetRetryOptions() const{ return m_retryOptions; }
    inline bool RetryOptionsHasBeenSet() const { return m_retryOptionsHasBeenSet; }
    inline void SetRetryOptions(const RetryOptions& value) { m_retryOptionsHasBeenSet = true; m_retryOptions = value; }
    inline void SetRetryOptions(RetryOptions&& value) { m_retryOptionsHasBeenSet = true; m_retryOptions = std::move(value); }
    inline IcebergDestinationConfiguration& WithRetryOptions(const RetryOptions& value) { SetRetryOptions(value); return *this;}
    inline IcebergDestinationConfiguration& WithRetryOptions(RetryOptions&& value) { SetRetryOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) of the IAM role to be assumed by Firehose for
     * calling Apache Iceberg Tables. </p>
     */
    inline const Aws::String& GetRoleARN() const{ return m_roleARN; }
    inline bool RoleARNHasBeenSet() const { return m_roleARNHasBeenSet; }
    inline void SetRoleARN(const Aws::String& value) { m_roleARNHasBeenSet = true; m_roleARN = value; }
    inline void SetRoleARN(Aws::String&& value) { m_roleARNHasBeenSet = true; m_roleARN = std::move(value); }
    inline void SetRoleARN(const char* value) { m_roleARNHasBeenSet = true; m_roleARN.assign(value); }
    inline IcebergDestinationConfiguration& WithRoleARN(const Aws::String& value) { SetRoleARN(value); return *this;}
    inline IcebergDestinationConfiguration& WithRoleARN(Aws::String&& value) { SetRoleARN(std::move(value)); return *this;}
    inline IcebergDestinationConfiguration& WithRoleARN(const char* value) { SetRoleARN(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Describes whether all incoming data for this delivery stream will be append
     * only (inserts only and not for updates and deletes) for Iceberg delivery. This
     * feature is only applicable for Apache Iceberg Tables.</p> <p>The default value
     * is false. If you set this value to true, Firehose automatically increases the
     * throughput limit of a stream based on the throttling levels of the stream. If
     * you set this parameter to true for a stream with updates and deletes, you will
     * see out of order delivery. </p>
     */
    inline bool GetAppendOnly() const{ return m_appendOnly; }
    inline bool AppendOnlyHasBeenSet() const { return m_appendOnlyHasBeenSet; }
    inline void SetAppendOnly(bool value) { m_appendOnlyHasBeenSet = true; m_appendOnly = value; }
    inline IcebergDestinationConfiguration& WithAppendOnly(bool value) { SetAppendOnly(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Configuration describing where the destination Apache Iceberg Tables are
     * persisted. </p>
     */
    inline const CatalogConfiguration& GetCatalogConfiguration() const{ return m_catalogConfiguration; }
    inline bool CatalogConfigurationHasBeenSet() const { return m_catalogConfigurationHasBeenSet; }
    inline void SetCatalogConfiguration(const CatalogConfiguration& value) { m_catalogConfigurationHasBeenSet = true; m_catalogConfiguration = value; }
    inline void SetCatalogConfiguration(CatalogConfiguration&& value) { m_catalogConfigurationHasBeenSet = true; m_catalogConfiguration = std::move(value); }
    inline IcebergDestinationConfiguration& WithCatalogConfiguration(const CatalogConfiguration& value) { SetCatalogConfiguration(value); return *this;}
    inline IcebergDestinationConfiguration& WithCatalogConfiguration(CatalogConfiguration&& value) { SetCatalogConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const S3DestinationConfiguration& GetS3Configuration() const{ return m_s3Configuration; }
    inline bool S3ConfigurationHasBeenSet() const { return m_s3ConfigurationHasBeenSet; }
    inline void SetS3Configuration(const S3DestinationConfiguration& value) { m_s3ConfigurationHasBeenSet = true; m_s3Configuration = value; }
    inline void SetS3Configuration(S3DestinationConfiguration&& value) { m_s3ConfigurationHasBeenSet = true; m_s3Configuration = std::move(value); }
    inline IcebergDestinationConfiguration& WithS3Configuration(const S3DestinationConfiguration& value) { SetS3Configuration(value); return *this;}
    inline IcebergDestinationConfiguration& WithS3Configuration(S3DestinationConfiguration&& value) { SetS3Configuration(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Vector<DestinationTableConfiguration> m_destinationTableConfigurationList;
    bool m_destinationTableConfigurationListHasBeenSet = false;

    SchemaEvolutionConfiguration m_schemaEvolutionConfiguration;
    bool m_schemaEvolutionConfigurationHasBeenSet = false;

    TableCreationConfiguration m_tableCreationConfiguration;
    bool m_tableCreationConfigurationHasBeenSet = false;

    BufferingHints m_bufferingHints;
    bool m_bufferingHintsHasBeenSet = false;

    CloudWatchLoggingOptions m_cloudWatchLoggingOptions;
    bool m_cloudWatchLoggingOptionsHasBeenSet = false;

    ProcessingConfiguration m_processingConfiguration;
    bool m_processingConfigurationHasBeenSet = false;

    IcebergS3BackupMode m_s3BackupMode;
    bool m_s3BackupModeHasBeenSet = false;

    RetryOptions m_retryOptions;
    bool m_retryOptionsHasBeenSet = false;

    Aws::String m_roleARN;
    bool m_roleARNHasBeenSet = false;

    bool m_appendOnly;
    bool m_appendOnlyHasBeenSet = false;

    CatalogConfiguration m_catalogConfiguration;
    bool m_catalogConfigurationHasBeenSet = false;

    S3DestinationConfiguration m_s3Configuration;
    bool m_s3ConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace Firehose
} // namespace Aws

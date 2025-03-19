/**
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
   * <p> Describes an update for a destination in Apache Iceberg Tables.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/firehose-2015-08-04/IcebergDestinationUpdate">AWS
   * API Reference</a></p>
   */
  class IcebergDestinationUpdate
  {
  public:
    AWS_FIREHOSE_API IcebergDestinationUpdate() = default;
    AWS_FIREHOSE_API IcebergDestinationUpdate(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API IcebergDestinationUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> Provides a list of <code>DestinationTableConfigurations</code> which
     * Firehose uses to deliver data to Apache Iceberg Tables. Firehose will write data
     * with insert if table specific configuration is not provided here.</p>
     */
    inline const Aws::Vector<DestinationTableConfiguration>& GetDestinationTableConfigurationList() const { return m_destinationTableConfigurationList; }
    inline bool DestinationTableConfigurationListHasBeenSet() const { return m_destinationTableConfigurationListHasBeenSet; }
    template<typename DestinationTableConfigurationListT = Aws::Vector<DestinationTableConfiguration>>
    void SetDestinationTableConfigurationList(DestinationTableConfigurationListT&& value) { m_destinationTableConfigurationListHasBeenSet = true; m_destinationTableConfigurationList = std::forward<DestinationTableConfigurationListT>(value); }
    template<typename DestinationTableConfigurationListT = Aws::Vector<DestinationTableConfiguration>>
    IcebergDestinationUpdate& WithDestinationTableConfigurationList(DestinationTableConfigurationListT&& value) { SetDestinationTableConfigurationList(std::forward<DestinationTableConfigurationListT>(value)); return *this;}
    template<typename DestinationTableConfigurationListT = DestinationTableConfiguration>
    IcebergDestinationUpdate& AddDestinationTableConfigurationList(DestinationTableConfigurationListT&& value) { m_destinationTableConfigurationListHasBeenSet = true; m_destinationTableConfigurationList.emplace_back(std::forward<DestinationTableConfigurationListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The configuration to enable automatic schema evolution. </p> <p>Amazon Data
     * Firehose is in preview release and is subject to change.</p>
     */
    inline const SchemaEvolutionConfiguration& GetSchemaEvolutionConfiguration() const { return m_schemaEvolutionConfiguration; }
    inline bool SchemaEvolutionConfigurationHasBeenSet() const { return m_schemaEvolutionConfigurationHasBeenSet; }
    template<typename SchemaEvolutionConfigurationT = SchemaEvolutionConfiguration>
    void SetSchemaEvolutionConfiguration(SchemaEvolutionConfigurationT&& value) { m_schemaEvolutionConfigurationHasBeenSet = true; m_schemaEvolutionConfiguration = std::forward<SchemaEvolutionConfigurationT>(value); }
    template<typename SchemaEvolutionConfigurationT = SchemaEvolutionConfiguration>
    IcebergDestinationUpdate& WithSchemaEvolutionConfiguration(SchemaEvolutionConfigurationT&& value) { SetSchemaEvolutionConfiguration(std::forward<SchemaEvolutionConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The configuration to enable automatic table creation. </p> <p>Amazon Data
     * Firehose is in preview release and is subject to change.</p>
     */
    inline const TableCreationConfiguration& GetTableCreationConfiguration() const { return m_tableCreationConfiguration; }
    inline bool TableCreationConfigurationHasBeenSet() const { return m_tableCreationConfigurationHasBeenSet; }
    template<typename TableCreationConfigurationT = TableCreationConfiguration>
    void SetTableCreationConfiguration(TableCreationConfigurationT&& value) { m_tableCreationConfigurationHasBeenSet = true; m_tableCreationConfiguration = std::forward<TableCreationConfigurationT>(value); }
    template<typename TableCreationConfigurationT = TableCreationConfiguration>
    IcebergDestinationUpdate& WithTableCreationConfiguration(TableCreationConfigurationT&& value) { SetTableCreationConfiguration(std::forward<TableCreationConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const BufferingHints& GetBufferingHints() const { return m_bufferingHints; }
    inline bool BufferingHintsHasBeenSet() const { return m_bufferingHintsHasBeenSet; }
    template<typename BufferingHintsT = BufferingHints>
    void SetBufferingHints(BufferingHintsT&& value) { m_bufferingHintsHasBeenSet = true; m_bufferingHints = std::forward<BufferingHintsT>(value); }
    template<typename BufferingHintsT = BufferingHints>
    IcebergDestinationUpdate& WithBufferingHints(BufferingHintsT&& value) { SetBufferingHints(std::forward<BufferingHintsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const CloudWatchLoggingOptions& GetCloudWatchLoggingOptions() const { return m_cloudWatchLoggingOptions; }
    inline bool CloudWatchLoggingOptionsHasBeenSet() const { return m_cloudWatchLoggingOptionsHasBeenSet; }
    template<typename CloudWatchLoggingOptionsT = CloudWatchLoggingOptions>
    void SetCloudWatchLoggingOptions(CloudWatchLoggingOptionsT&& value) { m_cloudWatchLoggingOptionsHasBeenSet = true; m_cloudWatchLoggingOptions = std::forward<CloudWatchLoggingOptionsT>(value); }
    template<typename CloudWatchLoggingOptionsT = CloudWatchLoggingOptions>
    IcebergDestinationUpdate& WithCloudWatchLoggingOptions(CloudWatchLoggingOptionsT&& value) { SetCloudWatchLoggingOptions(std::forward<CloudWatchLoggingOptionsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ProcessingConfiguration& GetProcessingConfiguration() const { return m_processingConfiguration; }
    inline bool ProcessingConfigurationHasBeenSet() const { return m_processingConfigurationHasBeenSet; }
    template<typename ProcessingConfigurationT = ProcessingConfiguration>
    void SetProcessingConfiguration(ProcessingConfigurationT&& value) { m_processingConfigurationHasBeenSet = true; m_processingConfiguration = std::forward<ProcessingConfigurationT>(value); }
    template<typename ProcessingConfigurationT = ProcessingConfiguration>
    IcebergDestinationUpdate& WithProcessingConfiguration(ProcessingConfigurationT&& value) { SetProcessingConfiguration(std::forward<ProcessingConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Describes how Firehose will backup records. Currently,Firehose only supports
     * <code>FailedDataOnly</code>. </p>
     */
    inline IcebergS3BackupMode GetS3BackupMode() const { return m_s3BackupMode; }
    inline bool S3BackupModeHasBeenSet() const { return m_s3BackupModeHasBeenSet; }
    inline void SetS3BackupMode(IcebergS3BackupMode value) { m_s3BackupModeHasBeenSet = true; m_s3BackupMode = value; }
    inline IcebergDestinationUpdate& WithS3BackupMode(IcebergS3BackupMode value) { SetS3BackupMode(value); return *this;}
    ///@}

    ///@{
    
    inline const RetryOptions& GetRetryOptions() const { return m_retryOptions; }
    inline bool RetryOptionsHasBeenSet() const { return m_retryOptionsHasBeenSet; }
    template<typename RetryOptionsT = RetryOptions>
    void SetRetryOptions(RetryOptionsT&& value) { m_retryOptionsHasBeenSet = true; m_retryOptions = std::forward<RetryOptionsT>(value); }
    template<typename RetryOptionsT = RetryOptions>
    IcebergDestinationUpdate& WithRetryOptions(RetryOptionsT&& value) { SetRetryOptions(std::forward<RetryOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) of the IAM role to be assumed by Firehose for
     * calling Apache Iceberg Tables. </p>
     */
    inline const Aws::String& GetRoleARN() const { return m_roleARN; }
    inline bool RoleARNHasBeenSet() const { return m_roleARNHasBeenSet; }
    template<typename RoleARNT = Aws::String>
    void SetRoleARN(RoleARNT&& value) { m_roleARNHasBeenSet = true; m_roleARN = std::forward<RoleARNT>(value); }
    template<typename RoleARNT = Aws::String>
    IcebergDestinationUpdate& WithRoleARN(RoleARNT&& value) { SetRoleARN(std::forward<RoleARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Describes whether all incoming data for this delivery stream will be append
     * only (inserts only and not for updates and deletes) for Iceberg delivery. This
     * feature is only applicable for Apache Iceberg Tables. </p> <p>The default value
     * is false. If you set this value to true, Firehose automatically increases the
     * throughput limit of a stream based on the throttling levels of the stream. If
     * you set this parameter to true for a stream with updates and deletes, you will
     * see out of order delivery. </p>
     */
    inline bool GetAppendOnly() const { return m_appendOnly; }
    inline bool AppendOnlyHasBeenSet() const { return m_appendOnlyHasBeenSet; }
    inline void SetAppendOnly(bool value) { m_appendOnlyHasBeenSet = true; m_appendOnly = value; }
    inline IcebergDestinationUpdate& WithAppendOnly(bool value) { SetAppendOnly(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Configuration describing where the destination Iceberg tables are persisted.
     * </p>
     */
    inline const CatalogConfiguration& GetCatalogConfiguration() const { return m_catalogConfiguration; }
    inline bool CatalogConfigurationHasBeenSet() const { return m_catalogConfigurationHasBeenSet; }
    template<typename CatalogConfigurationT = CatalogConfiguration>
    void SetCatalogConfiguration(CatalogConfigurationT&& value) { m_catalogConfigurationHasBeenSet = true; m_catalogConfiguration = std::forward<CatalogConfigurationT>(value); }
    template<typename CatalogConfigurationT = CatalogConfiguration>
    IcebergDestinationUpdate& WithCatalogConfiguration(CatalogConfigurationT&& value) { SetCatalogConfiguration(std::forward<CatalogConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const S3DestinationConfiguration& GetS3Configuration() const { return m_s3Configuration; }
    inline bool S3ConfigurationHasBeenSet() const { return m_s3ConfigurationHasBeenSet; }
    template<typename S3ConfigurationT = S3DestinationConfiguration>
    void SetS3Configuration(S3ConfigurationT&& value) { m_s3ConfigurationHasBeenSet = true; m_s3Configuration = std::forward<S3ConfigurationT>(value); }
    template<typename S3ConfigurationT = S3DestinationConfiguration>
    IcebergDestinationUpdate& WithS3Configuration(S3ConfigurationT&& value) { SetS3Configuration(std::forward<S3ConfigurationT>(value)); return *this;}
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

    IcebergS3BackupMode m_s3BackupMode{IcebergS3BackupMode::NOT_SET};
    bool m_s3BackupModeHasBeenSet = false;

    RetryOptions m_retryOptions;
    bool m_retryOptionsHasBeenSet = false;

    Aws::String m_roleARN;
    bool m_roleARNHasBeenSet = false;

    bool m_appendOnly{false};
    bool m_appendOnlyHasBeenSet = false;

    CatalogConfiguration m_catalogConfiguration;
    bool m_catalogConfigurationHasBeenSet = false;

    S3DestinationConfiguration m_s3Configuration;
    bool m_s3ConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace Firehose
} // namespace Aws

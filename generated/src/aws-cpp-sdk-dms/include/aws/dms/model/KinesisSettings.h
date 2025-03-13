/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dms/model/MessageFormatValue.h>
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
namespace DatabaseMigrationService
{
namespace Model
{

  /**
   * <p>Provides information that describes an Amazon Kinesis Data Stream endpoint.
   * This information includes the output format of records applied to the endpoint
   * and details of transaction and control table data information.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/KinesisSettings">AWS
   * API Reference</a></p>
   */
  class KinesisSettings
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API KinesisSettings() = default;
    AWS_DATABASEMIGRATIONSERVICE_API KinesisSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API KinesisSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the Amazon Kinesis Data Streams
     * endpoint.</p>
     */
    inline const Aws::String& GetStreamArn() const { return m_streamArn; }
    inline bool StreamArnHasBeenSet() const { return m_streamArnHasBeenSet; }
    template<typename StreamArnT = Aws::String>
    void SetStreamArn(StreamArnT&& value) { m_streamArnHasBeenSet = true; m_streamArn = std::forward<StreamArnT>(value); }
    template<typename StreamArnT = Aws::String>
    KinesisSettings& WithStreamArn(StreamArnT&& value) { SetStreamArn(std::forward<StreamArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The output format for the records created on the endpoint. The message format
     * is <code>JSON</code> (default) or <code>JSON_UNFORMATTED</code> (a single line
     * with no tab).</p>
     */
    inline MessageFormatValue GetMessageFormat() const { return m_messageFormat; }
    inline bool MessageFormatHasBeenSet() const { return m_messageFormatHasBeenSet; }
    inline void SetMessageFormat(MessageFormatValue value) { m_messageFormatHasBeenSet = true; m_messageFormat = value; }
    inline KinesisSettings& WithMessageFormat(MessageFormatValue value) { SetMessageFormat(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the IAM role that DMS uses to write to the
     * Kinesis data stream. The role must allow the <code>iam:PassRole</code>
     * action.</p>
     */
    inline const Aws::String& GetServiceAccessRoleArn() const { return m_serviceAccessRoleArn; }
    inline bool ServiceAccessRoleArnHasBeenSet() const { return m_serviceAccessRoleArnHasBeenSet; }
    template<typename ServiceAccessRoleArnT = Aws::String>
    void SetServiceAccessRoleArn(ServiceAccessRoleArnT&& value) { m_serviceAccessRoleArnHasBeenSet = true; m_serviceAccessRoleArn = std::forward<ServiceAccessRoleArnT>(value); }
    template<typename ServiceAccessRoleArnT = Aws::String>
    KinesisSettings& WithServiceAccessRoleArn(ServiceAccessRoleArnT&& value) { SetServiceAccessRoleArn(std::forward<ServiceAccessRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides detailed transaction information from the source database. This
     * information includes a commit timestamp, a log position, and values for
     * <code>transaction_id</code>, previous <code>transaction_id</code>, and
     * <code>transaction_record_id</code> (the record offset within a transaction). The
     * default is <code>false</code>.</p>
     */
    inline bool GetIncludeTransactionDetails() const { return m_includeTransactionDetails; }
    inline bool IncludeTransactionDetailsHasBeenSet() const { return m_includeTransactionDetailsHasBeenSet; }
    inline void SetIncludeTransactionDetails(bool value) { m_includeTransactionDetailsHasBeenSet = true; m_includeTransactionDetails = value; }
    inline KinesisSettings& WithIncludeTransactionDetails(bool value) { SetIncludeTransactionDetails(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Shows the partition value within the Kinesis message output, unless the
     * partition type is <code>schema-table-type</code>. The default is
     * <code>false</code>.</p>
     */
    inline bool GetIncludePartitionValue() const { return m_includePartitionValue; }
    inline bool IncludePartitionValueHasBeenSet() const { return m_includePartitionValueHasBeenSet; }
    inline void SetIncludePartitionValue(bool value) { m_includePartitionValueHasBeenSet = true; m_includePartitionValue = value; }
    inline KinesisSettings& WithIncludePartitionValue(bool value) { SetIncludePartitionValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Prefixes schema and table names to partition values, when the partition type
     * is <code>primary-key-type</code>. Doing this increases data distribution among
     * Kinesis shards. For example, suppose that a SysBench schema has thousands of
     * tables and each table has only limited range for a primary key. In this case,
     * the same primary key is sent from thousands of tables to the same shard, which
     * causes throttling. The default is <code>false</code>.</p>
     */
    inline bool GetPartitionIncludeSchemaTable() const { return m_partitionIncludeSchemaTable; }
    inline bool PartitionIncludeSchemaTableHasBeenSet() const { return m_partitionIncludeSchemaTableHasBeenSet; }
    inline void SetPartitionIncludeSchemaTable(bool value) { m_partitionIncludeSchemaTableHasBeenSet = true; m_partitionIncludeSchemaTable = value; }
    inline KinesisSettings& WithPartitionIncludeSchemaTable(bool value) { SetPartitionIncludeSchemaTable(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Includes any data definition language (DDL) operations that change the table
     * in the control data, such as <code>rename-table</code>, <code>drop-table</code>,
     * <code>add-column</code>, <code>drop-column</code>, and
     * <code>rename-column</code>. The default is <code>false</code>.</p>
     */
    inline bool GetIncludeTableAlterOperations() const { return m_includeTableAlterOperations; }
    inline bool IncludeTableAlterOperationsHasBeenSet() const { return m_includeTableAlterOperationsHasBeenSet; }
    inline void SetIncludeTableAlterOperations(bool value) { m_includeTableAlterOperationsHasBeenSet = true; m_includeTableAlterOperations = value; }
    inline KinesisSettings& WithIncludeTableAlterOperations(bool value) { SetIncludeTableAlterOperations(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Shows detailed control information for table definition, column definition,
     * and table and column changes in the Kinesis message output. The default is
     * <code>false</code>.</p>
     */
    inline bool GetIncludeControlDetails() const { return m_includeControlDetails; }
    inline bool IncludeControlDetailsHasBeenSet() const { return m_includeControlDetailsHasBeenSet; }
    inline void SetIncludeControlDetails(bool value) { m_includeControlDetailsHasBeenSet = true; m_includeControlDetails = value; }
    inline KinesisSettings& WithIncludeControlDetails(bool value) { SetIncludeControlDetails(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Include NULL and empty columns for records migrated to the endpoint. The
     * default is <code>false</code>.</p>
     */
    inline bool GetIncludeNullAndEmpty() const { return m_includeNullAndEmpty; }
    inline bool IncludeNullAndEmptyHasBeenSet() const { return m_includeNullAndEmptyHasBeenSet; }
    inline void SetIncludeNullAndEmpty(bool value) { m_includeNullAndEmptyHasBeenSet = true; m_includeNullAndEmpty = value; }
    inline KinesisSettings& WithIncludeNullAndEmpty(bool value) { SetIncludeNullAndEmpty(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Set this optional parameter to <code>true</code> to avoid adding a '0x'
     * prefix to raw data in hexadecimal format. For example, by default, DMS adds a
     * '0x' prefix to the LOB column type in hexadecimal format moving from an Oracle
     * source to an Amazon Kinesis target. Use the <code>NoHexPrefix</code> endpoint
     * setting to enable migration of RAW data type columns without adding the '0x'
     * prefix.</p>
     */
    inline bool GetNoHexPrefix() const { return m_noHexPrefix; }
    inline bool NoHexPrefixHasBeenSet() const { return m_noHexPrefixHasBeenSet; }
    inline void SetNoHexPrefix(bool value) { m_noHexPrefixHasBeenSet = true; m_noHexPrefix = value; }
    inline KinesisSettings& WithNoHexPrefix(bool value) { SetNoHexPrefix(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies using the large integer value with Kinesis.</p>
     */
    inline bool GetUseLargeIntegerValue() const { return m_useLargeIntegerValue; }
    inline bool UseLargeIntegerValueHasBeenSet() const { return m_useLargeIntegerValueHasBeenSet; }
    inline void SetUseLargeIntegerValue(bool value) { m_useLargeIntegerValueHasBeenSet = true; m_useLargeIntegerValue = value; }
    inline KinesisSettings& WithUseLargeIntegerValue(bool value) { SetUseLargeIntegerValue(value); return *this;}
    ///@}
  private:

    Aws::String m_streamArn;
    bool m_streamArnHasBeenSet = false;

    MessageFormatValue m_messageFormat{MessageFormatValue::NOT_SET};
    bool m_messageFormatHasBeenSet = false;

    Aws::String m_serviceAccessRoleArn;
    bool m_serviceAccessRoleArnHasBeenSet = false;

    bool m_includeTransactionDetails{false};
    bool m_includeTransactionDetailsHasBeenSet = false;

    bool m_includePartitionValue{false};
    bool m_includePartitionValueHasBeenSet = false;

    bool m_partitionIncludeSchemaTable{false};
    bool m_partitionIncludeSchemaTableHasBeenSet = false;

    bool m_includeTableAlterOperations{false};
    bool m_includeTableAlterOperationsHasBeenSet = false;

    bool m_includeControlDetails{false};
    bool m_includeControlDetailsHasBeenSet = false;

    bool m_includeNullAndEmpty{false};
    bool m_includeNullAndEmptyHasBeenSet = false;

    bool m_noHexPrefix{false};
    bool m_noHexPrefixHasBeenSet = false;

    bool m_useLargeIntegerValue{false};
    bool m_useLargeIntegerValueHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/firehose/Firehose_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/firehose/model/PartitionSpec.h>
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
   * <p> Describes the configuration of a destination in Apache Iceberg Tables.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/firehose-2015-08-04/DestinationTableConfiguration">AWS
   * API Reference</a></p>
   */
  class DestinationTableConfiguration
  {
  public:
    AWS_FIREHOSE_API DestinationTableConfiguration();
    AWS_FIREHOSE_API DestinationTableConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API DestinationTableConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> Specifies the name of the Apache Iceberg Table. </p>
     */
    inline const Aws::String& GetDestinationTableName() const{ return m_destinationTableName; }
    inline bool DestinationTableNameHasBeenSet() const { return m_destinationTableNameHasBeenSet; }
    inline void SetDestinationTableName(const Aws::String& value) { m_destinationTableNameHasBeenSet = true; m_destinationTableName = value; }
    inline void SetDestinationTableName(Aws::String&& value) { m_destinationTableNameHasBeenSet = true; m_destinationTableName = std::move(value); }
    inline void SetDestinationTableName(const char* value) { m_destinationTableNameHasBeenSet = true; m_destinationTableName.assign(value); }
    inline DestinationTableConfiguration& WithDestinationTableName(const Aws::String& value) { SetDestinationTableName(value); return *this;}
    inline DestinationTableConfiguration& WithDestinationTableName(Aws::String&& value) { SetDestinationTableName(std::move(value)); return *this;}
    inline DestinationTableConfiguration& WithDestinationTableName(const char* value) { SetDestinationTableName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the Apache Iceberg database. </p>
     */
    inline const Aws::String& GetDestinationDatabaseName() const{ return m_destinationDatabaseName; }
    inline bool DestinationDatabaseNameHasBeenSet() const { return m_destinationDatabaseNameHasBeenSet; }
    inline void SetDestinationDatabaseName(const Aws::String& value) { m_destinationDatabaseNameHasBeenSet = true; m_destinationDatabaseName = value; }
    inline void SetDestinationDatabaseName(Aws::String&& value) { m_destinationDatabaseNameHasBeenSet = true; m_destinationDatabaseName = std::move(value); }
    inline void SetDestinationDatabaseName(const char* value) { m_destinationDatabaseNameHasBeenSet = true; m_destinationDatabaseName.assign(value); }
    inline DestinationTableConfiguration& WithDestinationDatabaseName(const Aws::String& value) { SetDestinationDatabaseName(value); return *this;}
    inline DestinationTableConfiguration& WithDestinationDatabaseName(Aws::String&& value) { SetDestinationDatabaseName(std::move(value)); return *this;}
    inline DestinationTableConfiguration& WithDestinationDatabaseName(const char* value) { SetDestinationDatabaseName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> A list of unique keys for a given Apache Iceberg table. Firehose will use
     * these for running Create, Update, or Delete operations on the given Iceberg
     * table. </p>
     */
    inline const Aws::Vector<Aws::String>& GetUniqueKeys() const{ return m_uniqueKeys; }
    inline bool UniqueKeysHasBeenSet() const { return m_uniqueKeysHasBeenSet; }
    inline void SetUniqueKeys(const Aws::Vector<Aws::String>& value) { m_uniqueKeysHasBeenSet = true; m_uniqueKeys = value; }
    inline void SetUniqueKeys(Aws::Vector<Aws::String>&& value) { m_uniqueKeysHasBeenSet = true; m_uniqueKeys = std::move(value); }
    inline DestinationTableConfiguration& WithUniqueKeys(const Aws::Vector<Aws::String>& value) { SetUniqueKeys(value); return *this;}
    inline DestinationTableConfiguration& WithUniqueKeys(Aws::Vector<Aws::String>&& value) { SetUniqueKeys(std::move(value)); return *this;}
    inline DestinationTableConfiguration& AddUniqueKeys(const Aws::String& value) { m_uniqueKeysHasBeenSet = true; m_uniqueKeys.push_back(value); return *this; }
    inline DestinationTableConfiguration& AddUniqueKeys(Aws::String&& value) { m_uniqueKeysHasBeenSet = true; m_uniqueKeys.push_back(std::move(value)); return *this; }
    inline DestinationTableConfiguration& AddUniqueKeys(const char* value) { m_uniqueKeysHasBeenSet = true; m_uniqueKeys.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p> </p> <p>Amazon Data Firehose is in preview release and is subject to
     * change.</p>
     */
    inline const PartitionSpec& GetPartitionSpec() const{ return m_partitionSpec; }
    inline bool PartitionSpecHasBeenSet() const { return m_partitionSpecHasBeenSet; }
    inline void SetPartitionSpec(const PartitionSpec& value) { m_partitionSpecHasBeenSet = true; m_partitionSpec = value; }
    inline void SetPartitionSpec(PartitionSpec&& value) { m_partitionSpecHasBeenSet = true; m_partitionSpec = std::move(value); }
    inline DestinationTableConfiguration& WithPartitionSpec(const PartitionSpec& value) { SetPartitionSpec(value); return *this;}
    inline DestinationTableConfiguration& WithPartitionSpec(PartitionSpec&& value) { SetPartitionSpec(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The table specific S3 error output prefix. All the errors that occurred
     * while delivering to this table will be prefixed with this value in S3
     * destination. </p>
     */
    inline const Aws::String& GetS3ErrorOutputPrefix() const{ return m_s3ErrorOutputPrefix; }
    inline bool S3ErrorOutputPrefixHasBeenSet() const { return m_s3ErrorOutputPrefixHasBeenSet; }
    inline void SetS3ErrorOutputPrefix(const Aws::String& value) { m_s3ErrorOutputPrefixHasBeenSet = true; m_s3ErrorOutputPrefix = value; }
    inline void SetS3ErrorOutputPrefix(Aws::String&& value) { m_s3ErrorOutputPrefixHasBeenSet = true; m_s3ErrorOutputPrefix = std::move(value); }
    inline void SetS3ErrorOutputPrefix(const char* value) { m_s3ErrorOutputPrefixHasBeenSet = true; m_s3ErrorOutputPrefix.assign(value); }
    inline DestinationTableConfiguration& WithS3ErrorOutputPrefix(const Aws::String& value) { SetS3ErrorOutputPrefix(value); return *this;}
    inline DestinationTableConfiguration& WithS3ErrorOutputPrefix(Aws::String&& value) { SetS3ErrorOutputPrefix(std::move(value)); return *this;}
    inline DestinationTableConfiguration& WithS3ErrorOutputPrefix(const char* value) { SetS3ErrorOutputPrefix(value); return *this;}
    ///@}
  private:

    Aws::String m_destinationTableName;
    bool m_destinationTableNameHasBeenSet = false;

    Aws::String m_destinationDatabaseName;
    bool m_destinationDatabaseNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_uniqueKeys;
    bool m_uniqueKeysHasBeenSet = false;

    PartitionSpec m_partitionSpec;
    bool m_partitionSpecHasBeenSet = false;

    Aws::String m_s3ErrorOutputPrefix;
    bool m_s3ErrorOutputPrefixHasBeenSet = false;
  };

} // namespace Model
} // namespace Firehose
} // namespace Aws

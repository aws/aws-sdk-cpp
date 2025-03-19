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
    AWS_FIREHOSE_API DestinationTableConfiguration() = default;
    AWS_FIREHOSE_API DestinationTableConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API DestinationTableConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> Specifies the name of the Apache Iceberg Table. </p>
     */
    inline const Aws::String& GetDestinationTableName() const { return m_destinationTableName; }
    inline bool DestinationTableNameHasBeenSet() const { return m_destinationTableNameHasBeenSet; }
    template<typename DestinationTableNameT = Aws::String>
    void SetDestinationTableName(DestinationTableNameT&& value) { m_destinationTableNameHasBeenSet = true; m_destinationTableName = std::forward<DestinationTableNameT>(value); }
    template<typename DestinationTableNameT = Aws::String>
    DestinationTableConfiguration& WithDestinationTableName(DestinationTableNameT&& value) { SetDestinationTableName(std::forward<DestinationTableNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the Apache Iceberg database. </p>
     */
    inline const Aws::String& GetDestinationDatabaseName() const { return m_destinationDatabaseName; }
    inline bool DestinationDatabaseNameHasBeenSet() const { return m_destinationDatabaseNameHasBeenSet; }
    template<typename DestinationDatabaseNameT = Aws::String>
    void SetDestinationDatabaseName(DestinationDatabaseNameT&& value) { m_destinationDatabaseNameHasBeenSet = true; m_destinationDatabaseName = std::forward<DestinationDatabaseNameT>(value); }
    template<typename DestinationDatabaseNameT = Aws::String>
    DestinationTableConfiguration& WithDestinationDatabaseName(DestinationDatabaseNameT&& value) { SetDestinationDatabaseName(std::forward<DestinationDatabaseNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A list of unique keys for a given Apache Iceberg table. Firehose will use
     * these for running Create, Update, or Delete operations on the given Iceberg
     * table. </p>
     */
    inline const Aws::Vector<Aws::String>& GetUniqueKeys() const { return m_uniqueKeys; }
    inline bool UniqueKeysHasBeenSet() const { return m_uniqueKeysHasBeenSet; }
    template<typename UniqueKeysT = Aws::Vector<Aws::String>>
    void SetUniqueKeys(UniqueKeysT&& value) { m_uniqueKeysHasBeenSet = true; m_uniqueKeys = std::forward<UniqueKeysT>(value); }
    template<typename UniqueKeysT = Aws::Vector<Aws::String>>
    DestinationTableConfiguration& WithUniqueKeys(UniqueKeysT&& value) { SetUniqueKeys(std::forward<UniqueKeysT>(value)); return *this;}
    template<typename UniqueKeysT = Aws::String>
    DestinationTableConfiguration& AddUniqueKeys(UniqueKeysT&& value) { m_uniqueKeysHasBeenSet = true; m_uniqueKeys.emplace_back(std::forward<UniqueKeysT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The partition spec configuration for a table that is used by automatic table
     * creation.</p> <p>Amazon Data Firehose is in preview release and is subject to
     * change.</p>
     */
    inline const PartitionSpec& GetPartitionSpec() const { return m_partitionSpec; }
    inline bool PartitionSpecHasBeenSet() const { return m_partitionSpecHasBeenSet; }
    template<typename PartitionSpecT = PartitionSpec>
    void SetPartitionSpec(PartitionSpecT&& value) { m_partitionSpecHasBeenSet = true; m_partitionSpec = std::forward<PartitionSpecT>(value); }
    template<typename PartitionSpecT = PartitionSpec>
    DestinationTableConfiguration& WithPartitionSpec(PartitionSpecT&& value) { SetPartitionSpec(std::forward<PartitionSpecT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The table specific S3 error output prefix. All the errors that occurred
     * while delivering to this table will be prefixed with this value in S3
     * destination. </p>
     */
    inline const Aws::String& GetS3ErrorOutputPrefix() const { return m_s3ErrorOutputPrefix; }
    inline bool S3ErrorOutputPrefixHasBeenSet() const { return m_s3ErrorOutputPrefixHasBeenSet; }
    template<typename S3ErrorOutputPrefixT = Aws::String>
    void SetS3ErrorOutputPrefix(S3ErrorOutputPrefixT&& value) { m_s3ErrorOutputPrefixHasBeenSet = true; m_s3ErrorOutputPrefix = std::forward<S3ErrorOutputPrefixT>(value); }
    template<typename S3ErrorOutputPrefixT = Aws::String>
    DestinationTableConfiguration& WithS3ErrorOutputPrefix(S3ErrorOutputPrefixT&& value) { SetS3ErrorOutputPrefix(std::forward<S3ErrorOutputPrefixT>(value)); return *this;}
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

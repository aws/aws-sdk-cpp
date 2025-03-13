/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/glue/model/JDBCDataType.h>
#include <aws/glue/model/GlueRecordType.h>
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
namespace Glue
{
namespace Model
{

  /**
   * <p>Additional connection options for the connector.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/JDBCConnectorOptions">AWS
   * API Reference</a></p>
   */
  class JDBCConnectorOptions
  {
  public:
    AWS_GLUE_API JDBCConnectorOptions() = default;
    AWS_GLUE_API JDBCConnectorOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API JDBCConnectorOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Extra condition clause to filter data from source. For example:</p> <p>
     * <code>BillingCity='Mountain View'</code> </p> <p>When using a query instead of a
     * table name, you should validate that the query works with the specified
     * <code>filterPredicate</code>.</p>
     */
    inline const Aws::String& GetFilterPredicate() const { return m_filterPredicate; }
    inline bool FilterPredicateHasBeenSet() const { return m_filterPredicateHasBeenSet; }
    template<typename FilterPredicateT = Aws::String>
    void SetFilterPredicate(FilterPredicateT&& value) { m_filterPredicateHasBeenSet = true; m_filterPredicate = std::forward<FilterPredicateT>(value); }
    template<typename FilterPredicateT = Aws::String>
    JDBCConnectorOptions& WithFilterPredicate(FilterPredicateT&& value) { SetFilterPredicate(std::forward<FilterPredicateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of an integer column that is used for partitioning. This option
     * works only when it's included with <code>lowerBound</code>,
     * <code>upperBound</code>, and <code>numPartitions</code>. This option works the
     * same way as in the Spark SQL JDBC reader.</p>
     */
    inline const Aws::String& GetPartitionColumn() const { return m_partitionColumn; }
    inline bool PartitionColumnHasBeenSet() const { return m_partitionColumnHasBeenSet; }
    template<typename PartitionColumnT = Aws::String>
    void SetPartitionColumn(PartitionColumnT&& value) { m_partitionColumnHasBeenSet = true; m_partitionColumn = std::forward<PartitionColumnT>(value); }
    template<typename PartitionColumnT = Aws::String>
    JDBCConnectorOptions& WithPartitionColumn(PartitionColumnT&& value) { SetPartitionColumn(std::forward<PartitionColumnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The minimum value of <code>partitionColumn</code> that is used to decide
     * partition stride.</p>
     */
    inline long long GetLowerBound() const { return m_lowerBound; }
    inline bool LowerBoundHasBeenSet() const { return m_lowerBoundHasBeenSet; }
    inline void SetLowerBound(long long value) { m_lowerBoundHasBeenSet = true; m_lowerBound = value; }
    inline JDBCConnectorOptions& WithLowerBound(long long value) { SetLowerBound(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum value of <code>partitionColumn</code> that is used to decide
     * partition stride.</p>
     */
    inline long long GetUpperBound() const { return m_upperBound; }
    inline bool UpperBoundHasBeenSet() const { return m_upperBoundHasBeenSet; }
    inline void SetUpperBound(long long value) { m_upperBoundHasBeenSet = true; m_upperBound = value; }
    inline JDBCConnectorOptions& WithUpperBound(long long value) { SetUpperBound(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of partitions. This value, along with <code>lowerBound</code>
     * (inclusive) and <code>upperBound</code> (exclusive), form partition strides for
     * generated <code>WHERE</code> clause expressions that are used to split the
     * <code>partitionColumn</code>.</p>
     */
    inline long long GetNumPartitions() const { return m_numPartitions; }
    inline bool NumPartitionsHasBeenSet() const { return m_numPartitionsHasBeenSet; }
    inline void SetNumPartitions(long long value) { m_numPartitionsHasBeenSet = true; m_numPartitions = value; }
    inline JDBCConnectorOptions& WithNumPartitions(long long value) { SetNumPartitions(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the job bookmark keys on which to sort.</p>
     */
    inline const Aws::Vector<Aws::String>& GetJobBookmarkKeys() const { return m_jobBookmarkKeys; }
    inline bool JobBookmarkKeysHasBeenSet() const { return m_jobBookmarkKeysHasBeenSet; }
    template<typename JobBookmarkKeysT = Aws::Vector<Aws::String>>
    void SetJobBookmarkKeys(JobBookmarkKeysT&& value) { m_jobBookmarkKeysHasBeenSet = true; m_jobBookmarkKeys = std::forward<JobBookmarkKeysT>(value); }
    template<typename JobBookmarkKeysT = Aws::Vector<Aws::String>>
    JDBCConnectorOptions& WithJobBookmarkKeys(JobBookmarkKeysT&& value) { SetJobBookmarkKeys(std::forward<JobBookmarkKeysT>(value)); return *this;}
    template<typename JobBookmarkKeysT = Aws::String>
    JDBCConnectorOptions& AddJobBookmarkKeys(JobBookmarkKeysT&& value) { m_jobBookmarkKeysHasBeenSet = true; m_jobBookmarkKeys.emplace_back(std::forward<JobBookmarkKeysT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies an ascending or descending sort order.</p>
     */
    inline const Aws::String& GetJobBookmarkKeysSortOrder() const { return m_jobBookmarkKeysSortOrder; }
    inline bool JobBookmarkKeysSortOrderHasBeenSet() const { return m_jobBookmarkKeysSortOrderHasBeenSet; }
    template<typename JobBookmarkKeysSortOrderT = Aws::String>
    void SetJobBookmarkKeysSortOrder(JobBookmarkKeysSortOrderT&& value) { m_jobBookmarkKeysSortOrderHasBeenSet = true; m_jobBookmarkKeysSortOrder = std::forward<JobBookmarkKeysSortOrderT>(value); }
    template<typename JobBookmarkKeysSortOrderT = Aws::String>
    JDBCConnectorOptions& WithJobBookmarkKeysSortOrder(JobBookmarkKeysSortOrderT&& value) { SetJobBookmarkKeysSortOrder(std::forward<JobBookmarkKeysSortOrderT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Custom data type mapping that builds a mapping from a JDBC data type to an
     * Glue data type. For example, the option
     * <code>"dataTypeMapping":{"FLOAT":"STRING"}</code> maps data fields of JDBC type
     * <code>FLOAT</code> into the Java <code>String</code> type by calling the
     * <code>ResultSet.getString()</code> method of the driver, and uses it to build
     * the Glue record. The <code>ResultSet</code> object is implemented by each
     * driver, so the behavior is specific to the driver you use. Refer to the
     * documentation for your JDBC driver to understand how the driver performs the
     * conversions.</p>
     */
    inline const Aws::Map<JDBCDataType, GlueRecordType>& GetDataTypeMapping() const { return m_dataTypeMapping; }
    inline bool DataTypeMappingHasBeenSet() const { return m_dataTypeMappingHasBeenSet; }
    template<typename DataTypeMappingT = Aws::Map<JDBCDataType, GlueRecordType>>
    void SetDataTypeMapping(DataTypeMappingT&& value) { m_dataTypeMappingHasBeenSet = true; m_dataTypeMapping = std::forward<DataTypeMappingT>(value); }
    template<typename DataTypeMappingT = Aws::Map<JDBCDataType, GlueRecordType>>
    JDBCConnectorOptions& WithDataTypeMapping(DataTypeMappingT&& value) { SetDataTypeMapping(std::forward<DataTypeMappingT>(value)); return *this;}
    inline JDBCConnectorOptions& AddDataTypeMapping(JDBCDataType key, GlueRecordType value) {
      m_dataTypeMappingHasBeenSet = true; m_dataTypeMapping.emplace(key, value); return *this;
    }
    ///@}
  private:

    Aws::String m_filterPredicate;
    bool m_filterPredicateHasBeenSet = false;

    Aws::String m_partitionColumn;
    bool m_partitionColumnHasBeenSet = false;

    long long m_lowerBound{0};
    bool m_lowerBoundHasBeenSet = false;

    long long m_upperBound{0};
    bool m_upperBoundHasBeenSet = false;

    long long m_numPartitions{0};
    bool m_numPartitionsHasBeenSet = false;

    Aws::Vector<Aws::String> m_jobBookmarkKeys;
    bool m_jobBookmarkKeysHasBeenSet = false;

    Aws::String m_jobBookmarkKeysSortOrder;
    bool m_jobBookmarkKeysSortOrderHasBeenSet = false;

    Aws::Map<JDBCDataType, GlueRecordType> m_dataTypeMapping;
    bool m_dataTypeMappingHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws

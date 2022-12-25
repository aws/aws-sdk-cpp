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
    AWS_GLUE_API JDBCConnectorOptions();
    AWS_GLUE_API JDBCConnectorOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API JDBCConnectorOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Extra condition clause to filter data from source. For example:</p> <p>
     * <code>BillingCity='Mountain View'</code> </p> <p>When using a query instead of a
     * table name, you should validate that the query works with the specified
     * <code>filterPredicate</code>.</p>
     */
    inline const Aws::String& GetFilterPredicate() const{ return m_filterPredicate; }

    /**
     * <p>Extra condition clause to filter data from source. For example:</p> <p>
     * <code>BillingCity='Mountain View'</code> </p> <p>When using a query instead of a
     * table name, you should validate that the query works with the specified
     * <code>filterPredicate</code>.</p>
     */
    inline bool FilterPredicateHasBeenSet() const { return m_filterPredicateHasBeenSet; }

    /**
     * <p>Extra condition clause to filter data from source. For example:</p> <p>
     * <code>BillingCity='Mountain View'</code> </p> <p>When using a query instead of a
     * table name, you should validate that the query works with the specified
     * <code>filterPredicate</code>.</p>
     */
    inline void SetFilterPredicate(const Aws::String& value) { m_filterPredicateHasBeenSet = true; m_filterPredicate = value; }

    /**
     * <p>Extra condition clause to filter data from source. For example:</p> <p>
     * <code>BillingCity='Mountain View'</code> </p> <p>When using a query instead of a
     * table name, you should validate that the query works with the specified
     * <code>filterPredicate</code>.</p>
     */
    inline void SetFilterPredicate(Aws::String&& value) { m_filterPredicateHasBeenSet = true; m_filterPredicate = std::move(value); }

    /**
     * <p>Extra condition clause to filter data from source. For example:</p> <p>
     * <code>BillingCity='Mountain View'</code> </p> <p>When using a query instead of a
     * table name, you should validate that the query works with the specified
     * <code>filterPredicate</code>.</p>
     */
    inline void SetFilterPredicate(const char* value) { m_filterPredicateHasBeenSet = true; m_filterPredicate.assign(value); }

    /**
     * <p>Extra condition clause to filter data from source. For example:</p> <p>
     * <code>BillingCity='Mountain View'</code> </p> <p>When using a query instead of a
     * table name, you should validate that the query works with the specified
     * <code>filterPredicate</code>.</p>
     */
    inline JDBCConnectorOptions& WithFilterPredicate(const Aws::String& value) { SetFilterPredicate(value); return *this;}

    /**
     * <p>Extra condition clause to filter data from source. For example:</p> <p>
     * <code>BillingCity='Mountain View'</code> </p> <p>When using a query instead of a
     * table name, you should validate that the query works with the specified
     * <code>filterPredicate</code>.</p>
     */
    inline JDBCConnectorOptions& WithFilterPredicate(Aws::String&& value) { SetFilterPredicate(std::move(value)); return *this;}

    /**
     * <p>Extra condition clause to filter data from source. For example:</p> <p>
     * <code>BillingCity='Mountain View'</code> </p> <p>When using a query instead of a
     * table name, you should validate that the query works with the specified
     * <code>filterPredicate</code>.</p>
     */
    inline JDBCConnectorOptions& WithFilterPredicate(const char* value) { SetFilterPredicate(value); return *this;}


    /**
     * <p>The name of an integer column that is used for partitioning. This option
     * works only when it's included with <code>lowerBound</code>,
     * <code>upperBound</code>, and <code>numPartitions</code>. This option works the
     * same way as in the Spark SQL JDBC reader.</p>
     */
    inline const Aws::String& GetPartitionColumn() const{ return m_partitionColumn; }

    /**
     * <p>The name of an integer column that is used for partitioning. This option
     * works only when it's included with <code>lowerBound</code>,
     * <code>upperBound</code>, and <code>numPartitions</code>. This option works the
     * same way as in the Spark SQL JDBC reader.</p>
     */
    inline bool PartitionColumnHasBeenSet() const { return m_partitionColumnHasBeenSet; }

    /**
     * <p>The name of an integer column that is used for partitioning. This option
     * works only when it's included with <code>lowerBound</code>,
     * <code>upperBound</code>, and <code>numPartitions</code>. This option works the
     * same way as in the Spark SQL JDBC reader.</p>
     */
    inline void SetPartitionColumn(const Aws::String& value) { m_partitionColumnHasBeenSet = true; m_partitionColumn = value; }

    /**
     * <p>The name of an integer column that is used for partitioning. This option
     * works only when it's included with <code>lowerBound</code>,
     * <code>upperBound</code>, and <code>numPartitions</code>. This option works the
     * same way as in the Spark SQL JDBC reader.</p>
     */
    inline void SetPartitionColumn(Aws::String&& value) { m_partitionColumnHasBeenSet = true; m_partitionColumn = std::move(value); }

    /**
     * <p>The name of an integer column that is used for partitioning. This option
     * works only when it's included with <code>lowerBound</code>,
     * <code>upperBound</code>, and <code>numPartitions</code>. This option works the
     * same way as in the Spark SQL JDBC reader.</p>
     */
    inline void SetPartitionColumn(const char* value) { m_partitionColumnHasBeenSet = true; m_partitionColumn.assign(value); }

    /**
     * <p>The name of an integer column that is used for partitioning. This option
     * works only when it's included with <code>lowerBound</code>,
     * <code>upperBound</code>, and <code>numPartitions</code>. This option works the
     * same way as in the Spark SQL JDBC reader.</p>
     */
    inline JDBCConnectorOptions& WithPartitionColumn(const Aws::String& value) { SetPartitionColumn(value); return *this;}

    /**
     * <p>The name of an integer column that is used for partitioning. This option
     * works only when it's included with <code>lowerBound</code>,
     * <code>upperBound</code>, and <code>numPartitions</code>. This option works the
     * same way as in the Spark SQL JDBC reader.</p>
     */
    inline JDBCConnectorOptions& WithPartitionColumn(Aws::String&& value) { SetPartitionColumn(std::move(value)); return *this;}

    /**
     * <p>The name of an integer column that is used for partitioning. This option
     * works only when it's included with <code>lowerBound</code>,
     * <code>upperBound</code>, and <code>numPartitions</code>. This option works the
     * same way as in the Spark SQL JDBC reader.</p>
     */
    inline JDBCConnectorOptions& WithPartitionColumn(const char* value) { SetPartitionColumn(value); return *this;}


    /**
     * <p>The minimum value of <code>partitionColumn</code> that is used to decide
     * partition stride.</p>
     */
    inline long long GetLowerBound() const{ return m_lowerBound; }

    /**
     * <p>The minimum value of <code>partitionColumn</code> that is used to decide
     * partition stride.</p>
     */
    inline bool LowerBoundHasBeenSet() const { return m_lowerBoundHasBeenSet; }

    /**
     * <p>The minimum value of <code>partitionColumn</code> that is used to decide
     * partition stride.</p>
     */
    inline void SetLowerBound(long long value) { m_lowerBoundHasBeenSet = true; m_lowerBound = value; }

    /**
     * <p>The minimum value of <code>partitionColumn</code> that is used to decide
     * partition stride.</p>
     */
    inline JDBCConnectorOptions& WithLowerBound(long long value) { SetLowerBound(value); return *this;}


    /**
     * <p>The maximum value of <code>partitionColumn</code> that is used to decide
     * partition stride.</p>
     */
    inline long long GetUpperBound() const{ return m_upperBound; }

    /**
     * <p>The maximum value of <code>partitionColumn</code> that is used to decide
     * partition stride.</p>
     */
    inline bool UpperBoundHasBeenSet() const { return m_upperBoundHasBeenSet; }

    /**
     * <p>The maximum value of <code>partitionColumn</code> that is used to decide
     * partition stride.</p>
     */
    inline void SetUpperBound(long long value) { m_upperBoundHasBeenSet = true; m_upperBound = value; }

    /**
     * <p>The maximum value of <code>partitionColumn</code> that is used to decide
     * partition stride.</p>
     */
    inline JDBCConnectorOptions& WithUpperBound(long long value) { SetUpperBound(value); return *this;}


    /**
     * <p>The number of partitions. This value, along with <code>lowerBound</code>
     * (inclusive) and <code>upperBound</code> (exclusive), form partition strides for
     * generated <code>WHERE</code> clause expressions that are used to split the
     * <code>partitionColumn</code>.</p>
     */
    inline long long GetNumPartitions() const{ return m_numPartitions; }

    /**
     * <p>The number of partitions. This value, along with <code>lowerBound</code>
     * (inclusive) and <code>upperBound</code> (exclusive), form partition strides for
     * generated <code>WHERE</code> clause expressions that are used to split the
     * <code>partitionColumn</code>.</p>
     */
    inline bool NumPartitionsHasBeenSet() const { return m_numPartitionsHasBeenSet; }

    /**
     * <p>The number of partitions. This value, along with <code>lowerBound</code>
     * (inclusive) and <code>upperBound</code> (exclusive), form partition strides for
     * generated <code>WHERE</code> clause expressions that are used to split the
     * <code>partitionColumn</code>.</p>
     */
    inline void SetNumPartitions(long long value) { m_numPartitionsHasBeenSet = true; m_numPartitions = value; }

    /**
     * <p>The number of partitions. This value, along with <code>lowerBound</code>
     * (inclusive) and <code>upperBound</code> (exclusive), form partition strides for
     * generated <code>WHERE</code> clause expressions that are used to split the
     * <code>partitionColumn</code>.</p>
     */
    inline JDBCConnectorOptions& WithNumPartitions(long long value) { SetNumPartitions(value); return *this;}


    /**
     * <p>The name of the job bookmark keys on which to sort.</p>
     */
    inline const Aws::Vector<Aws::String>& GetJobBookmarkKeys() const{ return m_jobBookmarkKeys; }

    /**
     * <p>The name of the job bookmark keys on which to sort.</p>
     */
    inline bool JobBookmarkKeysHasBeenSet() const { return m_jobBookmarkKeysHasBeenSet; }

    /**
     * <p>The name of the job bookmark keys on which to sort.</p>
     */
    inline void SetJobBookmarkKeys(const Aws::Vector<Aws::String>& value) { m_jobBookmarkKeysHasBeenSet = true; m_jobBookmarkKeys = value; }

    /**
     * <p>The name of the job bookmark keys on which to sort.</p>
     */
    inline void SetJobBookmarkKeys(Aws::Vector<Aws::String>&& value) { m_jobBookmarkKeysHasBeenSet = true; m_jobBookmarkKeys = std::move(value); }

    /**
     * <p>The name of the job bookmark keys on which to sort.</p>
     */
    inline JDBCConnectorOptions& WithJobBookmarkKeys(const Aws::Vector<Aws::String>& value) { SetJobBookmarkKeys(value); return *this;}

    /**
     * <p>The name of the job bookmark keys on which to sort.</p>
     */
    inline JDBCConnectorOptions& WithJobBookmarkKeys(Aws::Vector<Aws::String>&& value) { SetJobBookmarkKeys(std::move(value)); return *this;}

    /**
     * <p>The name of the job bookmark keys on which to sort.</p>
     */
    inline JDBCConnectorOptions& AddJobBookmarkKeys(const Aws::String& value) { m_jobBookmarkKeysHasBeenSet = true; m_jobBookmarkKeys.push_back(value); return *this; }

    /**
     * <p>The name of the job bookmark keys on which to sort.</p>
     */
    inline JDBCConnectorOptions& AddJobBookmarkKeys(Aws::String&& value) { m_jobBookmarkKeysHasBeenSet = true; m_jobBookmarkKeys.push_back(std::move(value)); return *this; }

    /**
     * <p>The name of the job bookmark keys on which to sort.</p>
     */
    inline JDBCConnectorOptions& AddJobBookmarkKeys(const char* value) { m_jobBookmarkKeysHasBeenSet = true; m_jobBookmarkKeys.push_back(value); return *this; }


    /**
     * <p>Specifies an ascending or descending sort order.</p>
     */
    inline const Aws::String& GetJobBookmarkKeysSortOrder() const{ return m_jobBookmarkKeysSortOrder; }

    /**
     * <p>Specifies an ascending or descending sort order.</p>
     */
    inline bool JobBookmarkKeysSortOrderHasBeenSet() const { return m_jobBookmarkKeysSortOrderHasBeenSet; }

    /**
     * <p>Specifies an ascending or descending sort order.</p>
     */
    inline void SetJobBookmarkKeysSortOrder(const Aws::String& value) { m_jobBookmarkKeysSortOrderHasBeenSet = true; m_jobBookmarkKeysSortOrder = value; }

    /**
     * <p>Specifies an ascending or descending sort order.</p>
     */
    inline void SetJobBookmarkKeysSortOrder(Aws::String&& value) { m_jobBookmarkKeysSortOrderHasBeenSet = true; m_jobBookmarkKeysSortOrder = std::move(value); }

    /**
     * <p>Specifies an ascending or descending sort order.</p>
     */
    inline void SetJobBookmarkKeysSortOrder(const char* value) { m_jobBookmarkKeysSortOrderHasBeenSet = true; m_jobBookmarkKeysSortOrder.assign(value); }

    /**
     * <p>Specifies an ascending or descending sort order.</p>
     */
    inline JDBCConnectorOptions& WithJobBookmarkKeysSortOrder(const Aws::String& value) { SetJobBookmarkKeysSortOrder(value); return *this;}

    /**
     * <p>Specifies an ascending or descending sort order.</p>
     */
    inline JDBCConnectorOptions& WithJobBookmarkKeysSortOrder(Aws::String&& value) { SetJobBookmarkKeysSortOrder(std::move(value)); return *this;}

    /**
     * <p>Specifies an ascending or descending sort order.</p>
     */
    inline JDBCConnectorOptions& WithJobBookmarkKeysSortOrder(const char* value) { SetJobBookmarkKeysSortOrder(value); return *this;}


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
    inline const Aws::Map<JDBCDataType, GlueRecordType>& GetDataTypeMapping() const{ return m_dataTypeMapping; }

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
    inline bool DataTypeMappingHasBeenSet() const { return m_dataTypeMappingHasBeenSet; }

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
    inline void SetDataTypeMapping(const Aws::Map<JDBCDataType, GlueRecordType>& value) { m_dataTypeMappingHasBeenSet = true; m_dataTypeMapping = value; }

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
    inline void SetDataTypeMapping(Aws::Map<JDBCDataType, GlueRecordType>&& value) { m_dataTypeMappingHasBeenSet = true; m_dataTypeMapping = std::move(value); }

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
    inline JDBCConnectorOptions& WithDataTypeMapping(const Aws::Map<JDBCDataType, GlueRecordType>& value) { SetDataTypeMapping(value); return *this;}

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
    inline JDBCConnectorOptions& WithDataTypeMapping(Aws::Map<JDBCDataType, GlueRecordType>&& value) { SetDataTypeMapping(std::move(value)); return *this;}

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
    inline JDBCConnectorOptions& AddDataTypeMapping(const JDBCDataType& key, const GlueRecordType& value) { m_dataTypeMappingHasBeenSet = true; m_dataTypeMapping.emplace(key, value); return *this; }

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
    inline JDBCConnectorOptions& AddDataTypeMapping(JDBCDataType&& key, const GlueRecordType& value) { m_dataTypeMappingHasBeenSet = true; m_dataTypeMapping.emplace(std::move(key), value); return *this; }

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
    inline JDBCConnectorOptions& AddDataTypeMapping(const JDBCDataType& key, GlueRecordType&& value) { m_dataTypeMappingHasBeenSet = true; m_dataTypeMapping.emplace(key, std::move(value)); return *this; }

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
    inline JDBCConnectorOptions& AddDataTypeMapping(JDBCDataType&& key, GlueRecordType&& value) { m_dataTypeMappingHasBeenSet = true; m_dataTypeMapping.emplace(std::move(key), std::move(value)); return *this; }

  private:

    Aws::String m_filterPredicate;
    bool m_filterPredicateHasBeenSet = false;

    Aws::String m_partitionColumn;
    bool m_partitionColumnHasBeenSet = false;

    long long m_lowerBound;
    bool m_lowerBoundHasBeenSet = false;

    long long m_upperBound;
    bool m_upperBoundHasBeenSet = false;

    long long m_numPartitions;
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

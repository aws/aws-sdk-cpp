/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>A structure that describes how data is partitioned on the
   * target.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/IntegrationPartition">AWS
   * API Reference</a></p>
   */
  class IntegrationPartition
  {
  public:
    AWS_GLUE_API IntegrationPartition() = default;
    AWS_GLUE_API IntegrationPartition(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API IntegrationPartition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The field name used to partition data on the target. Avoid using columns that
     * have unique values for each row (for example, `LastModifiedTimestamp`,
     * `SystemModTimeStamp`) as the partition column. These columns are not suitable
     * for partitioning because they create a large number of small partitions, which
     * can lead to performance issues.</p>
     */
    inline const Aws::String& GetFieldName() const { return m_fieldName; }
    inline bool FieldNameHasBeenSet() const { return m_fieldNameHasBeenSet; }
    template<typename FieldNameT = Aws::String>
    void SetFieldName(FieldNameT&& value) { m_fieldNameHasBeenSet = true; m_fieldName = std::forward<FieldNameT>(value); }
    template<typename FieldNameT = Aws::String>
    IntegrationPartition& WithFieldName(FieldNameT&& value) { SetFieldName(std::forward<FieldNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the function used to partition data on the target. The accepted
     * values for this parameter are:</p> <ul> <li> <p> <code>identity</code> - Uses
     * source values directly without transformation</p> </li> <li> <p>
     * <code>year</code> - Extracts the year from timestamp values (e.g., 2023)</p>
     * </li> <li> <p> <code>month</code> - Extracts the month from timestamp values
     * (e.g., 2023-01)</p> </li> <li> <p> <code>day</code> - Extracts the day from
     * timestamp values (e.g., 2023-01-15)</p> </li> <li> <p> <code>hour</code> -
     * Extracts the hour from timestamp values (e.g., 2023-01-15-14)</p> </li> </ul>
     */
    inline const Aws::String& GetFunctionSpec() const { return m_functionSpec; }
    inline bool FunctionSpecHasBeenSet() const { return m_functionSpecHasBeenSet; }
    template<typename FunctionSpecT = Aws::String>
    void SetFunctionSpec(FunctionSpecT&& value) { m_functionSpecHasBeenSet = true; m_functionSpec = std::forward<FunctionSpecT>(value); }
    template<typename FunctionSpecT = Aws::String>
    IntegrationPartition& WithFunctionSpec(FunctionSpecT&& value) { SetFunctionSpec(std::forward<FunctionSpecT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the timestamp format of the source data. Valid values are:</p> <ul>
     * <li> <p> <code>epoch_sec</code> - Unix epoch timestamp in seconds</p> </li> <li>
     * <p> <code>epoch_milli</code> - Unix epoch timestamp in milliseconds</p> </li>
     * <li> <p> <code>iso</code> - ISO 8601 formatted timestamp</p> </li> </ul> 
     * <p> Only specify <code>ConversionSpec</code> when using timestamp-based
     * partition functions (year, month, day, or hour). Glue Zero-ETL uses this
     * parameter to correctly transform source data into timestamp format before
     * partitioning. </p> <p> Do not use high-cardinality columns with the
     * <code>identity</code> partition function. High-cardinality columns include: </p>
     * <ul> <li> <p>Primary keys</p> </li> <li> <p>Timestamp fields (such as
     * <code>LastModifiedTimestamp</code>, <code>CreatedDate</code>)</p> </li> <li>
     * <p>System-generated timestamps</p> </li> </ul> <p> Using high-cardinality
     * columns with identity partitioning creates many small partitions, which can
     * significantly degrade ingestion performance. </p> 
     */
    inline const Aws::String& GetConversionSpec() const { return m_conversionSpec; }
    inline bool ConversionSpecHasBeenSet() const { return m_conversionSpecHasBeenSet; }
    template<typename ConversionSpecT = Aws::String>
    void SetConversionSpec(ConversionSpecT&& value) { m_conversionSpecHasBeenSet = true; m_conversionSpec = std::forward<ConversionSpecT>(value); }
    template<typename ConversionSpecT = Aws::String>
    IntegrationPartition& WithConversionSpec(ConversionSpecT&& value) { SetConversionSpec(std::forward<ConversionSpecT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_fieldName;
    bool m_fieldNameHasBeenSet = false;

    Aws::String m_functionSpec;
    bool m_functionSpecHasBeenSet = false;

    Aws::String m_conversionSpec;
    bool m_conversionSpecHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws

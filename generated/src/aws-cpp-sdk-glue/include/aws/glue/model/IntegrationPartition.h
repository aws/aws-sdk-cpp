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
     * <p>Specifies the function used to partition data on the target. The only
     * accepted value for this parameter is `'identity'` (string). The `'identity'`
     * function ensures that the data partitioning on the target follows the same
     * scheme as the source. In other words, the partitioning structure of the source
     * data is preserved in the target destination.</p>
     */
    inline const Aws::String& GetFunctionSpec() const { return m_functionSpec; }
    inline bool FunctionSpecHasBeenSet() const { return m_functionSpecHasBeenSet; }
    template<typename FunctionSpecT = Aws::String>
    void SetFunctionSpec(FunctionSpecT&& value) { m_functionSpecHasBeenSet = true; m_functionSpec = std::forward<FunctionSpecT>(value); }
    template<typename FunctionSpecT = Aws::String>
    IntegrationPartition& WithFunctionSpec(FunctionSpecT&& value) { SetFunctionSpec(std::forward<FunctionSpecT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_fieldName;
    bool m_fieldNameHasBeenSet = false;

    Aws::String m_functionSpec;
    bool m_functionSpecHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/glue/model/PartitionInput.h>
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
   * <p>A structure that contains the values and structure used to update a
   * partition.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/BatchUpdatePartitionRequestEntry">AWS
   * API Reference</a></p>
   */
  class BatchUpdatePartitionRequestEntry
  {
  public:
    AWS_GLUE_API BatchUpdatePartitionRequestEntry() = default;
    AWS_GLUE_API BatchUpdatePartitionRequestEntry(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API BatchUpdatePartitionRequestEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list of values defining the partitions.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPartitionValueList() const { return m_partitionValueList; }
    inline bool PartitionValueListHasBeenSet() const { return m_partitionValueListHasBeenSet; }
    template<typename PartitionValueListT = Aws::Vector<Aws::String>>
    void SetPartitionValueList(PartitionValueListT&& value) { m_partitionValueListHasBeenSet = true; m_partitionValueList = std::forward<PartitionValueListT>(value); }
    template<typename PartitionValueListT = Aws::Vector<Aws::String>>
    BatchUpdatePartitionRequestEntry& WithPartitionValueList(PartitionValueListT&& value) { SetPartitionValueList(std::forward<PartitionValueListT>(value)); return *this;}
    template<typename PartitionValueListT = Aws::String>
    BatchUpdatePartitionRequestEntry& AddPartitionValueList(PartitionValueListT&& value) { m_partitionValueListHasBeenSet = true; m_partitionValueList.emplace_back(std::forward<PartitionValueListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The structure used to update a partition.</p>
     */
    inline const PartitionInput& GetPartitionInput() const { return m_partitionInput; }
    inline bool PartitionInputHasBeenSet() const { return m_partitionInputHasBeenSet; }
    template<typename PartitionInputT = PartitionInput>
    void SetPartitionInput(PartitionInputT&& value) { m_partitionInputHasBeenSet = true; m_partitionInput = std::forward<PartitionInputT>(value); }
    template<typename PartitionInputT = PartitionInput>
    BatchUpdatePartitionRequestEntry& WithPartitionInput(PartitionInputT&& value) { SetPartitionInput(std::forward<PartitionInputT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_partitionValueList;
    bool m_partitionValueListHasBeenSet = false;

    PartitionInput m_partitionInput;
    bool m_partitionInputHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws

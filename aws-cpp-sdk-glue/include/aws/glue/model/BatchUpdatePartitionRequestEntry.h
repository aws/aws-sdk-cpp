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
    AWS_GLUE_API BatchUpdatePartitionRequestEntry();
    AWS_GLUE_API BatchUpdatePartitionRequestEntry(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API BatchUpdatePartitionRequestEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A list of values defining the partitions.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPartitionValueList() const{ return m_partitionValueList; }

    /**
     * <p>A list of values defining the partitions.</p>
     */
    inline bool PartitionValueListHasBeenSet() const { return m_partitionValueListHasBeenSet; }

    /**
     * <p>A list of values defining the partitions.</p>
     */
    inline void SetPartitionValueList(const Aws::Vector<Aws::String>& value) { m_partitionValueListHasBeenSet = true; m_partitionValueList = value; }

    /**
     * <p>A list of values defining the partitions.</p>
     */
    inline void SetPartitionValueList(Aws::Vector<Aws::String>&& value) { m_partitionValueListHasBeenSet = true; m_partitionValueList = std::move(value); }

    /**
     * <p>A list of values defining the partitions.</p>
     */
    inline BatchUpdatePartitionRequestEntry& WithPartitionValueList(const Aws::Vector<Aws::String>& value) { SetPartitionValueList(value); return *this;}

    /**
     * <p>A list of values defining the partitions.</p>
     */
    inline BatchUpdatePartitionRequestEntry& WithPartitionValueList(Aws::Vector<Aws::String>&& value) { SetPartitionValueList(std::move(value)); return *this;}

    /**
     * <p>A list of values defining the partitions.</p>
     */
    inline BatchUpdatePartitionRequestEntry& AddPartitionValueList(const Aws::String& value) { m_partitionValueListHasBeenSet = true; m_partitionValueList.push_back(value); return *this; }

    /**
     * <p>A list of values defining the partitions.</p>
     */
    inline BatchUpdatePartitionRequestEntry& AddPartitionValueList(Aws::String&& value) { m_partitionValueListHasBeenSet = true; m_partitionValueList.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of values defining the partitions.</p>
     */
    inline BatchUpdatePartitionRequestEntry& AddPartitionValueList(const char* value) { m_partitionValueListHasBeenSet = true; m_partitionValueList.push_back(value); return *this; }


    /**
     * <p>The structure used to update a partition.</p>
     */
    inline const PartitionInput& GetPartitionInput() const{ return m_partitionInput; }

    /**
     * <p>The structure used to update a partition.</p>
     */
    inline bool PartitionInputHasBeenSet() const { return m_partitionInputHasBeenSet; }

    /**
     * <p>The structure used to update a partition.</p>
     */
    inline void SetPartitionInput(const PartitionInput& value) { m_partitionInputHasBeenSet = true; m_partitionInput = value; }

    /**
     * <p>The structure used to update a partition.</p>
     */
    inline void SetPartitionInput(PartitionInput&& value) { m_partitionInputHasBeenSet = true; m_partitionInput = std::move(value); }

    /**
     * <p>The structure used to update a partition.</p>
     */
    inline BatchUpdatePartitionRequestEntry& WithPartitionInput(const PartitionInput& value) { SetPartitionInput(value); return *this;}

    /**
     * <p>The structure used to update a partition.</p>
     */
    inline BatchUpdatePartitionRequestEntry& WithPartitionInput(PartitionInput&& value) { SetPartitionInput(std::move(value)); return *this;}

  private:

    Aws::Vector<Aws::String> m_partitionValueList;
    bool m_partitionValueListHasBeenSet = false;

    PartitionInput m_partitionInput;
    bool m_partitionInputHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/glue/model/ErrorDetail.h>
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
   * <p>Contains information about a batch update partition error.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/BatchUpdatePartitionFailureEntry">AWS
   * API Reference</a></p>
   */
  class BatchUpdatePartitionFailureEntry
  {
  public:
    AWS_GLUE_API BatchUpdatePartitionFailureEntry() = default;
    AWS_GLUE_API BatchUpdatePartitionFailureEntry(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API BatchUpdatePartitionFailureEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    BatchUpdatePartitionFailureEntry& WithPartitionValueList(PartitionValueListT&& value) { SetPartitionValueList(std::forward<PartitionValueListT>(value)); return *this;}
    template<typename PartitionValueListT = Aws::String>
    BatchUpdatePartitionFailureEntry& AddPartitionValueList(PartitionValueListT&& value) { m_partitionValueListHasBeenSet = true; m_partitionValueList.emplace_back(std::forward<PartitionValueListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The details about the batch update partition error.</p>
     */
    inline const ErrorDetail& GetErrorDetail() const { return m_errorDetail; }
    inline bool ErrorDetailHasBeenSet() const { return m_errorDetailHasBeenSet; }
    template<typename ErrorDetailT = ErrorDetail>
    void SetErrorDetail(ErrorDetailT&& value) { m_errorDetailHasBeenSet = true; m_errorDetail = std::forward<ErrorDetailT>(value); }
    template<typename ErrorDetailT = ErrorDetail>
    BatchUpdatePartitionFailureEntry& WithErrorDetail(ErrorDetailT&& value) { SetErrorDetail(std::forward<ErrorDetailT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_partitionValueList;
    bool m_partitionValueListHasBeenSet = false;

    ErrorDetail m_errorDetail;
    bool m_errorDetailHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws

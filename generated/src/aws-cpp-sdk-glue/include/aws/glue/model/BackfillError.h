/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/BackfillErrorCode.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/glue/model/PartitionValueList.h>
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
   * <p>A list of errors that can occur when registering partition indexes for an
   * existing table.</p> <p>These errors give the details about why an index
   * registration failed and provide a limited number of partitions in the response,
   * so that you can fix the partitions at fault and try registering the index again.
   * The most common set of errors that can occur are categorized as follows:</p>
   * <ul> <li> <p>EncryptedPartitionError: The partitions are encrypted.</p> </li>
   * <li> <p>InvalidPartitionTypeDataError: The partition value doesn't match the
   * data type for that partition column.</p> </li> <li>
   * <p>MissingPartitionValueError: The partitions are encrypted.</p> </li> <li>
   * <p>UnsupportedPartitionCharacterError: Characters inside the partition value are
   * not supported. For example: U+0000 , U+0001, U+0002.</p> </li> <li>
   * <p>InternalError: Any error which does not belong to other error codes.</p>
   * </li> </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/BackfillError">AWS
   * API Reference</a></p>
   */
  class BackfillError
  {
  public:
    AWS_GLUE_API BackfillError() = default;
    AWS_GLUE_API BackfillError(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API BackfillError& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The error code for an error that occurred when registering partition indexes
     * for an existing table.</p>
     */
    inline BackfillErrorCode GetCode() const { return m_code; }
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }
    inline void SetCode(BackfillErrorCode value) { m_codeHasBeenSet = true; m_code = value; }
    inline BackfillError& WithCode(BackfillErrorCode value) { SetCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of a limited number of partitions in the response.</p>
     */
    inline const Aws::Vector<PartitionValueList>& GetPartitions() const { return m_partitions; }
    inline bool PartitionsHasBeenSet() const { return m_partitionsHasBeenSet; }
    template<typename PartitionsT = Aws::Vector<PartitionValueList>>
    void SetPartitions(PartitionsT&& value) { m_partitionsHasBeenSet = true; m_partitions = std::forward<PartitionsT>(value); }
    template<typename PartitionsT = Aws::Vector<PartitionValueList>>
    BackfillError& WithPartitions(PartitionsT&& value) { SetPartitions(std::forward<PartitionsT>(value)); return *this;}
    template<typename PartitionsT = PartitionValueList>
    BackfillError& AddPartitions(PartitionsT&& value) { m_partitionsHasBeenSet = true; m_partitions.emplace_back(std::forward<PartitionsT>(value)); return *this; }
    ///@}
  private:

    BackfillErrorCode m_code{BackfillErrorCode::NOT_SET};
    bool m_codeHasBeenSet = false;

    Aws::Vector<PartitionValueList> m_partitions;
    bool m_partitionsHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws

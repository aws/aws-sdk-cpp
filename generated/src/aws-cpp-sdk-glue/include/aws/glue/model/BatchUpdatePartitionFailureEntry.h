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
    AWS_GLUE_API BatchUpdatePartitionFailureEntry();
    AWS_GLUE_API BatchUpdatePartitionFailureEntry(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API BatchUpdatePartitionFailureEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list of values defining the partitions.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPartitionValueList() const{ return m_partitionValueList; }
    inline bool PartitionValueListHasBeenSet() const { return m_partitionValueListHasBeenSet; }
    inline void SetPartitionValueList(const Aws::Vector<Aws::String>& value) { m_partitionValueListHasBeenSet = true; m_partitionValueList = value; }
    inline void SetPartitionValueList(Aws::Vector<Aws::String>&& value) { m_partitionValueListHasBeenSet = true; m_partitionValueList = std::move(value); }
    inline BatchUpdatePartitionFailureEntry& WithPartitionValueList(const Aws::Vector<Aws::String>& value) { SetPartitionValueList(value); return *this;}
    inline BatchUpdatePartitionFailureEntry& WithPartitionValueList(Aws::Vector<Aws::String>&& value) { SetPartitionValueList(std::move(value)); return *this;}
    inline BatchUpdatePartitionFailureEntry& AddPartitionValueList(const Aws::String& value) { m_partitionValueListHasBeenSet = true; m_partitionValueList.push_back(value); return *this; }
    inline BatchUpdatePartitionFailureEntry& AddPartitionValueList(Aws::String&& value) { m_partitionValueListHasBeenSet = true; m_partitionValueList.push_back(std::move(value)); return *this; }
    inline BatchUpdatePartitionFailureEntry& AddPartitionValueList(const char* value) { m_partitionValueListHasBeenSet = true; m_partitionValueList.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The details about the batch update partition error.</p>
     */
    inline const ErrorDetail& GetErrorDetail() const{ return m_errorDetail; }
    inline bool ErrorDetailHasBeenSet() const { return m_errorDetailHasBeenSet; }
    inline void SetErrorDetail(const ErrorDetail& value) { m_errorDetailHasBeenSet = true; m_errorDetail = value; }
    inline void SetErrorDetail(ErrorDetail&& value) { m_errorDetailHasBeenSet = true; m_errorDetail = std::move(value); }
    inline BatchUpdatePartitionFailureEntry& WithErrorDetail(const ErrorDetail& value) { SetErrorDetail(value); return *this;}
    inline BatchUpdatePartitionFailureEntry& WithErrorDetail(ErrorDetail&& value) { SetErrorDetail(std::move(value)); return *this;}
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

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/glue/model/BatchUpdatePartitionFailureEntry.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Glue
{
namespace Model
{
  class BatchUpdatePartitionResult
  {
  public:
    AWS_GLUE_API BatchUpdatePartitionResult();
    AWS_GLUE_API BatchUpdatePartitionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API BatchUpdatePartitionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The errors encountered when trying to update the requested partitions. A list
     * of <code>BatchUpdatePartitionFailureEntry</code> objects.</p>
     */
    inline const Aws::Vector<BatchUpdatePartitionFailureEntry>& GetErrors() const{ return m_errors; }

    /**
     * <p>The errors encountered when trying to update the requested partitions. A list
     * of <code>BatchUpdatePartitionFailureEntry</code> objects.</p>
     */
    inline void SetErrors(const Aws::Vector<BatchUpdatePartitionFailureEntry>& value) { m_errors = value; }

    /**
     * <p>The errors encountered when trying to update the requested partitions. A list
     * of <code>BatchUpdatePartitionFailureEntry</code> objects.</p>
     */
    inline void SetErrors(Aws::Vector<BatchUpdatePartitionFailureEntry>&& value) { m_errors = std::move(value); }

    /**
     * <p>The errors encountered when trying to update the requested partitions. A list
     * of <code>BatchUpdatePartitionFailureEntry</code> objects.</p>
     */
    inline BatchUpdatePartitionResult& WithErrors(const Aws::Vector<BatchUpdatePartitionFailureEntry>& value) { SetErrors(value); return *this;}

    /**
     * <p>The errors encountered when trying to update the requested partitions. A list
     * of <code>BatchUpdatePartitionFailureEntry</code> objects.</p>
     */
    inline BatchUpdatePartitionResult& WithErrors(Aws::Vector<BatchUpdatePartitionFailureEntry>&& value) { SetErrors(std::move(value)); return *this;}

    /**
     * <p>The errors encountered when trying to update the requested partitions. A list
     * of <code>BatchUpdatePartitionFailureEntry</code> objects.</p>
     */
    inline BatchUpdatePartitionResult& AddErrors(const BatchUpdatePartitionFailureEntry& value) { m_errors.push_back(value); return *this; }

    /**
     * <p>The errors encountered when trying to update the requested partitions. A list
     * of <code>BatchUpdatePartitionFailureEntry</code> objects.</p>
     */
    inline BatchUpdatePartitionResult& AddErrors(BatchUpdatePartitionFailureEntry&& value) { m_errors.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<BatchUpdatePartitionFailureEntry> m_errors;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws

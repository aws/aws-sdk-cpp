/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/glue/model/Partition.h>
#include <aws/glue/model/PartitionValueList.h>
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
  class BatchGetPartitionResult
  {
  public:
    AWS_GLUE_API BatchGetPartitionResult();
    AWS_GLUE_API BatchGetPartitionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API BatchGetPartitionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of the requested partitions.</p>
     */
    inline const Aws::Vector<Partition>& GetPartitions() const{ return m_partitions; }

    /**
     * <p>A list of the requested partitions.</p>
     */
    inline void SetPartitions(const Aws::Vector<Partition>& value) { m_partitions = value; }

    /**
     * <p>A list of the requested partitions.</p>
     */
    inline void SetPartitions(Aws::Vector<Partition>&& value) { m_partitions = std::move(value); }

    /**
     * <p>A list of the requested partitions.</p>
     */
    inline BatchGetPartitionResult& WithPartitions(const Aws::Vector<Partition>& value) { SetPartitions(value); return *this;}

    /**
     * <p>A list of the requested partitions.</p>
     */
    inline BatchGetPartitionResult& WithPartitions(Aws::Vector<Partition>&& value) { SetPartitions(std::move(value)); return *this;}

    /**
     * <p>A list of the requested partitions.</p>
     */
    inline BatchGetPartitionResult& AddPartitions(const Partition& value) { m_partitions.push_back(value); return *this; }

    /**
     * <p>A list of the requested partitions.</p>
     */
    inline BatchGetPartitionResult& AddPartitions(Partition&& value) { m_partitions.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of the partition values in the request for which partitions were not
     * returned.</p>
     */
    inline const Aws::Vector<PartitionValueList>& GetUnprocessedKeys() const{ return m_unprocessedKeys; }

    /**
     * <p>A list of the partition values in the request for which partitions were not
     * returned.</p>
     */
    inline void SetUnprocessedKeys(const Aws::Vector<PartitionValueList>& value) { m_unprocessedKeys = value; }

    /**
     * <p>A list of the partition values in the request for which partitions were not
     * returned.</p>
     */
    inline void SetUnprocessedKeys(Aws::Vector<PartitionValueList>&& value) { m_unprocessedKeys = std::move(value); }

    /**
     * <p>A list of the partition values in the request for which partitions were not
     * returned.</p>
     */
    inline BatchGetPartitionResult& WithUnprocessedKeys(const Aws::Vector<PartitionValueList>& value) { SetUnprocessedKeys(value); return *this;}

    /**
     * <p>A list of the partition values in the request for which partitions were not
     * returned.</p>
     */
    inline BatchGetPartitionResult& WithUnprocessedKeys(Aws::Vector<PartitionValueList>&& value) { SetUnprocessedKeys(std::move(value)); return *this;}

    /**
     * <p>A list of the partition values in the request for which partitions were not
     * returned.</p>
     */
    inline BatchGetPartitionResult& AddUnprocessedKeys(const PartitionValueList& value) { m_unprocessedKeys.push_back(value); return *this; }

    /**
     * <p>A list of the partition values in the request for which partitions were not
     * returned.</p>
     */
    inline BatchGetPartitionResult& AddUnprocessedKeys(PartitionValueList&& value) { m_unprocessedKeys.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<Partition> m_partitions;

    Aws::Vector<PartitionValueList> m_unprocessedKeys;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws

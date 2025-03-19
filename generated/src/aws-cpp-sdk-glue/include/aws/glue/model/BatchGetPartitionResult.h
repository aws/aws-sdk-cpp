/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
    AWS_GLUE_API BatchGetPartitionResult() = default;
    AWS_GLUE_API BatchGetPartitionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API BatchGetPartitionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of the requested partitions.</p>
     */
    inline const Aws::Vector<Partition>& GetPartitions() const { return m_partitions; }
    template<typename PartitionsT = Aws::Vector<Partition>>
    void SetPartitions(PartitionsT&& value) { m_partitionsHasBeenSet = true; m_partitions = std::forward<PartitionsT>(value); }
    template<typename PartitionsT = Aws::Vector<Partition>>
    BatchGetPartitionResult& WithPartitions(PartitionsT&& value) { SetPartitions(std::forward<PartitionsT>(value)); return *this;}
    template<typename PartitionsT = Partition>
    BatchGetPartitionResult& AddPartitions(PartitionsT&& value) { m_partitionsHasBeenSet = true; m_partitions.emplace_back(std::forward<PartitionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of the partition values in the request for which partitions were not
     * returned.</p>
     */
    inline const Aws::Vector<PartitionValueList>& GetUnprocessedKeys() const { return m_unprocessedKeys; }
    template<typename UnprocessedKeysT = Aws::Vector<PartitionValueList>>
    void SetUnprocessedKeys(UnprocessedKeysT&& value) { m_unprocessedKeysHasBeenSet = true; m_unprocessedKeys = std::forward<UnprocessedKeysT>(value); }
    template<typename UnprocessedKeysT = Aws::Vector<PartitionValueList>>
    BatchGetPartitionResult& WithUnprocessedKeys(UnprocessedKeysT&& value) { SetUnprocessedKeys(std::forward<UnprocessedKeysT>(value)); return *this;}
    template<typename UnprocessedKeysT = PartitionValueList>
    BatchGetPartitionResult& AddUnprocessedKeys(UnprocessedKeysT&& value) { m_unprocessedKeysHasBeenSet = true; m_unprocessedKeys.emplace_back(std::forward<UnprocessedKeysT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    BatchGetPartitionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Partition> m_partitions;
    bool m_partitionsHasBeenSet = false;

    Aws::Vector<PartitionValueList> m_unprocessedKeys;
    bool m_unprocessedKeysHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws

﻿/**
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
    AWS_GLUE_API BatchGetPartitionResult();
    AWS_GLUE_API BatchGetPartitionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API BatchGetPartitionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of the requested partitions.</p>
     */
    inline const Aws::Vector<Partition>& GetPartitions() const{ return m_partitions; }
    inline void SetPartitions(const Aws::Vector<Partition>& value) { m_partitions = value; }
    inline void SetPartitions(Aws::Vector<Partition>&& value) { m_partitions = std::move(value); }
    inline BatchGetPartitionResult& WithPartitions(const Aws::Vector<Partition>& value) { SetPartitions(value); return *this;}
    inline BatchGetPartitionResult& WithPartitions(Aws::Vector<Partition>&& value) { SetPartitions(std::move(value)); return *this;}
    inline BatchGetPartitionResult& AddPartitions(const Partition& value) { m_partitions.push_back(value); return *this; }
    inline BatchGetPartitionResult& AddPartitions(Partition&& value) { m_partitions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of the partition values in the request for which partitions were not
     * returned.</p>
     */
    inline const Aws::Vector<PartitionValueList>& GetUnprocessedKeys() const{ return m_unprocessedKeys; }
    inline void SetUnprocessedKeys(const Aws::Vector<PartitionValueList>& value) { m_unprocessedKeys = value; }
    inline void SetUnprocessedKeys(Aws::Vector<PartitionValueList>&& value) { m_unprocessedKeys = std::move(value); }
    inline BatchGetPartitionResult& WithUnprocessedKeys(const Aws::Vector<PartitionValueList>& value) { SetUnprocessedKeys(value); return *this;}
    inline BatchGetPartitionResult& WithUnprocessedKeys(Aws::Vector<PartitionValueList>&& value) { SetUnprocessedKeys(std::move(value)); return *this;}
    inline BatchGetPartitionResult& AddUnprocessedKeys(const PartitionValueList& value) { m_unprocessedKeys.push_back(value); return *this; }
    inline BatchGetPartitionResult& AddUnprocessedKeys(PartitionValueList&& value) { m_unprocessedKeys.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline BatchGetPartitionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline BatchGetPartitionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline BatchGetPartitionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<Partition> m_partitions;

    Aws::Vector<PartitionValueList> m_unprocessedKeys;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws

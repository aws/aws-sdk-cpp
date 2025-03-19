/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/Partition.h>
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
  class GetPartitionsResult
  {
  public:
    AWS_GLUE_API GetPartitionsResult() = default;
    AWS_GLUE_API GetPartitionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API GetPartitionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of requested partitions.</p>
     */
    inline const Aws::Vector<Partition>& GetPartitions() const { return m_partitions; }
    template<typename PartitionsT = Aws::Vector<Partition>>
    void SetPartitions(PartitionsT&& value) { m_partitionsHasBeenSet = true; m_partitions = std::forward<PartitionsT>(value); }
    template<typename PartitionsT = Aws::Vector<Partition>>
    GetPartitionsResult& WithPartitions(PartitionsT&& value) { SetPartitions(std::forward<PartitionsT>(value)); return *this;}
    template<typename PartitionsT = Partition>
    GetPartitionsResult& AddPartitions(PartitionsT&& value) { m_partitionsHasBeenSet = true; m_partitions.emplace_back(std::forward<PartitionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A continuation token, if the returned list of partitions does not include the
     * last one.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetPartitionsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetPartitionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Partition> m_partitions;
    bool m_partitionsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws

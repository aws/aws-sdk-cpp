/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/PartitionIndexDescriptor.h>
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
  class GetPartitionIndexesResult
  {
  public:
    AWS_GLUE_API GetPartitionIndexesResult() = default;
    AWS_GLUE_API GetPartitionIndexesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API GetPartitionIndexesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of index descriptors.</p>
     */
    inline const Aws::Vector<PartitionIndexDescriptor>& GetPartitionIndexDescriptorList() const { return m_partitionIndexDescriptorList; }
    template<typename PartitionIndexDescriptorListT = Aws::Vector<PartitionIndexDescriptor>>
    void SetPartitionIndexDescriptorList(PartitionIndexDescriptorListT&& value) { m_partitionIndexDescriptorListHasBeenSet = true; m_partitionIndexDescriptorList = std::forward<PartitionIndexDescriptorListT>(value); }
    template<typename PartitionIndexDescriptorListT = Aws::Vector<PartitionIndexDescriptor>>
    GetPartitionIndexesResult& WithPartitionIndexDescriptorList(PartitionIndexDescriptorListT&& value) { SetPartitionIndexDescriptorList(std::forward<PartitionIndexDescriptorListT>(value)); return *this;}
    template<typename PartitionIndexDescriptorListT = PartitionIndexDescriptor>
    GetPartitionIndexesResult& AddPartitionIndexDescriptorList(PartitionIndexDescriptorListT&& value) { m_partitionIndexDescriptorListHasBeenSet = true; m_partitionIndexDescriptorList.emplace_back(std::forward<PartitionIndexDescriptorListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A continuation token, present if the current list segment is not the
     * last.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetPartitionIndexesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetPartitionIndexesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<PartitionIndexDescriptor> m_partitionIndexDescriptorList;
    bool m_partitionIndexDescriptorListHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws

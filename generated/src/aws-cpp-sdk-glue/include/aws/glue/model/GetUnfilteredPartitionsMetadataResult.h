/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/UnfilteredPartition.h>
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
  class GetUnfilteredPartitionsMetadataResult
  {
  public:
    AWS_GLUE_API GetUnfilteredPartitionsMetadataResult() = default;
    AWS_GLUE_API GetUnfilteredPartitionsMetadataResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API GetUnfilteredPartitionsMetadataResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of requested partitions.</p>
     */
    inline const Aws::Vector<UnfilteredPartition>& GetUnfilteredPartitions() const { return m_unfilteredPartitions; }
    template<typename UnfilteredPartitionsT = Aws::Vector<UnfilteredPartition>>
    void SetUnfilteredPartitions(UnfilteredPartitionsT&& value) { m_unfilteredPartitionsHasBeenSet = true; m_unfilteredPartitions = std::forward<UnfilteredPartitionsT>(value); }
    template<typename UnfilteredPartitionsT = Aws::Vector<UnfilteredPartition>>
    GetUnfilteredPartitionsMetadataResult& WithUnfilteredPartitions(UnfilteredPartitionsT&& value) { SetUnfilteredPartitions(std::forward<UnfilteredPartitionsT>(value)); return *this;}
    template<typename UnfilteredPartitionsT = UnfilteredPartition>
    GetUnfilteredPartitionsMetadataResult& AddUnfilteredPartitions(UnfilteredPartitionsT&& value) { m_unfilteredPartitionsHasBeenSet = true; m_unfilteredPartitions.emplace_back(std::forward<UnfilteredPartitionsT>(value)); return *this; }
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
    GetUnfilteredPartitionsMetadataResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetUnfilteredPartitionsMetadataResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<UnfilteredPartition> m_unfilteredPartitions;
    bool m_unfilteredPartitionsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws

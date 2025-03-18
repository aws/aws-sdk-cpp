/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/m2/MainframeModernization_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/m2/model/BatchJobDefinition.h>
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
namespace MainframeModernization
{
namespace Model
{
  class ListBatchJobDefinitionsResult
  {
  public:
    AWS_MAINFRAMEMODERNIZATION_API ListBatchJobDefinitionsResult() = default;
    AWS_MAINFRAMEMODERNIZATION_API ListBatchJobDefinitionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MAINFRAMEMODERNIZATION_API ListBatchJobDefinitionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of batch job definitions.</p>
     */
    inline const Aws::Vector<BatchJobDefinition>& GetBatchJobDefinitions() const { return m_batchJobDefinitions; }
    template<typename BatchJobDefinitionsT = Aws::Vector<BatchJobDefinition>>
    void SetBatchJobDefinitions(BatchJobDefinitionsT&& value) { m_batchJobDefinitionsHasBeenSet = true; m_batchJobDefinitions = std::forward<BatchJobDefinitionsT>(value); }
    template<typename BatchJobDefinitionsT = Aws::Vector<BatchJobDefinition>>
    ListBatchJobDefinitionsResult& WithBatchJobDefinitions(BatchJobDefinitionsT&& value) { SetBatchJobDefinitions(std::forward<BatchJobDefinitionsT>(value)); return *this;}
    template<typename BatchJobDefinitionsT = BatchJobDefinition>
    ListBatchJobDefinitionsResult& AddBatchJobDefinitions(BatchJobDefinitionsT&& value) { m_batchJobDefinitionsHasBeenSet = true; m_batchJobDefinitions.emplace_back(std::forward<BatchJobDefinitionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If there are more items to return, this contains a token that is passed to a
     * subsequent call to this operation to retrieve the next set of items.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListBatchJobDefinitionsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListBatchJobDefinitionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<BatchJobDefinition> m_batchJobDefinitions;
    bool m_batchJobDefinitionsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MainframeModernization
} // namespace Aws

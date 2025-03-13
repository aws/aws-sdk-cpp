/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/b2bi/B2BI_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/b2bi/model/TransformerSummary.h>
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
namespace B2BI
{
namespace Model
{
  class ListTransformersResult
  {
  public:
    AWS_B2BI_API ListTransformersResult() = default;
    AWS_B2BI_API ListTransformersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_B2BI_API ListTransformersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Returns an array of one or more transformer objects.</p> <p>For each
     * transformer, a <code>TransformerSummary</code> object is returned. The
     * <code>TransformerSummary</code> contains all the details for a specific
     * transformer.</p>
     */
    inline const Aws::Vector<TransformerSummary>& GetTransformers() const { return m_transformers; }
    template<typename TransformersT = Aws::Vector<TransformerSummary>>
    void SetTransformers(TransformersT&& value) { m_transformersHasBeenSet = true; m_transformers = std::forward<TransformersT>(value); }
    template<typename TransformersT = Aws::Vector<TransformerSummary>>
    ListTransformersResult& WithTransformers(TransformersT&& value) { SetTransformers(std::forward<TransformersT>(value)); return *this;}
    template<typename TransformersT = TransformerSummary>
    ListTransformersResult& AddTransformers(TransformersT&& value) { m_transformersHasBeenSet = true; m_transformers.emplace_back(std::forward<TransformersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>When additional results are obtained from the command, a
     * <code>NextToken</code> parameter is returned in the output. You can then pass
     * the <code>NextToken</code> parameter in a subsequent command to continue listing
     * additional resources.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListTransformersResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListTransformersResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<TransformerSummary> m_transformers;
    bool m_transformersHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace B2BI
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivs-realtime/Ivsrealtime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ivs-realtime/model/CompositionSummary.h>
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
namespace ivsrealtime
{
namespace Model
{
  class ListCompositionsResult
  {
  public:
    AWS_IVSREALTIME_API ListCompositionsResult() = default;
    AWS_IVSREALTIME_API ListCompositionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IVSREALTIME_API ListCompositionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>List of the matching Compositions (summary information only).</p>
     */
    inline const Aws::Vector<CompositionSummary>& GetCompositions() const { return m_compositions; }
    template<typename CompositionsT = Aws::Vector<CompositionSummary>>
    void SetCompositions(CompositionsT&& value) { m_compositionsHasBeenSet = true; m_compositions = std::forward<CompositionsT>(value); }
    template<typename CompositionsT = Aws::Vector<CompositionSummary>>
    ListCompositionsResult& WithCompositions(CompositionsT&& value) { SetCompositions(std::forward<CompositionsT>(value)); return *this;}
    template<typename CompositionsT = CompositionSummary>
    ListCompositionsResult& AddCompositions(CompositionsT&& value) { m_compositionsHasBeenSet = true; m_compositions.emplace_back(std::forward<CompositionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If there are more compositions than <code>maxResults</code>, use
     * <code>nextToken</code> in the request to get the next set.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListCompositionsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListCompositionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<CompositionSummary> m_compositions;
    bool m_compositionsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ivsrealtime
} // namespace Aws

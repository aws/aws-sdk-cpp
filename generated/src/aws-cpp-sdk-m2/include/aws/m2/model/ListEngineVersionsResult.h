/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/m2/MainframeModernization_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/m2/model/EngineVersionsSummary.h>
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
  class ListEngineVersionsResult
  {
  public:
    AWS_MAINFRAMEMODERNIZATION_API ListEngineVersionsResult() = default;
    AWS_MAINFRAMEMODERNIZATION_API ListEngineVersionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MAINFRAMEMODERNIZATION_API ListEngineVersionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Returns the engine versions.</p>
     */
    inline const Aws::Vector<EngineVersionsSummary>& GetEngineVersions() const { return m_engineVersions; }
    template<typename EngineVersionsT = Aws::Vector<EngineVersionsSummary>>
    void SetEngineVersions(EngineVersionsT&& value) { m_engineVersionsHasBeenSet = true; m_engineVersions = std::forward<EngineVersionsT>(value); }
    template<typename EngineVersionsT = Aws::Vector<EngineVersionsSummary>>
    ListEngineVersionsResult& WithEngineVersions(EngineVersionsT&& value) { SetEngineVersions(std::forward<EngineVersionsT>(value)); return *this;}
    template<typename EngineVersionsT = EngineVersionsSummary>
    ListEngineVersionsResult& AddEngineVersions(EngineVersionsT&& value) { m_engineVersionsHasBeenSet = true; m_engineVersions.emplace_back(std::forward<EngineVersionsT>(value)); return *this; }
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
    ListEngineVersionsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListEngineVersionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<EngineVersionsSummary> m_engineVersions;
    bool m_engineVersionsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MainframeModernization
} // namespace Aws

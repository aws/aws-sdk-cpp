/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codebuild/CodeBuild_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace CodeBuild
{
namespace Model
{
  class ListFleetsResult
  {
  public:
    AWS_CODEBUILD_API ListFleetsResult() = default;
    AWS_CODEBUILD_API ListFleetsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEBUILD_API ListFleetsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>If there are more than 100 items in the list, only the first 100 items are
     * returned, along with a unique string called a <i>nextToken</i>. To get the next
     * batch of items in the list, call this operation again, adding the next token to
     * the call.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListFleetsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of compute fleet names.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFleets() const { return m_fleets; }
    template<typename FleetsT = Aws::Vector<Aws::String>>
    void SetFleets(FleetsT&& value) { m_fleetsHasBeenSet = true; m_fleets = std::forward<FleetsT>(value); }
    template<typename FleetsT = Aws::Vector<Aws::String>>
    ListFleetsResult& WithFleets(FleetsT&& value) { SetFleets(std::forward<FleetsT>(value)); return *this;}
    template<typename FleetsT = Aws::String>
    ListFleetsResult& AddFleets(FleetsT&& value) { m_fleetsHasBeenSet = true; m_fleets.emplace_back(std::forward<FleetsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListFleetsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<Aws::String> m_fleets;
    bool m_fleetsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws

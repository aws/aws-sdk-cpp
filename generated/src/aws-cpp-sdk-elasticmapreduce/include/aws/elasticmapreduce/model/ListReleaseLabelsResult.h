/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace EMR
{
namespace Model
{
  class ListReleaseLabelsResult
  {
  public:
    AWS_EMR_API ListReleaseLabelsResult() = default;
    AWS_EMR_API ListReleaseLabelsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_EMR_API ListReleaseLabelsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The returned release labels.</p>
     */
    inline const Aws::Vector<Aws::String>& GetReleaseLabels() const { return m_releaseLabels; }
    template<typename ReleaseLabelsT = Aws::Vector<Aws::String>>
    void SetReleaseLabels(ReleaseLabelsT&& value) { m_releaseLabelsHasBeenSet = true; m_releaseLabels = std::forward<ReleaseLabelsT>(value); }
    template<typename ReleaseLabelsT = Aws::Vector<Aws::String>>
    ListReleaseLabelsResult& WithReleaseLabels(ReleaseLabelsT&& value) { SetReleaseLabels(std::forward<ReleaseLabelsT>(value)); return *this;}
    template<typename ReleaseLabelsT = Aws::String>
    ListReleaseLabelsResult& AddReleaseLabels(ReleaseLabelsT&& value) { m_releaseLabelsHasBeenSet = true; m_releaseLabels.emplace_back(std::forward<ReleaseLabelsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Used to paginate the next page of results if specified in the next
     * <code>ListReleaseLabels</code> request.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListReleaseLabelsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListReleaseLabelsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_releaseLabels;
    bool m_releaseLabelsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws

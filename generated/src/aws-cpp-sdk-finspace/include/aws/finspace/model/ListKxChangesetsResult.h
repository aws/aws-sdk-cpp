/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/finspace/Finspace_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/finspace/model/KxChangesetListEntry.h>
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
namespace finspace
{
namespace Model
{
  class ListKxChangesetsResult
  {
  public:
    AWS_FINSPACE_API ListKxChangesetsResult() = default;
    AWS_FINSPACE_API ListKxChangesetsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FINSPACE_API ListKxChangesetsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of changesets for a database.</p>
     */
    inline const Aws::Vector<KxChangesetListEntry>& GetKxChangesets() const { return m_kxChangesets; }
    template<typename KxChangesetsT = Aws::Vector<KxChangesetListEntry>>
    void SetKxChangesets(KxChangesetsT&& value) { m_kxChangesetsHasBeenSet = true; m_kxChangesets = std::forward<KxChangesetsT>(value); }
    template<typename KxChangesetsT = Aws::Vector<KxChangesetListEntry>>
    ListKxChangesetsResult& WithKxChangesets(KxChangesetsT&& value) { SetKxChangesets(std::forward<KxChangesetsT>(value)); return *this;}
    template<typename KxChangesetsT = KxChangesetListEntry>
    ListKxChangesetsResult& AddKxChangesets(KxChangesetsT&& value) { m_kxChangesetsHasBeenSet = true; m_kxChangesets.emplace_back(std::forward<KxChangesetsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A token that indicates where a results page should begin.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListKxChangesetsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListKxChangesetsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<KxChangesetListEntry> m_kxChangesets;
    bool m_kxChangesetsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace finspace
} // namespace Aws

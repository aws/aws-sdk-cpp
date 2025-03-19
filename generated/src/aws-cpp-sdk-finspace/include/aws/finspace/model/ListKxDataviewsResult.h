/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/finspace/Finspace_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/finspace/model/KxDataviewListEntry.h>
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
  class ListKxDataviewsResult
  {
  public:
    AWS_FINSPACE_API ListKxDataviewsResult() = default;
    AWS_FINSPACE_API ListKxDataviewsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FINSPACE_API ListKxDataviewsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> The list of kdb dataviews that are currently active for the given database.
     * </p>
     */
    inline const Aws::Vector<KxDataviewListEntry>& GetKxDataviews() const { return m_kxDataviews; }
    template<typename KxDataviewsT = Aws::Vector<KxDataviewListEntry>>
    void SetKxDataviews(KxDataviewsT&& value) { m_kxDataviewsHasBeenSet = true; m_kxDataviews = std::forward<KxDataviewsT>(value); }
    template<typename KxDataviewsT = Aws::Vector<KxDataviewListEntry>>
    ListKxDataviewsResult& WithKxDataviews(KxDataviewsT&& value) { SetKxDataviews(std::forward<KxDataviewsT>(value)); return *this;}
    template<typename KxDataviewsT = KxDataviewListEntry>
    ListKxDataviewsResult& AddKxDataviews(KxDataviewsT&& value) { m_kxDataviewsHasBeenSet = true; m_kxDataviews.emplace_back(std::forward<KxDataviewsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> A token that indicates where a results page should begin. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListKxDataviewsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListKxDataviewsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<KxDataviewListEntry> m_kxDataviews;
    bool m_kxDataviewsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace finspace
} // namespace Aws

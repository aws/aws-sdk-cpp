/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/UseCase.h>
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
namespace Connect
{
namespace Model
{
  class ListUseCasesResult
  {
  public:
    AWS_CONNECT_API ListUseCasesResult() = default;
    AWS_CONNECT_API ListUseCasesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API ListUseCasesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The use cases.</p>
     */
    inline const Aws::Vector<UseCase>& GetUseCaseSummaryList() const { return m_useCaseSummaryList; }
    template<typename UseCaseSummaryListT = Aws::Vector<UseCase>>
    void SetUseCaseSummaryList(UseCaseSummaryListT&& value) { m_useCaseSummaryListHasBeenSet = true; m_useCaseSummaryList = std::forward<UseCaseSummaryListT>(value); }
    template<typename UseCaseSummaryListT = Aws::Vector<UseCase>>
    ListUseCasesResult& WithUseCaseSummaryList(UseCaseSummaryListT&& value) { SetUseCaseSummaryList(std::forward<UseCaseSummaryListT>(value)); return *this;}
    template<typename UseCaseSummaryListT = UseCase>
    ListUseCasesResult& AddUseCaseSummaryList(UseCaseSummaryListT&& value) { m_useCaseSummaryListHasBeenSet = true; m_useCaseSummaryList.emplace_back(std::forward<UseCaseSummaryListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListUseCasesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListUseCasesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<UseCase> m_useCaseSummaryList;
    bool m_useCaseSummaryListHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws

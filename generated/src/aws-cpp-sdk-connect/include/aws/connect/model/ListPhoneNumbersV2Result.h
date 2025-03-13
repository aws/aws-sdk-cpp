/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/connect/model/ListPhoneNumbersSummary.h>
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
  class ListPhoneNumbersV2Result
  {
  public:
    AWS_CONNECT_API ListPhoneNumbersV2Result() = default;
    AWS_CONNECT_API ListPhoneNumbersV2Result(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API ListPhoneNumbersV2Result& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListPhoneNumbersV2Result& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about phone numbers that have been claimed to your Amazon Connect
     * instances or traffic distribution groups.</p>
     */
    inline const Aws::Vector<ListPhoneNumbersSummary>& GetListPhoneNumbersSummaryList() const { return m_listPhoneNumbersSummaryList; }
    template<typename ListPhoneNumbersSummaryListT = Aws::Vector<ListPhoneNumbersSummary>>
    void SetListPhoneNumbersSummaryList(ListPhoneNumbersSummaryListT&& value) { m_listPhoneNumbersSummaryListHasBeenSet = true; m_listPhoneNumbersSummaryList = std::forward<ListPhoneNumbersSummaryListT>(value); }
    template<typename ListPhoneNumbersSummaryListT = Aws::Vector<ListPhoneNumbersSummary>>
    ListPhoneNumbersV2Result& WithListPhoneNumbersSummaryList(ListPhoneNumbersSummaryListT&& value) { SetListPhoneNumbersSummaryList(std::forward<ListPhoneNumbersSummaryListT>(value)); return *this;}
    template<typename ListPhoneNumbersSummaryListT = ListPhoneNumbersSummary>
    ListPhoneNumbersV2Result& AddListPhoneNumbersSummaryList(ListPhoneNumbersSummaryListT&& value) { m_listPhoneNumbersSummaryListHasBeenSet = true; m_listPhoneNumbersSummaryList.emplace_back(std::forward<ListPhoneNumbersSummaryListT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListPhoneNumbersV2Result& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<ListPhoneNumbersSummary> m_listPhoneNumbersSummaryList;
    bool m_listPhoneNumbersSummaryListHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/PhoneNumberSummary.h>
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
  class ListPhoneNumbersResult
  {
  public:
    AWS_CONNECT_API ListPhoneNumbersResult() = default;
    AWS_CONNECT_API ListPhoneNumbersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API ListPhoneNumbersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the phone numbers.</p>
     */
    inline const Aws::Vector<PhoneNumberSummary>& GetPhoneNumberSummaryList() const { return m_phoneNumberSummaryList; }
    template<typename PhoneNumberSummaryListT = Aws::Vector<PhoneNumberSummary>>
    void SetPhoneNumberSummaryList(PhoneNumberSummaryListT&& value) { m_phoneNumberSummaryListHasBeenSet = true; m_phoneNumberSummaryList = std::forward<PhoneNumberSummaryListT>(value); }
    template<typename PhoneNumberSummaryListT = Aws::Vector<PhoneNumberSummary>>
    ListPhoneNumbersResult& WithPhoneNumberSummaryList(PhoneNumberSummaryListT&& value) { SetPhoneNumberSummaryList(std::forward<PhoneNumberSummaryListT>(value)); return *this;}
    template<typename PhoneNumberSummaryListT = PhoneNumberSummary>
    ListPhoneNumbersResult& AddPhoneNumberSummaryList(PhoneNumberSummaryListT&& value) { m_phoneNumberSummaryListHasBeenSet = true; m_phoneNumberSummaryList.emplace_back(std::forward<PhoneNumberSummaryListT>(value)); return *this; }
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
    ListPhoneNumbersResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListPhoneNumbersResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<PhoneNumberSummary> m_phoneNumberSummaryList;
    bool m_phoneNumberSummaryListHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws

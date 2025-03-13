/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/ClaimedPhoneNumberSummary.h>
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
namespace Connect
{
namespace Model
{
  class DescribePhoneNumberResult
  {
  public:
    AWS_CONNECT_API DescribePhoneNumberResult() = default;
    AWS_CONNECT_API DescribePhoneNumberResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API DescribePhoneNumberResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about a phone number that's been claimed to your Amazon Connect
     * instance or traffic distribution group.</p>
     */
    inline const ClaimedPhoneNumberSummary& GetClaimedPhoneNumberSummary() const { return m_claimedPhoneNumberSummary; }
    template<typename ClaimedPhoneNumberSummaryT = ClaimedPhoneNumberSummary>
    void SetClaimedPhoneNumberSummary(ClaimedPhoneNumberSummaryT&& value) { m_claimedPhoneNumberSummaryHasBeenSet = true; m_claimedPhoneNumberSummary = std::forward<ClaimedPhoneNumberSummaryT>(value); }
    template<typename ClaimedPhoneNumberSummaryT = ClaimedPhoneNumberSummary>
    DescribePhoneNumberResult& WithClaimedPhoneNumberSummary(ClaimedPhoneNumberSummaryT&& value) { SetClaimedPhoneNumberSummary(std::forward<ClaimedPhoneNumberSummaryT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribePhoneNumberResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ClaimedPhoneNumberSummary m_claimedPhoneNumberSummary;
    bool m_claimedPhoneNumberSummaryHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws

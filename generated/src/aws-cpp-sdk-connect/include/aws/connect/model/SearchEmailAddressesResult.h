/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/connect/model/EmailAddressMetadata.h>
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
  class SearchEmailAddressesResult
  {
  public:
    AWS_CONNECT_API SearchEmailAddressesResult() = default;
    AWS_CONNECT_API SearchEmailAddressesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API SearchEmailAddressesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    SearchEmailAddressesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of email addresses matching SearchFilter and SearchCriteria </p>
     */
    inline const Aws::Vector<EmailAddressMetadata>& GetEmailAddresses() const { return m_emailAddresses; }
    template<typename EmailAddressesT = Aws::Vector<EmailAddressMetadata>>
    void SetEmailAddresses(EmailAddressesT&& value) { m_emailAddressesHasBeenSet = true; m_emailAddresses = std::forward<EmailAddressesT>(value); }
    template<typename EmailAddressesT = Aws::Vector<EmailAddressMetadata>>
    SearchEmailAddressesResult& WithEmailAddresses(EmailAddressesT&& value) { SetEmailAddresses(std::forward<EmailAddressesT>(value)); return *this;}
    template<typename EmailAddressesT = EmailAddressMetadata>
    SearchEmailAddressesResult& AddEmailAddresses(EmailAddressesT&& value) { m_emailAddressesHasBeenSet = true; m_emailAddresses.emplace_back(std::forward<EmailAddressesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The total number of email addresses which matched your search query.</p>
     */
    inline long long GetApproximateTotalCount() const { return m_approximateTotalCount; }
    inline void SetApproximateTotalCount(long long value) { m_approximateTotalCountHasBeenSet = true; m_approximateTotalCount = value; }
    inline SearchEmailAddressesResult& WithApproximateTotalCount(long long value) { SetApproximateTotalCount(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    SearchEmailAddressesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<EmailAddressMetadata> m_emailAddresses;
    bool m_emailAddressesHasBeenSet = false;

    long long m_approximateTotalCount{0};
    bool m_approximateTotalCountHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws

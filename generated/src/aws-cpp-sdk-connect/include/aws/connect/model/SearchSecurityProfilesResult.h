/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/SecurityProfileSearchSummary.h>
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
  class SearchSecurityProfilesResult
  {
  public:
    AWS_CONNECT_API SearchSecurityProfilesResult() = default;
    AWS_CONNECT_API SearchSecurityProfilesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API SearchSecurityProfilesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the security profiles.</p>
     */
    inline const Aws::Vector<SecurityProfileSearchSummary>& GetSecurityProfiles() const { return m_securityProfiles; }
    template<typename SecurityProfilesT = Aws::Vector<SecurityProfileSearchSummary>>
    void SetSecurityProfiles(SecurityProfilesT&& value) { m_securityProfilesHasBeenSet = true; m_securityProfiles = std::forward<SecurityProfilesT>(value); }
    template<typename SecurityProfilesT = Aws::Vector<SecurityProfileSearchSummary>>
    SearchSecurityProfilesResult& WithSecurityProfiles(SecurityProfilesT&& value) { SetSecurityProfiles(std::forward<SecurityProfilesT>(value)); return *this;}
    template<typename SecurityProfilesT = SecurityProfileSearchSummary>
    SearchSecurityProfilesResult& AddSecurityProfiles(SecurityProfilesT&& value) { m_securityProfilesHasBeenSet = true; m_securityProfiles.emplace_back(std::forward<SecurityProfilesT>(value)); return *this; }
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
    SearchSecurityProfilesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of security profiles which matched your search query.</p>
     */
    inline long long GetApproximateTotalCount() const { return m_approximateTotalCount; }
    inline void SetApproximateTotalCount(long long value) { m_approximateTotalCountHasBeenSet = true; m_approximateTotalCount = value; }
    inline SearchSecurityProfilesResult& WithApproximateTotalCount(long long value) { SetApproximateTotalCount(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    SearchSecurityProfilesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<SecurityProfileSearchSummary> m_securityProfiles;
    bool m_securityProfilesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    long long m_approximateTotalCount{0};
    bool m_approximateTotalCountHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws

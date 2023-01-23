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
    AWS_CONNECT_API SearchSecurityProfilesResult();
    AWS_CONNECT_API SearchSecurityProfilesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API SearchSecurityProfilesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the security profiles.</p>
     */
    inline const Aws::Vector<SecurityProfileSearchSummary>& GetSecurityProfiles() const{ return m_securityProfiles; }

    /**
     * <p>Information about the security profiles.</p>
     */
    inline void SetSecurityProfiles(const Aws::Vector<SecurityProfileSearchSummary>& value) { m_securityProfiles = value; }

    /**
     * <p>Information about the security profiles.</p>
     */
    inline void SetSecurityProfiles(Aws::Vector<SecurityProfileSearchSummary>&& value) { m_securityProfiles = std::move(value); }

    /**
     * <p>Information about the security profiles.</p>
     */
    inline SearchSecurityProfilesResult& WithSecurityProfiles(const Aws::Vector<SecurityProfileSearchSummary>& value) { SetSecurityProfiles(value); return *this;}

    /**
     * <p>Information about the security profiles.</p>
     */
    inline SearchSecurityProfilesResult& WithSecurityProfiles(Aws::Vector<SecurityProfileSearchSummary>&& value) { SetSecurityProfiles(std::move(value)); return *this;}

    /**
     * <p>Information about the security profiles.</p>
     */
    inline SearchSecurityProfilesResult& AddSecurityProfiles(const SecurityProfileSearchSummary& value) { m_securityProfiles.push_back(value); return *this; }

    /**
     * <p>Information about the security profiles.</p>
     */
    inline SearchSecurityProfilesResult& AddSecurityProfiles(SecurityProfileSearchSummary&& value) { m_securityProfiles.push_back(std::move(value)); return *this; }


    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline SearchSecurityProfilesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline SearchSecurityProfilesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline SearchSecurityProfilesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The total number of security profiles which matched your search query.</p>
     */
    inline long long GetApproximateTotalCount() const{ return m_approximateTotalCount; }

    /**
     * <p>The total number of security profiles which matched your search query.</p>
     */
    inline void SetApproximateTotalCount(long long value) { m_approximateTotalCount = value; }

    /**
     * <p>The total number of security profiles which matched your search query.</p>
     */
    inline SearchSecurityProfilesResult& WithApproximateTotalCount(long long value) { SetApproximateTotalCount(value); return *this;}

  private:

    Aws::Vector<SecurityProfileSearchSummary> m_securityProfiles;

    Aws::String m_nextToken;

    long long m_approximateTotalCount;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws

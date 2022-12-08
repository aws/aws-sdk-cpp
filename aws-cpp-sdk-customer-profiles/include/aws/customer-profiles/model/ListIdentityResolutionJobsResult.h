/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/customer-profiles/model/IdentityResolutionJob.h>
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
namespace CustomerProfiles
{
namespace Model
{
  class ListIdentityResolutionJobsResult
  {
  public:
    AWS_CUSTOMERPROFILES_API ListIdentityResolutionJobsResult();
    AWS_CUSTOMERPROFILES_API ListIdentityResolutionJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CUSTOMERPROFILES_API ListIdentityResolutionJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of Identity Resolution Jobs.</p>
     */
    inline const Aws::Vector<IdentityResolutionJob>& GetIdentityResolutionJobsList() const{ return m_identityResolutionJobsList; }

    /**
     * <p>A list of Identity Resolution Jobs.</p>
     */
    inline void SetIdentityResolutionJobsList(const Aws::Vector<IdentityResolutionJob>& value) { m_identityResolutionJobsList = value; }

    /**
     * <p>A list of Identity Resolution Jobs.</p>
     */
    inline void SetIdentityResolutionJobsList(Aws::Vector<IdentityResolutionJob>&& value) { m_identityResolutionJobsList = std::move(value); }

    /**
     * <p>A list of Identity Resolution Jobs.</p>
     */
    inline ListIdentityResolutionJobsResult& WithIdentityResolutionJobsList(const Aws::Vector<IdentityResolutionJob>& value) { SetIdentityResolutionJobsList(value); return *this;}

    /**
     * <p>A list of Identity Resolution Jobs.</p>
     */
    inline ListIdentityResolutionJobsResult& WithIdentityResolutionJobsList(Aws::Vector<IdentityResolutionJob>&& value) { SetIdentityResolutionJobsList(std::move(value)); return *this;}

    /**
     * <p>A list of Identity Resolution Jobs.</p>
     */
    inline ListIdentityResolutionJobsResult& AddIdentityResolutionJobsList(const IdentityResolutionJob& value) { m_identityResolutionJobsList.push_back(value); return *this; }

    /**
     * <p>A list of Identity Resolution Jobs.</p>
     */
    inline ListIdentityResolutionJobsResult& AddIdentityResolutionJobsList(IdentityResolutionJob&& value) { m_identityResolutionJobsList.push_back(std::move(value)); return *this; }


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
    inline ListIdentityResolutionJobsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline ListIdentityResolutionJobsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline ListIdentityResolutionJobsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<IdentityResolutionJob> m_identityResolutionJobsList;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws

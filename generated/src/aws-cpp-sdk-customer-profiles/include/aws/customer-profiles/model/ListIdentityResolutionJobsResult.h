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
    AWS_CUSTOMERPROFILES_API ListIdentityResolutionJobsResult() = default;
    AWS_CUSTOMERPROFILES_API ListIdentityResolutionJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CUSTOMERPROFILES_API ListIdentityResolutionJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of Identity Resolution Jobs.</p>
     */
    inline const Aws::Vector<IdentityResolutionJob>& GetIdentityResolutionJobsList() const { return m_identityResolutionJobsList; }
    template<typename IdentityResolutionJobsListT = Aws::Vector<IdentityResolutionJob>>
    void SetIdentityResolutionJobsList(IdentityResolutionJobsListT&& value) { m_identityResolutionJobsListHasBeenSet = true; m_identityResolutionJobsList = std::forward<IdentityResolutionJobsListT>(value); }
    template<typename IdentityResolutionJobsListT = Aws::Vector<IdentityResolutionJob>>
    ListIdentityResolutionJobsResult& WithIdentityResolutionJobsList(IdentityResolutionJobsListT&& value) { SetIdentityResolutionJobsList(std::forward<IdentityResolutionJobsListT>(value)); return *this;}
    template<typename IdentityResolutionJobsListT = IdentityResolutionJob>
    ListIdentityResolutionJobsResult& AddIdentityResolutionJobsList(IdentityResolutionJobsListT&& value) { m_identityResolutionJobsListHasBeenSet = true; m_identityResolutionJobsList.emplace_back(std::forward<IdentityResolutionJobsListT>(value)); return *this; }
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
    ListIdentityResolutionJobsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListIdentityResolutionJobsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<IdentityResolutionJob> m_identityResolutionJobsList;
    bool m_identityResolutionJobsListHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws

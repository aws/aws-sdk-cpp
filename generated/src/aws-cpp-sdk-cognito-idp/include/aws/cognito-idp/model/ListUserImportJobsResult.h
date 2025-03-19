/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cognito-idp/model/UserImportJobType.h>
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
namespace CognitoIdentityProvider
{
namespace Model
{
  /**
   * <p>Represents the response from the server to the request to list the user
   * import jobs.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/ListUserImportJobsResponse">AWS
   * API Reference</a></p>
   */
  class ListUserImportJobsResult
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API ListUserImportJobsResult() = default;
    AWS_COGNITOIDENTITYPROVIDER_API ListUserImportJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COGNITOIDENTITYPROVIDER_API ListUserImportJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of user import jobs from the requested user pool. For each, the
     * response includes logging destination, status, and the Amazon S3 pre-signed URL
     * for CSV upload.</p>
     */
    inline const Aws::Vector<UserImportJobType>& GetUserImportJobs() const { return m_userImportJobs; }
    template<typename UserImportJobsT = Aws::Vector<UserImportJobType>>
    void SetUserImportJobs(UserImportJobsT&& value) { m_userImportJobsHasBeenSet = true; m_userImportJobs = std::forward<UserImportJobsT>(value); }
    template<typename UserImportJobsT = Aws::Vector<UserImportJobType>>
    ListUserImportJobsResult& WithUserImportJobs(UserImportJobsT&& value) { SetUserImportJobs(std::forward<UserImportJobsT>(value)); return *this;}
    template<typename UserImportJobsT = UserImportJobType>
    ListUserImportJobsResult& AddUserImportJobs(UserImportJobsT&& value) { m_userImportJobsHasBeenSet = true; m_userImportJobs.emplace_back(std::forward<UserImportJobsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The identifier that Amazon Cognito returned with the previous request to this
     * operation. When you include a pagination token in your request, Amazon Cognito
     * returns the next set of items in the list. By use of this token, you can
     * paginate through the full list of items.</p>
     */
    inline const Aws::String& GetPaginationToken() const { return m_paginationToken; }
    template<typename PaginationTokenT = Aws::String>
    void SetPaginationToken(PaginationTokenT&& value) { m_paginationTokenHasBeenSet = true; m_paginationToken = std::forward<PaginationTokenT>(value); }
    template<typename PaginationTokenT = Aws::String>
    ListUserImportJobsResult& WithPaginationToken(PaginationTokenT&& value) { SetPaginationToken(std::forward<PaginationTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListUserImportJobsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<UserImportJobType> m_userImportJobs;
    bool m_userImportJobsHasBeenSet = false;

    Aws::String m_paginationToken;
    bool m_paginationTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws

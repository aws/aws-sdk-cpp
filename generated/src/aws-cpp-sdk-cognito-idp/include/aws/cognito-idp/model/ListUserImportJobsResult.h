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
    AWS_COGNITOIDENTITYPROVIDER_API ListUserImportJobsResult();
    AWS_COGNITOIDENTITYPROVIDER_API ListUserImportJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COGNITOIDENTITYPROVIDER_API ListUserImportJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The user import jobs.</p>
     */
    inline const Aws::Vector<UserImportJobType>& GetUserImportJobs() const{ return m_userImportJobs; }

    /**
     * <p>The user import jobs.</p>
     */
    inline void SetUserImportJobs(const Aws::Vector<UserImportJobType>& value) { m_userImportJobs = value; }

    /**
     * <p>The user import jobs.</p>
     */
    inline void SetUserImportJobs(Aws::Vector<UserImportJobType>&& value) { m_userImportJobs = std::move(value); }

    /**
     * <p>The user import jobs.</p>
     */
    inline ListUserImportJobsResult& WithUserImportJobs(const Aws::Vector<UserImportJobType>& value) { SetUserImportJobs(value); return *this;}

    /**
     * <p>The user import jobs.</p>
     */
    inline ListUserImportJobsResult& WithUserImportJobs(Aws::Vector<UserImportJobType>&& value) { SetUserImportJobs(std::move(value)); return *this;}

    /**
     * <p>The user import jobs.</p>
     */
    inline ListUserImportJobsResult& AddUserImportJobs(const UserImportJobType& value) { m_userImportJobs.push_back(value); return *this; }

    /**
     * <p>The user import jobs.</p>
     */
    inline ListUserImportJobsResult& AddUserImportJobs(UserImportJobType&& value) { m_userImportJobs.push_back(std::move(value)); return *this; }


    /**
     * <p>An identifier that can be used to return the next set of user import jobs in
     * the list.</p>
     */
    inline const Aws::String& GetPaginationToken() const{ return m_paginationToken; }

    /**
     * <p>An identifier that can be used to return the next set of user import jobs in
     * the list.</p>
     */
    inline void SetPaginationToken(const Aws::String& value) { m_paginationToken = value; }

    /**
     * <p>An identifier that can be used to return the next set of user import jobs in
     * the list.</p>
     */
    inline void SetPaginationToken(Aws::String&& value) { m_paginationToken = std::move(value); }

    /**
     * <p>An identifier that can be used to return the next set of user import jobs in
     * the list.</p>
     */
    inline void SetPaginationToken(const char* value) { m_paginationToken.assign(value); }

    /**
     * <p>An identifier that can be used to return the next set of user import jobs in
     * the list.</p>
     */
    inline ListUserImportJobsResult& WithPaginationToken(const Aws::String& value) { SetPaginationToken(value); return *this;}

    /**
     * <p>An identifier that can be used to return the next set of user import jobs in
     * the list.</p>
     */
    inline ListUserImportJobsResult& WithPaginationToken(Aws::String&& value) { SetPaginationToken(std::move(value)); return *this;}

    /**
     * <p>An identifier that can be used to return the next set of user import jobs in
     * the list.</p>
     */
    inline ListUserImportJobsResult& WithPaginationToken(const char* value) { SetPaginationToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListUserImportJobsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListUserImportJobsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListUserImportJobsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<UserImportJobType> m_userImportJobs;

    Aws::String m_paginationToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws

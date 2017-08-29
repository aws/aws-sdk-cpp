/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_COGNITOIDENTITYPROVIDER_API ListUserImportJobsResult
  {
  public:
    ListUserImportJobsResult();
    ListUserImportJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListUserImportJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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

  private:

    Aws::Vector<UserImportJobType> m_userImportJobs;

    Aws::String m_paginationToken;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws

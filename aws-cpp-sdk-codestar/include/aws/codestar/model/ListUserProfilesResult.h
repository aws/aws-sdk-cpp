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
#include <aws/codestar/CodeStar_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codestar/model/UserProfileSummary.h>
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
namespace CodeStar
{
namespace Model
{
  class AWS_CODESTAR_API ListUserProfilesResult
  {
  public:
    ListUserProfilesResult();
    ListUserProfilesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListUserProfilesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>All the user profiles configured in AWS CodeStar for an AWS account.</p>
     */
    inline const Aws::Vector<UserProfileSummary>& GetUserProfiles() const{ return m_userProfiles; }

    /**
     * <p>All the user profiles configured in AWS CodeStar for an AWS account.</p>
     */
    inline void SetUserProfiles(const Aws::Vector<UserProfileSummary>& value) { m_userProfiles = value; }

    /**
     * <p>All the user profiles configured in AWS CodeStar for an AWS account.</p>
     */
    inline void SetUserProfiles(Aws::Vector<UserProfileSummary>&& value) { m_userProfiles = std::move(value); }

    /**
     * <p>All the user profiles configured in AWS CodeStar for an AWS account.</p>
     */
    inline ListUserProfilesResult& WithUserProfiles(const Aws::Vector<UserProfileSummary>& value) { SetUserProfiles(value); return *this;}

    /**
     * <p>All the user profiles configured in AWS CodeStar for an AWS account.</p>
     */
    inline ListUserProfilesResult& WithUserProfiles(Aws::Vector<UserProfileSummary>&& value) { SetUserProfiles(std::move(value)); return *this;}

    /**
     * <p>All the user profiles configured in AWS CodeStar for an AWS account.</p>
     */
    inline ListUserProfilesResult& AddUserProfiles(const UserProfileSummary& value) { m_userProfiles.push_back(value); return *this; }

    /**
     * <p>All the user profiles configured in AWS CodeStar for an AWS account.</p>
     */
    inline ListUserProfilesResult& AddUserProfiles(UserProfileSummary&& value) { m_userProfiles.push_back(std::move(value)); return *this; }


    /**
     * <p>The continuation token to use when requesting the next set of results, if
     * there are more results to be returned.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The continuation token to use when requesting the next set of results, if
     * there are more results to be returned.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The continuation token to use when requesting the next set of results, if
     * there are more results to be returned.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The continuation token to use when requesting the next set of results, if
     * there are more results to be returned.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The continuation token to use when requesting the next set of results, if
     * there are more results to be returned.</p>
     */
    inline ListUserProfilesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The continuation token to use when requesting the next set of results, if
     * there are more results to be returned.</p>
     */
    inline ListUserProfilesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The continuation token to use when requesting the next set of results, if
     * there are more results to be returned.</p>
     */
    inline ListUserProfilesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<UserProfileSummary> m_userProfiles;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace CodeStar
} // namespace Aws

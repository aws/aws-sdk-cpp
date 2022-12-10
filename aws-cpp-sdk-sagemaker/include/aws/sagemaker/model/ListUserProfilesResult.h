/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/UserProfileDetails.h>
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
namespace SageMaker
{
namespace Model
{
  class ListUserProfilesResult
  {
  public:
    AWS_SAGEMAKER_API ListUserProfilesResult();
    AWS_SAGEMAKER_API ListUserProfilesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API ListUserProfilesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The list of user profiles.</p>
     */
    inline const Aws::Vector<UserProfileDetails>& GetUserProfiles() const{ return m_userProfiles; }

    /**
     * <p>The list of user profiles.</p>
     */
    inline void SetUserProfiles(const Aws::Vector<UserProfileDetails>& value) { m_userProfiles = value; }

    /**
     * <p>The list of user profiles.</p>
     */
    inline void SetUserProfiles(Aws::Vector<UserProfileDetails>&& value) { m_userProfiles = std::move(value); }

    /**
     * <p>The list of user profiles.</p>
     */
    inline ListUserProfilesResult& WithUserProfiles(const Aws::Vector<UserProfileDetails>& value) { SetUserProfiles(value); return *this;}

    /**
     * <p>The list of user profiles.</p>
     */
    inline ListUserProfilesResult& WithUserProfiles(Aws::Vector<UserProfileDetails>&& value) { SetUserProfiles(std::move(value)); return *this;}

    /**
     * <p>The list of user profiles.</p>
     */
    inline ListUserProfilesResult& AddUserProfiles(const UserProfileDetails& value) { m_userProfiles.push_back(value); return *this; }

    /**
     * <p>The list of user profiles.</p>
     */
    inline ListUserProfilesResult& AddUserProfiles(UserProfileDetails&& value) { m_userProfiles.push_back(std::move(value)); return *this; }


    /**
     * <p>If the previous response was truncated, you will receive this token. Use it
     * in your next request to receive the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the previous response was truncated, you will receive this token. Use it
     * in your next request to receive the next set of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If the previous response was truncated, you will receive this token. Use it
     * in your next request to receive the next set of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If the previous response was truncated, you will receive this token. Use it
     * in your next request to receive the next set of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If the previous response was truncated, you will receive this token. Use it
     * in your next request to receive the next set of results.</p>
     */
    inline ListUserProfilesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the previous response was truncated, you will receive this token. Use it
     * in your next request to receive the next set of results.</p>
     */
    inline ListUserProfilesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the previous response was truncated, you will receive this token. Use it
     * in your next request to receive the next set of results.</p>
     */
    inline ListUserProfilesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<UserProfileDetails> m_userProfiles;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws

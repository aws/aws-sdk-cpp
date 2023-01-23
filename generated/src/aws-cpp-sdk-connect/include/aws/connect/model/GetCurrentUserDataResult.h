/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/connect/model/UserData.h>
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
  class GetCurrentUserDataResult
  {
  public:
    AWS_CONNECT_API GetCurrentUserDataResult();
    AWS_CONNECT_API GetCurrentUserDataResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API GetCurrentUserDataResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline GetCurrentUserDataResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline GetCurrentUserDataResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline GetCurrentUserDataResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>A list of the user data that is returned.</p>
     */
    inline const Aws::Vector<UserData>& GetUserDataList() const{ return m_userDataList; }

    /**
     * <p>A list of the user data that is returned.</p>
     */
    inline void SetUserDataList(const Aws::Vector<UserData>& value) { m_userDataList = value; }

    /**
     * <p>A list of the user data that is returned.</p>
     */
    inline void SetUserDataList(Aws::Vector<UserData>&& value) { m_userDataList = std::move(value); }

    /**
     * <p>A list of the user data that is returned.</p>
     */
    inline GetCurrentUserDataResult& WithUserDataList(const Aws::Vector<UserData>& value) { SetUserDataList(value); return *this;}

    /**
     * <p>A list of the user data that is returned.</p>
     */
    inline GetCurrentUserDataResult& WithUserDataList(Aws::Vector<UserData>&& value) { SetUserDataList(std::move(value)); return *this;}

    /**
     * <p>A list of the user data that is returned.</p>
     */
    inline GetCurrentUserDataResult& AddUserDataList(const UserData& value) { m_userDataList.push_back(value); return *this; }

    /**
     * <p>A list of the user data that is returned.</p>
     */
    inline GetCurrentUserDataResult& AddUserDataList(UserData&& value) { m_userDataList.push_back(std::move(value)); return *this; }


    /**
     * <p>The total count of the result, regardless of the current page size.</p>
     */
    inline long long GetApproximateTotalCount() const{ return m_approximateTotalCount; }

    /**
     * <p>The total count of the result, regardless of the current page size.</p>
     */
    inline void SetApproximateTotalCount(long long value) { m_approximateTotalCount = value; }

    /**
     * <p>The total count of the result, regardless of the current page size.</p>
     */
    inline GetCurrentUserDataResult& WithApproximateTotalCount(long long value) { SetApproximateTotalCount(value); return *this;}

  private:

    Aws::String m_nextToken;

    Aws::Vector<UserData> m_userDataList;

    long long m_approximateTotalCount;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws

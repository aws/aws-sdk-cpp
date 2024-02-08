/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/connect/model/UserProficiency.h>
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
  class ListUserProficienciesResult
  {
  public:
    AWS_CONNECT_API ListUserProficienciesResult();
    AWS_CONNECT_API ListUserProficienciesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API ListUserProficienciesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline ListUserProficienciesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline ListUserProficienciesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline ListUserProficienciesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>Information about the user proficiencies.</p>
     */
    inline const Aws::Vector<UserProficiency>& GetUserProficiencyList() const{ return m_userProficiencyList; }

    /**
     * <p>Information about the user proficiencies.</p>
     */
    inline void SetUserProficiencyList(const Aws::Vector<UserProficiency>& value) { m_userProficiencyList = value; }

    /**
     * <p>Information about the user proficiencies.</p>
     */
    inline void SetUserProficiencyList(Aws::Vector<UserProficiency>&& value) { m_userProficiencyList = std::move(value); }

    /**
     * <p>Information about the user proficiencies.</p>
     */
    inline ListUserProficienciesResult& WithUserProficiencyList(const Aws::Vector<UserProficiency>& value) { SetUserProficiencyList(value); return *this;}

    /**
     * <p>Information about the user proficiencies.</p>
     */
    inline ListUserProficienciesResult& WithUserProficiencyList(Aws::Vector<UserProficiency>&& value) { SetUserProficiencyList(std::move(value)); return *this;}

    /**
     * <p>Information about the user proficiencies.</p>
     */
    inline ListUserProficienciesResult& AddUserProficiencyList(const UserProficiency& value) { m_userProficiencyList.push_back(value); return *this; }

    /**
     * <p>Information about the user proficiencies.</p>
     */
    inline ListUserProficienciesResult& AddUserProficiencyList(UserProficiency&& value) { m_userProficiencyList.push_back(std::move(value)); return *this; }


    /**
     * <p>The last time that the user's proficiencies are were modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }

    /**
     * <p>The last time that the user's proficiencies are were modified.</p>
     */
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTime = value; }

    /**
     * <p>The last time that the user's proficiencies are were modified.</p>
     */
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTime = std::move(value); }

    /**
     * <p>The last time that the user's proficiencies are were modified.</p>
     */
    inline ListUserProficienciesResult& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}

    /**
     * <p>The last time that the user's proficiencies are were modified.</p>
     */
    inline ListUserProficienciesResult& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}


    /**
     * <p>The region in which a user's proficiencies were last modified.</p>
     */
    inline const Aws::String& GetLastModifiedRegion() const{ return m_lastModifiedRegion; }

    /**
     * <p>The region in which a user's proficiencies were last modified.</p>
     */
    inline void SetLastModifiedRegion(const Aws::String& value) { m_lastModifiedRegion = value; }

    /**
     * <p>The region in which a user's proficiencies were last modified.</p>
     */
    inline void SetLastModifiedRegion(Aws::String&& value) { m_lastModifiedRegion = std::move(value); }

    /**
     * <p>The region in which a user's proficiencies were last modified.</p>
     */
    inline void SetLastModifiedRegion(const char* value) { m_lastModifiedRegion.assign(value); }

    /**
     * <p>The region in which a user's proficiencies were last modified.</p>
     */
    inline ListUserProficienciesResult& WithLastModifiedRegion(const Aws::String& value) { SetLastModifiedRegion(value); return *this;}

    /**
     * <p>The region in which a user's proficiencies were last modified.</p>
     */
    inline ListUserProficienciesResult& WithLastModifiedRegion(Aws::String&& value) { SetLastModifiedRegion(std::move(value)); return *this;}

    /**
     * <p>The region in which a user's proficiencies were last modified.</p>
     */
    inline ListUserProficienciesResult& WithLastModifiedRegion(const char* value) { SetLastModifiedRegion(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListUserProficienciesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListUserProficienciesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListUserProficienciesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_nextToken;

    Aws::Vector<UserProficiency> m_userProficiencyList;

    Aws::Utils::DateTime m_lastModifiedTime;

    Aws::String m_lastModifiedRegion;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws

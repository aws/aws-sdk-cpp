/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/finspace/Finspace_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/finspace/model/KxUser.h>
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
namespace finspace
{
namespace Model
{
  class ListKxUsersResult
  {
  public:
    AWS_FINSPACE_API ListKxUsersResult();
    AWS_FINSPACE_API ListKxUsersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FINSPACE_API ListKxUsersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of users in a kdb environment.</p>
     */
    inline const Aws::Vector<KxUser>& GetUsers() const{ return m_users; }

    /**
     * <p>A list of users in a kdb environment.</p>
     */
    inline void SetUsers(const Aws::Vector<KxUser>& value) { m_users = value; }

    /**
     * <p>A list of users in a kdb environment.</p>
     */
    inline void SetUsers(Aws::Vector<KxUser>&& value) { m_users = std::move(value); }

    /**
     * <p>A list of users in a kdb environment.</p>
     */
    inline ListKxUsersResult& WithUsers(const Aws::Vector<KxUser>& value) { SetUsers(value); return *this;}

    /**
     * <p>A list of users in a kdb environment.</p>
     */
    inline ListKxUsersResult& WithUsers(Aws::Vector<KxUser>&& value) { SetUsers(std::move(value)); return *this;}

    /**
     * <p>A list of users in a kdb environment.</p>
     */
    inline ListKxUsersResult& AddUsers(const KxUser& value) { m_users.push_back(value); return *this; }

    /**
     * <p>A list of users in a kdb environment.</p>
     */
    inline ListKxUsersResult& AddUsers(KxUser&& value) { m_users.push_back(std::move(value)); return *this; }


    /**
     * <p>A token that indicates where a results page should begin.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token that indicates where a results page should begin.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A token that indicates where a results page should begin.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A token that indicates where a results page should begin.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A token that indicates where a results page should begin.</p>
     */
    inline ListKxUsersResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token that indicates where a results page should begin.</p>
     */
    inline ListKxUsersResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token that indicates where a results page should begin.</p>
     */
    inline ListKxUsersResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListKxUsersResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListKxUsersResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListKxUsersResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<KxUser> m_users;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace finspace
} // namespace Aws

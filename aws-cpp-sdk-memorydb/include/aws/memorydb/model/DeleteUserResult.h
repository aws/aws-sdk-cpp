/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/memorydb/MemoryDB_EXPORTS.h>
#include <aws/memorydb/model/User.h>
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
namespace MemoryDB
{
namespace Model
{
  class DeleteUserResult
  {
  public:
    AWS_MEMORYDB_API DeleteUserResult();
    AWS_MEMORYDB_API DeleteUserResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEMORYDB_API DeleteUserResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The user object that has been deleted.</p>
     */
    inline const User& GetUser() const{ return m_user; }

    /**
     * <p>The user object that has been deleted.</p>
     */
    inline void SetUser(const User& value) { m_user = value; }

    /**
     * <p>The user object that has been deleted.</p>
     */
    inline void SetUser(User&& value) { m_user = std::move(value); }

    /**
     * <p>The user object that has been deleted.</p>
     */
    inline DeleteUserResult& WithUser(const User& value) { SetUser(value); return *this;}

    /**
     * <p>The user object that has been deleted.</p>
     */
    inline DeleteUserResult& WithUser(User&& value) { SetUser(std::move(value)); return *this;}

  private:

    User m_user;
  };

} // namespace Model
} // namespace MemoryDB
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/identitystore/IdentityStore_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace IdentityStore
{
namespace Model
{
  class AWS_IDENTITYSTORE_API DescribeUserResult
  {
  public:
    DescribeUserResult();
    DescribeUserResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeUserResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Contains the user’s username value. The length limit is 128 characters. This
     * value can consist of letters, accented characters, symbols, numbers and
     * punctuation. The characters “&lt;&gt;;:%” are excluded. This value is specified
     * at the time the user is created and stored as an attribute of the user object in
     * the identity store.</p>
     */
    inline const Aws::String& GetUserName() const{ return m_userName; }

    /**
     * <p>Contains the user’s username value. The length limit is 128 characters. This
     * value can consist of letters, accented characters, symbols, numbers and
     * punctuation. The characters “&lt;&gt;;:%” are excluded. This value is specified
     * at the time the user is created and stored as an attribute of the user object in
     * the identity store.</p>
     */
    inline void SetUserName(const Aws::String& value) { m_userName = value; }

    /**
     * <p>Contains the user’s username value. The length limit is 128 characters. This
     * value can consist of letters, accented characters, symbols, numbers and
     * punctuation. The characters “&lt;&gt;;:%” are excluded. This value is specified
     * at the time the user is created and stored as an attribute of the user object in
     * the identity store.</p>
     */
    inline void SetUserName(Aws::String&& value) { m_userName = std::move(value); }

    /**
     * <p>Contains the user’s username value. The length limit is 128 characters. This
     * value can consist of letters, accented characters, symbols, numbers and
     * punctuation. The characters “&lt;&gt;;:%” are excluded. This value is specified
     * at the time the user is created and stored as an attribute of the user object in
     * the identity store.</p>
     */
    inline void SetUserName(const char* value) { m_userName.assign(value); }

    /**
     * <p>Contains the user’s username value. The length limit is 128 characters. This
     * value can consist of letters, accented characters, symbols, numbers and
     * punctuation. The characters “&lt;&gt;;:%” are excluded. This value is specified
     * at the time the user is created and stored as an attribute of the user object in
     * the identity store.</p>
     */
    inline DescribeUserResult& WithUserName(const Aws::String& value) { SetUserName(value); return *this;}

    /**
     * <p>Contains the user’s username value. The length limit is 128 characters. This
     * value can consist of letters, accented characters, symbols, numbers and
     * punctuation. The characters “&lt;&gt;;:%” are excluded. This value is specified
     * at the time the user is created and stored as an attribute of the user object in
     * the identity store.</p>
     */
    inline DescribeUserResult& WithUserName(Aws::String&& value) { SetUserName(std::move(value)); return *this;}

    /**
     * <p>Contains the user’s username value. The length limit is 128 characters. This
     * value can consist of letters, accented characters, symbols, numbers and
     * punctuation. The characters “&lt;&gt;;:%” are excluded. This value is specified
     * at the time the user is created and stored as an attribute of the user object in
     * the identity store.</p>
     */
    inline DescribeUserResult& WithUserName(const char* value) { SetUserName(value); return *this;}


    /**
     * <p>The identifier for a user in the identity store.</p>
     */
    inline const Aws::String& GetUserId() const{ return m_userId; }

    /**
     * <p>The identifier for a user in the identity store.</p>
     */
    inline void SetUserId(const Aws::String& value) { m_userId = value; }

    /**
     * <p>The identifier for a user in the identity store.</p>
     */
    inline void SetUserId(Aws::String&& value) { m_userId = std::move(value); }

    /**
     * <p>The identifier for a user in the identity store.</p>
     */
    inline void SetUserId(const char* value) { m_userId.assign(value); }

    /**
     * <p>The identifier for a user in the identity store.</p>
     */
    inline DescribeUserResult& WithUserId(const Aws::String& value) { SetUserId(value); return *this;}

    /**
     * <p>The identifier for a user in the identity store.</p>
     */
    inline DescribeUserResult& WithUserId(Aws::String&& value) { SetUserId(std::move(value)); return *this;}

    /**
     * <p>The identifier for a user in the identity store.</p>
     */
    inline DescribeUserResult& WithUserId(const char* value) { SetUserId(value); return *this;}

  private:

    Aws::String m_userName;

    Aws::String m_userId;
  };

} // namespace Model
} // namespace IdentityStore
} // namespace Aws

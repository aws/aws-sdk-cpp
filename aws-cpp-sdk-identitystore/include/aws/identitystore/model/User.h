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
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace IdentityStore
{
namespace Model
{

  /**
   * <p>A user object, which contains a specified user’s metadata and
   * attributes.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/identitystore-2020-06-15/User">AWS
   * API Reference</a></p>
   */
  class AWS_IDENTITYSTORE_API User
  {
  public:
    User();
    User(Aws::Utils::Json::JsonView jsonValue);
    User& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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
    inline bool UserNameHasBeenSet() const { return m_userNameHasBeenSet; }

    /**
     * <p>Contains the user’s username value. The length limit is 128 characters. This
     * value can consist of letters, accented characters, symbols, numbers and
     * punctuation. The characters “&lt;&gt;;:%” are excluded. This value is specified
     * at the time the user is created and stored as an attribute of the user object in
     * the identity store.</p>
     */
    inline void SetUserName(const Aws::String& value) { m_userNameHasBeenSet = true; m_userName = value; }

    /**
     * <p>Contains the user’s username value. The length limit is 128 characters. This
     * value can consist of letters, accented characters, symbols, numbers and
     * punctuation. The characters “&lt;&gt;;:%” are excluded. This value is specified
     * at the time the user is created and stored as an attribute of the user object in
     * the identity store.</p>
     */
    inline void SetUserName(Aws::String&& value) { m_userNameHasBeenSet = true; m_userName = std::move(value); }

    /**
     * <p>Contains the user’s username value. The length limit is 128 characters. This
     * value can consist of letters, accented characters, symbols, numbers and
     * punctuation. The characters “&lt;&gt;;:%” are excluded. This value is specified
     * at the time the user is created and stored as an attribute of the user object in
     * the identity store.</p>
     */
    inline void SetUserName(const char* value) { m_userNameHasBeenSet = true; m_userName.assign(value); }

    /**
     * <p>Contains the user’s username value. The length limit is 128 characters. This
     * value can consist of letters, accented characters, symbols, numbers and
     * punctuation. The characters “&lt;&gt;;:%” are excluded. This value is specified
     * at the time the user is created and stored as an attribute of the user object in
     * the identity store.</p>
     */
    inline User& WithUserName(const Aws::String& value) { SetUserName(value); return *this;}

    /**
     * <p>Contains the user’s username value. The length limit is 128 characters. This
     * value can consist of letters, accented characters, symbols, numbers and
     * punctuation. The characters “&lt;&gt;;:%” are excluded. This value is specified
     * at the time the user is created and stored as an attribute of the user object in
     * the identity store.</p>
     */
    inline User& WithUserName(Aws::String&& value) { SetUserName(std::move(value)); return *this;}

    /**
     * <p>Contains the user’s username value. The length limit is 128 characters. This
     * value can consist of letters, accented characters, symbols, numbers and
     * punctuation. The characters “&lt;&gt;;:%” are excluded. This value is specified
     * at the time the user is created and stored as an attribute of the user object in
     * the identity store.</p>
     */
    inline User& WithUserName(const char* value) { SetUserName(value); return *this;}


    /**
     * <p>The identifier for a user in the identity store.</p>
     */
    inline const Aws::String& GetUserId() const{ return m_userId; }

    /**
     * <p>The identifier for a user in the identity store.</p>
     */
    inline bool UserIdHasBeenSet() const { return m_userIdHasBeenSet; }

    /**
     * <p>The identifier for a user in the identity store.</p>
     */
    inline void SetUserId(const Aws::String& value) { m_userIdHasBeenSet = true; m_userId = value; }

    /**
     * <p>The identifier for a user in the identity store.</p>
     */
    inline void SetUserId(Aws::String&& value) { m_userIdHasBeenSet = true; m_userId = std::move(value); }

    /**
     * <p>The identifier for a user in the identity store.</p>
     */
    inline void SetUserId(const char* value) { m_userIdHasBeenSet = true; m_userId.assign(value); }

    /**
     * <p>The identifier for a user in the identity store.</p>
     */
    inline User& WithUserId(const Aws::String& value) { SetUserId(value); return *this;}

    /**
     * <p>The identifier for a user in the identity store.</p>
     */
    inline User& WithUserId(Aws::String&& value) { SetUserId(std::move(value)); return *this;}

    /**
     * <p>The identifier for a user in the identity store.</p>
     */
    inline User& WithUserId(const char* value) { SetUserId(value); return *this;}

  private:

    Aws::String m_userName;
    bool m_userNameHasBeenSet;

    Aws::String m_userId;
    bool m_userIdHasBeenSet;
  };

} // namespace Model
} // namespace IdentityStore
} // namespace Aws

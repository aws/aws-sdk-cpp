/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/identitystore/IdentityStore_EXPORTS.h>
#include <aws/identitystore/IdentityStoreRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace IdentityStore
{
namespace Model
{

  /**
   */
  class DescribeUserRequest : public IdentityStoreRequest
  {
  public:
    AWS_IDENTITYSTORE_API DescribeUserRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeUser"; }

    AWS_IDENTITYSTORE_API Aws::String SerializePayload() const override;

    AWS_IDENTITYSTORE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The globally unique identifier for the identity store, such as
     * <code>d-1234567890</code>. In this example, <code>d-</code> is a fixed prefix,
     * and <code>1234567890</code> is a randomly generated string that contains numbers
     * and lower case letters. This value is generated at the time that a new identity
     * store is created.</p>
     */
    inline const Aws::String& GetIdentityStoreId() const{ return m_identityStoreId; }

    /**
     * <p>The globally unique identifier for the identity store, such as
     * <code>d-1234567890</code>. In this example, <code>d-</code> is a fixed prefix,
     * and <code>1234567890</code> is a randomly generated string that contains numbers
     * and lower case letters. This value is generated at the time that a new identity
     * store is created.</p>
     */
    inline bool IdentityStoreIdHasBeenSet() const { return m_identityStoreIdHasBeenSet; }

    /**
     * <p>The globally unique identifier for the identity store, such as
     * <code>d-1234567890</code>. In this example, <code>d-</code> is a fixed prefix,
     * and <code>1234567890</code> is a randomly generated string that contains numbers
     * and lower case letters. This value is generated at the time that a new identity
     * store is created.</p>
     */
    inline void SetIdentityStoreId(const Aws::String& value) { m_identityStoreIdHasBeenSet = true; m_identityStoreId = value; }

    /**
     * <p>The globally unique identifier for the identity store, such as
     * <code>d-1234567890</code>. In this example, <code>d-</code> is a fixed prefix,
     * and <code>1234567890</code> is a randomly generated string that contains numbers
     * and lower case letters. This value is generated at the time that a new identity
     * store is created.</p>
     */
    inline void SetIdentityStoreId(Aws::String&& value) { m_identityStoreIdHasBeenSet = true; m_identityStoreId = std::move(value); }

    /**
     * <p>The globally unique identifier for the identity store, such as
     * <code>d-1234567890</code>. In this example, <code>d-</code> is a fixed prefix,
     * and <code>1234567890</code> is a randomly generated string that contains numbers
     * and lower case letters. This value is generated at the time that a new identity
     * store is created.</p>
     */
    inline void SetIdentityStoreId(const char* value) { m_identityStoreIdHasBeenSet = true; m_identityStoreId.assign(value); }

    /**
     * <p>The globally unique identifier for the identity store, such as
     * <code>d-1234567890</code>. In this example, <code>d-</code> is a fixed prefix,
     * and <code>1234567890</code> is a randomly generated string that contains numbers
     * and lower case letters. This value is generated at the time that a new identity
     * store is created.</p>
     */
    inline DescribeUserRequest& WithIdentityStoreId(const Aws::String& value) { SetIdentityStoreId(value); return *this;}

    /**
     * <p>The globally unique identifier for the identity store, such as
     * <code>d-1234567890</code>. In this example, <code>d-</code> is a fixed prefix,
     * and <code>1234567890</code> is a randomly generated string that contains numbers
     * and lower case letters. This value is generated at the time that a new identity
     * store is created.</p>
     */
    inline DescribeUserRequest& WithIdentityStoreId(Aws::String&& value) { SetIdentityStoreId(std::move(value)); return *this;}

    /**
     * <p>The globally unique identifier for the identity store, such as
     * <code>d-1234567890</code>. In this example, <code>d-</code> is a fixed prefix,
     * and <code>1234567890</code> is a randomly generated string that contains numbers
     * and lower case letters. This value is generated at the time that a new identity
     * store is created.</p>
     */
    inline DescribeUserRequest& WithIdentityStoreId(const char* value) { SetIdentityStoreId(value); return *this;}


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
    inline DescribeUserRequest& WithUserId(const Aws::String& value) { SetUserId(value); return *this;}

    /**
     * <p>The identifier for a user in the identity store.</p>
     */
    inline DescribeUserRequest& WithUserId(Aws::String&& value) { SetUserId(std::move(value)); return *this;}

    /**
     * <p>The identifier for a user in the identity store.</p>
     */
    inline DescribeUserRequest& WithUserId(const char* value) { SetUserId(value); return *this;}

  private:

    Aws::String m_identityStoreId;
    bool m_identityStoreIdHasBeenSet = false;

    Aws::String m_userId;
    bool m_userIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IdentityStore
} // namespace Aws

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
    AWS_IDENTITYSTORE_API DescribeUserRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeUser"; }

    AWS_IDENTITYSTORE_API Aws::String SerializePayload() const override;

    AWS_IDENTITYSTORE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The globally unique identifier for the identity store, such as
     * <code>d-1234567890</code>. In this example, <code>d-</code> is a fixed prefix,
     * and <code>1234567890</code> is a randomly generated string that contains numbers
     * and lower case letters. This value is generated at the time that a new identity
     * store is created.</p>
     */
    inline const Aws::String& GetIdentityStoreId() const { return m_identityStoreId; }
    inline bool IdentityStoreIdHasBeenSet() const { return m_identityStoreIdHasBeenSet; }
    template<typename IdentityStoreIdT = Aws::String>
    void SetIdentityStoreId(IdentityStoreIdT&& value) { m_identityStoreIdHasBeenSet = true; m_identityStoreId = std::forward<IdentityStoreIdT>(value); }
    template<typename IdentityStoreIdT = Aws::String>
    DescribeUserRequest& WithIdentityStoreId(IdentityStoreIdT&& value) { SetIdentityStoreId(std::forward<IdentityStoreIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier for a user in the identity store.</p>
     */
    inline const Aws::String& GetUserId() const { return m_userId; }
    inline bool UserIdHasBeenSet() const { return m_userIdHasBeenSet; }
    template<typename UserIdT = Aws::String>
    void SetUserId(UserIdT&& value) { m_userIdHasBeenSet = true; m_userId = std::forward<UserIdT>(value); }
    template<typename UserIdT = Aws::String>
    DescribeUserRequest& WithUserId(UserIdT&& value) { SetUserId(std::forward<UserIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_identityStoreId;
    bool m_identityStoreIdHasBeenSet = false;

    Aws::String m_userId;
    bool m_userIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IdentityStore
} // namespace Aws

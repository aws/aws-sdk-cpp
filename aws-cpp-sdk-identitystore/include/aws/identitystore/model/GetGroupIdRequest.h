/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/identitystore/IdentityStore_EXPORTS.h>
#include <aws/identitystore/IdentityStoreRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/identitystore/model/AlternateIdentifier.h>
#include <utility>

namespace Aws
{
namespace IdentityStore
{
namespace Model
{

  /**
   */
  class GetGroupIdRequest : public IdentityStoreRequest
  {
  public:
    AWS_IDENTITYSTORE_API GetGroupIdRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetGroupId"; }

    AWS_IDENTITYSTORE_API Aws::String SerializePayload() const override;

    AWS_IDENTITYSTORE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The globally unique identifier for the identity store.</p>
     */
    inline const Aws::String& GetIdentityStoreId() const{ return m_identityStoreId; }

    /**
     * <p>The globally unique identifier for the identity store.</p>
     */
    inline bool IdentityStoreIdHasBeenSet() const { return m_identityStoreIdHasBeenSet; }

    /**
     * <p>The globally unique identifier for the identity store.</p>
     */
    inline void SetIdentityStoreId(const Aws::String& value) { m_identityStoreIdHasBeenSet = true; m_identityStoreId = value; }

    /**
     * <p>The globally unique identifier for the identity store.</p>
     */
    inline void SetIdentityStoreId(Aws::String&& value) { m_identityStoreIdHasBeenSet = true; m_identityStoreId = std::move(value); }

    /**
     * <p>The globally unique identifier for the identity store.</p>
     */
    inline void SetIdentityStoreId(const char* value) { m_identityStoreIdHasBeenSet = true; m_identityStoreId.assign(value); }

    /**
     * <p>The globally unique identifier for the identity store.</p>
     */
    inline GetGroupIdRequest& WithIdentityStoreId(const Aws::String& value) { SetIdentityStoreId(value); return *this;}

    /**
     * <p>The globally unique identifier for the identity store.</p>
     */
    inline GetGroupIdRequest& WithIdentityStoreId(Aws::String&& value) { SetIdentityStoreId(std::move(value)); return *this;}

    /**
     * <p>The globally unique identifier for the identity store.</p>
     */
    inline GetGroupIdRequest& WithIdentityStoreId(const char* value) { SetIdentityStoreId(value); return *this;}


    /**
     * <p>A unique identifier for a user or group that is not the primary identifier.
     * This value can be an identifier from an external identity provider (IdP) that is
     * associated with the user, the group, or a unique attribute. For example, a
     * unique <code>GroupDisplayName</code>.</p>
     */
    inline const AlternateIdentifier& GetAlternateIdentifier() const{ return m_alternateIdentifier; }

    /**
     * <p>A unique identifier for a user or group that is not the primary identifier.
     * This value can be an identifier from an external identity provider (IdP) that is
     * associated with the user, the group, or a unique attribute. For example, a
     * unique <code>GroupDisplayName</code>.</p>
     */
    inline bool AlternateIdentifierHasBeenSet() const { return m_alternateIdentifierHasBeenSet; }

    /**
     * <p>A unique identifier for a user or group that is not the primary identifier.
     * This value can be an identifier from an external identity provider (IdP) that is
     * associated with the user, the group, or a unique attribute. For example, a
     * unique <code>GroupDisplayName</code>.</p>
     */
    inline void SetAlternateIdentifier(const AlternateIdentifier& value) { m_alternateIdentifierHasBeenSet = true; m_alternateIdentifier = value; }

    /**
     * <p>A unique identifier for a user or group that is not the primary identifier.
     * This value can be an identifier from an external identity provider (IdP) that is
     * associated with the user, the group, or a unique attribute. For example, a
     * unique <code>GroupDisplayName</code>.</p>
     */
    inline void SetAlternateIdentifier(AlternateIdentifier&& value) { m_alternateIdentifierHasBeenSet = true; m_alternateIdentifier = std::move(value); }

    /**
     * <p>A unique identifier for a user or group that is not the primary identifier.
     * This value can be an identifier from an external identity provider (IdP) that is
     * associated with the user, the group, or a unique attribute. For example, a
     * unique <code>GroupDisplayName</code>.</p>
     */
    inline GetGroupIdRequest& WithAlternateIdentifier(const AlternateIdentifier& value) { SetAlternateIdentifier(value); return *this;}

    /**
     * <p>A unique identifier for a user or group that is not the primary identifier.
     * This value can be an identifier from an external identity provider (IdP) that is
     * associated with the user, the group, or a unique attribute. For example, a
     * unique <code>GroupDisplayName</code>.</p>
     */
    inline GetGroupIdRequest& WithAlternateIdentifier(AlternateIdentifier&& value) { SetAlternateIdentifier(std::move(value)); return *this;}

  private:

    Aws::String m_identityStoreId;
    bool m_identityStoreIdHasBeenSet = false;

    AlternateIdentifier m_alternateIdentifier;
    bool m_alternateIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace IdentityStore
} // namespace Aws

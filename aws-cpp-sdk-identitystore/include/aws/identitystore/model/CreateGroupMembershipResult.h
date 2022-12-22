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
  class CreateGroupMembershipResult
  {
  public:
    AWS_IDENTITYSTORE_API CreateGroupMembershipResult();
    AWS_IDENTITYSTORE_API CreateGroupMembershipResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IDENTITYSTORE_API CreateGroupMembershipResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The identifier for a newly created <code>GroupMembership</code> in an
     * identity store.</p>
     */
    inline const Aws::String& GetMembershipId() const{ return m_membershipId; }

    /**
     * <p>The identifier for a newly created <code>GroupMembership</code> in an
     * identity store.</p>
     */
    inline void SetMembershipId(const Aws::String& value) { m_membershipId = value; }

    /**
     * <p>The identifier for a newly created <code>GroupMembership</code> in an
     * identity store.</p>
     */
    inline void SetMembershipId(Aws::String&& value) { m_membershipId = std::move(value); }

    /**
     * <p>The identifier for a newly created <code>GroupMembership</code> in an
     * identity store.</p>
     */
    inline void SetMembershipId(const char* value) { m_membershipId.assign(value); }

    /**
     * <p>The identifier for a newly created <code>GroupMembership</code> in an
     * identity store.</p>
     */
    inline CreateGroupMembershipResult& WithMembershipId(const Aws::String& value) { SetMembershipId(value); return *this;}

    /**
     * <p>The identifier for a newly created <code>GroupMembership</code> in an
     * identity store.</p>
     */
    inline CreateGroupMembershipResult& WithMembershipId(Aws::String&& value) { SetMembershipId(std::move(value)); return *this;}

    /**
     * <p>The identifier for a newly created <code>GroupMembership</code> in an
     * identity store.</p>
     */
    inline CreateGroupMembershipResult& WithMembershipId(const char* value) { SetMembershipId(value); return *this;}


    /**
     * <p>The globally unique identifier for the identity store.</p>
     */
    inline const Aws::String& GetIdentityStoreId() const{ return m_identityStoreId; }

    /**
     * <p>The globally unique identifier for the identity store.</p>
     */
    inline void SetIdentityStoreId(const Aws::String& value) { m_identityStoreId = value; }

    /**
     * <p>The globally unique identifier for the identity store.</p>
     */
    inline void SetIdentityStoreId(Aws::String&& value) { m_identityStoreId = std::move(value); }

    /**
     * <p>The globally unique identifier for the identity store.</p>
     */
    inline void SetIdentityStoreId(const char* value) { m_identityStoreId.assign(value); }

    /**
     * <p>The globally unique identifier for the identity store.</p>
     */
    inline CreateGroupMembershipResult& WithIdentityStoreId(const Aws::String& value) { SetIdentityStoreId(value); return *this;}

    /**
     * <p>The globally unique identifier for the identity store.</p>
     */
    inline CreateGroupMembershipResult& WithIdentityStoreId(Aws::String&& value) { SetIdentityStoreId(std::move(value)); return *this;}

    /**
     * <p>The globally unique identifier for the identity store.</p>
     */
    inline CreateGroupMembershipResult& WithIdentityStoreId(const char* value) { SetIdentityStoreId(value); return *this;}

  private:

    Aws::String m_membershipId;

    Aws::String m_identityStoreId;
  };

} // namespace Model
} // namespace IdentityStore
} // namespace Aws

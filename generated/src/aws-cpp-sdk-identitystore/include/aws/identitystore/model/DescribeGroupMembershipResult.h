/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/identitystore/IdentityStore_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/identitystore/model/MemberId.h>
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
  class DescribeGroupMembershipResult
  {
  public:
    AWS_IDENTITYSTORE_API DescribeGroupMembershipResult();
    AWS_IDENTITYSTORE_API DescribeGroupMembershipResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IDENTITYSTORE_API DescribeGroupMembershipResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline DescribeGroupMembershipResult& WithIdentityStoreId(const Aws::String& value) { SetIdentityStoreId(value); return *this;}

    /**
     * <p>The globally unique identifier for the identity store.</p>
     */
    inline DescribeGroupMembershipResult& WithIdentityStoreId(Aws::String&& value) { SetIdentityStoreId(std::move(value)); return *this;}

    /**
     * <p>The globally unique identifier for the identity store.</p>
     */
    inline DescribeGroupMembershipResult& WithIdentityStoreId(const char* value) { SetIdentityStoreId(value); return *this;}


    /**
     * <p>The identifier for a <code>GroupMembership</code> in an identity store.</p>
     */
    inline const Aws::String& GetMembershipId() const{ return m_membershipId; }

    /**
     * <p>The identifier for a <code>GroupMembership</code> in an identity store.</p>
     */
    inline void SetMembershipId(const Aws::String& value) { m_membershipId = value; }

    /**
     * <p>The identifier for a <code>GroupMembership</code> in an identity store.</p>
     */
    inline void SetMembershipId(Aws::String&& value) { m_membershipId = std::move(value); }

    /**
     * <p>The identifier for a <code>GroupMembership</code> in an identity store.</p>
     */
    inline void SetMembershipId(const char* value) { m_membershipId.assign(value); }

    /**
     * <p>The identifier for a <code>GroupMembership</code> in an identity store.</p>
     */
    inline DescribeGroupMembershipResult& WithMembershipId(const Aws::String& value) { SetMembershipId(value); return *this;}

    /**
     * <p>The identifier for a <code>GroupMembership</code> in an identity store.</p>
     */
    inline DescribeGroupMembershipResult& WithMembershipId(Aws::String&& value) { SetMembershipId(std::move(value)); return *this;}

    /**
     * <p>The identifier for a <code>GroupMembership</code> in an identity store.</p>
     */
    inline DescribeGroupMembershipResult& WithMembershipId(const char* value) { SetMembershipId(value); return *this;}


    /**
     * <p>The identifier for a group in the identity store.</p>
     */
    inline const Aws::String& GetGroupId() const{ return m_groupId; }

    /**
     * <p>The identifier for a group in the identity store.</p>
     */
    inline void SetGroupId(const Aws::String& value) { m_groupId = value; }

    /**
     * <p>The identifier for a group in the identity store.</p>
     */
    inline void SetGroupId(Aws::String&& value) { m_groupId = std::move(value); }

    /**
     * <p>The identifier for a group in the identity store.</p>
     */
    inline void SetGroupId(const char* value) { m_groupId.assign(value); }

    /**
     * <p>The identifier for a group in the identity store.</p>
     */
    inline DescribeGroupMembershipResult& WithGroupId(const Aws::String& value) { SetGroupId(value); return *this;}

    /**
     * <p>The identifier for a group in the identity store.</p>
     */
    inline DescribeGroupMembershipResult& WithGroupId(Aws::String&& value) { SetGroupId(std::move(value)); return *this;}

    /**
     * <p>The identifier for a group in the identity store.</p>
     */
    inline DescribeGroupMembershipResult& WithGroupId(const char* value) { SetGroupId(value); return *this;}


    
    inline const MemberId& GetMemberId() const{ return m_memberId; }

    
    inline void SetMemberId(const MemberId& value) { m_memberId = value; }

    
    inline void SetMemberId(MemberId&& value) { m_memberId = std::move(value); }

    
    inline DescribeGroupMembershipResult& WithMemberId(const MemberId& value) { SetMemberId(value); return *this;}

    
    inline DescribeGroupMembershipResult& WithMemberId(MemberId&& value) { SetMemberId(std::move(value)); return *this;}

  private:

    Aws::String m_identityStoreId;

    Aws::String m_membershipId;

    Aws::String m_groupId;

    MemberId m_memberId;
  };

} // namespace Model
} // namespace IdentityStore
} // namespace Aws

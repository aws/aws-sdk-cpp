﻿/**
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


    ///@{
    /**
     * <p>The identifier for a newly created <code>GroupMembership</code> in an
     * identity store.</p>
     */
    inline const Aws::String& GetMembershipId() const{ return m_membershipId; }
    inline void SetMembershipId(const Aws::String& value) { m_membershipId = value; }
    inline void SetMembershipId(Aws::String&& value) { m_membershipId = std::move(value); }
    inline void SetMembershipId(const char* value) { m_membershipId.assign(value); }
    inline CreateGroupMembershipResult& WithMembershipId(const Aws::String& value) { SetMembershipId(value); return *this;}
    inline CreateGroupMembershipResult& WithMembershipId(Aws::String&& value) { SetMembershipId(std::move(value)); return *this;}
    inline CreateGroupMembershipResult& WithMembershipId(const char* value) { SetMembershipId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The globally unique identifier for the identity store.</p>
     */
    inline const Aws::String& GetIdentityStoreId() const{ return m_identityStoreId; }
    inline void SetIdentityStoreId(const Aws::String& value) { m_identityStoreId = value; }
    inline void SetIdentityStoreId(Aws::String&& value) { m_identityStoreId = std::move(value); }
    inline void SetIdentityStoreId(const char* value) { m_identityStoreId.assign(value); }
    inline CreateGroupMembershipResult& WithIdentityStoreId(const Aws::String& value) { SetIdentityStoreId(value); return *this;}
    inline CreateGroupMembershipResult& WithIdentityStoreId(Aws::String&& value) { SetIdentityStoreId(std::move(value)); return *this;}
    inline CreateGroupMembershipResult& WithIdentityStoreId(const char* value) { SetIdentityStoreId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateGroupMembershipResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateGroupMembershipResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateGroupMembershipResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_membershipId;

    Aws::String m_identityStoreId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IdentityStore
} // namespace Aws

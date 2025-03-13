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
  class GetGroupMembershipIdResult
  {
  public:
    AWS_IDENTITYSTORE_API GetGroupMembershipIdResult() = default;
    AWS_IDENTITYSTORE_API GetGroupMembershipIdResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IDENTITYSTORE_API GetGroupMembershipIdResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The identifier for a <code>GroupMembership</code> in an identity store.</p>
     */
    inline const Aws::String& GetMembershipId() const { return m_membershipId; }
    template<typename MembershipIdT = Aws::String>
    void SetMembershipId(MembershipIdT&& value) { m_membershipIdHasBeenSet = true; m_membershipId = std::forward<MembershipIdT>(value); }
    template<typename MembershipIdT = Aws::String>
    GetGroupMembershipIdResult& WithMembershipId(MembershipIdT&& value) { SetMembershipId(std::forward<MembershipIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The globally unique identifier for the identity store.</p>
     */
    inline const Aws::String& GetIdentityStoreId() const { return m_identityStoreId; }
    template<typename IdentityStoreIdT = Aws::String>
    void SetIdentityStoreId(IdentityStoreIdT&& value) { m_identityStoreIdHasBeenSet = true; m_identityStoreId = std::forward<IdentityStoreIdT>(value); }
    template<typename IdentityStoreIdT = Aws::String>
    GetGroupMembershipIdResult& WithIdentityStoreId(IdentityStoreIdT&& value) { SetIdentityStoreId(std::forward<IdentityStoreIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetGroupMembershipIdResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_membershipId;
    bool m_membershipIdHasBeenSet = false;

    Aws::String m_identityStoreId;
    bool m_identityStoreIdHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IdentityStore
} // namespace Aws

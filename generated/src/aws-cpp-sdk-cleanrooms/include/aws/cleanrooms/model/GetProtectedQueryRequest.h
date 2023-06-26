/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/CleanRoomsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CleanRooms
{
namespace Model
{

  /**
   */
  class GetProtectedQueryRequest : public CleanRoomsRequest
  {
  public:
    AWS_CLEANROOMS_API GetProtectedQueryRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetProtectedQuery"; }

    AWS_CLEANROOMS_API Aws::String SerializePayload() const override;


    /**
     * <p>The identifier for a membership in a protected query instance.</p>
     */
    inline const Aws::String& GetMembershipIdentifier() const{ return m_membershipIdentifier; }

    /**
     * <p>The identifier for a membership in a protected query instance.</p>
     */
    inline bool MembershipIdentifierHasBeenSet() const { return m_membershipIdentifierHasBeenSet; }

    /**
     * <p>The identifier for a membership in a protected query instance.</p>
     */
    inline void SetMembershipIdentifier(const Aws::String& value) { m_membershipIdentifierHasBeenSet = true; m_membershipIdentifier = value; }

    /**
     * <p>The identifier for a membership in a protected query instance.</p>
     */
    inline void SetMembershipIdentifier(Aws::String&& value) { m_membershipIdentifierHasBeenSet = true; m_membershipIdentifier = std::move(value); }

    /**
     * <p>The identifier for a membership in a protected query instance.</p>
     */
    inline void SetMembershipIdentifier(const char* value) { m_membershipIdentifierHasBeenSet = true; m_membershipIdentifier.assign(value); }

    /**
     * <p>The identifier for a membership in a protected query instance.</p>
     */
    inline GetProtectedQueryRequest& WithMembershipIdentifier(const Aws::String& value) { SetMembershipIdentifier(value); return *this;}

    /**
     * <p>The identifier for a membership in a protected query instance.</p>
     */
    inline GetProtectedQueryRequest& WithMembershipIdentifier(Aws::String&& value) { SetMembershipIdentifier(std::move(value)); return *this;}

    /**
     * <p>The identifier for a membership in a protected query instance.</p>
     */
    inline GetProtectedQueryRequest& WithMembershipIdentifier(const char* value) { SetMembershipIdentifier(value); return *this;}


    /**
     * <p>The identifier for a protected query instance.</p>
     */
    inline const Aws::String& GetProtectedQueryIdentifier() const{ return m_protectedQueryIdentifier; }

    /**
     * <p>The identifier for a protected query instance.</p>
     */
    inline bool ProtectedQueryIdentifierHasBeenSet() const { return m_protectedQueryIdentifierHasBeenSet; }

    /**
     * <p>The identifier for a protected query instance.</p>
     */
    inline void SetProtectedQueryIdentifier(const Aws::String& value) { m_protectedQueryIdentifierHasBeenSet = true; m_protectedQueryIdentifier = value; }

    /**
     * <p>The identifier for a protected query instance.</p>
     */
    inline void SetProtectedQueryIdentifier(Aws::String&& value) { m_protectedQueryIdentifierHasBeenSet = true; m_protectedQueryIdentifier = std::move(value); }

    /**
     * <p>The identifier for a protected query instance.</p>
     */
    inline void SetProtectedQueryIdentifier(const char* value) { m_protectedQueryIdentifierHasBeenSet = true; m_protectedQueryIdentifier.assign(value); }

    /**
     * <p>The identifier for a protected query instance.</p>
     */
    inline GetProtectedQueryRequest& WithProtectedQueryIdentifier(const Aws::String& value) { SetProtectedQueryIdentifier(value); return *this;}

    /**
     * <p>The identifier for a protected query instance.</p>
     */
    inline GetProtectedQueryRequest& WithProtectedQueryIdentifier(Aws::String&& value) { SetProtectedQueryIdentifier(std::move(value)); return *this;}

    /**
     * <p>The identifier for a protected query instance.</p>
     */
    inline GetProtectedQueryRequest& WithProtectedQueryIdentifier(const char* value) { SetProtectedQueryIdentifier(value); return *this;}

  private:

    Aws::String m_membershipIdentifier;
    bool m_membershipIdentifierHasBeenSet = false;

    Aws::String m_protectedQueryIdentifier;
    bool m_protectedQueryIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws

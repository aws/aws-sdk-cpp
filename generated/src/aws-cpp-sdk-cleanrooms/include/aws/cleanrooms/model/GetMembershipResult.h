/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/model/Membership.h>
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
namespace CleanRooms
{
namespace Model
{
  class GetMembershipResult
  {
  public:
    AWS_CLEANROOMS_API GetMembershipResult();
    AWS_CLEANROOMS_API GetMembershipResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLEANROOMS_API GetMembershipResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The membership retrieved for the provided identifier.</p>
     */
    inline const Membership& GetMembership() const{ return m_membership; }

    /**
     * <p>The membership retrieved for the provided identifier.</p>
     */
    inline void SetMembership(const Membership& value) { m_membership = value; }

    /**
     * <p>The membership retrieved for the provided identifier.</p>
     */
    inline void SetMembership(Membership&& value) { m_membership = std::move(value); }

    /**
     * <p>The membership retrieved for the provided identifier.</p>
     */
    inline GetMembershipResult& WithMembership(const Membership& value) { SetMembership(value); return *this;}

    /**
     * <p>The membership retrieved for the provided identifier.</p>
     */
    inline GetMembershipResult& WithMembership(Membership&& value) { SetMembership(std::move(value)); return *this;}

  private:

    Membership m_membership;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws

﻿/**
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
  class UpdateMembershipResult
  {
  public:
    AWS_CLEANROOMS_API UpdateMembershipResult();
    AWS_CLEANROOMS_API UpdateMembershipResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLEANROOMS_API UpdateMembershipResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const Membership& GetMembership() const{ return m_membership; }

    
    inline void SetMembership(const Membership& value) { m_membership = value; }

    
    inline void SetMembership(Membership&& value) { m_membership = std::move(value); }

    
    inline UpdateMembershipResult& WithMembership(const Membership& value) { SetMembership(value); return *this;}

    
    inline UpdateMembershipResult& WithMembership(Membership&& value) { SetMembership(std::move(value)); return *this;}

  private:

    Membership m_membership;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws

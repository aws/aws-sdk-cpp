﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/nimble/NimbleStudio_EXPORTS.h>
#include <aws/nimble/model/LaunchProfileMembership.h>
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
namespace NimbleStudio
{
namespace Model
{
  class AWS_NIMBLESTUDIO_API UpdateLaunchProfileMemberResult
  {
  public:
    UpdateLaunchProfileMemberResult();
    UpdateLaunchProfileMemberResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    UpdateLaunchProfileMemberResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The updated member. </p>
     */
    inline const LaunchProfileMembership& GetMember() const{ return m_member; }

    /**
     * <p>The updated member. </p>
     */
    inline void SetMember(const LaunchProfileMembership& value) { m_member = value; }

    /**
     * <p>The updated member. </p>
     */
    inline void SetMember(LaunchProfileMembership&& value) { m_member = std::move(value); }

    /**
     * <p>The updated member. </p>
     */
    inline UpdateLaunchProfileMemberResult& WithMember(const LaunchProfileMembership& value) { SetMember(value); return *this;}

    /**
     * <p>The updated member. </p>
     */
    inline UpdateLaunchProfileMemberResult& WithMember(LaunchProfileMembership&& value) { SetMember(std::move(value)); return *this;}

  private:

    LaunchProfileMembership m_member;
  };

} // namespace Model
} // namespace NimbleStudio
} // namespace Aws

/**
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
  class GetLaunchProfileMemberResult
  {
  public:
    AWS_NIMBLESTUDIO_API GetLaunchProfileMemberResult();
    AWS_NIMBLESTUDIO_API GetLaunchProfileMemberResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NIMBLESTUDIO_API GetLaunchProfileMemberResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The member.</p>
     */
    inline const LaunchProfileMembership& GetMember() const{ return m_member; }

    /**
     * <p>The member.</p>
     */
    inline void SetMember(const LaunchProfileMembership& value) { m_member = value; }

    /**
     * <p>The member.</p>
     */
    inline void SetMember(LaunchProfileMembership&& value) { m_member = std::move(value); }

    /**
     * <p>The member.</p>
     */
    inline GetLaunchProfileMemberResult& WithMember(const LaunchProfileMembership& value) { SetMember(value); return *this;}

    /**
     * <p>The member.</p>
     */
    inline GetLaunchProfileMemberResult& WithMember(LaunchProfileMembership&& value) { SetMember(std::move(value)); return *this;}

  private:

    LaunchProfileMembership m_member;
  };

} // namespace Model
} // namespace NimbleStudio
} // namespace Aws

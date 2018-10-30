/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/chime/model/Invite.h>
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
namespace Chime
{
namespace Model
{
  class AWS_CHIME_API InviteUsersResult
  {
  public:
    InviteUsersResult();
    InviteUsersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    InviteUsersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The invite details.</p>
     */
    inline const Aws::Vector<Invite>& GetInvites() const{ return m_invites; }

    /**
     * <p>The invite details.</p>
     */
    inline void SetInvites(const Aws::Vector<Invite>& value) { m_invites = value; }

    /**
     * <p>The invite details.</p>
     */
    inline void SetInvites(Aws::Vector<Invite>&& value) { m_invites = std::move(value); }

    /**
     * <p>The invite details.</p>
     */
    inline InviteUsersResult& WithInvites(const Aws::Vector<Invite>& value) { SetInvites(value); return *this;}

    /**
     * <p>The invite details.</p>
     */
    inline InviteUsersResult& WithInvites(Aws::Vector<Invite>&& value) { SetInvites(std::move(value)); return *this;}

    /**
     * <p>The invite details.</p>
     */
    inline InviteUsersResult& AddInvites(const Invite& value) { m_invites.push_back(value); return *this; }

    /**
     * <p>The invite details.</p>
     */
    inline InviteUsersResult& AddInvites(Invite&& value) { m_invites.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<Invite> m_invites;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws

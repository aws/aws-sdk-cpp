/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class InviteUsersResult
  {
  public:
    AWS_CHIME_API InviteUsersResult();
    AWS_CHIME_API InviteUsersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIME_API InviteUsersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The email invitation details.</p>
     */
    inline const Aws::Vector<Invite>& GetInvites() const{ return m_invites; }

    /**
     * <p>The email invitation details.</p>
     */
    inline void SetInvites(const Aws::Vector<Invite>& value) { m_invites = value; }

    /**
     * <p>The email invitation details.</p>
     */
    inline void SetInvites(Aws::Vector<Invite>&& value) { m_invites = std::move(value); }

    /**
     * <p>The email invitation details.</p>
     */
    inline InviteUsersResult& WithInvites(const Aws::Vector<Invite>& value) { SetInvites(value); return *this;}

    /**
     * <p>The email invitation details.</p>
     */
    inline InviteUsersResult& WithInvites(Aws::Vector<Invite>&& value) { SetInvites(std::move(value)); return *this;}

    /**
     * <p>The email invitation details.</p>
     */
    inline InviteUsersResult& AddInvites(const Invite& value) { m_invites.push_back(value); return *this; }

    /**
     * <p>The email invitation details.</p>
     */
    inline InviteUsersResult& AddInvites(Invite&& value) { m_invites.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline InviteUsersResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline InviteUsersResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline InviteUsersResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<Invite> m_invites;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws

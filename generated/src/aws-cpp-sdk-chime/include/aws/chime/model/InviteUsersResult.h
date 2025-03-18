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
    AWS_CHIME_API InviteUsersResult() = default;
    AWS_CHIME_API InviteUsersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIME_API InviteUsersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The email invitation details.</p>
     */
    inline const Aws::Vector<Invite>& GetInvites() const { return m_invites; }
    template<typename InvitesT = Aws::Vector<Invite>>
    void SetInvites(InvitesT&& value) { m_invitesHasBeenSet = true; m_invites = std::forward<InvitesT>(value); }
    template<typename InvitesT = Aws::Vector<Invite>>
    InviteUsersResult& WithInvites(InvitesT&& value) { SetInvites(std::forward<InvitesT>(value)); return *this;}
    template<typename InvitesT = Invite>
    InviteUsersResult& AddInvites(InvitesT&& value) { m_invitesHasBeenSet = true; m_invites.emplace_back(std::forward<InvitesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    InviteUsersResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Invite> m_invites;
    bool m_invitesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws

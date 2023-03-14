/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
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
namespace GuardDuty
{
namespace Model
{
  class GetInvitationsCountResult
  {
  public:
    AWS_GUARDDUTY_API GetInvitationsCountResult();
    AWS_GUARDDUTY_API GetInvitationsCountResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GUARDDUTY_API GetInvitationsCountResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The number of received invitations.</p>
     */
    inline int GetInvitationsCount() const{ return m_invitationsCount; }

    /**
     * <p>The number of received invitations.</p>
     */
    inline void SetInvitationsCount(int value) { m_invitationsCount = value; }

    /**
     * <p>The number of received invitations.</p>
     */
    inline GetInvitationsCountResult& WithInvitationsCount(int value) { SetInvitationsCount(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetInvitationsCountResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetInvitationsCountResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetInvitationsCountResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    int m_invitationsCount;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws

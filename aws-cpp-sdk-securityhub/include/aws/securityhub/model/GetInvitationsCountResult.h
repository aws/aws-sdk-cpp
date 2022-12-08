/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>

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
namespace SecurityHub
{
namespace Model
{
  class GetInvitationsCountResult
  {
  public:
    AWS_SECURITYHUB_API GetInvitationsCountResult();
    AWS_SECURITYHUB_API GetInvitationsCountResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SECURITYHUB_API GetInvitationsCountResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The number of all membership invitations sent to this Security Hub member
     * account, not including the currently accepted invitation.</p>
     */
    inline int GetInvitationsCount() const{ return m_invitationsCount; }

    /**
     * <p>The number of all membership invitations sent to this Security Hub member
     * account, not including the currently accepted invitation.</p>
     */
    inline void SetInvitationsCount(int value) { m_invitationsCount = value; }

    /**
     * <p>The number of all membership invitations sent to this Security Hub member
     * account, not including the currently accepted invitation.</p>
     */
    inline GetInvitationsCountResult& WithInvitationsCount(int value) { SetInvitationsCount(value); return *this;}

  private:

    int m_invitationsCount;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>

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
namespace Macie2
{
namespace Model
{
  class GetInvitationsCountResult
  {
  public:
    AWS_MACIE2_API GetInvitationsCountResult();
    AWS_MACIE2_API GetInvitationsCountResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MACIE2_API GetInvitationsCountResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The total number of invitations that were received by the account, not
     * including the currently accepted invitation.</p>
     */
    inline long long GetInvitationsCount() const{ return m_invitationsCount; }

    /**
     * <p>The total number of invitations that were received by the account, not
     * including the currently accepted invitation.</p>
     */
    inline void SetInvitationsCount(long long value) { m_invitationsCount = value; }

    /**
     * <p>The total number of invitations that were received by the account, not
     * including the currently accepted invitation.</p>
     */
    inline GetInvitationsCountResult& WithInvitationsCount(long long value) { SetInvitationsCount(value); return *this;}

  private:

    long long m_invitationsCount;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/wellarchitected/model/ShareInvitation.h>
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
namespace WellArchitected
{
namespace Model
{
  class AWS_WELLARCHITECTED_API UpdateShareInvitationResult
  {
  public:
    UpdateShareInvitationResult();
    UpdateShareInvitationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    UpdateShareInvitationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The updated workload share invitation.</p>
     */
    inline const ShareInvitation& GetShareInvitation() const{ return m_shareInvitation; }

    /**
     * <p>The updated workload share invitation.</p>
     */
    inline void SetShareInvitation(const ShareInvitation& value) { m_shareInvitation = value; }

    /**
     * <p>The updated workload share invitation.</p>
     */
    inline void SetShareInvitation(ShareInvitation&& value) { m_shareInvitation = std::move(value); }

    /**
     * <p>The updated workload share invitation.</p>
     */
    inline UpdateShareInvitationResult& WithShareInvitation(const ShareInvitation& value) { SetShareInvitation(value); return *this;}

    /**
     * <p>The updated workload share invitation.</p>
     */
    inline UpdateShareInvitationResult& WithShareInvitation(ShareInvitation&& value) { SetShareInvitation(std::move(value)); return *this;}

  private:

    ShareInvitation m_shareInvitation;
  };

} // namespace Model
} // namespace WellArchitected
} // namespace Aws

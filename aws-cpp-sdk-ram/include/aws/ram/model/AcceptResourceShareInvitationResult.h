/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ram/RAM_EXPORTS.h>
#include <aws/ram/model/ResourceShareInvitation.h>
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
namespace RAM
{
namespace Model
{
  class AWS_RAM_API AcceptResourceShareInvitationResult
  {
  public:
    AcceptResourceShareInvitationResult();
    AcceptResourceShareInvitationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AcceptResourceShareInvitationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the invitation.</p>
     */
    inline const ResourceShareInvitation& GetResourceShareInvitation() const{ return m_resourceShareInvitation; }

    /**
     * <p>Information about the invitation.</p>
     */
    inline void SetResourceShareInvitation(const ResourceShareInvitation& value) { m_resourceShareInvitation = value; }

    /**
     * <p>Information about the invitation.</p>
     */
    inline void SetResourceShareInvitation(ResourceShareInvitation&& value) { m_resourceShareInvitation = std::move(value); }

    /**
     * <p>Information about the invitation.</p>
     */
    inline AcceptResourceShareInvitationResult& WithResourceShareInvitation(const ResourceShareInvitation& value) { SetResourceShareInvitation(value); return *this;}

    /**
     * <p>Information about the invitation.</p>
     */
    inline AcceptResourceShareInvitationResult& WithResourceShareInvitation(ResourceShareInvitation&& value) { SetResourceShareInvitation(std::move(value)); return *this;}


    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientToken = value; }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientToken = std::move(value); }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request.</p>
     */
    inline void SetClientToken(const char* value) { m_clientToken.assign(value); }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request.</p>
     */
    inline AcceptResourceShareInvitationResult& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request.</p>
     */
    inline AcceptResourceShareInvitationResult& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request.</p>
     */
    inline AcceptResourceShareInvitationResult& WithClientToken(const char* value) { SetClientToken(value); return *this;}

  private:

    ResourceShareInvitation m_resourceShareInvitation;

    Aws::String m_clientToken;
  };

} // namespace Model
} // namespace RAM
} // namespace Aws

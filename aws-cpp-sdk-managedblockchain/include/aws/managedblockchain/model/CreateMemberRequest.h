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
#include <aws/managedblockchain/ManagedBlockchain_EXPORTS.h>
#include <aws/managedblockchain/ManagedBlockchainRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/managedblockchain/model/MemberConfiguration.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace ManagedBlockchain
{
namespace Model
{

  /**
   */
  class AWS_MANAGEDBLOCKCHAIN_API CreateMemberRequest : public ManagedBlockchainRequest
  {
  public:
    CreateMemberRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateMember"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the operation. An idempotent operation completes no more than one
     * time. This identifier is required only if you make a service request directly
     * using an HTTP client. It is generated automatically if you use an AWS SDK or the
     * AWS CLI.</p>
     */
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the operation. An idempotent operation completes no more than one
     * time. This identifier is required only if you make a service request directly
     * using an HTTP client. It is generated automatically if you use an AWS SDK or the
     * AWS CLI.</p>
     */
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the operation. An idempotent operation completes no more than one
     * time. This identifier is required only if you make a service request directly
     * using an HTTP client. It is generated automatically if you use an AWS SDK or the
     * AWS CLI.</p>
     */
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the operation. An idempotent operation completes no more than one
     * time. This identifier is required only if you make a service request directly
     * using an HTTP client. It is generated automatically if you use an AWS SDK or the
     * AWS CLI.</p>
     */
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the operation. An idempotent operation completes no more than one
     * time. This identifier is required only if you make a service request directly
     * using an HTTP client. It is generated automatically if you use an AWS SDK or the
     * AWS CLI.</p>
     */
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the operation. An idempotent operation completes no more than one
     * time. This identifier is required only if you make a service request directly
     * using an HTTP client. It is generated automatically if you use an AWS SDK or the
     * AWS CLI.</p>
     */
    inline CreateMemberRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the operation. An idempotent operation completes no more than one
     * time. This identifier is required only if you make a service request directly
     * using an HTTP client. It is generated automatically if you use an AWS SDK or the
     * AWS CLI.</p>
     */
    inline CreateMemberRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the operation. An idempotent operation completes no more than one
     * time. This identifier is required only if you make a service request directly
     * using an HTTP client. It is generated automatically if you use an AWS SDK or the
     * AWS CLI.</p>
     */
    inline CreateMemberRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}


    /**
     * <p>The unique identifier of the invitation that is sent to the member to join
     * the network.</p>
     */
    inline const Aws::String& GetInvitationId() const{ return m_invitationId; }

    /**
     * <p>The unique identifier of the invitation that is sent to the member to join
     * the network.</p>
     */
    inline bool InvitationIdHasBeenSet() const { return m_invitationIdHasBeenSet; }

    /**
     * <p>The unique identifier of the invitation that is sent to the member to join
     * the network.</p>
     */
    inline void SetInvitationId(const Aws::String& value) { m_invitationIdHasBeenSet = true; m_invitationId = value; }

    /**
     * <p>The unique identifier of the invitation that is sent to the member to join
     * the network.</p>
     */
    inline void SetInvitationId(Aws::String&& value) { m_invitationIdHasBeenSet = true; m_invitationId = std::move(value); }

    /**
     * <p>The unique identifier of the invitation that is sent to the member to join
     * the network.</p>
     */
    inline void SetInvitationId(const char* value) { m_invitationIdHasBeenSet = true; m_invitationId.assign(value); }

    /**
     * <p>The unique identifier of the invitation that is sent to the member to join
     * the network.</p>
     */
    inline CreateMemberRequest& WithInvitationId(const Aws::String& value) { SetInvitationId(value); return *this;}

    /**
     * <p>The unique identifier of the invitation that is sent to the member to join
     * the network.</p>
     */
    inline CreateMemberRequest& WithInvitationId(Aws::String&& value) { SetInvitationId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the invitation that is sent to the member to join
     * the network.</p>
     */
    inline CreateMemberRequest& WithInvitationId(const char* value) { SetInvitationId(value); return *this;}


    /**
     * <p>The unique identifier of the network in which the member is created.</p>
     */
    inline const Aws::String& GetNetworkId() const{ return m_networkId; }

    /**
     * <p>The unique identifier of the network in which the member is created.</p>
     */
    inline bool NetworkIdHasBeenSet() const { return m_networkIdHasBeenSet; }

    /**
     * <p>The unique identifier of the network in which the member is created.</p>
     */
    inline void SetNetworkId(const Aws::String& value) { m_networkIdHasBeenSet = true; m_networkId = value; }

    /**
     * <p>The unique identifier of the network in which the member is created.</p>
     */
    inline void SetNetworkId(Aws::String&& value) { m_networkIdHasBeenSet = true; m_networkId = std::move(value); }

    /**
     * <p>The unique identifier of the network in which the member is created.</p>
     */
    inline void SetNetworkId(const char* value) { m_networkIdHasBeenSet = true; m_networkId.assign(value); }

    /**
     * <p>The unique identifier of the network in which the member is created.</p>
     */
    inline CreateMemberRequest& WithNetworkId(const Aws::String& value) { SetNetworkId(value); return *this;}

    /**
     * <p>The unique identifier of the network in which the member is created.</p>
     */
    inline CreateMemberRequest& WithNetworkId(Aws::String&& value) { SetNetworkId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the network in which the member is created.</p>
     */
    inline CreateMemberRequest& WithNetworkId(const char* value) { SetNetworkId(value); return *this;}


    /**
     * <p>Member configuration parameters.</p>
     */
    inline const MemberConfiguration& GetMemberConfiguration() const{ return m_memberConfiguration; }

    /**
     * <p>Member configuration parameters.</p>
     */
    inline bool MemberConfigurationHasBeenSet() const { return m_memberConfigurationHasBeenSet; }

    /**
     * <p>Member configuration parameters.</p>
     */
    inline void SetMemberConfiguration(const MemberConfiguration& value) { m_memberConfigurationHasBeenSet = true; m_memberConfiguration = value; }

    /**
     * <p>Member configuration parameters.</p>
     */
    inline void SetMemberConfiguration(MemberConfiguration&& value) { m_memberConfigurationHasBeenSet = true; m_memberConfiguration = std::move(value); }

    /**
     * <p>Member configuration parameters.</p>
     */
    inline CreateMemberRequest& WithMemberConfiguration(const MemberConfiguration& value) { SetMemberConfiguration(value); return *this;}

    /**
     * <p>Member configuration parameters.</p>
     */
    inline CreateMemberRequest& WithMemberConfiguration(MemberConfiguration&& value) { SetMemberConfiguration(std::move(value)); return *this;}

  private:

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet;

    Aws::String m_invitationId;
    bool m_invitationIdHasBeenSet;

    Aws::String m_networkId;
    bool m_networkIdHasBeenSet;

    MemberConfiguration m_memberConfiguration;
    bool m_memberConfigurationHasBeenSet;
  };

} // namespace Model
} // namespace ManagedBlockchain
} // namespace Aws

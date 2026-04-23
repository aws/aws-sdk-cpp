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
#include <aws/ram/RAM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/ram/model/ResourceShareInvitationStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ram/model/ResourceShareAssociation.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace RAM
{
namespace Model
{

  /**
   * <p>Describes an invitation to join a resource share.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ram-2018-01-04/ResourceShareInvitation">AWS
   * API Reference</a></p>
   */
  class AWS_RAM_API ResourceShareInvitation
  {
  public:
    ResourceShareInvitation();
    ResourceShareInvitation(Aws::Utils::Json::JsonView jsonValue);
    ResourceShareInvitation& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the invitation.</p>
     */
    inline const Aws::String& GetResourceShareInvitationArn() const{ return m_resourceShareInvitationArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the invitation.</p>
     */
    inline bool ResourceShareInvitationArnHasBeenSet() const { return m_resourceShareInvitationArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the invitation.</p>
     */
    inline void SetResourceShareInvitationArn(const Aws::String& value) { m_resourceShareInvitationArnHasBeenSet = true; m_resourceShareInvitationArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the invitation.</p>
     */
    inline void SetResourceShareInvitationArn(Aws::String&& value) { m_resourceShareInvitationArnHasBeenSet = true; m_resourceShareInvitationArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the invitation.</p>
     */
    inline void SetResourceShareInvitationArn(const char* value) { m_resourceShareInvitationArnHasBeenSet = true; m_resourceShareInvitationArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the invitation.</p>
     */
    inline ResourceShareInvitation& WithResourceShareInvitationArn(const Aws::String& value) { SetResourceShareInvitationArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the invitation.</p>
     */
    inline ResourceShareInvitation& WithResourceShareInvitationArn(Aws::String&& value) { SetResourceShareInvitationArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the invitation.</p>
     */
    inline ResourceShareInvitation& WithResourceShareInvitationArn(const char* value) { SetResourceShareInvitationArn(value); return *this;}


    /**
     * <p>The name of the resource share.</p>
     */
    inline const Aws::String& GetResourceShareName() const{ return m_resourceShareName; }

    /**
     * <p>The name of the resource share.</p>
     */
    inline bool ResourceShareNameHasBeenSet() const { return m_resourceShareNameHasBeenSet; }

    /**
     * <p>The name of the resource share.</p>
     */
    inline void SetResourceShareName(const Aws::String& value) { m_resourceShareNameHasBeenSet = true; m_resourceShareName = value; }

    /**
     * <p>The name of the resource share.</p>
     */
    inline void SetResourceShareName(Aws::String&& value) { m_resourceShareNameHasBeenSet = true; m_resourceShareName = std::move(value); }

    /**
     * <p>The name of the resource share.</p>
     */
    inline void SetResourceShareName(const char* value) { m_resourceShareNameHasBeenSet = true; m_resourceShareName.assign(value); }

    /**
     * <p>The name of the resource share.</p>
     */
    inline ResourceShareInvitation& WithResourceShareName(const Aws::String& value) { SetResourceShareName(value); return *this;}

    /**
     * <p>The name of the resource share.</p>
     */
    inline ResourceShareInvitation& WithResourceShareName(Aws::String&& value) { SetResourceShareName(std::move(value)); return *this;}

    /**
     * <p>The name of the resource share.</p>
     */
    inline ResourceShareInvitation& WithResourceShareName(const char* value) { SetResourceShareName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the resource share.</p>
     */
    inline const Aws::String& GetResourceShareArn() const{ return m_resourceShareArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource share.</p>
     */
    inline bool ResourceShareArnHasBeenSet() const { return m_resourceShareArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource share.</p>
     */
    inline void SetResourceShareArn(const Aws::String& value) { m_resourceShareArnHasBeenSet = true; m_resourceShareArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource share.</p>
     */
    inline void SetResourceShareArn(Aws::String&& value) { m_resourceShareArnHasBeenSet = true; m_resourceShareArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource share.</p>
     */
    inline void SetResourceShareArn(const char* value) { m_resourceShareArnHasBeenSet = true; m_resourceShareArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource share.</p>
     */
    inline ResourceShareInvitation& WithResourceShareArn(const Aws::String& value) { SetResourceShareArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the resource share.</p>
     */
    inline ResourceShareInvitation& WithResourceShareArn(Aws::String&& value) { SetResourceShareArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the resource share.</p>
     */
    inline ResourceShareInvitation& WithResourceShareArn(const char* value) { SetResourceShareArn(value); return *this;}


    /**
     * <p>The ID of the AWS account that sent the invitation.</p>
     */
    inline const Aws::String& GetSenderAccountId() const{ return m_senderAccountId; }

    /**
     * <p>The ID of the AWS account that sent the invitation.</p>
     */
    inline bool SenderAccountIdHasBeenSet() const { return m_senderAccountIdHasBeenSet; }

    /**
     * <p>The ID of the AWS account that sent the invitation.</p>
     */
    inline void SetSenderAccountId(const Aws::String& value) { m_senderAccountIdHasBeenSet = true; m_senderAccountId = value; }

    /**
     * <p>The ID of the AWS account that sent the invitation.</p>
     */
    inline void SetSenderAccountId(Aws::String&& value) { m_senderAccountIdHasBeenSet = true; m_senderAccountId = std::move(value); }

    /**
     * <p>The ID of the AWS account that sent the invitation.</p>
     */
    inline void SetSenderAccountId(const char* value) { m_senderAccountIdHasBeenSet = true; m_senderAccountId.assign(value); }

    /**
     * <p>The ID of the AWS account that sent the invitation.</p>
     */
    inline ResourceShareInvitation& WithSenderAccountId(const Aws::String& value) { SetSenderAccountId(value); return *this;}

    /**
     * <p>The ID of the AWS account that sent the invitation.</p>
     */
    inline ResourceShareInvitation& WithSenderAccountId(Aws::String&& value) { SetSenderAccountId(std::move(value)); return *this;}

    /**
     * <p>The ID of the AWS account that sent the invitation.</p>
     */
    inline ResourceShareInvitation& WithSenderAccountId(const char* value) { SetSenderAccountId(value); return *this;}


    /**
     * <p>The ID of the AWS account that received the invitation.</p>
     */
    inline const Aws::String& GetReceiverAccountId() const{ return m_receiverAccountId; }

    /**
     * <p>The ID of the AWS account that received the invitation.</p>
     */
    inline bool ReceiverAccountIdHasBeenSet() const { return m_receiverAccountIdHasBeenSet; }

    /**
     * <p>The ID of the AWS account that received the invitation.</p>
     */
    inline void SetReceiverAccountId(const Aws::String& value) { m_receiverAccountIdHasBeenSet = true; m_receiverAccountId = value; }

    /**
     * <p>The ID of the AWS account that received the invitation.</p>
     */
    inline void SetReceiverAccountId(Aws::String&& value) { m_receiverAccountIdHasBeenSet = true; m_receiverAccountId = std::move(value); }

    /**
     * <p>The ID of the AWS account that received the invitation.</p>
     */
    inline void SetReceiverAccountId(const char* value) { m_receiverAccountIdHasBeenSet = true; m_receiverAccountId.assign(value); }

    /**
     * <p>The ID of the AWS account that received the invitation.</p>
     */
    inline ResourceShareInvitation& WithReceiverAccountId(const Aws::String& value) { SetReceiverAccountId(value); return *this;}

    /**
     * <p>The ID of the AWS account that received the invitation.</p>
     */
    inline ResourceShareInvitation& WithReceiverAccountId(Aws::String&& value) { SetReceiverAccountId(std::move(value)); return *this;}

    /**
     * <p>The ID of the AWS account that received the invitation.</p>
     */
    inline ResourceShareInvitation& WithReceiverAccountId(const char* value) { SetReceiverAccountId(value); return *this;}


    /**
     * <p>The date and time when the invitation was sent.</p>
     */
    inline const Aws::Utils::DateTime& GetInvitationTimestamp() const{ return m_invitationTimestamp; }

    /**
     * <p>The date and time when the invitation was sent.</p>
     */
    inline bool InvitationTimestampHasBeenSet() const { return m_invitationTimestampHasBeenSet; }

    /**
     * <p>The date and time when the invitation was sent.</p>
     */
    inline void SetInvitationTimestamp(const Aws::Utils::DateTime& value) { m_invitationTimestampHasBeenSet = true; m_invitationTimestamp = value; }

    /**
     * <p>The date and time when the invitation was sent.</p>
     */
    inline void SetInvitationTimestamp(Aws::Utils::DateTime&& value) { m_invitationTimestampHasBeenSet = true; m_invitationTimestamp = std::move(value); }

    /**
     * <p>The date and time when the invitation was sent.</p>
     */
    inline ResourceShareInvitation& WithInvitationTimestamp(const Aws::Utils::DateTime& value) { SetInvitationTimestamp(value); return *this;}

    /**
     * <p>The date and time when the invitation was sent.</p>
     */
    inline ResourceShareInvitation& WithInvitationTimestamp(Aws::Utils::DateTime&& value) { SetInvitationTimestamp(std::move(value)); return *this;}


    /**
     * <p>The status of the invitation.</p>
     */
    inline const ResourceShareInvitationStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the invitation.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the invitation.</p>
     */
    inline void SetStatus(const ResourceShareInvitationStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the invitation.</p>
     */
    inline void SetStatus(ResourceShareInvitationStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the invitation.</p>
     */
    inline ResourceShareInvitation& WithStatus(const ResourceShareInvitationStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the invitation.</p>
     */
    inline ResourceShareInvitation& WithStatus(ResourceShareInvitationStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The resources associated with the resource share.</p>
     */
    inline const Aws::Vector<ResourceShareAssociation>& GetResourceShareAssociations() const{ return m_resourceShareAssociations; }

    /**
     * <p>The resources associated with the resource share.</p>
     */
    inline bool ResourceShareAssociationsHasBeenSet() const { return m_resourceShareAssociationsHasBeenSet; }

    /**
     * <p>The resources associated with the resource share.</p>
     */
    inline void SetResourceShareAssociations(const Aws::Vector<ResourceShareAssociation>& value) { m_resourceShareAssociationsHasBeenSet = true; m_resourceShareAssociations = value; }

    /**
     * <p>The resources associated with the resource share.</p>
     */
    inline void SetResourceShareAssociations(Aws::Vector<ResourceShareAssociation>&& value) { m_resourceShareAssociationsHasBeenSet = true; m_resourceShareAssociations = std::move(value); }

    /**
     * <p>The resources associated with the resource share.</p>
     */
    inline ResourceShareInvitation& WithResourceShareAssociations(const Aws::Vector<ResourceShareAssociation>& value) { SetResourceShareAssociations(value); return *this;}

    /**
     * <p>The resources associated with the resource share.</p>
     */
    inline ResourceShareInvitation& WithResourceShareAssociations(Aws::Vector<ResourceShareAssociation>&& value) { SetResourceShareAssociations(std::move(value)); return *this;}

    /**
     * <p>The resources associated with the resource share.</p>
     */
    inline ResourceShareInvitation& AddResourceShareAssociations(const ResourceShareAssociation& value) { m_resourceShareAssociationsHasBeenSet = true; m_resourceShareAssociations.push_back(value); return *this; }

    /**
     * <p>The resources associated with the resource share.</p>
     */
    inline ResourceShareInvitation& AddResourceShareAssociations(ResourceShareAssociation&& value) { m_resourceShareAssociationsHasBeenSet = true; m_resourceShareAssociations.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_resourceShareInvitationArn;
    bool m_resourceShareInvitationArnHasBeenSet;

    Aws::String m_resourceShareName;
    bool m_resourceShareNameHasBeenSet;

    Aws::String m_resourceShareArn;
    bool m_resourceShareArnHasBeenSet;

    Aws::String m_senderAccountId;
    bool m_senderAccountIdHasBeenSet;

    Aws::String m_receiverAccountId;
    bool m_receiverAccountIdHasBeenSet;

    Aws::Utils::DateTime m_invitationTimestamp;
    bool m_invitationTimestampHasBeenSet;

    ResourceShareInvitationStatus m_status;
    bool m_statusHasBeenSet;

    Aws::Vector<ResourceShareAssociation> m_resourceShareAssociations;
    bool m_resourceShareAssociationsHasBeenSet;
  };

} // namespace Model
} // namespace RAM
} // namespace Aws

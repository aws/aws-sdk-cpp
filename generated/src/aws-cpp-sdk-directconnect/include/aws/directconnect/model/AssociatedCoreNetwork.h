/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/directconnect/DirectConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace DirectConnect
{
namespace Model
{

  /**
   * <p>The Amazon Web Services Cloud WAN core network that the Direct Connect
   * attachment is associated with.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/AssociatedCoreNetwork">AWS
   * API Reference</a></p>
   */
  class AssociatedCoreNetwork
  {
  public:
    AWS_DIRECTCONNECT_API AssociatedCoreNetwork();
    AWS_DIRECTCONNECT_API AssociatedCoreNetwork(Aws::Utils::Json::JsonView jsonValue);
    AWS_DIRECTCONNECT_API AssociatedCoreNetwork& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DIRECTCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the Cloud WAN core network.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline AssociatedCoreNetwork& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline AssociatedCoreNetwork& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline AssociatedCoreNetwork& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The account owner of the Cloud WAN core network.</p>
     */
    inline const Aws::String& GetOwnerAccount() const{ return m_ownerAccount; }
    inline bool OwnerAccountHasBeenSet() const { return m_ownerAccountHasBeenSet; }
    inline void SetOwnerAccount(const Aws::String& value) { m_ownerAccountHasBeenSet = true; m_ownerAccount = value; }
    inline void SetOwnerAccount(Aws::String&& value) { m_ownerAccountHasBeenSet = true; m_ownerAccount = std::move(value); }
    inline void SetOwnerAccount(const char* value) { m_ownerAccountHasBeenSet = true; m_ownerAccount.assign(value); }
    inline AssociatedCoreNetwork& WithOwnerAccount(const Aws::String& value) { SetOwnerAccount(value); return *this;}
    inline AssociatedCoreNetwork& WithOwnerAccount(Aws::String&& value) { SetOwnerAccount(std::move(value)); return *this;}
    inline AssociatedCoreNetwork& WithOwnerAccount(const char* value) { SetOwnerAccount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>the ID of the Direct Connect attachment</p>
     */
    inline const Aws::String& GetAttachmentId() const{ return m_attachmentId; }
    inline bool AttachmentIdHasBeenSet() const { return m_attachmentIdHasBeenSet; }
    inline void SetAttachmentId(const Aws::String& value) { m_attachmentIdHasBeenSet = true; m_attachmentId = value; }
    inline void SetAttachmentId(Aws::String&& value) { m_attachmentIdHasBeenSet = true; m_attachmentId = std::move(value); }
    inline void SetAttachmentId(const char* value) { m_attachmentIdHasBeenSet = true; m_attachmentId.assign(value); }
    inline AssociatedCoreNetwork& WithAttachmentId(const Aws::String& value) { SetAttachmentId(value); return *this;}
    inline AssociatedCoreNetwork& WithAttachmentId(Aws::String&& value) { SetAttachmentId(std::move(value)); return *this;}
    inline AssociatedCoreNetwork& WithAttachmentId(const char* value) { SetAttachmentId(value); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_ownerAccount;
    bool m_ownerAccountHasBeenSet = false;

    Aws::String m_attachmentId;
    bool m_attachmentIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectConnect
} // namespace Aws

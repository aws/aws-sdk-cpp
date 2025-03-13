/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/globalaccelerator/GlobalAccelerator_EXPORTS.h>
#include <aws/globalaccelerator/GlobalAcceleratorRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/globalaccelerator/model/Resource.h>
#include <utility>

namespace Aws
{
namespace GlobalAccelerator
{
namespace Model
{

  /**
   */
  class UpdateCrossAccountAttachmentRequest : public GlobalAcceleratorRequest
  {
  public:
    AWS_GLOBALACCELERATOR_API UpdateCrossAccountAttachmentRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateCrossAccountAttachment"; }

    AWS_GLOBALACCELERATOR_API Aws::String SerializePayload() const override;

    AWS_GLOBALACCELERATOR_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the cross-account attachment to update.</p>
     */
    inline const Aws::String& GetAttachmentArn() const { return m_attachmentArn; }
    inline bool AttachmentArnHasBeenSet() const { return m_attachmentArnHasBeenSet; }
    template<typename AttachmentArnT = Aws::String>
    void SetAttachmentArn(AttachmentArnT&& value) { m_attachmentArnHasBeenSet = true; m_attachmentArn = std::forward<AttachmentArnT>(value); }
    template<typename AttachmentArnT = Aws::String>
    UpdateCrossAccountAttachmentRequest& WithAttachmentArn(AttachmentArnT&& value) { SetAttachmentArn(std::forward<AttachmentArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the cross-account attachment. </p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    UpdateCrossAccountAttachmentRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The principals to add to the cross-account attachment. A principal is an
     * account or the Amazon Resource Name (ARN) of an accelerator that the attachment
     * gives permission to work with resources from another account. The resources are
     * also listed in the attachment.</p> <p>To add more than one principal, separate
     * the account numbers or accelerator ARNs, or both, with commas.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAddPrincipals() const { return m_addPrincipals; }
    inline bool AddPrincipalsHasBeenSet() const { return m_addPrincipalsHasBeenSet; }
    template<typename AddPrincipalsT = Aws::Vector<Aws::String>>
    void SetAddPrincipals(AddPrincipalsT&& value) { m_addPrincipalsHasBeenSet = true; m_addPrincipals = std::forward<AddPrincipalsT>(value); }
    template<typename AddPrincipalsT = Aws::Vector<Aws::String>>
    UpdateCrossAccountAttachmentRequest& WithAddPrincipals(AddPrincipalsT&& value) { SetAddPrincipals(std::forward<AddPrincipalsT>(value)); return *this;}
    template<typename AddPrincipalsT = Aws::String>
    UpdateCrossAccountAttachmentRequest& AddAddPrincipals(AddPrincipalsT&& value) { m_addPrincipalsHasBeenSet = true; m_addPrincipals.emplace_back(std::forward<AddPrincipalsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The principals to remove from the cross-account attachment. A principal is an
     * account or the Amazon Resource Name (ARN) of an accelerator that the attachment
     * gives permission to work with resources from another account. The resources are
     * also listed in the attachment.</p> <p>To remove more than one principal,
     * separate the account numbers or accelerator ARNs, or both, with commas.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRemovePrincipals() const { return m_removePrincipals; }
    inline bool RemovePrincipalsHasBeenSet() const { return m_removePrincipalsHasBeenSet; }
    template<typename RemovePrincipalsT = Aws::Vector<Aws::String>>
    void SetRemovePrincipals(RemovePrincipalsT&& value) { m_removePrincipalsHasBeenSet = true; m_removePrincipals = std::forward<RemovePrincipalsT>(value); }
    template<typename RemovePrincipalsT = Aws::Vector<Aws::String>>
    UpdateCrossAccountAttachmentRequest& WithRemovePrincipals(RemovePrincipalsT&& value) { SetRemovePrincipals(std::forward<RemovePrincipalsT>(value)); return *this;}
    template<typename RemovePrincipalsT = Aws::String>
    UpdateCrossAccountAttachmentRequest& AddRemovePrincipals(RemovePrincipalsT&& value) { m_removePrincipalsHasBeenSet = true; m_removePrincipals.emplace_back(std::forward<RemovePrincipalsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The resources to add to the cross-account attachment. A resource listed in a
     * cross-account attachment can be used with an accelerator by the principals that
     * are listed in the attachment.</p> <p>To add more than one resource, separate the
     * resource ARNs with commas.</p>
     */
    inline const Aws::Vector<Resource>& GetAddResources() const { return m_addResources; }
    inline bool AddResourcesHasBeenSet() const { return m_addResourcesHasBeenSet; }
    template<typename AddResourcesT = Aws::Vector<Resource>>
    void SetAddResources(AddResourcesT&& value) { m_addResourcesHasBeenSet = true; m_addResources = std::forward<AddResourcesT>(value); }
    template<typename AddResourcesT = Aws::Vector<Resource>>
    UpdateCrossAccountAttachmentRequest& WithAddResources(AddResourcesT&& value) { SetAddResources(std::forward<AddResourcesT>(value)); return *this;}
    template<typename AddResourcesT = Resource>
    UpdateCrossAccountAttachmentRequest& AddAddResources(AddResourcesT&& value) { m_addResourcesHasBeenSet = true; m_addResources.emplace_back(std::forward<AddResourcesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The resources to remove from the cross-account attachment. A resource listed
     * in a cross-account attachment can be used with an accelerator by the principals
     * that are listed in the attachment.</p> <p>To remove more than one resource,
     * separate the resource ARNs with commas.</p>
     */
    inline const Aws::Vector<Resource>& GetRemoveResources() const { return m_removeResources; }
    inline bool RemoveResourcesHasBeenSet() const { return m_removeResourcesHasBeenSet; }
    template<typename RemoveResourcesT = Aws::Vector<Resource>>
    void SetRemoveResources(RemoveResourcesT&& value) { m_removeResourcesHasBeenSet = true; m_removeResources = std::forward<RemoveResourcesT>(value); }
    template<typename RemoveResourcesT = Aws::Vector<Resource>>
    UpdateCrossAccountAttachmentRequest& WithRemoveResources(RemoveResourcesT&& value) { SetRemoveResources(std::forward<RemoveResourcesT>(value)); return *this;}
    template<typename RemoveResourcesT = Resource>
    UpdateCrossAccountAttachmentRequest& AddRemoveResources(RemoveResourcesT&& value) { m_removeResourcesHasBeenSet = true; m_removeResources.emplace_back(std::forward<RemoveResourcesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_attachmentArn;
    bool m_attachmentArnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<Aws::String> m_addPrincipals;
    bool m_addPrincipalsHasBeenSet = false;

    Aws::Vector<Aws::String> m_removePrincipals;
    bool m_removePrincipalsHasBeenSet = false;

    Aws::Vector<Resource> m_addResources;
    bool m_addResourcesHasBeenSet = false;

    Aws::Vector<Resource> m_removeResources;
    bool m_removeResourcesHasBeenSet = false;
  };

} // namespace Model
} // namespace GlobalAccelerator
} // namespace Aws

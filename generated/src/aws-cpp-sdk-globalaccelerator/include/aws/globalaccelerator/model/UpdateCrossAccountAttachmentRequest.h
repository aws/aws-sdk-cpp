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
    AWS_GLOBALACCELERATOR_API UpdateCrossAccountAttachmentRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateCrossAccountAttachment"; }

    AWS_GLOBALACCELERATOR_API Aws::String SerializePayload() const override;

    AWS_GLOBALACCELERATOR_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the cross-account attachment to update.</p>
     */
    inline const Aws::String& GetAttachmentArn() const{ return m_attachmentArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the cross-account attachment to update.</p>
     */
    inline bool AttachmentArnHasBeenSet() const { return m_attachmentArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the cross-account attachment to update.</p>
     */
    inline void SetAttachmentArn(const Aws::String& value) { m_attachmentArnHasBeenSet = true; m_attachmentArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the cross-account attachment to update.</p>
     */
    inline void SetAttachmentArn(Aws::String&& value) { m_attachmentArnHasBeenSet = true; m_attachmentArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the cross-account attachment to update.</p>
     */
    inline void SetAttachmentArn(const char* value) { m_attachmentArnHasBeenSet = true; m_attachmentArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the cross-account attachment to update.</p>
     */
    inline UpdateCrossAccountAttachmentRequest& WithAttachmentArn(const Aws::String& value) { SetAttachmentArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the cross-account attachment to update.</p>
     */
    inline UpdateCrossAccountAttachmentRequest& WithAttachmentArn(Aws::String&& value) { SetAttachmentArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the cross-account attachment to update.</p>
     */
    inline UpdateCrossAccountAttachmentRequest& WithAttachmentArn(const char* value) { SetAttachmentArn(value); return *this;}


    /**
     * <p>The name of the cross-account attachment. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the cross-account attachment. </p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the cross-account attachment. </p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the cross-account attachment. </p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the cross-account attachment. </p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the cross-account attachment. </p>
     */
    inline UpdateCrossAccountAttachmentRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the cross-account attachment. </p>
     */
    inline UpdateCrossAccountAttachmentRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the cross-account attachment. </p>
     */
    inline UpdateCrossAccountAttachmentRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The principals to add to the cross-account attachment. A principal is an
     * account or the Amazon Resource Name (ARN) of an accelerator that the attachment
     * gives permission to add the resources from another account, listed in the
     * attachment.</p> <p>To add more than one principal, separate the account numbers
     * or accelerator ARNs, or both, with commas.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAddPrincipals() const{ return m_addPrincipals; }

    /**
     * <p>The principals to add to the cross-account attachment. A principal is an
     * account or the Amazon Resource Name (ARN) of an accelerator that the attachment
     * gives permission to add the resources from another account, listed in the
     * attachment.</p> <p>To add more than one principal, separate the account numbers
     * or accelerator ARNs, or both, with commas.</p>
     */
    inline bool AddPrincipalsHasBeenSet() const { return m_addPrincipalsHasBeenSet; }

    /**
     * <p>The principals to add to the cross-account attachment. A principal is an
     * account or the Amazon Resource Name (ARN) of an accelerator that the attachment
     * gives permission to add the resources from another account, listed in the
     * attachment.</p> <p>To add more than one principal, separate the account numbers
     * or accelerator ARNs, or both, with commas.</p>
     */
    inline void SetAddPrincipals(const Aws::Vector<Aws::String>& value) { m_addPrincipalsHasBeenSet = true; m_addPrincipals = value; }

    /**
     * <p>The principals to add to the cross-account attachment. A principal is an
     * account or the Amazon Resource Name (ARN) of an accelerator that the attachment
     * gives permission to add the resources from another account, listed in the
     * attachment.</p> <p>To add more than one principal, separate the account numbers
     * or accelerator ARNs, or both, with commas.</p>
     */
    inline void SetAddPrincipals(Aws::Vector<Aws::String>&& value) { m_addPrincipalsHasBeenSet = true; m_addPrincipals = std::move(value); }

    /**
     * <p>The principals to add to the cross-account attachment. A principal is an
     * account or the Amazon Resource Name (ARN) of an accelerator that the attachment
     * gives permission to add the resources from another account, listed in the
     * attachment.</p> <p>To add more than one principal, separate the account numbers
     * or accelerator ARNs, or both, with commas.</p>
     */
    inline UpdateCrossAccountAttachmentRequest& WithAddPrincipals(const Aws::Vector<Aws::String>& value) { SetAddPrincipals(value); return *this;}

    /**
     * <p>The principals to add to the cross-account attachment. A principal is an
     * account or the Amazon Resource Name (ARN) of an accelerator that the attachment
     * gives permission to add the resources from another account, listed in the
     * attachment.</p> <p>To add more than one principal, separate the account numbers
     * or accelerator ARNs, or both, with commas.</p>
     */
    inline UpdateCrossAccountAttachmentRequest& WithAddPrincipals(Aws::Vector<Aws::String>&& value) { SetAddPrincipals(std::move(value)); return *this;}

    /**
     * <p>The principals to add to the cross-account attachment. A principal is an
     * account or the Amazon Resource Name (ARN) of an accelerator that the attachment
     * gives permission to add the resources from another account, listed in the
     * attachment.</p> <p>To add more than one principal, separate the account numbers
     * or accelerator ARNs, or both, with commas.</p>
     */
    inline UpdateCrossAccountAttachmentRequest& AddAddPrincipals(const Aws::String& value) { m_addPrincipalsHasBeenSet = true; m_addPrincipals.push_back(value); return *this; }

    /**
     * <p>The principals to add to the cross-account attachment. A principal is an
     * account or the Amazon Resource Name (ARN) of an accelerator that the attachment
     * gives permission to add the resources from another account, listed in the
     * attachment.</p> <p>To add more than one principal, separate the account numbers
     * or accelerator ARNs, or both, with commas.</p>
     */
    inline UpdateCrossAccountAttachmentRequest& AddAddPrincipals(Aws::String&& value) { m_addPrincipalsHasBeenSet = true; m_addPrincipals.push_back(std::move(value)); return *this; }

    /**
     * <p>The principals to add to the cross-account attachment. A principal is an
     * account or the Amazon Resource Name (ARN) of an accelerator that the attachment
     * gives permission to add the resources from another account, listed in the
     * attachment.</p> <p>To add more than one principal, separate the account numbers
     * or accelerator ARNs, or both, with commas.</p>
     */
    inline UpdateCrossAccountAttachmentRequest& AddAddPrincipals(const char* value) { m_addPrincipalsHasBeenSet = true; m_addPrincipals.push_back(value); return *this; }


    /**
     * <p>The principals to remove from the cross-account attachment. A principal is an
     * account or the Amazon Resource Name (ARN) of an accelerator that is given
     * permission to add the resources from another account, listed in the
     * cross-account attachment.</p> <p>To remove more than one principal, separate the
     * account numbers or accelerator ARNs, or both, with commas.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRemovePrincipals() const{ return m_removePrincipals; }

    /**
     * <p>The principals to remove from the cross-account attachment. A principal is an
     * account or the Amazon Resource Name (ARN) of an accelerator that is given
     * permission to add the resources from another account, listed in the
     * cross-account attachment.</p> <p>To remove more than one principal, separate the
     * account numbers or accelerator ARNs, or both, with commas.</p>
     */
    inline bool RemovePrincipalsHasBeenSet() const { return m_removePrincipalsHasBeenSet; }

    /**
     * <p>The principals to remove from the cross-account attachment. A principal is an
     * account or the Amazon Resource Name (ARN) of an accelerator that is given
     * permission to add the resources from another account, listed in the
     * cross-account attachment.</p> <p>To remove more than one principal, separate the
     * account numbers or accelerator ARNs, or both, with commas.</p>
     */
    inline void SetRemovePrincipals(const Aws::Vector<Aws::String>& value) { m_removePrincipalsHasBeenSet = true; m_removePrincipals = value; }

    /**
     * <p>The principals to remove from the cross-account attachment. A principal is an
     * account or the Amazon Resource Name (ARN) of an accelerator that is given
     * permission to add the resources from another account, listed in the
     * cross-account attachment.</p> <p>To remove more than one principal, separate the
     * account numbers or accelerator ARNs, or both, with commas.</p>
     */
    inline void SetRemovePrincipals(Aws::Vector<Aws::String>&& value) { m_removePrincipalsHasBeenSet = true; m_removePrincipals = std::move(value); }

    /**
     * <p>The principals to remove from the cross-account attachment. A principal is an
     * account or the Amazon Resource Name (ARN) of an accelerator that is given
     * permission to add the resources from another account, listed in the
     * cross-account attachment.</p> <p>To remove more than one principal, separate the
     * account numbers or accelerator ARNs, or both, with commas.</p>
     */
    inline UpdateCrossAccountAttachmentRequest& WithRemovePrincipals(const Aws::Vector<Aws::String>& value) { SetRemovePrincipals(value); return *this;}

    /**
     * <p>The principals to remove from the cross-account attachment. A principal is an
     * account or the Amazon Resource Name (ARN) of an accelerator that is given
     * permission to add the resources from another account, listed in the
     * cross-account attachment.</p> <p>To remove more than one principal, separate the
     * account numbers or accelerator ARNs, or both, with commas.</p>
     */
    inline UpdateCrossAccountAttachmentRequest& WithRemovePrincipals(Aws::Vector<Aws::String>&& value) { SetRemovePrincipals(std::move(value)); return *this;}

    /**
     * <p>The principals to remove from the cross-account attachment. A principal is an
     * account or the Amazon Resource Name (ARN) of an accelerator that is given
     * permission to add the resources from another account, listed in the
     * cross-account attachment.</p> <p>To remove more than one principal, separate the
     * account numbers or accelerator ARNs, or both, with commas.</p>
     */
    inline UpdateCrossAccountAttachmentRequest& AddRemovePrincipals(const Aws::String& value) { m_removePrincipalsHasBeenSet = true; m_removePrincipals.push_back(value); return *this; }

    /**
     * <p>The principals to remove from the cross-account attachment. A principal is an
     * account or the Amazon Resource Name (ARN) of an accelerator that is given
     * permission to add the resources from another account, listed in the
     * cross-account attachment.</p> <p>To remove more than one principal, separate the
     * account numbers or accelerator ARNs, or both, with commas.</p>
     */
    inline UpdateCrossAccountAttachmentRequest& AddRemovePrincipals(Aws::String&& value) { m_removePrincipalsHasBeenSet = true; m_removePrincipals.push_back(std::move(value)); return *this; }

    /**
     * <p>The principals to remove from the cross-account attachment. A principal is an
     * account or the Amazon Resource Name (ARN) of an accelerator that is given
     * permission to add the resources from another account, listed in the
     * cross-account attachment.</p> <p>To remove more than one principal, separate the
     * account numbers or accelerator ARNs, or both, with commas.</p>
     */
    inline UpdateCrossAccountAttachmentRequest& AddRemovePrincipals(const char* value) { m_removePrincipalsHasBeenSet = true; m_removePrincipals.push_back(value); return *this; }


    /**
     * <p>The resources to add to the cross-account attachment. A resource listed in a
     * cross-account attachment can be added to an accelerator by the principals that
     * are listed in the attachment.</p> <p>To add more than one resource, separate the
     * resource ARNs with commas.</p>
     */
    inline const Aws::Vector<Resource>& GetAddResources() const{ return m_addResources; }

    /**
     * <p>The resources to add to the cross-account attachment. A resource listed in a
     * cross-account attachment can be added to an accelerator by the principals that
     * are listed in the attachment.</p> <p>To add more than one resource, separate the
     * resource ARNs with commas.</p>
     */
    inline bool AddResourcesHasBeenSet() const { return m_addResourcesHasBeenSet; }

    /**
     * <p>The resources to add to the cross-account attachment. A resource listed in a
     * cross-account attachment can be added to an accelerator by the principals that
     * are listed in the attachment.</p> <p>To add more than one resource, separate the
     * resource ARNs with commas.</p>
     */
    inline void SetAddResources(const Aws::Vector<Resource>& value) { m_addResourcesHasBeenSet = true; m_addResources = value; }

    /**
     * <p>The resources to add to the cross-account attachment. A resource listed in a
     * cross-account attachment can be added to an accelerator by the principals that
     * are listed in the attachment.</p> <p>To add more than one resource, separate the
     * resource ARNs with commas.</p>
     */
    inline void SetAddResources(Aws::Vector<Resource>&& value) { m_addResourcesHasBeenSet = true; m_addResources = std::move(value); }

    /**
     * <p>The resources to add to the cross-account attachment. A resource listed in a
     * cross-account attachment can be added to an accelerator by the principals that
     * are listed in the attachment.</p> <p>To add more than one resource, separate the
     * resource ARNs with commas.</p>
     */
    inline UpdateCrossAccountAttachmentRequest& WithAddResources(const Aws::Vector<Resource>& value) { SetAddResources(value); return *this;}

    /**
     * <p>The resources to add to the cross-account attachment. A resource listed in a
     * cross-account attachment can be added to an accelerator by the principals that
     * are listed in the attachment.</p> <p>To add more than one resource, separate the
     * resource ARNs with commas.</p>
     */
    inline UpdateCrossAccountAttachmentRequest& WithAddResources(Aws::Vector<Resource>&& value) { SetAddResources(std::move(value)); return *this;}

    /**
     * <p>The resources to add to the cross-account attachment. A resource listed in a
     * cross-account attachment can be added to an accelerator by the principals that
     * are listed in the attachment.</p> <p>To add more than one resource, separate the
     * resource ARNs with commas.</p>
     */
    inline UpdateCrossAccountAttachmentRequest& AddAddResources(const Resource& value) { m_addResourcesHasBeenSet = true; m_addResources.push_back(value); return *this; }

    /**
     * <p>The resources to add to the cross-account attachment. A resource listed in a
     * cross-account attachment can be added to an accelerator by the principals that
     * are listed in the attachment.</p> <p>To add more than one resource, separate the
     * resource ARNs with commas.</p>
     */
    inline UpdateCrossAccountAttachmentRequest& AddAddResources(Resource&& value) { m_addResourcesHasBeenSet = true; m_addResources.push_back(std::move(value)); return *this; }


    /**
     * <p>The resources to remove from the cross-account attachment. A resource listed
     * in a cross-account attachment can be added to an accelerator fy principals that
     * are listed in the cross-account attachment.</p> <p>To remove more than one
     * resource, separate the resource ARNs with commas.</p>
     */
    inline const Aws::Vector<Resource>& GetRemoveResources() const{ return m_removeResources; }

    /**
     * <p>The resources to remove from the cross-account attachment. A resource listed
     * in a cross-account attachment can be added to an accelerator fy principals that
     * are listed in the cross-account attachment.</p> <p>To remove more than one
     * resource, separate the resource ARNs with commas.</p>
     */
    inline bool RemoveResourcesHasBeenSet() const { return m_removeResourcesHasBeenSet; }

    /**
     * <p>The resources to remove from the cross-account attachment. A resource listed
     * in a cross-account attachment can be added to an accelerator fy principals that
     * are listed in the cross-account attachment.</p> <p>To remove more than one
     * resource, separate the resource ARNs with commas.</p>
     */
    inline void SetRemoveResources(const Aws::Vector<Resource>& value) { m_removeResourcesHasBeenSet = true; m_removeResources = value; }

    /**
     * <p>The resources to remove from the cross-account attachment. A resource listed
     * in a cross-account attachment can be added to an accelerator fy principals that
     * are listed in the cross-account attachment.</p> <p>To remove more than one
     * resource, separate the resource ARNs with commas.</p>
     */
    inline void SetRemoveResources(Aws::Vector<Resource>&& value) { m_removeResourcesHasBeenSet = true; m_removeResources = std::move(value); }

    /**
     * <p>The resources to remove from the cross-account attachment. A resource listed
     * in a cross-account attachment can be added to an accelerator fy principals that
     * are listed in the cross-account attachment.</p> <p>To remove more than one
     * resource, separate the resource ARNs with commas.</p>
     */
    inline UpdateCrossAccountAttachmentRequest& WithRemoveResources(const Aws::Vector<Resource>& value) { SetRemoveResources(value); return *this;}

    /**
     * <p>The resources to remove from the cross-account attachment. A resource listed
     * in a cross-account attachment can be added to an accelerator fy principals that
     * are listed in the cross-account attachment.</p> <p>To remove more than one
     * resource, separate the resource ARNs with commas.</p>
     */
    inline UpdateCrossAccountAttachmentRequest& WithRemoveResources(Aws::Vector<Resource>&& value) { SetRemoveResources(std::move(value)); return *this;}

    /**
     * <p>The resources to remove from the cross-account attachment. A resource listed
     * in a cross-account attachment can be added to an accelerator fy principals that
     * are listed in the cross-account attachment.</p> <p>To remove more than one
     * resource, separate the resource ARNs with commas.</p>
     */
    inline UpdateCrossAccountAttachmentRequest& AddRemoveResources(const Resource& value) { m_removeResourcesHasBeenSet = true; m_removeResources.push_back(value); return *this; }

    /**
     * <p>The resources to remove from the cross-account attachment. A resource listed
     * in a cross-account attachment can be added to an accelerator fy principals that
     * are listed in the cross-account attachment.</p> <p>To remove more than one
     * resource, separate the resource ARNs with commas.</p>
     */
    inline UpdateCrossAccountAttachmentRequest& AddRemoveResources(Resource&& value) { m_removeResourcesHasBeenSet = true; m_removeResources.push_back(std::move(value)); return *this; }

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

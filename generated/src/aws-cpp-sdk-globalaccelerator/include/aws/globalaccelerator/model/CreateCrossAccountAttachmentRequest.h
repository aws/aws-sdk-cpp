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
#include <aws/globalaccelerator/model/Tag.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace GlobalAccelerator
{
namespace Model
{

  /**
   */
  class CreateCrossAccountAttachmentRequest : public GlobalAcceleratorRequest
  {
  public:
    AWS_GLOBALACCELERATOR_API CreateCrossAccountAttachmentRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateCrossAccountAttachment"; }

    AWS_GLOBALACCELERATOR_API Aws::String SerializePayload() const override;

    AWS_GLOBALACCELERATOR_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


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
    inline CreateCrossAccountAttachmentRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the cross-account attachment. </p>
     */
    inline CreateCrossAccountAttachmentRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the cross-account attachment. </p>
     */
    inline CreateCrossAccountAttachmentRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The principals to list in the cross-account attachment. A principal can be an
     * Amazon Web Services account number or the Amazon Resource Name (ARN) for an
     * accelerator. </p>
     */
    inline const Aws::Vector<Aws::String>& GetPrincipals() const{ return m_principals; }

    /**
     * <p>The principals to list in the cross-account attachment. A principal can be an
     * Amazon Web Services account number or the Amazon Resource Name (ARN) for an
     * accelerator. </p>
     */
    inline bool PrincipalsHasBeenSet() const { return m_principalsHasBeenSet; }

    /**
     * <p>The principals to list in the cross-account attachment. A principal can be an
     * Amazon Web Services account number or the Amazon Resource Name (ARN) for an
     * accelerator. </p>
     */
    inline void SetPrincipals(const Aws::Vector<Aws::String>& value) { m_principalsHasBeenSet = true; m_principals = value; }

    /**
     * <p>The principals to list in the cross-account attachment. A principal can be an
     * Amazon Web Services account number or the Amazon Resource Name (ARN) for an
     * accelerator. </p>
     */
    inline void SetPrincipals(Aws::Vector<Aws::String>&& value) { m_principalsHasBeenSet = true; m_principals = std::move(value); }

    /**
     * <p>The principals to list in the cross-account attachment. A principal can be an
     * Amazon Web Services account number or the Amazon Resource Name (ARN) for an
     * accelerator. </p>
     */
    inline CreateCrossAccountAttachmentRequest& WithPrincipals(const Aws::Vector<Aws::String>& value) { SetPrincipals(value); return *this;}

    /**
     * <p>The principals to list in the cross-account attachment. A principal can be an
     * Amazon Web Services account number or the Amazon Resource Name (ARN) for an
     * accelerator. </p>
     */
    inline CreateCrossAccountAttachmentRequest& WithPrincipals(Aws::Vector<Aws::String>&& value) { SetPrincipals(std::move(value)); return *this;}

    /**
     * <p>The principals to list in the cross-account attachment. A principal can be an
     * Amazon Web Services account number or the Amazon Resource Name (ARN) for an
     * accelerator. </p>
     */
    inline CreateCrossAccountAttachmentRequest& AddPrincipals(const Aws::String& value) { m_principalsHasBeenSet = true; m_principals.push_back(value); return *this; }

    /**
     * <p>The principals to list in the cross-account attachment. A principal can be an
     * Amazon Web Services account number or the Amazon Resource Name (ARN) for an
     * accelerator. </p>
     */
    inline CreateCrossAccountAttachmentRequest& AddPrincipals(Aws::String&& value) { m_principalsHasBeenSet = true; m_principals.push_back(std::move(value)); return *this; }

    /**
     * <p>The principals to list in the cross-account attachment. A principal can be an
     * Amazon Web Services account number or the Amazon Resource Name (ARN) for an
     * accelerator. </p>
     */
    inline CreateCrossAccountAttachmentRequest& AddPrincipals(const char* value) { m_principalsHasBeenSet = true; m_principals.push_back(value); return *this; }


    /**
     * <p>The Amazon Resource Names (ARNs) for the resources to list in the
     * cross-account attachment. A resource can be any supported Amazon Web Services
     * resource type for Global Accelerator. </p>
     */
    inline const Aws::Vector<Resource>& GetResources() const{ return m_resources; }

    /**
     * <p>The Amazon Resource Names (ARNs) for the resources to list in the
     * cross-account attachment. A resource can be any supported Amazon Web Services
     * resource type for Global Accelerator. </p>
     */
    inline bool ResourcesHasBeenSet() const { return m_resourcesHasBeenSet; }

    /**
     * <p>The Amazon Resource Names (ARNs) for the resources to list in the
     * cross-account attachment. A resource can be any supported Amazon Web Services
     * resource type for Global Accelerator. </p>
     */
    inline void SetResources(const Aws::Vector<Resource>& value) { m_resourcesHasBeenSet = true; m_resources = value; }

    /**
     * <p>The Amazon Resource Names (ARNs) for the resources to list in the
     * cross-account attachment. A resource can be any supported Amazon Web Services
     * resource type for Global Accelerator. </p>
     */
    inline void SetResources(Aws::Vector<Resource>&& value) { m_resourcesHasBeenSet = true; m_resources = std::move(value); }

    /**
     * <p>The Amazon Resource Names (ARNs) for the resources to list in the
     * cross-account attachment. A resource can be any supported Amazon Web Services
     * resource type for Global Accelerator. </p>
     */
    inline CreateCrossAccountAttachmentRequest& WithResources(const Aws::Vector<Resource>& value) { SetResources(value); return *this;}

    /**
     * <p>The Amazon Resource Names (ARNs) for the resources to list in the
     * cross-account attachment. A resource can be any supported Amazon Web Services
     * resource type for Global Accelerator. </p>
     */
    inline CreateCrossAccountAttachmentRequest& WithResources(Aws::Vector<Resource>&& value) { SetResources(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Names (ARNs) for the resources to list in the
     * cross-account attachment. A resource can be any supported Amazon Web Services
     * resource type for Global Accelerator. </p>
     */
    inline CreateCrossAccountAttachmentRequest& AddResources(const Resource& value) { m_resourcesHasBeenSet = true; m_resources.push_back(value); return *this; }

    /**
     * <p>The Amazon Resource Names (ARNs) for the resources to list in the
     * cross-account attachment. A resource can be any supported Amazon Web Services
     * resource type for Global Accelerator. </p>
     */
    inline CreateCrossAccountAttachmentRequest& AddResources(Resource&& value) { m_resourcesHasBeenSet = true; m_resources.push_back(std::move(value)); return *this; }


    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency—that is, the uniqueness—of the request.</p>
     */
    inline const Aws::String& GetIdempotencyToken() const{ return m_idempotencyToken; }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency—that is, the uniqueness—of the request.</p>
     */
    inline bool IdempotencyTokenHasBeenSet() const { return m_idempotencyTokenHasBeenSet; }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency—that is, the uniqueness—of the request.</p>
     */
    inline void SetIdempotencyToken(const Aws::String& value) { m_idempotencyTokenHasBeenSet = true; m_idempotencyToken = value; }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency—that is, the uniqueness—of the request.</p>
     */
    inline void SetIdempotencyToken(Aws::String&& value) { m_idempotencyTokenHasBeenSet = true; m_idempotencyToken = std::move(value); }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency—that is, the uniqueness—of the request.</p>
     */
    inline void SetIdempotencyToken(const char* value) { m_idempotencyTokenHasBeenSet = true; m_idempotencyToken.assign(value); }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency—that is, the uniqueness—of the request.</p>
     */
    inline CreateCrossAccountAttachmentRequest& WithIdempotencyToken(const Aws::String& value) { SetIdempotencyToken(value); return *this;}

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency—that is, the uniqueness—of the request.</p>
     */
    inline CreateCrossAccountAttachmentRequest& WithIdempotencyToken(Aws::String&& value) { SetIdempotencyToken(std::move(value)); return *this;}

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency—that is, the uniqueness—of the request.</p>
     */
    inline CreateCrossAccountAttachmentRequest& WithIdempotencyToken(const char* value) { SetIdempotencyToken(value); return *this;}


    /**
     * <p>Create tags for cross-account attachment.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/global-accelerator/latest/dg/tagging-in-global-accelerator.html">Tagging
     * in Global Accelerator</a> in the <i>Global Accelerator Developer Guide</i>.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>Create tags for cross-account attachment.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/global-accelerator/latest/dg/tagging-in-global-accelerator.html">Tagging
     * in Global Accelerator</a> in the <i>Global Accelerator Developer Guide</i>.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Create tags for cross-account attachment.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/global-accelerator/latest/dg/tagging-in-global-accelerator.html">Tagging
     * in Global Accelerator</a> in the <i>Global Accelerator Developer Guide</i>.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Create tags for cross-account attachment.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/global-accelerator/latest/dg/tagging-in-global-accelerator.html">Tagging
     * in Global Accelerator</a> in the <i>Global Accelerator Developer Guide</i>.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Create tags for cross-account attachment.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/global-accelerator/latest/dg/tagging-in-global-accelerator.html">Tagging
     * in Global Accelerator</a> in the <i>Global Accelerator Developer Guide</i>.</p>
     */
    inline CreateCrossAccountAttachmentRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>Create tags for cross-account attachment.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/global-accelerator/latest/dg/tagging-in-global-accelerator.html">Tagging
     * in Global Accelerator</a> in the <i>Global Accelerator Developer Guide</i>.</p>
     */
    inline CreateCrossAccountAttachmentRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Create tags for cross-account attachment.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/global-accelerator/latest/dg/tagging-in-global-accelerator.html">Tagging
     * in Global Accelerator</a> in the <i>Global Accelerator Developer Guide</i>.</p>
     */
    inline CreateCrossAccountAttachmentRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>Create tags for cross-account attachment.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/global-accelerator/latest/dg/tagging-in-global-accelerator.html">Tagging
     * in Global Accelerator</a> in the <i>Global Accelerator Developer Guide</i>.</p>
     */
    inline CreateCrossAccountAttachmentRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<Aws::String> m_principals;
    bool m_principalsHasBeenSet = false;

    Aws::Vector<Resource> m_resources;
    bool m_resourcesHasBeenSet = false;

    Aws::String m_idempotencyToken;
    bool m_idempotencyTokenHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace GlobalAccelerator
} // namespace Aws

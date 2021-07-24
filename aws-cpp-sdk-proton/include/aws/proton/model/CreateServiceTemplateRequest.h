﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/proton/Proton_EXPORTS.h>
#include <aws/proton/ProtonRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/proton/model/Provisioning.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/proton/model/Tag.h>
#include <utility>

namespace Aws
{
namespace Proton
{
namespace Model
{

  /**
   */
  class AWS_PROTON_API CreateServiceTemplateRequest : public ProtonRequest
  {
  public:
    CreateServiceTemplateRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateServiceTemplate"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A description of the service template.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the service template.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description of the service template.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the service template.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description of the service template.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of the service template.</p>
     */
    inline CreateServiceTemplateRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the service template.</p>
     */
    inline CreateServiceTemplateRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the service template.</p>
     */
    inline CreateServiceTemplateRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The name of the service template as displayed in the developer interface.</p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }

    /**
     * <p>The name of the service template as displayed in the developer interface.</p>
     */
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }

    /**
     * <p>The name of the service template as displayed in the developer interface.</p>
     */
    inline void SetDisplayName(const Aws::String& value) { m_displayNameHasBeenSet = true; m_displayName = value; }

    /**
     * <p>The name of the service template as displayed in the developer interface.</p>
     */
    inline void SetDisplayName(Aws::String&& value) { m_displayNameHasBeenSet = true; m_displayName = std::move(value); }

    /**
     * <p>The name of the service template as displayed in the developer interface.</p>
     */
    inline void SetDisplayName(const char* value) { m_displayNameHasBeenSet = true; m_displayName.assign(value); }

    /**
     * <p>The name of the service template as displayed in the developer interface.</p>
     */
    inline CreateServiceTemplateRequest& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}

    /**
     * <p>The name of the service template as displayed in the developer interface.</p>
     */
    inline CreateServiceTemplateRequest& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}

    /**
     * <p>The name of the service template as displayed in the developer interface.</p>
     */
    inline CreateServiceTemplateRequest& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}


    /**
     * <p>A customer provided encryption key that's used to encrypt data.</p>
     */
    inline const Aws::String& GetEncryptionKey() const{ return m_encryptionKey; }

    /**
     * <p>A customer provided encryption key that's used to encrypt data.</p>
     */
    inline bool EncryptionKeyHasBeenSet() const { return m_encryptionKeyHasBeenSet; }

    /**
     * <p>A customer provided encryption key that's used to encrypt data.</p>
     */
    inline void SetEncryptionKey(const Aws::String& value) { m_encryptionKeyHasBeenSet = true; m_encryptionKey = value; }

    /**
     * <p>A customer provided encryption key that's used to encrypt data.</p>
     */
    inline void SetEncryptionKey(Aws::String&& value) { m_encryptionKeyHasBeenSet = true; m_encryptionKey = std::move(value); }

    /**
     * <p>A customer provided encryption key that's used to encrypt data.</p>
     */
    inline void SetEncryptionKey(const char* value) { m_encryptionKeyHasBeenSet = true; m_encryptionKey.assign(value); }

    /**
     * <p>A customer provided encryption key that's used to encrypt data.</p>
     */
    inline CreateServiceTemplateRequest& WithEncryptionKey(const Aws::String& value) { SetEncryptionKey(value); return *this;}

    /**
     * <p>A customer provided encryption key that's used to encrypt data.</p>
     */
    inline CreateServiceTemplateRequest& WithEncryptionKey(Aws::String&& value) { SetEncryptionKey(std::move(value)); return *this;}

    /**
     * <p>A customer provided encryption key that's used to encrypt data.</p>
     */
    inline CreateServiceTemplateRequest& WithEncryptionKey(const char* value) { SetEncryptionKey(value); return *this;}


    /**
     * <p>The name of the service template.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the service template.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the service template.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the service template.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the service template.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the service template.</p>
     */
    inline CreateServiceTemplateRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the service template.</p>
     */
    inline CreateServiceTemplateRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the service template.</p>
     */
    inline CreateServiceTemplateRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>AWS Proton includes a service pipeline for your service by default. When
     * included, this parameter indicates that an AWS Proton service pipeline
     * <i>won't</i> be included for your service. Once specified, this parameter
     * <i>can't</i> be changed. For more information, see <a
     * href="https://docs.aws.amazon.com/proton/latest/adminguide/ag-template-bundles.html">Service
     * template bundles</a> in the <i>AWS Proton Administrator Guide</i>.</p>
     */
    inline const Provisioning& GetPipelineProvisioning() const{ return m_pipelineProvisioning; }

    /**
     * <p>AWS Proton includes a service pipeline for your service by default. When
     * included, this parameter indicates that an AWS Proton service pipeline
     * <i>won't</i> be included for your service. Once specified, this parameter
     * <i>can't</i> be changed. For more information, see <a
     * href="https://docs.aws.amazon.com/proton/latest/adminguide/ag-template-bundles.html">Service
     * template bundles</a> in the <i>AWS Proton Administrator Guide</i>.</p>
     */
    inline bool PipelineProvisioningHasBeenSet() const { return m_pipelineProvisioningHasBeenSet; }

    /**
     * <p>AWS Proton includes a service pipeline for your service by default. When
     * included, this parameter indicates that an AWS Proton service pipeline
     * <i>won't</i> be included for your service. Once specified, this parameter
     * <i>can't</i> be changed. For more information, see <a
     * href="https://docs.aws.amazon.com/proton/latest/adminguide/ag-template-bundles.html">Service
     * template bundles</a> in the <i>AWS Proton Administrator Guide</i>.</p>
     */
    inline void SetPipelineProvisioning(const Provisioning& value) { m_pipelineProvisioningHasBeenSet = true; m_pipelineProvisioning = value; }

    /**
     * <p>AWS Proton includes a service pipeline for your service by default. When
     * included, this parameter indicates that an AWS Proton service pipeline
     * <i>won't</i> be included for your service. Once specified, this parameter
     * <i>can't</i> be changed. For more information, see <a
     * href="https://docs.aws.amazon.com/proton/latest/adminguide/ag-template-bundles.html">Service
     * template bundles</a> in the <i>AWS Proton Administrator Guide</i>.</p>
     */
    inline void SetPipelineProvisioning(Provisioning&& value) { m_pipelineProvisioningHasBeenSet = true; m_pipelineProvisioning = std::move(value); }

    /**
     * <p>AWS Proton includes a service pipeline for your service by default. When
     * included, this parameter indicates that an AWS Proton service pipeline
     * <i>won't</i> be included for your service. Once specified, this parameter
     * <i>can't</i> be changed. For more information, see <a
     * href="https://docs.aws.amazon.com/proton/latest/adminguide/ag-template-bundles.html">Service
     * template bundles</a> in the <i>AWS Proton Administrator Guide</i>.</p>
     */
    inline CreateServiceTemplateRequest& WithPipelineProvisioning(const Provisioning& value) { SetPipelineProvisioning(value); return *this;}

    /**
     * <p>AWS Proton includes a service pipeline for your service by default. When
     * included, this parameter indicates that an AWS Proton service pipeline
     * <i>won't</i> be included for your service. Once specified, this parameter
     * <i>can't</i> be changed. For more information, see <a
     * href="https://docs.aws.amazon.com/proton/latest/adminguide/ag-template-bundles.html">Service
     * template bundles</a> in the <i>AWS Proton Administrator Guide</i>.</p>
     */
    inline CreateServiceTemplateRequest& WithPipelineProvisioning(Provisioning&& value) { SetPipelineProvisioning(std::move(value)); return *this;}


    /**
     * <p>Create tags for your service template. For more information, see <i>AWS
     * Proton resources and tagging</i> in the <a
     * href="https://docs.aws.amazon.com/proton/latest/adminguide/resources.html">AWS
     * Proton Administrator Guide</a> or <a
     * href="https://docs.aws.amazon.com/proton/latest/userguide/resources.html">AWS
     * Proton User Guide</a>.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>Create tags for your service template. For more information, see <i>AWS
     * Proton resources and tagging</i> in the <a
     * href="https://docs.aws.amazon.com/proton/latest/adminguide/resources.html">AWS
     * Proton Administrator Guide</a> or <a
     * href="https://docs.aws.amazon.com/proton/latest/userguide/resources.html">AWS
     * Proton User Guide</a>.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Create tags for your service template. For more information, see <i>AWS
     * Proton resources and tagging</i> in the <a
     * href="https://docs.aws.amazon.com/proton/latest/adminguide/resources.html">AWS
     * Proton Administrator Guide</a> or <a
     * href="https://docs.aws.amazon.com/proton/latest/userguide/resources.html">AWS
     * Proton User Guide</a>.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Create tags for your service template. For more information, see <i>AWS
     * Proton resources and tagging</i> in the <a
     * href="https://docs.aws.amazon.com/proton/latest/adminguide/resources.html">AWS
     * Proton Administrator Guide</a> or <a
     * href="https://docs.aws.amazon.com/proton/latest/userguide/resources.html">AWS
     * Proton User Guide</a>.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Create tags for your service template. For more information, see <i>AWS
     * Proton resources and tagging</i> in the <a
     * href="https://docs.aws.amazon.com/proton/latest/adminguide/resources.html">AWS
     * Proton Administrator Guide</a> or <a
     * href="https://docs.aws.amazon.com/proton/latest/userguide/resources.html">AWS
     * Proton User Guide</a>.</p>
     */
    inline CreateServiceTemplateRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>Create tags for your service template. For more information, see <i>AWS
     * Proton resources and tagging</i> in the <a
     * href="https://docs.aws.amazon.com/proton/latest/adminguide/resources.html">AWS
     * Proton Administrator Guide</a> or <a
     * href="https://docs.aws.amazon.com/proton/latest/userguide/resources.html">AWS
     * Proton User Guide</a>.</p>
     */
    inline CreateServiceTemplateRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Create tags for your service template. For more information, see <i>AWS
     * Proton resources and tagging</i> in the <a
     * href="https://docs.aws.amazon.com/proton/latest/adminguide/resources.html">AWS
     * Proton Administrator Guide</a> or <a
     * href="https://docs.aws.amazon.com/proton/latest/userguide/resources.html">AWS
     * Proton User Guide</a>.</p>
     */
    inline CreateServiceTemplateRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>Create tags for your service template. For more information, see <i>AWS
     * Proton resources and tagging</i> in the <a
     * href="https://docs.aws.amazon.com/proton/latest/adminguide/resources.html">AWS
     * Proton Administrator Guide</a> or <a
     * href="https://docs.aws.amazon.com/proton/latest/userguide/resources.html">AWS
     * Proton User Guide</a>.</p>
     */
    inline CreateServiceTemplateRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet;

    Aws::String m_encryptionKey;
    bool m_encryptionKeyHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Provisioning m_pipelineProvisioning;
    bool m_pipelineProvisioningHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace Proton
} // namespace Aws

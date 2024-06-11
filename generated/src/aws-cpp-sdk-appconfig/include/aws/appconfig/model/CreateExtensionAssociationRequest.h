/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appconfig/AppConfig_EXPORTS.h>
#include <aws/appconfig/AppConfigRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace AppConfig
{
namespace Model
{

  /**
   */
  class CreateExtensionAssociationRequest : public AppConfigRequest
  {
  public:
    AWS_APPCONFIG_API CreateExtensionAssociationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateExtensionAssociation"; }

    AWS_APPCONFIG_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name, the ID, or the Amazon Resource Name (ARN) of the extension.</p>
     */
    inline const Aws::String& GetExtensionIdentifier() const{ return m_extensionIdentifier; }
    inline bool ExtensionIdentifierHasBeenSet() const { return m_extensionIdentifierHasBeenSet; }
    inline void SetExtensionIdentifier(const Aws::String& value) { m_extensionIdentifierHasBeenSet = true; m_extensionIdentifier = value; }
    inline void SetExtensionIdentifier(Aws::String&& value) { m_extensionIdentifierHasBeenSet = true; m_extensionIdentifier = std::move(value); }
    inline void SetExtensionIdentifier(const char* value) { m_extensionIdentifierHasBeenSet = true; m_extensionIdentifier.assign(value); }
    inline CreateExtensionAssociationRequest& WithExtensionIdentifier(const Aws::String& value) { SetExtensionIdentifier(value); return *this;}
    inline CreateExtensionAssociationRequest& WithExtensionIdentifier(Aws::String&& value) { SetExtensionIdentifier(std::move(value)); return *this;}
    inline CreateExtensionAssociationRequest& WithExtensionIdentifier(const char* value) { SetExtensionIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version number of the extension. If not specified, AppConfig uses the
     * maximum version of the extension.</p>
     */
    inline int GetExtensionVersionNumber() const{ return m_extensionVersionNumber; }
    inline bool ExtensionVersionNumberHasBeenSet() const { return m_extensionVersionNumberHasBeenSet; }
    inline void SetExtensionVersionNumber(int value) { m_extensionVersionNumberHasBeenSet = true; m_extensionVersionNumber = value; }
    inline CreateExtensionAssociationRequest& WithExtensionVersionNumber(int value) { SetExtensionVersionNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of an application, configuration profile, or environment.</p>
     */
    inline const Aws::String& GetResourceIdentifier() const{ return m_resourceIdentifier; }
    inline bool ResourceIdentifierHasBeenSet() const { return m_resourceIdentifierHasBeenSet; }
    inline void SetResourceIdentifier(const Aws::String& value) { m_resourceIdentifierHasBeenSet = true; m_resourceIdentifier = value; }
    inline void SetResourceIdentifier(Aws::String&& value) { m_resourceIdentifierHasBeenSet = true; m_resourceIdentifier = std::move(value); }
    inline void SetResourceIdentifier(const char* value) { m_resourceIdentifierHasBeenSet = true; m_resourceIdentifier.assign(value); }
    inline CreateExtensionAssociationRequest& WithResourceIdentifier(const Aws::String& value) { SetResourceIdentifier(value); return *this;}
    inline CreateExtensionAssociationRequest& WithResourceIdentifier(Aws::String&& value) { SetResourceIdentifier(std::move(value)); return *this;}
    inline CreateExtensionAssociationRequest& WithResourceIdentifier(const char* value) { SetResourceIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parameter names and values defined in the extensions. Extension
     * parameters marked <code>Required</code> must be entered for this field.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetParameters() const{ return m_parameters; }
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }
    inline void SetParameters(const Aws::Map<Aws::String, Aws::String>& value) { m_parametersHasBeenSet = true; m_parameters = value; }
    inline void SetParameters(Aws::Map<Aws::String, Aws::String>&& value) { m_parametersHasBeenSet = true; m_parameters = std::move(value); }
    inline CreateExtensionAssociationRequest& WithParameters(const Aws::Map<Aws::String, Aws::String>& value) { SetParameters(value); return *this;}
    inline CreateExtensionAssociationRequest& WithParameters(Aws::Map<Aws::String, Aws::String>&& value) { SetParameters(std::move(value)); return *this;}
    inline CreateExtensionAssociationRequest& AddParameters(const Aws::String& key, const Aws::String& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }
    inline CreateExtensionAssociationRequest& AddParameters(Aws::String&& key, const Aws::String& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), value); return *this; }
    inline CreateExtensionAssociationRequest& AddParameters(const Aws::String& key, Aws::String&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }
    inline CreateExtensionAssociationRequest& AddParameters(Aws::String&& key, Aws::String&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateExtensionAssociationRequest& AddParameters(const char* key, Aws::String&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }
    inline CreateExtensionAssociationRequest& AddParameters(Aws::String&& key, const char* value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), value); return *this; }
    inline CreateExtensionAssociationRequest& AddParameters(const char* key, const char* value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Adds one or more tags for the specified extension association. Tags are
     * metadata that help you categorize resources in different ways, for example, by
     * purpose, owner, or environment. Each tag consists of a key and an optional
     * value, both of which you define. </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateExtensionAssociationRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline CreateExtensionAssociationRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateExtensionAssociationRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline CreateExtensionAssociationRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateExtensionAssociationRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateExtensionAssociationRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateExtensionAssociationRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateExtensionAssociationRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateExtensionAssociationRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}
  private:

    Aws::String m_extensionIdentifier;
    bool m_extensionIdentifierHasBeenSet = false;

    int m_extensionVersionNumber;
    bool m_extensionVersionNumberHasBeenSet = false;

    Aws::String m_resourceIdentifier;
    bool m_resourceIdentifierHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_parameters;
    bool m_parametersHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace AppConfig
} // namespace Aws

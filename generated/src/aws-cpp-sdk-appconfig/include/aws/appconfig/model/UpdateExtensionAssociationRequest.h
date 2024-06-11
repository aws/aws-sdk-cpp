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
  class UpdateExtensionAssociationRequest : public AppConfigRequest
  {
  public:
    AWS_APPCONFIG_API UpdateExtensionAssociationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateExtensionAssociation"; }

    AWS_APPCONFIG_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The system-generated ID for the association.</p>
     */
    inline const Aws::String& GetExtensionAssociationId() const{ return m_extensionAssociationId; }
    inline bool ExtensionAssociationIdHasBeenSet() const { return m_extensionAssociationIdHasBeenSet; }
    inline void SetExtensionAssociationId(const Aws::String& value) { m_extensionAssociationIdHasBeenSet = true; m_extensionAssociationId = value; }
    inline void SetExtensionAssociationId(Aws::String&& value) { m_extensionAssociationIdHasBeenSet = true; m_extensionAssociationId = std::move(value); }
    inline void SetExtensionAssociationId(const char* value) { m_extensionAssociationIdHasBeenSet = true; m_extensionAssociationId.assign(value); }
    inline UpdateExtensionAssociationRequest& WithExtensionAssociationId(const Aws::String& value) { SetExtensionAssociationId(value); return *this;}
    inline UpdateExtensionAssociationRequest& WithExtensionAssociationId(Aws::String&& value) { SetExtensionAssociationId(std::move(value)); return *this;}
    inline UpdateExtensionAssociationRequest& WithExtensionAssociationId(const char* value) { SetExtensionAssociationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parameter names and values defined in the extension.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetParameters() const{ return m_parameters; }
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }
    inline void SetParameters(const Aws::Map<Aws::String, Aws::String>& value) { m_parametersHasBeenSet = true; m_parameters = value; }
    inline void SetParameters(Aws::Map<Aws::String, Aws::String>&& value) { m_parametersHasBeenSet = true; m_parameters = std::move(value); }
    inline UpdateExtensionAssociationRequest& WithParameters(const Aws::Map<Aws::String, Aws::String>& value) { SetParameters(value); return *this;}
    inline UpdateExtensionAssociationRequest& WithParameters(Aws::Map<Aws::String, Aws::String>&& value) { SetParameters(std::move(value)); return *this;}
    inline UpdateExtensionAssociationRequest& AddParameters(const Aws::String& key, const Aws::String& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }
    inline UpdateExtensionAssociationRequest& AddParameters(Aws::String&& key, const Aws::String& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), value); return *this; }
    inline UpdateExtensionAssociationRequest& AddParameters(const Aws::String& key, Aws::String&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }
    inline UpdateExtensionAssociationRequest& AddParameters(Aws::String&& key, Aws::String&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), std::move(value)); return *this; }
    inline UpdateExtensionAssociationRequest& AddParameters(const char* key, Aws::String&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }
    inline UpdateExtensionAssociationRequest& AddParameters(Aws::String&& key, const char* value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), value); return *this; }
    inline UpdateExtensionAssociationRequest& AddParameters(const char* key, const char* value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }
    ///@}
  private:

    Aws::String m_extensionAssociationId;
    bool m_extensionAssociationIdHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_parameters;
    bool m_parametersHasBeenSet = false;
  };

} // namespace Model
} // namespace AppConfig
} // namespace Aws

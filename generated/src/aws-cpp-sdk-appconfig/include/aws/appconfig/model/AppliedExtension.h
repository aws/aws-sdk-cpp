/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appconfig/AppConfig_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace AppConfig
{
namespace Model
{

  /**
   * <p>An extension that was invoked during a deployment.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appconfig-2019-10-09/AppliedExtension">AWS
   * API Reference</a></p>
   */
  class AppliedExtension
  {
  public:
    AWS_APPCONFIG_API AppliedExtension();
    AWS_APPCONFIG_API AppliedExtension(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPCONFIG_API AppliedExtension& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPCONFIG_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The system-generated ID of the extension.</p>
     */
    inline const Aws::String& GetExtensionId() const{ return m_extensionId; }
    inline bool ExtensionIdHasBeenSet() const { return m_extensionIdHasBeenSet; }
    inline void SetExtensionId(const Aws::String& value) { m_extensionIdHasBeenSet = true; m_extensionId = value; }
    inline void SetExtensionId(Aws::String&& value) { m_extensionIdHasBeenSet = true; m_extensionId = std::move(value); }
    inline void SetExtensionId(const char* value) { m_extensionIdHasBeenSet = true; m_extensionId.assign(value); }
    inline AppliedExtension& WithExtensionId(const Aws::String& value) { SetExtensionId(value); return *this;}
    inline AppliedExtension& WithExtensionId(Aws::String&& value) { SetExtensionId(std::move(value)); return *this;}
    inline AppliedExtension& WithExtensionId(const char* value) { SetExtensionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The system-generated ID for the association.</p>
     */
    inline const Aws::String& GetExtensionAssociationId() const{ return m_extensionAssociationId; }
    inline bool ExtensionAssociationIdHasBeenSet() const { return m_extensionAssociationIdHasBeenSet; }
    inline void SetExtensionAssociationId(const Aws::String& value) { m_extensionAssociationIdHasBeenSet = true; m_extensionAssociationId = value; }
    inline void SetExtensionAssociationId(Aws::String&& value) { m_extensionAssociationIdHasBeenSet = true; m_extensionAssociationId = std::move(value); }
    inline void SetExtensionAssociationId(const char* value) { m_extensionAssociationIdHasBeenSet = true; m_extensionAssociationId.assign(value); }
    inline AppliedExtension& WithExtensionAssociationId(const Aws::String& value) { SetExtensionAssociationId(value); return *this;}
    inline AppliedExtension& WithExtensionAssociationId(Aws::String&& value) { SetExtensionAssociationId(std::move(value)); return *this;}
    inline AppliedExtension& WithExtensionAssociationId(const char* value) { SetExtensionAssociationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The extension version number.</p>
     */
    inline int GetVersionNumber() const{ return m_versionNumber; }
    inline bool VersionNumberHasBeenSet() const { return m_versionNumberHasBeenSet; }
    inline void SetVersionNumber(int value) { m_versionNumberHasBeenSet = true; m_versionNumber = value; }
    inline AppliedExtension& WithVersionNumber(int value) { SetVersionNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>One or more parameters for the actions called by the extension.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetParameters() const{ return m_parameters; }
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }
    inline void SetParameters(const Aws::Map<Aws::String, Aws::String>& value) { m_parametersHasBeenSet = true; m_parameters = value; }
    inline void SetParameters(Aws::Map<Aws::String, Aws::String>&& value) { m_parametersHasBeenSet = true; m_parameters = std::move(value); }
    inline AppliedExtension& WithParameters(const Aws::Map<Aws::String, Aws::String>& value) { SetParameters(value); return *this;}
    inline AppliedExtension& WithParameters(Aws::Map<Aws::String, Aws::String>&& value) { SetParameters(std::move(value)); return *this;}
    inline AppliedExtension& AddParameters(const Aws::String& key, const Aws::String& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }
    inline AppliedExtension& AddParameters(Aws::String&& key, const Aws::String& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), value); return *this; }
    inline AppliedExtension& AddParameters(const Aws::String& key, Aws::String&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }
    inline AppliedExtension& AddParameters(Aws::String&& key, Aws::String&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), std::move(value)); return *this; }
    inline AppliedExtension& AddParameters(const char* key, Aws::String&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }
    inline AppliedExtension& AddParameters(Aws::String&& key, const char* value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), value); return *this; }
    inline AppliedExtension& AddParameters(const char* key, const char* value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }
    ///@}
  private:

    Aws::String m_extensionId;
    bool m_extensionIdHasBeenSet = false;

    Aws::String m_extensionAssociationId;
    bool m_extensionAssociationIdHasBeenSet = false;

    int m_versionNumber;
    bool m_versionNumberHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_parameters;
    bool m_parametersHasBeenSet = false;
  };

} // namespace Model
} // namespace AppConfig
} // namespace Aws

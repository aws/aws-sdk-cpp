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
    AWS_APPCONFIG_API AppliedExtension() = default;
    AWS_APPCONFIG_API AppliedExtension(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPCONFIG_API AppliedExtension& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPCONFIG_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The system-generated ID of the extension.</p>
     */
    inline const Aws::String& GetExtensionId() const { return m_extensionId; }
    inline bool ExtensionIdHasBeenSet() const { return m_extensionIdHasBeenSet; }
    template<typename ExtensionIdT = Aws::String>
    void SetExtensionId(ExtensionIdT&& value) { m_extensionIdHasBeenSet = true; m_extensionId = std::forward<ExtensionIdT>(value); }
    template<typename ExtensionIdT = Aws::String>
    AppliedExtension& WithExtensionId(ExtensionIdT&& value) { SetExtensionId(std::forward<ExtensionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The system-generated ID for the association.</p>
     */
    inline const Aws::String& GetExtensionAssociationId() const { return m_extensionAssociationId; }
    inline bool ExtensionAssociationIdHasBeenSet() const { return m_extensionAssociationIdHasBeenSet; }
    template<typename ExtensionAssociationIdT = Aws::String>
    void SetExtensionAssociationId(ExtensionAssociationIdT&& value) { m_extensionAssociationIdHasBeenSet = true; m_extensionAssociationId = std::forward<ExtensionAssociationIdT>(value); }
    template<typename ExtensionAssociationIdT = Aws::String>
    AppliedExtension& WithExtensionAssociationId(ExtensionAssociationIdT&& value) { SetExtensionAssociationId(std::forward<ExtensionAssociationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The extension version number.</p>
     */
    inline int GetVersionNumber() const { return m_versionNumber; }
    inline bool VersionNumberHasBeenSet() const { return m_versionNumberHasBeenSet; }
    inline void SetVersionNumber(int value) { m_versionNumberHasBeenSet = true; m_versionNumber = value; }
    inline AppliedExtension& WithVersionNumber(int value) { SetVersionNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>One or more parameters for the actions called by the extension.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetParameters() const { return m_parameters; }
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }
    template<typename ParametersT = Aws::Map<Aws::String, Aws::String>>
    void SetParameters(ParametersT&& value) { m_parametersHasBeenSet = true; m_parameters = std::forward<ParametersT>(value); }
    template<typename ParametersT = Aws::Map<Aws::String, Aws::String>>
    AppliedExtension& WithParameters(ParametersT&& value) { SetParameters(std::forward<ParametersT>(value)); return *this;}
    template<typename ParametersKeyT = Aws::String, typename ParametersValueT = Aws::String>
    AppliedExtension& AddParameters(ParametersKeyT&& key, ParametersValueT&& value) {
      m_parametersHasBeenSet = true; m_parameters.emplace(std::forward<ParametersKeyT>(key), std::forward<ParametersValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_extensionId;
    bool m_extensionIdHasBeenSet = false;

    Aws::String m_extensionAssociationId;
    bool m_extensionAssociationIdHasBeenSet = false;

    int m_versionNumber{0};
    bool m_versionNumberHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_parameters;
    bool m_parametersHasBeenSet = false;
  };

} // namespace Model
} // namespace AppConfig
} // namespace Aws

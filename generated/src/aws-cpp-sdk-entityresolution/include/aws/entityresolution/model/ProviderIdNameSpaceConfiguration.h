/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/entityresolution/EntityResolution_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/Document.h>
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
namespace EntityResolution
{
namespace Model
{

  /**
   * <p>The provider configuration required for different ID namespace
   * types.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/entityresolution-2018-05-10/ProviderIdNameSpaceConfiguration">AWS
   * API Reference</a></p>
   */
  class ProviderIdNameSpaceConfiguration
  {
  public:
    AWS_ENTITYRESOLUTION_API ProviderIdNameSpaceConfiguration() = default;
    AWS_ENTITYRESOLUTION_API ProviderIdNameSpaceConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_ENTITYRESOLUTION_API ProviderIdNameSpaceConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ENTITYRESOLUTION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The description of the ID namespace.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    ProviderIdNameSpaceConfiguration& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configurations required for the target ID namespace.</p>
     */
    inline Aws::Utils::DocumentView GetProviderTargetConfigurationDefinition() const { return m_providerTargetConfigurationDefinition; }
    inline bool ProviderTargetConfigurationDefinitionHasBeenSet() const { return m_providerTargetConfigurationDefinitionHasBeenSet; }
    template<typename ProviderTargetConfigurationDefinitionT = Aws::Utils::Document>
    void SetProviderTargetConfigurationDefinition(ProviderTargetConfigurationDefinitionT&& value) { m_providerTargetConfigurationDefinitionHasBeenSet = true; m_providerTargetConfigurationDefinition = std::forward<ProviderTargetConfigurationDefinitionT>(value); }
    template<typename ProviderTargetConfigurationDefinitionT = Aws::Utils::Document>
    ProviderIdNameSpaceConfiguration& WithProviderTargetConfigurationDefinition(ProviderTargetConfigurationDefinitionT&& value) { SetProviderTargetConfigurationDefinition(std::forward<ProviderTargetConfigurationDefinitionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configurations required for the source ID namespace.</p>
     */
    inline Aws::Utils::DocumentView GetProviderSourceConfigurationDefinition() const { return m_providerSourceConfigurationDefinition; }
    inline bool ProviderSourceConfigurationDefinitionHasBeenSet() const { return m_providerSourceConfigurationDefinitionHasBeenSet; }
    template<typename ProviderSourceConfigurationDefinitionT = Aws::Utils::Document>
    void SetProviderSourceConfigurationDefinition(ProviderSourceConfigurationDefinitionT&& value) { m_providerSourceConfigurationDefinitionHasBeenSet = true; m_providerSourceConfigurationDefinition = std::forward<ProviderSourceConfigurationDefinitionT>(value); }
    template<typename ProviderSourceConfigurationDefinitionT = Aws::Utils::Document>
    ProviderIdNameSpaceConfiguration& WithProviderSourceConfigurationDefinition(ProviderSourceConfigurationDefinitionT&& value) { SetProviderSourceConfigurationDefinition(std::forward<ProviderSourceConfigurationDefinitionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Utils::Document m_providerTargetConfigurationDefinition;
    bool m_providerTargetConfigurationDefinitionHasBeenSet = false;

    Aws::Utils::Document m_providerSourceConfigurationDefinition;
    bool m_providerSourceConfigurationDefinitionHasBeenSet = false;
  };

} // namespace Model
} // namespace EntityResolution
} // namespace Aws

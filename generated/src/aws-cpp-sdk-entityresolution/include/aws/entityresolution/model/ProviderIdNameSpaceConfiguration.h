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
    AWS_ENTITYRESOLUTION_API ProviderIdNameSpaceConfiguration();
    AWS_ENTITYRESOLUTION_API ProviderIdNameSpaceConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_ENTITYRESOLUTION_API ProviderIdNameSpaceConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ENTITYRESOLUTION_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The description of the ID namespace.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the ID namespace.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the ID namespace.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the ID namespace.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the ID namespace.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the ID namespace.</p>
     */
    inline ProviderIdNameSpaceConfiguration& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the ID namespace.</p>
     */
    inline ProviderIdNameSpaceConfiguration& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the ID namespace.</p>
     */
    inline ProviderIdNameSpaceConfiguration& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>Configurations required for the source ID namespace.</p>
     */
    inline Aws::Utils::DocumentView GetProviderSourceConfigurationDefinition() const{ return m_providerSourceConfigurationDefinition; }

    /**
     * <p>Configurations required for the source ID namespace.</p>
     */
    inline bool ProviderSourceConfigurationDefinitionHasBeenSet() const { return m_providerSourceConfigurationDefinitionHasBeenSet; }

    /**
     * <p>Configurations required for the source ID namespace.</p>
     */
    inline void SetProviderSourceConfigurationDefinition(const Aws::Utils::Document& value) { m_providerSourceConfigurationDefinitionHasBeenSet = true; m_providerSourceConfigurationDefinition = value; }

    /**
     * <p>Configurations required for the source ID namespace.</p>
     */
    inline void SetProviderSourceConfigurationDefinition(Aws::Utils::Document&& value) { m_providerSourceConfigurationDefinitionHasBeenSet = true; m_providerSourceConfigurationDefinition = std::move(value); }

    /**
     * <p>Configurations required for the source ID namespace.</p>
     */
    inline ProviderIdNameSpaceConfiguration& WithProviderSourceConfigurationDefinition(const Aws::Utils::Document& value) { SetProviderSourceConfigurationDefinition(value); return *this;}

    /**
     * <p>Configurations required for the source ID namespace.</p>
     */
    inline ProviderIdNameSpaceConfiguration& WithProviderSourceConfigurationDefinition(Aws::Utils::Document&& value) { SetProviderSourceConfigurationDefinition(std::move(value)); return *this;}


    /**
     * <p>Configurations required for the target ID namespace.</p>
     */
    inline Aws::Utils::DocumentView GetProviderTargetConfigurationDefinition() const{ return m_providerTargetConfigurationDefinition; }

    /**
     * <p>Configurations required for the target ID namespace.</p>
     */
    inline bool ProviderTargetConfigurationDefinitionHasBeenSet() const { return m_providerTargetConfigurationDefinitionHasBeenSet; }

    /**
     * <p>Configurations required for the target ID namespace.</p>
     */
    inline void SetProviderTargetConfigurationDefinition(const Aws::Utils::Document& value) { m_providerTargetConfigurationDefinitionHasBeenSet = true; m_providerTargetConfigurationDefinition = value; }

    /**
     * <p>Configurations required for the target ID namespace.</p>
     */
    inline void SetProviderTargetConfigurationDefinition(Aws::Utils::Document&& value) { m_providerTargetConfigurationDefinitionHasBeenSet = true; m_providerTargetConfigurationDefinition = std::move(value); }

    /**
     * <p>Configurations required for the target ID namespace.</p>
     */
    inline ProviderIdNameSpaceConfiguration& WithProviderTargetConfigurationDefinition(const Aws::Utils::Document& value) { SetProviderTargetConfigurationDefinition(value); return *this;}

    /**
     * <p>Configurations required for the target ID namespace.</p>
     */
    inline ProviderIdNameSpaceConfiguration& WithProviderTargetConfigurationDefinition(Aws::Utils::Document&& value) { SetProviderTargetConfigurationDefinition(std::move(value)); return *this;}

  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Utils::Document m_providerSourceConfigurationDefinition;
    bool m_providerSourceConfigurationDefinitionHasBeenSet = false;

    Aws::Utils::Document m_providerTargetConfigurationDefinition;
    bool m_providerTargetConfigurationDefinitionHasBeenSet = false;
  };

} // namespace Model
} // namespace EntityResolution
} // namespace Aws

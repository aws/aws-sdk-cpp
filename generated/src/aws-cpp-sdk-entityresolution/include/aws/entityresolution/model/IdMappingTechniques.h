/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/entityresolution/EntityResolution_EXPORTS.h>
#include <aws/entityresolution/model/IdMappingType.h>
#include <aws/entityresolution/model/ProviderProperties.h>
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
   * <p>An object which defines the ID mapping techniques and provider
   * configurations.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/entityresolution-2018-05-10/IdMappingTechniques">AWS
   * API Reference</a></p>
   */
  class IdMappingTechniques
  {
  public:
    AWS_ENTITYRESOLUTION_API IdMappingTechniques();
    AWS_ENTITYRESOLUTION_API IdMappingTechniques(Aws::Utils::Json::JsonView jsonValue);
    AWS_ENTITYRESOLUTION_API IdMappingTechniques& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ENTITYRESOLUTION_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The type of ID mapping.</p>
     */
    inline const IdMappingType& GetIdMappingType() const{ return m_idMappingType; }

    /**
     * <p>The type of ID mapping.</p>
     */
    inline bool IdMappingTypeHasBeenSet() const { return m_idMappingTypeHasBeenSet; }

    /**
     * <p>The type of ID mapping.</p>
     */
    inline void SetIdMappingType(const IdMappingType& value) { m_idMappingTypeHasBeenSet = true; m_idMappingType = value; }

    /**
     * <p>The type of ID mapping.</p>
     */
    inline void SetIdMappingType(IdMappingType&& value) { m_idMappingTypeHasBeenSet = true; m_idMappingType = std::move(value); }

    /**
     * <p>The type of ID mapping.</p>
     */
    inline IdMappingTechniques& WithIdMappingType(const IdMappingType& value) { SetIdMappingType(value); return *this;}

    /**
     * <p>The type of ID mapping.</p>
     */
    inline IdMappingTechniques& WithIdMappingType(IdMappingType&& value) { SetIdMappingType(std::move(value)); return *this;}


    /**
     * <p>An object which defines any additional configurations required by the
     * provider service.</p>
     */
    inline const ProviderProperties& GetProviderProperties() const{ return m_providerProperties; }

    /**
     * <p>An object which defines any additional configurations required by the
     * provider service.</p>
     */
    inline bool ProviderPropertiesHasBeenSet() const { return m_providerPropertiesHasBeenSet; }

    /**
     * <p>An object which defines any additional configurations required by the
     * provider service.</p>
     */
    inline void SetProviderProperties(const ProviderProperties& value) { m_providerPropertiesHasBeenSet = true; m_providerProperties = value; }

    /**
     * <p>An object which defines any additional configurations required by the
     * provider service.</p>
     */
    inline void SetProviderProperties(ProviderProperties&& value) { m_providerPropertiesHasBeenSet = true; m_providerProperties = std::move(value); }

    /**
     * <p>An object which defines any additional configurations required by the
     * provider service.</p>
     */
    inline IdMappingTechniques& WithProviderProperties(const ProviderProperties& value) { SetProviderProperties(value); return *this;}

    /**
     * <p>An object which defines any additional configurations required by the
     * provider service.</p>
     */
    inline IdMappingTechniques& WithProviderProperties(ProviderProperties&& value) { SetProviderProperties(std::move(value)); return *this;}

  private:

    IdMappingType m_idMappingType;
    bool m_idMappingTypeHasBeenSet = false;

    ProviderProperties m_providerProperties;
    bool m_providerPropertiesHasBeenSet = false;
  };

} // namespace Model
} // namespace EntityResolution
} // namespace Aws

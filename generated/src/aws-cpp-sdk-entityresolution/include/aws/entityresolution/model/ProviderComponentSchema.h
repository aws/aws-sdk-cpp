/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/entityresolution/EntityResolution_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/entityresolution/model/ProviderSchemaAttribute.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>The input schema supported by provider service.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/entityresolution-2018-05-10/ProviderComponentSchema">AWS
   * API Reference</a></p>
   */
  class ProviderComponentSchema
  {
  public:
    AWS_ENTITYRESOLUTION_API ProviderComponentSchema() = default;
    AWS_ENTITYRESOLUTION_API ProviderComponentSchema(Aws::Utils::Json::JsonView jsonValue);
    AWS_ENTITYRESOLUTION_API ProviderComponentSchema& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ENTITYRESOLUTION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Input schema for the provider service.</p>
     */
    inline const Aws::Vector<Aws::Vector<Aws::String>>& GetSchemas() const { return m_schemas; }
    inline bool SchemasHasBeenSet() const { return m_schemasHasBeenSet; }
    template<typename SchemasT = Aws::Vector<Aws::Vector<Aws::String>>>
    void SetSchemas(SchemasT&& value) { m_schemasHasBeenSet = true; m_schemas = std::forward<SchemasT>(value); }
    template<typename SchemasT = Aws::Vector<Aws::Vector<Aws::String>>>
    ProviderComponentSchema& WithSchemas(SchemasT&& value) { SetSchemas(std::forward<SchemasT>(value)); return *this;}
    template<typename SchemasT = Aws::Vector<Aws::String>>
    ProviderComponentSchema& AddSchemas(SchemasT&& value) { m_schemasHasBeenSet = true; m_schemas.emplace_back(std::forward<SchemasT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The provider schema attributes.</p>
     */
    inline const Aws::Vector<ProviderSchemaAttribute>& GetProviderSchemaAttributes() const { return m_providerSchemaAttributes; }
    inline bool ProviderSchemaAttributesHasBeenSet() const { return m_providerSchemaAttributesHasBeenSet; }
    template<typename ProviderSchemaAttributesT = Aws::Vector<ProviderSchemaAttribute>>
    void SetProviderSchemaAttributes(ProviderSchemaAttributesT&& value) { m_providerSchemaAttributesHasBeenSet = true; m_providerSchemaAttributes = std::forward<ProviderSchemaAttributesT>(value); }
    template<typename ProviderSchemaAttributesT = Aws::Vector<ProviderSchemaAttribute>>
    ProviderComponentSchema& WithProviderSchemaAttributes(ProviderSchemaAttributesT&& value) { SetProviderSchemaAttributes(std::forward<ProviderSchemaAttributesT>(value)); return *this;}
    template<typename ProviderSchemaAttributesT = ProviderSchemaAttribute>
    ProviderComponentSchema& AddProviderSchemaAttributes(ProviderSchemaAttributesT&& value) { m_providerSchemaAttributesHasBeenSet = true; m_providerSchemaAttributes.emplace_back(std::forward<ProviderSchemaAttributesT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::Vector<Aws::String>> m_schemas;
    bool m_schemasHasBeenSet = false;

    Aws::Vector<ProviderSchemaAttribute> m_providerSchemaAttributes;
    bool m_providerSchemaAttributesHasBeenSet = false;
  };

} // namespace Model
} // namespace EntityResolution
} // namespace Aws

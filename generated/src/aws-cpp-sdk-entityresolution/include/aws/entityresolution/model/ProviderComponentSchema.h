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
    AWS_ENTITYRESOLUTION_API ProviderComponentSchema();
    AWS_ENTITYRESOLUTION_API ProviderComponentSchema(Aws::Utils::Json::JsonView jsonValue);
    AWS_ENTITYRESOLUTION_API ProviderComponentSchema& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ENTITYRESOLUTION_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The provider schema attributes.</p>
     */
    inline const Aws::Vector<ProviderSchemaAttribute>& GetProviderSchemaAttributes() const{ return m_providerSchemaAttributes; }

    /**
     * <p>The provider schema attributes.</p>
     */
    inline bool ProviderSchemaAttributesHasBeenSet() const { return m_providerSchemaAttributesHasBeenSet; }

    /**
     * <p>The provider schema attributes.</p>
     */
    inline void SetProviderSchemaAttributes(const Aws::Vector<ProviderSchemaAttribute>& value) { m_providerSchemaAttributesHasBeenSet = true; m_providerSchemaAttributes = value; }

    /**
     * <p>The provider schema attributes.</p>
     */
    inline void SetProviderSchemaAttributes(Aws::Vector<ProviderSchemaAttribute>&& value) { m_providerSchemaAttributesHasBeenSet = true; m_providerSchemaAttributes = std::move(value); }

    /**
     * <p>The provider schema attributes.</p>
     */
    inline ProviderComponentSchema& WithProviderSchemaAttributes(const Aws::Vector<ProviderSchemaAttribute>& value) { SetProviderSchemaAttributes(value); return *this;}

    /**
     * <p>The provider schema attributes.</p>
     */
    inline ProviderComponentSchema& WithProviderSchemaAttributes(Aws::Vector<ProviderSchemaAttribute>&& value) { SetProviderSchemaAttributes(std::move(value)); return *this;}

    /**
     * <p>The provider schema attributes.</p>
     */
    inline ProviderComponentSchema& AddProviderSchemaAttributes(const ProviderSchemaAttribute& value) { m_providerSchemaAttributesHasBeenSet = true; m_providerSchemaAttributes.push_back(value); return *this; }

    /**
     * <p>The provider schema attributes.</p>
     */
    inline ProviderComponentSchema& AddProviderSchemaAttributes(ProviderSchemaAttribute&& value) { m_providerSchemaAttributesHasBeenSet = true; m_providerSchemaAttributes.push_back(std::move(value)); return *this; }


    /**
     * <p>Input schema for the provider service.</p>
     */
    inline const Aws::Vector<Aws::Vector<Aws::String>>& GetSchemas() const{ return m_schemas; }

    /**
     * <p>Input schema for the provider service.</p>
     */
    inline bool SchemasHasBeenSet() const { return m_schemasHasBeenSet; }

    /**
     * <p>Input schema for the provider service.</p>
     */
    inline void SetSchemas(const Aws::Vector<Aws::Vector<Aws::String>>& value) { m_schemasHasBeenSet = true; m_schemas = value; }

    /**
     * <p>Input schema for the provider service.</p>
     */
    inline void SetSchemas(Aws::Vector<Aws::Vector<Aws::String>>&& value) { m_schemasHasBeenSet = true; m_schemas = std::move(value); }

    /**
     * <p>Input schema for the provider service.</p>
     */
    inline ProviderComponentSchema& WithSchemas(const Aws::Vector<Aws::Vector<Aws::String>>& value) { SetSchemas(value); return *this;}

    /**
     * <p>Input schema for the provider service.</p>
     */
    inline ProviderComponentSchema& WithSchemas(Aws::Vector<Aws::Vector<Aws::String>>&& value) { SetSchemas(std::move(value)); return *this;}

    /**
     * <p>Input schema for the provider service.</p>
     */
    inline ProviderComponentSchema& AddSchemas(const Aws::Vector<Aws::String>& value) { m_schemasHasBeenSet = true; m_schemas.push_back(value); return *this; }

    /**
     * <p>Input schema for the provider service.</p>
     */
    inline ProviderComponentSchema& AddSchemas(Aws::Vector<Aws::String>&& value) { m_schemasHasBeenSet = true; m_schemas.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<ProviderSchemaAttribute> m_providerSchemaAttributes;
    bool m_providerSchemaAttributesHasBeenSet = false;

    Aws::Vector<Aws::Vector<Aws::String>> m_schemas;
    bool m_schemasHasBeenSet = false;
  };

} // namespace Model
} // namespace EntityResolution
} // namespace Aws

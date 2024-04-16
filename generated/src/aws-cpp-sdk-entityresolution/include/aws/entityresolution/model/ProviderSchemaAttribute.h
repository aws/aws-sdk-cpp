/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/entityresolution/EntityResolution_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/entityresolution/model/SchemaAttributeType.h>
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
   * <p>The provider schema attribute.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/entityresolution-2018-05-10/ProviderSchemaAttribute">AWS
   * API Reference</a></p>
   */
  class ProviderSchemaAttribute
  {
  public:
    AWS_ENTITYRESOLUTION_API ProviderSchemaAttribute();
    AWS_ENTITYRESOLUTION_API ProviderSchemaAttribute(Aws::Utils::Json::JsonView jsonValue);
    AWS_ENTITYRESOLUTION_API ProviderSchemaAttribute& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ENTITYRESOLUTION_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The field name.</p>
     */
    inline const Aws::String& GetFieldName() const{ return m_fieldName; }

    /**
     * <p>The field name.</p>
     */
    inline bool FieldNameHasBeenSet() const { return m_fieldNameHasBeenSet; }

    /**
     * <p>The field name.</p>
     */
    inline void SetFieldName(const Aws::String& value) { m_fieldNameHasBeenSet = true; m_fieldName = value; }

    /**
     * <p>The field name.</p>
     */
    inline void SetFieldName(Aws::String&& value) { m_fieldNameHasBeenSet = true; m_fieldName = std::move(value); }

    /**
     * <p>The field name.</p>
     */
    inline void SetFieldName(const char* value) { m_fieldNameHasBeenSet = true; m_fieldName.assign(value); }

    /**
     * <p>The field name.</p>
     */
    inline ProviderSchemaAttribute& WithFieldName(const Aws::String& value) { SetFieldName(value); return *this;}

    /**
     * <p>The field name.</p>
     */
    inline ProviderSchemaAttribute& WithFieldName(Aws::String&& value) { SetFieldName(std::move(value)); return *this;}

    /**
     * <p>The field name.</p>
     */
    inline ProviderSchemaAttribute& WithFieldName(const char* value) { SetFieldName(value); return *this;}


    /**
     * <p>The hashing attribute of the provider schema.</p>
     */
    inline bool GetHashing() const{ return m_hashing; }

    /**
     * <p>The hashing attribute of the provider schema.</p>
     */
    inline bool HashingHasBeenSet() const { return m_hashingHasBeenSet; }

    /**
     * <p>The hashing attribute of the provider schema.</p>
     */
    inline void SetHashing(bool value) { m_hashingHasBeenSet = true; m_hashing = value; }

    /**
     * <p>The hashing attribute of the provider schema.</p>
     */
    inline ProviderSchemaAttribute& WithHashing(bool value) { SetHashing(value); return *this;}


    /**
     * <p>The sub type of the provider schema attribute.</p>
     */
    inline const Aws::String& GetSubType() const{ return m_subType; }

    /**
     * <p>The sub type of the provider schema attribute.</p>
     */
    inline bool SubTypeHasBeenSet() const { return m_subTypeHasBeenSet; }

    /**
     * <p>The sub type of the provider schema attribute.</p>
     */
    inline void SetSubType(const Aws::String& value) { m_subTypeHasBeenSet = true; m_subType = value; }

    /**
     * <p>The sub type of the provider schema attribute.</p>
     */
    inline void SetSubType(Aws::String&& value) { m_subTypeHasBeenSet = true; m_subType = std::move(value); }

    /**
     * <p>The sub type of the provider schema attribute.</p>
     */
    inline void SetSubType(const char* value) { m_subTypeHasBeenSet = true; m_subType.assign(value); }

    /**
     * <p>The sub type of the provider schema attribute.</p>
     */
    inline ProviderSchemaAttribute& WithSubType(const Aws::String& value) { SetSubType(value); return *this;}

    /**
     * <p>The sub type of the provider schema attribute.</p>
     */
    inline ProviderSchemaAttribute& WithSubType(Aws::String&& value) { SetSubType(std::move(value)); return *this;}

    /**
     * <p>The sub type of the provider schema attribute.</p>
     */
    inline ProviderSchemaAttribute& WithSubType(const char* value) { SetSubType(value); return *this;}


    /**
     * <p>The type of the provider schema attribute.</p>
     */
    inline const SchemaAttributeType& GetType() const{ return m_type; }

    /**
     * <p>The type of the provider schema attribute.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of the provider schema attribute.</p>
     */
    inline void SetType(const SchemaAttributeType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of the provider schema attribute.</p>
     */
    inline void SetType(SchemaAttributeType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of the provider schema attribute.</p>
     */
    inline ProviderSchemaAttribute& WithType(const SchemaAttributeType& value) { SetType(value); return *this;}

    /**
     * <p>The type of the provider schema attribute.</p>
     */
    inline ProviderSchemaAttribute& WithType(SchemaAttributeType&& value) { SetType(std::move(value)); return *this;}

  private:

    Aws::String m_fieldName;
    bool m_fieldNameHasBeenSet = false;

    bool m_hashing;
    bool m_hashingHasBeenSet = false;

    Aws::String m_subType;
    bool m_subTypeHasBeenSet = false;

    SchemaAttributeType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace EntityResolution
} // namespace Aws

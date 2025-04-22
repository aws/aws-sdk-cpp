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
    AWS_ENTITYRESOLUTION_API ProviderSchemaAttribute() = default;
    AWS_ENTITYRESOLUTION_API ProviderSchemaAttribute(Aws::Utils::Json::JsonView jsonValue);
    AWS_ENTITYRESOLUTION_API ProviderSchemaAttribute& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ENTITYRESOLUTION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The field name.</p>
     */
    inline const Aws::String& GetFieldName() const { return m_fieldName; }
    inline bool FieldNameHasBeenSet() const { return m_fieldNameHasBeenSet; }
    template<typename FieldNameT = Aws::String>
    void SetFieldName(FieldNameT&& value) { m_fieldNameHasBeenSet = true; m_fieldName = std::forward<FieldNameT>(value); }
    template<typename FieldNameT = Aws::String>
    ProviderSchemaAttribute& WithFieldName(FieldNameT&& value) { SetFieldName(std::forward<FieldNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the provider schema attribute.</p> <p>LiveRamp supports:
     * <code>NAME</code> | <code>NAME_FIRST</code> | <code>NAME_MIDDLE</code> |
     * <code>NAME_LAST</code> | <code>ADDRESS</code> | <code>ADDRESS_STREET1</code> |
     * <code>ADDRESS_STREET2</code> | <code>ADDRESS_STREET3</code> |
     * <code>ADDRESS_CITY</code> | <code>ADDRESS_STATE</code> |
     * <code>ADDRESS_COUNTRY</code> | <code>ADDRESS_POSTALCODE</code> |
     * <code>PHONE</code> | <code>PHONE_NUMBER</code> | <code>EMAIL_ADDRESS</code> |
     * <code>UNIQUE_ID</code> | <code>PROVIDER_ID</code> </p> <p>TransUnion supports:
     * <code>NAME</code> | <code>NAME_FIRST</code> | <code>NAME_LAST</code> |
     * <code>ADDRESS</code> | <code>ADDRESS_CITY</code> | <code>ADDRESS_STATE</code> |
     * <code>ADDRESS_COUNTRY</code> | <code>ADDRESS_POSTALCODE</code> |
     * <code>PHONE_NUMBER</code> | <code>EMAIL_ADDRESS</code> | <code>UNIQUE_ID</code>
     * | <code>DATE</code> | <code>IPV4</code> | <code>IPV6</code> | <code>MAID</code>
     * </p> <p>Unified ID 2.0 supports: <code>PHONE_NUMBER</code> |
     * <code>EMAIL_ADDRESS</code> | <code>UNIQUE_ID</code> </p>
     */
    inline SchemaAttributeType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(SchemaAttributeType value) { m_typeHasBeenSet = true; m_type = value; }
    inline ProviderSchemaAttribute& WithType(SchemaAttributeType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sub type of the provider schema attribute.</p>
     */
    inline const Aws::String& GetSubType() const { return m_subType; }
    inline bool SubTypeHasBeenSet() const { return m_subTypeHasBeenSet; }
    template<typename SubTypeT = Aws::String>
    void SetSubType(SubTypeT&& value) { m_subTypeHasBeenSet = true; m_subType = std::forward<SubTypeT>(value); }
    template<typename SubTypeT = Aws::String>
    ProviderSchemaAttribute& WithSubType(SubTypeT&& value) { SetSubType(std::forward<SubTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The hashing attribute of the provider schema.</p>
     */
    inline bool GetHashing() const { return m_hashing; }
    inline bool HashingHasBeenSet() const { return m_hashingHasBeenSet; }
    inline void SetHashing(bool value) { m_hashingHasBeenSet = true; m_hashing = value; }
    inline ProviderSchemaAttribute& WithHashing(bool value) { SetHashing(value); return *this;}
    ///@}
  private:

    Aws::String m_fieldName;
    bool m_fieldNameHasBeenSet = false;

    SchemaAttributeType m_type{SchemaAttributeType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::String m_subType;
    bool m_subTypeHasBeenSet = false;

    bool m_hashing{false};
    bool m_hashingHasBeenSet = false;
  };

} // namespace Model
} // namespace EntityResolution
} // namespace Aws

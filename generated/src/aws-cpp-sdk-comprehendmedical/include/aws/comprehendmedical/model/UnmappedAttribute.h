/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehendmedical/ComprehendMedical_EXPORTS.h>
#include <aws/comprehendmedical/model/EntityType.h>
#include <aws/comprehendmedical/model/Attribute.h>
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
namespace ComprehendMedical
{
namespace Model
{

  /**
   * <p>An attribute that was extracted, but Amazon Comprehend Medical was unable to
   * relate to an entity. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/comprehendmedical-2018-10-30/UnmappedAttribute">AWS
   * API Reference</a></p>
   */
  class UnmappedAttribute
  {
  public:
    AWS_COMPREHENDMEDICAL_API UnmappedAttribute() = default;
    AWS_COMPREHENDMEDICAL_API UnmappedAttribute(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHENDMEDICAL_API UnmappedAttribute& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHENDMEDICAL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The type of the unmapped attribute, could be one of the following values:
     * "MEDICATION", "MEDICAL_CONDITION", "ANATOMY", "TEST_AND_TREATMENT_PROCEDURE" or
     * "PROTECTED_HEALTH_INFORMATION". </p>
     */
    inline EntityType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(EntityType value) { m_typeHasBeenSet = true; m_type = value; }
    inline UnmappedAttribute& WithType(EntityType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The specific attribute that has been extracted but not mapped to an entity.
     * </p>
     */
    inline const Attribute& GetAttribute() const { return m_attribute; }
    inline bool AttributeHasBeenSet() const { return m_attributeHasBeenSet; }
    template<typename AttributeT = Attribute>
    void SetAttribute(AttributeT&& value) { m_attributeHasBeenSet = true; m_attribute = std::forward<AttributeT>(value); }
    template<typename AttributeT = Attribute>
    UnmappedAttribute& WithAttribute(AttributeT&& value) { SetAttribute(std::forward<AttributeT>(value)); return *this;}
    ///@}
  private:

    EntityType m_type{EntityType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Attribute m_attribute;
    bool m_attributeHasBeenSet = false;
  };

} // namespace Model
} // namespace ComprehendMedical
} // namespace Aws

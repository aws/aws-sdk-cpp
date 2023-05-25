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
   * <p> An attribute that was extracted, but Comprehend Medical; was unable to
   * relate to an entity. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/comprehendmedical-2018-10-30/UnmappedAttribute">AWS
   * API Reference</a></p>
   */
  class UnmappedAttribute
  {
  public:
    AWS_COMPREHENDMEDICAL_API UnmappedAttribute();
    AWS_COMPREHENDMEDICAL_API UnmappedAttribute(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHENDMEDICAL_API UnmappedAttribute& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHENDMEDICAL_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The type of the unmapped attribute, could be one of the following values:
     * "MEDICATION", "MEDICAL_CONDITION", "ANATOMY", "TEST_AND_TREATMENT_PROCEDURE" or
     * "PROTECTED_HEALTH_INFORMATION". </p>
     */
    inline const EntityType& GetType() const{ return m_type; }

    /**
     * <p> The type of the unmapped attribute, could be one of the following values:
     * "MEDICATION", "MEDICAL_CONDITION", "ANATOMY", "TEST_AND_TREATMENT_PROCEDURE" or
     * "PROTECTED_HEALTH_INFORMATION". </p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p> The type of the unmapped attribute, could be one of the following values:
     * "MEDICATION", "MEDICAL_CONDITION", "ANATOMY", "TEST_AND_TREATMENT_PROCEDURE" or
     * "PROTECTED_HEALTH_INFORMATION". </p>
     */
    inline void SetType(const EntityType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p> The type of the unmapped attribute, could be one of the following values:
     * "MEDICATION", "MEDICAL_CONDITION", "ANATOMY", "TEST_AND_TREATMENT_PROCEDURE" or
     * "PROTECTED_HEALTH_INFORMATION". </p>
     */
    inline void SetType(EntityType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p> The type of the unmapped attribute, could be one of the following values:
     * "MEDICATION", "MEDICAL_CONDITION", "ANATOMY", "TEST_AND_TREATMENT_PROCEDURE" or
     * "PROTECTED_HEALTH_INFORMATION". </p>
     */
    inline UnmappedAttribute& WithType(const EntityType& value) { SetType(value); return *this;}

    /**
     * <p> The type of the unmapped attribute, could be one of the following values:
     * "MEDICATION", "MEDICAL_CONDITION", "ANATOMY", "TEST_AND_TREATMENT_PROCEDURE" or
     * "PROTECTED_HEALTH_INFORMATION". </p>
     */
    inline UnmappedAttribute& WithType(EntityType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p> The specific attribute that has been extracted but not mapped to an entity.
     * </p>
     */
    inline const Attribute& GetAttribute() const{ return m_attribute; }

    /**
     * <p> The specific attribute that has been extracted but not mapped to an entity.
     * </p>
     */
    inline bool AttributeHasBeenSet() const { return m_attributeHasBeenSet; }

    /**
     * <p> The specific attribute that has been extracted but not mapped to an entity.
     * </p>
     */
    inline void SetAttribute(const Attribute& value) { m_attributeHasBeenSet = true; m_attribute = value; }

    /**
     * <p> The specific attribute that has been extracted but not mapped to an entity.
     * </p>
     */
    inline void SetAttribute(Attribute&& value) { m_attributeHasBeenSet = true; m_attribute = std::move(value); }

    /**
     * <p> The specific attribute that has been extracted but not mapped to an entity.
     * </p>
     */
    inline UnmappedAttribute& WithAttribute(const Attribute& value) { SetAttribute(value); return *this;}

    /**
     * <p> The specific attribute that has been extracted but not mapped to an entity.
     * </p>
     */
    inline UnmappedAttribute& WithAttribute(Attribute&& value) { SetAttribute(std::move(value)); return *this;}

  private:

    EntityType m_type;
    bool m_typeHasBeenSet = false;

    Attribute m_attribute;
    bool m_attributeHasBeenSet = false;
  };

} // namespace Model
} // namespace ComprehendMedical
} // namespace Aws

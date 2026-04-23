/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
   * <p> An attribute that we extracted, but were unable to relate to an entity.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/comprehendmedical-2018-10-30/UnmappedAttribute">AWS
   * API Reference</a></p>
   */
  class AWS_COMPREHENDMEDICAL_API UnmappedAttribute
  {
  public:
    UnmappedAttribute();
    UnmappedAttribute(Aws::Utils::Json::JsonView jsonValue);
    UnmappedAttribute& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The type of the attribute, could be one of the following values:
     * "MEDICATION", "MEDICAL_CONDITION", "ANATOMY", "TEST_AND_TREATMENT_PROCEDURE" or
     * "PERSONAL_HEALTH_INFORMATION". </p>
     */
    inline const EntityType& GetType() const{ return m_type; }

    /**
     * <p> The type of the attribute, could be one of the following values:
     * "MEDICATION", "MEDICAL_CONDITION", "ANATOMY", "TEST_AND_TREATMENT_PROCEDURE" or
     * "PERSONAL_HEALTH_INFORMATION". </p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p> The type of the attribute, could be one of the following values:
     * "MEDICATION", "MEDICAL_CONDITION", "ANATOMY", "TEST_AND_TREATMENT_PROCEDURE" or
     * "PERSONAL_HEALTH_INFORMATION". </p>
     */
    inline void SetType(const EntityType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p> The type of the attribute, could be one of the following values:
     * "MEDICATION", "MEDICAL_CONDITION", "ANATOMY", "TEST_AND_TREATMENT_PROCEDURE" or
     * "PERSONAL_HEALTH_INFORMATION". </p>
     */
    inline void SetType(EntityType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p> The type of the attribute, could be one of the following values:
     * "MEDICATION", "MEDICAL_CONDITION", "ANATOMY", "TEST_AND_TREATMENT_PROCEDURE" or
     * "PERSONAL_HEALTH_INFORMATION". </p>
     */
    inline UnmappedAttribute& WithType(const EntityType& value) { SetType(value); return *this;}

    /**
     * <p> The type of the attribute, could be one of the following values:
     * "MEDICATION", "MEDICAL_CONDITION", "ANATOMY", "TEST_AND_TREATMENT_PROCEDURE" or
     * "PERSONAL_HEALTH_INFORMATION". </p>
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
    bool m_typeHasBeenSet;

    Attribute m_attribute;
    bool m_attributeHasBeenSet;
  };

} // namespace Model
} // namespace ComprehendMedical
} // namespace Aws

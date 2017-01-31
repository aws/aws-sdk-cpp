/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/clouddirectory/CloudDirectory_EXPORTS.h>
#include <aws/clouddirectory/model/FacetAttributeType.h>
#include <aws/clouddirectory/model/TypedAttributeValue.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/clouddirectory/model/Rule.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace CloudDirectory
{
namespace Model
{

  /**
   * <p>A facet attribute definition. See <a
   * href="http://docs.aws.amazon.com/directoryservice/latest/admin-guide/cd_advanced.html#attributereferences">Attribute
   * References</a> for more information.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2016-05-10/FacetAttributeDefinition">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDDIRECTORY_API FacetAttributeDefinition
  {
  public:
    FacetAttributeDefinition();
    FacetAttributeDefinition(const Aws::Utils::Json::JsonValue& jsonValue);
    FacetAttributeDefinition& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The type of the attribute.</p>
     */
    inline const FacetAttributeType& GetType() const{ return m_type; }

    /**
     * <p>The type of the attribute.</p>
     */
    inline void SetType(const FacetAttributeType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of the attribute.</p>
     */
    inline void SetType(FacetAttributeType&& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of the attribute.</p>
     */
    inline FacetAttributeDefinition& WithType(const FacetAttributeType& value) { SetType(value); return *this;}

    /**
     * <p>The type of the attribute.</p>
     */
    inline FacetAttributeDefinition& WithType(FacetAttributeType&& value) { SetType(value); return *this;}

    /**
     * <p>The default value of the attribute (if configured).</p>
     */
    inline const TypedAttributeValue& GetDefaultValue() const{ return m_defaultValue; }

    /**
     * <p>The default value of the attribute (if configured).</p>
     */
    inline void SetDefaultValue(const TypedAttributeValue& value) { m_defaultValueHasBeenSet = true; m_defaultValue = value; }

    /**
     * <p>The default value of the attribute (if configured).</p>
     */
    inline void SetDefaultValue(TypedAttributeValue&& value) { m_defaultValueHasBeenSet = true; m_defaultValue = value; }

    /**
     * <p>The default value of the attribute (if configured).</p>
     */
    inline FacetAttributeDefinition& WithDefaultValue(const TypedAttributeValue& value) { SetDefaultValue(value); return *this;}

    /**
     * <p>The default value of the attribute (if configured).</p>
     */
    inline FacetAttributeDefinition& WithDefaultValue(TypedAttributeValue&& value) { SetDefaultValue(value); return *this;}

    /**
     * <p>Whether the attribute is mutable or not.</p>
     */
    inline bool GetIsImmutable() const{ return m_isImmutable; }

    /**
     * <p>Whether the attribute is mutable or not.</p>
     */
    inline void SetIsImmutable(bool value) { m_isImmutableHasBeenSet = true; m_isImmutable = value; }

    /**
     * <p>Whether the attribute is mutable or not.</p>
     */
    inline FacetAttributeDefinition& WithIsImmutable(bool value) { SetIsImmutable(value); return *this;}

    /**
     * <p>Validation rules attached to the attribute definition.</p>
     */
    inline const Aws::Map<Aws::String, Rule>& GetRules() const{ return m_rules; }

    /**
     * <p>Validation rules attached to the attribute definition.</p>
     */
    inline void SetRules(const Aws::Map<Aws::String, Rule>& value) { m_rulesHasBeenSet = true; m_rules = value; }

    /**
     * <p>Validation rules attached to the attribute definition.</p>
     */
    inline void SetRules(Aws::Map<Aws::String, Rule>&& value) { m_rulesHasBeenSet = true; m_rules = value; }

    /**
     * <p>Validation rules attached to the attribute definition.</p>
     */
    inline FacetAttributeDefinition& WithRules(const Aws::Map<Aws::String, Rule>& value) { SetRules(value); return *this;}

    /**
     * <p>Validation rules attached to the attribute definition.</p>
     */
    inline FacetAttributeDefinition& WithRules(Aws::Map<Aws::String, Rule>&& value) { SetRules(value); return *this;}

    /**
     * <p>Validation rules attached to the attribute definition.</p>
     */
    inline FacetAttributeDefinition& AddRules(const Aws::String& key, const Rule& value) { m_rulesHasBeenSet = true; m_rules[key] = value; return *this; }

    /**
     * <p>Validation rules attached to the attribute definition.</p>
     */
    inline FacetAttributeDefinition& AddRules(Aws::String&& key, const Rule& value) { m_rulesHasBeenSet = true; m_rules[key] = value; return *this; }

    /**
     * <p>Validation rules attached to the attribute definition.</p>
     */
    inline FacetAttributeDefinition& AddRules(const Aws::String& key, Rule&& value) { m_rulesHasBeenSet = true; m_rules[key] = value; return *this; }

    /**
     * <p>Validation rules attached to the attribute definition.</p>
     */
    inline FacetAttributeDefinition& AddRules(Aws::String&& key, Rule&& value) { m_rulesHasBeenSet = true; m_rules[key] = value; return *this; }

    /**
     * <p>Validation rules attached to the attribute definition.</p>
     */
    inline FacetAttributeDefinition& AddRules(const char* key, Rule&& value) { m_rulesHasBeenSet = true; m_rules[key] = value; return *this; }

    /**
     * <p>Validation rules attached to the attribute definition.</p>
     */
    inline FacetAttributeDefinition& AddRules(const char* key, const Rule& value) { m_rulesHasBeenSet = true; m_rules[key] = value; return *this; }

  private:
    FacetAttributeType m_type;
    bool m_typeHasBeenSet;
    TypedAttributeValue m_defaultValue;
    bool m_defaultValueHasBeenSet;
    bool m_isImmutable;
    bool m_isImmutableHasBeenSet;
    Aws::Map<Aws::String, Rule> m_rules;
    bool m_rulesHasBeenSet;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/clouddirectory/CloudDirectory_EXPORTS.h>
#include <aws/clouddirectory/model/FacetAttributeType.h>
#include <aws/clouddirectory/model/TypedAttributeValue.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/clouddirectory/model/Rule.h>
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
namespace CloudDirectory
{
namespace Model
{

  /**
   * <p>A facet attribute definition. See <a
   * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/schemas_attributereferences.html">Attribute
   * References</a> for more information.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/FacetAttributeDefinition">AWS
   * API Reference</a></p>
   */
  class FacetAttributeDefinition
  {
  public:
    AWS_CLOUDDIRECTORY_API FacetAttributeDefinition();
    AWS_CLOUDDIRECTORY_API FacetAttributeDefinition(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API FacetAttributeDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of the attribute.</p>
     */
    inline const FacetAttributeType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const FacetAttributeType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(FacetAttributeType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline FacetAttributeDefinition& WithType(const FacetAttributeType& value) { SetType(value); return *this;}
    inline FacetAttributeDefinition& WithType(FacetAttributeType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default value of the attribute (if configured).</p>
     */
    inline const TypedAttributeValue& GetDefaultValue() const{ return m_defaultValue; }
    inline bool DefaultValueHasBeenSet() const { return m_defaultValueHasBeenSet; }
    inline void SetDefaultValue(const TypedAttributeValue& value) { m_defaultValueHasBeenSet = true; m_defaultValue = value; }
    inline void SetDefaultValue(TypedAttributeValue&& value) { m_defaultValueHasBeenSet = true; m_defaultValue = std::move(value); }
    inline FacetAttributeDefinition& WithDefaultValue(const TypedAttributeValue& value) { SetDefaultValue(value); return *this;}
    inline FacetAttributeDefinition& WithDefaultValue(TypedAttributeValue&& value) { SetDefaultValue(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the attribute is mutable or not.</p>
     */
    inline bool GetIsImmutable() const{ return m_isImmutable; }
    inline bool IsImmutableHasBeenSet() const { return m_isImmutableHasBeenSet; }
    inline void SetIsImmutable(bool value) { m_isImmutableHasBeenSet = true; m_isImmutable = value; }
    inline FacetAttributeDefinition& WithIsImmutable(bool value) { SetIsImmutable(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Validation rules attached to the attribute definition.</p>
     */
    inline const Aws::Map<Aws::String, Rule>& GetRules() const{ return m_rules; }
    inline bool RulesHasBeenSet() const { return m_rulesHasBeenSet; }
    inline void SetRules(const Aws::Map<Aws::String, Rule>& value) { m_rulesHasBeenSet = true; m_rules = value; }
    inline void SetRules(Aws::Map<Aws::String, Rule>&& value) { m_rulesHasBeenSet = true; m_rules = std::move(value); }
    inline FacetAttributeDefinition& WithRules(const Aws::Map<Aws::String, Rule>& value) { SetRules(value); return *this;}
    inline FacetAttributeDefinition& WithRules(Aws::Map<Aws::String, Rule>&& value) { SetRules(std::move(value)); return *this;}
    inline FacetAttributeDefinition& AddRules(const Aws::String& key, const Rule& value) { m_rulesHasBeenSet = true; m_rules.emplace(key, value); return *this; }
    inline FacetAttributeDefinition& AddRules(Aws::String&& key, const Rule& value) { m_rulesHasBeenSet = true; m_rules.emplace(std::move(key), value); return *this; }
    inline FacetAttributeDefinition& AddRules(const Aws::String& key, Rule&& value) { m_rulesHasBeenSet = true; m_rules.emplace(key, std::move(value)); return *this; }
    inline FacetAttributeDefinition& AddRules(Aws::String&& key, Rule&& value) { m_rulesHasBeenSet = true; m_rules.emplace(std::move(key), std::move(value)); return *this; }
    inline FacetAttributeDefinition& AddRules(const char* key, Rule&& value) { m_rulesHasBeenSet = true; m_rules.emplace(key, std::move(value)); return *this; }
    inline FacetAttributeDefinition& AddRules(const char* key, const Rule& value) { m_rulesHasBeenSet = true; m_rules.emplace(key, value); return *this; }
    ///@}
  private:

    FacetAttributeType m_type;
    bool m_typeHasBeenSet = false;

    TypedAttributeValue m_defaultValue;
    bool m_defaultValueHasBeenSet = false;

    bool m_isImmutable;
    bool m_isImmutableHasBeenSet = false;

    Aws::Map<Aws::String, Rule> m_rules;
    bool m_rulesHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/clouddirectory/CloudDirectory_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/clouddirectory/model/FacetAttributeType.h>
#include <aws/clouddirectory/model/TypedAttributeValue.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/clouddirectory/model/RequiredAttributeBehavior.h>
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
   * <p>A typed link attribute definition.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/TypedLinkAttributeDefinition">AWS
   * API Reference</a></p>
   */
  class TypedLinkAttributeDefinition
  {
  public:
    AWS_CLOUDDIRECTORY_API TypedLinkAttributeDefinition();
    AWS_CLOUDDIRECTORY_API TypedLinkAttributeDefinition(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API TypedLinkAttributeDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique name of the typed link attribute.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The unique name of the typed link attribute.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The unique name of the typed link attribute.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The unique name of the typed link attribute.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The unique name of the typed link attribute.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The unique name of the typed link attribute.</p>
     */
    inline TypedLinkAttributeDefinition& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The unique name of the typed link attribute.</p>
     */
    inline TypedLinkAttributeDefinition& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The unique name of the typed link attribute.</p>
     */
    inline TypedLinkAttributeDefinition& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The type of the attribute.</p>
     */
    inline const FacetAttributeType& GetType() const{ return m_type; }

    /**
     * <p>The type of the attribute.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of the attribute.</p>
     */
    inline void SetType(const FacetAttributeType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of the attribute.</p>
     */
    inline void SetType(FacetAttributeType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of the attribute.</p>
     */
    inline TypedLinkAttributeDefinition& WithType(const FacetAttributeType& value) { SetType(value); return *this;}

    /**
     * <p>The type of the attribute.</p>
     */
    inline TypedLinkAttributeDefinition& WithType(FacetAttributeType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The default value of the attribute (if configured).</p>
     */
    inline const TypedAttributeValue& GetDefaultValue() const{ return m_defaultValue; }

    /**
     * <p>The default value of the attribute (if configured).</p>
     */
    inline bool DefaultValueHasBeenSet() const { return m_defaultValueHasBeenSet; }

    /**
     * <p>The default value of the attribute (if configured).</p>
     */
    inline void SetDefaultValue(const TypedAttributeValue& value) { m_defaultValueHasBeenSet = true; m_defaultValue = value; }

    /**
     * <p>The default value of the attribute (if configured).</p>
     */
    inline void SetDefaultValue(TypedAttributeValue&& value) { m_defaultValueHasBeenSet = true; m_defaultValue = std::move(value); }

    /**
     * <p>The default value of the attribute (if configured).</p>
     */
    inline TypedLinkAttributeDefinition& WithDefaultValue(const TypedAttributeValue& value) { SetDefaultValue(value); return *this;}

    /**
     * <p>The default value of the attribute (if configured).</p>
     */
    inline TypedLinkAttributeDefinition& WithDefaultValue(TypedAttributeValue&& value) { SetDefaultValue(std::move(value)); return *this;}


    /**
     * <p>Whether the attribute is mutable or not.</p>
     */
    inline bool GetIsImmutable() const{ return m_isImmutable; }

    /**
     * <p>Whether the attribute is mutable or not.</p>
     */
    inline bool IsImmutableHasBeenSet() const { return m_isImmutableHasBeenSet; }

    /**
     * <p>Whether the attribute is mutable or not.</p>
     */
    inline void SetIsImmutable(bool value) { m_isImmutableHasBeenSet = true; m_isImmutable = value; }

    /**
     * <p>Whether the attribute is mutable or not.</p>
     */
    inline TypedLinkAttributeDefinition& WithIsImmutable(bool value) { SetIsImmutable(value); return *this;}


    /**
     * <p>Validation rules that are attached to the attribute definition.</p>
     */
    inline const Aws::Map<Aws::String, Rule>& GetRules() const{ return m_rules; }

    /**
     * <p>Validation rules that are attached to the attribute definition.</p>
     */
    inline bool RulesHasBeenSet() const { return m_rulesHasBeenSet; }

    /**
     * <p>Validation rules that are attached to the attribute definition.</p>
     */
    inline void SetRules(const Aws::Map<Aws::String, Rule>& value) { m_rulesHasBeenSet = true; m_rules = value; }

    /**
     * <p>Validation rules that are attached to the attribute definition.</p>
     */
    inline void SetRules(Aws::Map<Aws::String, Rule>&& value) { m_rulesHasBeenSet = true; m_rules = std::move(value); }

    /**
     * <p>Validation rules that are attached to the attribute definition.</p>
     */
    inline TypedLinkAttributeDefinition& WithRules(const Aws::Map<Aws::String, Rule>& value) { SetRules(value); return *this;}

    /**
     * <p>Validation rules that are attached to the attribute definition.</p>
     */
    inline TypedLinkAttributeDefinition& WithRules(Aws::Map<Aws::String, Rule>&& value) { SetRules(std::move(value)); return *this;}

    /**
     * <p>Validation rules that are attached to the attribute definition.</p>
     */
    inline TypedLinkAttributeDefinition& AddRules(const Aws::String& key, const Rule& value) { m_rulesHasBeenSet = true; m_rules.emplace(key, value); return *this; }

    /**
     * <p>Validation rules that are attached to the attribute definition.</p>
     */
    inline TypedLinkAttributeDefinition& AddRules(Aws::String&& key, const Rule& value) { m_rulesHasBeenSet = true; m_rules.emplace(std::move(key), value); return *this; }

    /**
     * <p>Validation rules that are attached to the attribute definition.</p>
     */
    inline TypedLinkAttributeDefinition& AddRules(const Aws::String& key, Rule&& value) { m_rulesHasBeenSet = true; m_rules.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Validation rules that are attached to the attribute definition.</p>
     */
    inline TypedLinkAttributeDefinition& AddRules(Aws::String&& key, Rule&& value) { m_rulesHasBeenSet = true; m_rules.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Validation rules that are attached to the attribute definition.</p>
     */
    inline TypedLinkAttributeDefinition& AddRules(const char* key, Rule&& value) { m_rulesHasBeenSet = true; m_rules.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Validation rules that are attached to the attribute definition.</p>
     */
    inline TypedLinkAttributeDefinition& AddRules(const char* key, const Rule& value) { m_rulesHasBeenSet = true; m_rules.emplace(key, value); return *this; }


    /**
     * <p>The required behavior of the <code>TypedLinkAttributeDefinition</code>.</p>
     */
    inline const RequiredAttributeBehavior& GetRequiredBehavior() const{ return m_requiredBehavior; }

    /**
     * <p>The required behavior of the <code>TypedLinkAttributeDefinition</code>.</p>
     */
    inline bool RequiredBehaviorHasBeenSet() const { return m_requiredBehaviorHasBeenSet; }

    /**
     * <p>The required behavior of the <code>TypedLinkAttributeDefinition</code>.</p>
     */
    inline void SetRequiredBehavior(const RequiredAttributeBehavior& value) { m_requiredBehaviorHasBeenSet = true; m_requiredBehavior = value; }

    /**
     * <p>The required behavior of the <code>TypedLinkAttributeDefinition</code>.</p>
     */
    inline void SetRequiredBehavior(RequiredAttributeBehavior&& value) { m_requiredBehaviorHasBeenSet = true; m_requiredBehavior = std::move(value); }

    /**
     * <p>The required behavior of the <code>TypedLinkAttributeDefinition</code>.</p>
     */
    inline TypedLinkAttributeDefinition& WithRequiredBehavior(const RequiredAttributeBehavior& value) { SetRequiredBehavior(value); return *this;}

    /**
     * <p>The required behavior of the <code>TypedLinkAttributeDefinition</code>.</p>
     */
    inline TypedLinkAttributeDefinition& WithRequiredBehavior(RequiredAttributeBehavior&& value) { SetRequiredBehavior(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    FacetAttributeType m_type;
    bool m_typeHasBeenSet = false;

    TypedAttributeValue m_defaultValue;
    bool m_defaultValueHasBeenSet = false;

    bool m_isImmutable;
    bool m_isImmutableHasBeenSet = false;

    Aws::Map<Aws::String, Rule> m_rules;
    bool m_rulesHasBeenSet = false;

    RequiredAttributeBehavior m_requiredBehavior;
    bool m_requiredBehaviorHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws

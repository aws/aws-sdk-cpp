﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codepipeline/CodePipeline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codepipeline/model/ActionConfigurationPropertyType.h>
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
namespace CodePipeline
{
namespace Model
{

  /**
   * <p>Represents information about an action configuration property.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/ActionConfigurationProperty">AWS
   * API Reference</a></p>
   */
  class ActionConfigurationProperty
  {
  public:
    AWS_CODEPIPELINE_API ActionConfigurationProperty() = default;
    AWS_CODEPIPELINE_API ActionConfigurationProperty(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API ActionConfigurationProperty& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the action configuration property.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    ActionConfigurationProperty& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the configuration property is a required value.</p>
     */
    inline bool GetRequired() const { return m_required; }
    inline bool RequiredHasBeenSet() const { return m_requiredHasBeenSet; }
    inline void SetRequired(bool value) { m_requiredHasBeenSet = true; m_required = value; }
    inline ActionConfigurationProperty& WithRequired(bool value) { SetRequired(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the configuration property is a key.</p>
     */
    inline bool GetKey() const { return m_key; }
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
    inline void SetKey(bool value) { m_keyHasBeenSet = true; m_key = value; }
    inline ActionConfigurationProperty& WithKey(bool value) { SetKey(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the configuration property is secret. Secrets are hidden from all
     * calls except for <code>GetJobDetails</code>,
     * <code>GetThirdPartyJobDetails</code>, <code>PollForJobs</code>, and
     * <code>PollForThirdPartyJobs</code>.</p> <p>When updating a pipeline, passing * *
     * * * * without changing any other values of the action preserves the previous
     * value of the secret.</p>
     */
    inline bool GetSecret() const { return m_secret; }
    inline bool SecretHasBeenSet() const { return m_secretHasBeenSet; }
    inline void SetSecret(bool value) { m_secretHasBeenSet = true; m_secret = value; }
    inline ActionConfigurationProperty& WithSecret(bool value) { SetSecret(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates that the property is used with <code>PollForJobs</code>. When
     * creating a custom action, an action can have up to one queryable property. If it
     * has one, that property must be both required and not secret.</p> <p>If you
     * create a pipeline with a custom action type, and that custom action contains a
     * queryable property, the value for that configuration property is subject to
     * other restrictions. The value must be less than or equal to twenty (20)
     * characters. The value can contain only alphanumeric characters, underscores, and
     * hyphens.</p>
     */
    inline bool GetQueryable() const { return m_queryable; }
    inline bool QueryableHasBeenSet() const { return m_queryableHasBeenSet; }
    inline void SetQueryable(bool value) { m_queryableHasBeenSet = true; m_queryable = value; }
    inline ActionConfigurationProperty& WithQueryable(bool value) { SetQueryable(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the action configuration property that is displayed to
     * users.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    ActionConfigurationProperty& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the configuration property.</p>
     */
    inline ActionConfigurationPropertyType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(ActionConfigurationPropertyType value) { m_typeHasBeenSet = true; m_type = value; }
    inline ActionConfigurationProperty& WithType(ActionConfigurationPropertyType value) { SetType(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    bool m_required{false};
    bool m_requiredHasBeenSet = false;

    bool m_key{false};
    bool m_keyHasBeenSet = false;

    bool m_secret{false};
    bool m_secretHasBeenSet = false;

    bool m_queryable{false};
    bool m_queryableHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    ActionConfigurationPropertyType m_type{ActionConfigurationPropertyType::NOT_SET};
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws

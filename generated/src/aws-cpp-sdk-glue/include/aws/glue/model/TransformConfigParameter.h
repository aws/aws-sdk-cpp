/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/ParamType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace Glue
{
namespace Model
{

  /**
   * <p>Specifies the parameters in the config file of the dynamic
   * transform.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/TransformConfigParameter">AWS
   * API Reference</a></p>
   */
  class TransformConfigParameter
  {
  public:
    AWS_GLUE_API TransformConfigParameter();
    AWS_GLUE_API TransformConfigParameter(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API TransformConfigParameter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies the name of the parameter in the config file of the dynamic
     * transform.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline TransformConfigParameter& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline TransformConfigParameter& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline TransformConfigParameter& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the parameter type in the config file of the dynamic transform.</p>
     */
    inline const ParamType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const ParamType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(ParamType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline TransformConfigParameter& WithType(const ParamType& value) { SetType(value); return *this;}
    inline TransformConfigParameter& WithType(ParamType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the validation rule in the config file of the dynamic
     * transform.</p>
     */
    inline const Aws::String& GetValidationRule() const{ return m_validationRule; }
    inline bool ValidationRuleHasBeenSet() const { return m_validationRuleHasBeenSet; }
    inline void SetValidationRule(const Aws::String& value) { m_validationRuleHasBeenSet = true; m_validationRule = value; }
    inline void SetValidationRule(Aws::String&& value) { m_validationRuleHasBeenSet = true; m_validationRule = std::move(value); }
    inline void SetValidationRule(const char* value) { m_validationRuleHasBeenSet = true; m_validationRule.assign(value); }
    inline TransformConfigParameter& WithValidationRule(const Aws::String& value) { SetValidationRule(value); return *this;}
    inline TransformConfigParameter& WithValidationRule(Aws::String&& value) { SetValidationRule(std::move(value)); return *this;}
    inline TransformConfigParameter& WithValidationRule(const char* value) { SetValidationRule(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the validation message in the config file of the dynamic
     * transform.</p>
     */
    inline const Aws::String& GetValidationMessage() const{ return m_validationMessage; }
    inline bool ValidationMessageHasBeenSet() const { return m_validationMessageHasBeenSet; }
    inline void SetValidationMessage(const Aws::String& value) { m_validationMessageHasBeenSet = true; m_validationMessage = value; }
    inline void SetValidationMessage(Aws::String&& value) { m_validationMessageHasBeenSet = true; m_validationMessage = std::move(value); }
    inline void SetValidationMessage(const char* value) { m_validationMessageHasBeenSet = true; m_validationMessage.assign(value); }
    inline TransformConfigParameter& WithValidationMessage(const Aws::String& value) { SetValidationMessage(value); return *this;}
    inline TransformConfigParameter& WithValidationMessage(Aws::String&& value) { SetValidationMessage(std::move(value)); return *this;}
    inline TransformConfigParameter& WithValidationMessage(const char* value) { SetValidationMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the value of the parameter in the config file of the dynamic
     * transform.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValue() const{ return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    inline void SetValue(const Aws::Vector<Aws::String>& value) { m_valueHasBeenSet = true; m_value = value; }
    inline void SetValue(Aws::Vector<Aws::String>&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }
    inline TransformConfigParameter& WithValue(const Aws::Vector<Aws::String>& value) { SetValue(value); return *this;}
    inline TransformConfigParameter& WithValue(Aws::Vector<Aws::String>&& value) { SetValue(std::move(value)); return *this;}
    inline TransformConfigParameter& AddValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value.push_back(value); return *this; }
    inline TransformConfigParameter& AddValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value.push_back(std::move(value)); return *this; }
    inline TransformConfigParameter& AddValue(const char* value) { m_valueHasBeenSet = true; m_value.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies the list type of the parameter in the config file of the dynamic
     * transform.</p>
     */
    inline const ParamType& GetListType() const{ return m_listType; }
    inline bool ListTypeHasBeenSet() const { return m_listTypeHasBeenSet; }
    inline void SetListType(const ParamType& value) { m_listTypeHasBeenSet = true; m_listType = value; }
    inline void SetListType(ParamType&& value) { m_listTypeHasBeenSet = true; m_listType = std::move(value); }
    inline TransformConfigParameter& WithListType(const ParamType& value) { SetListType(value); return *this;}
    inline TransformConfigParameter& WithListType(ParamType&& value) { SetListType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the parameter is optional or not in the config file of the
     * dynamic transform.</p>
     */
    inline bool GetIsOptional() const{ return m_isOptional; }
    inline bool IsOptionalHasBeenSet() const { return m_isOptionalHasBeenSet; }
    inline void SetIsOptional(bool value) { m_isOptionalHasBeenSet = true; m_isOptional = value; }
    inline TransformConfigParameter& WithIsOptional(bool value) { SetIsOptional(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    ParamType m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_validationRule;
    bool m_validationRuleHasBeenSet = false;

    Aws::String m_validationMessage;
    bool m_validationMessageHasBeenSet = false;

    Aws::Vector<Aws::String> m_value;
    bool m_valueHasBeenSet = false;

    ParamType m_listType;
    bool m_listTypeHasBeenSet = false;

    bool m_isOptional;
    bool m_isOptionalHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws

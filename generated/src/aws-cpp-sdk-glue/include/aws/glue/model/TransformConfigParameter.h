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
    AWS_GLUE_API TransformConfigParameter() = default;
    AWS_GLUE_API TransformConfigParameter(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API TransformConfigParameter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies the name of the parameter in the config file of the dynamic
     * transform.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    TransformConfigParameter& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the parameter type in the config file of the dynamic transform.</p>
     */
    inline ParamType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(ParamType value) { m_typeHasBeenSet = true; m_type = value; }
    inline TransformConfigParameter& WithType(ParamType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the validation rule in the config file of the dynamic
     * transform.</p>
     */
    inline const Aws::String& GetValidationRule() const { return m_validationRule; }
    inline bool ValidationRuleHasBeenSet() const { return m_validationRuleHasBeenSet; }
    template<typename ValidationRuleT = Aws::String>
    void SetValidationRule(ValidationRuleT&& value) { m_validationRuleHasBeenSet = true; m_validationRule = std::forward<ValidationRuleT>(value); }
    template<typename ValidationRuleT = Aws::String>
    TransformConfigParameter& WithValidationRule(ValidationRuleT&& value) { SetValidationRule(std::forward<ValidationRuleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the validation message in the config file of the dynamic
     * transform.</p>
     */
    inline const Aws::String& GetValidationMessage() const { return m_validationMessage; }
    inline bool ValidationMessageHasBeenSet() const { return m_validationMessageHasBeenSet; }
    template<typename ValidationMessageT = Aws::String>
    void SetValidationMessage(ValidationMessageT&& value) { m_validationMessageHasBeenSet = true; m_validationMessage = std::forward<ValidationMessageT>(value); }
    template<typename ValidationMessageT = Aws::String>
    TransformConfigParameter& WithValidationMessage(ValidationMessageT&& value) { SetValidationMessage(std::forward<ValidationMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the value of the parameter in the config file of the dynamic
     * transform.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    template<typename ValueT = Aws::Vector<Aws::String>>
    void SetValue(ValueT&& value) { m_valueHasBeenSet = true; m_value = std::forward<ValueT>(value); }
    template<typename ValueT = Aws::Vector<Aws::String>>
    TransformConfigParameter& WithValue(ValueT&& value) { SetValue(std::forward<ValueT>(value)); return *this;}
    template<typename ValueT = Aws::String>
    TransformConfigParameter& AddValue(ValueT&& value) { m_valueHasBeenSet = true; m_value.emplace_back(std::forward<ValueT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies the list type of the parameter in the config file of the dynamic
     * transform.</p>
     */
    inline ParamType GetListType() const { return m_listType; }
    inline bool ListTypeHasBeenSet() const { return m_listTypeHasBeenSet; }
    inline void SetListType(ParamType value) { m_listTypeHasBeenSet = true; m_listType = value; }
    inline TransformConfigParameter& WithListType(ParamType value) { SetListType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the parameter is optional or not in the config file of the
     * dynamic transform.</p>
     */
    inline bool GetIsOptional() const { return m_isOptional; }
    inline bool IsOptionalHasBeenSet() const { return m_isOptionalHasBeenSet; }
    inline void SetIsOptional(bool value) { m_isOptionalHasBeenSet = true; m_isOptional = value; }
    inline TransformConfigParameter& WithIsOptional(bool value) { SetIsOptional(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    ParamType m_type{ParamType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::String m_validationRule;
    bool m_validationRuleHasBeenSet = false;

    Aws::String m_validationMessage;
    bool m_validationMessageHasBeenSet = false;

    Aws::Vector<Aws::String> m_value;
    bool m_valueHasBeenSet = false;

    ParamType m_listType{ParamType::NOT_SET};
    bool m_listTypeHasBeenSet = false;

    bool m_isOptional{false};
    bool m_isOptionalHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws

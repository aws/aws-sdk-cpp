/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/NumericQuestionPropertyValueAutomation.h>
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
namespace Connect
{
namespace Model
{

  /**
   * <p>Information about the automation configuration in numeric
   * questions.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/EvaluationFormNumericQuestionAutomation">AWS
   * API Reference</a></p>
   */
  class EvaluationFormNumericQuestionAutomation
  {
  public:
    AWS_CONNECT_API EvaluationFormNumericQuestionAutomation() = default;
    AWS_CONNECT_API EvaluationFormNumericQuestionAutomation(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API EvaluationFormNumericQuestionAutomation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The property value of the automation.</p>
     */
    inline const NumericQuestionPropertyValueAutomation& GetPropertyValue() const { return m_propertyValue; }
    inline bool PropertyValueHasBeenSet() const { return m_propertyValueHasBeenSet; }
    template<typename PropertyValueT = NumericQuestionPropertyValueAutomation>
    void SetPropertyValue(PropertyValueT&& value) { m_propertyValueHasBeenSet = true; m_propertyValue = std::forward<PropertyValueT>(value); }
    template<typename PropertyValueT = NumericQuestionPropertyValueAutomation>
    EvaluationFormNumericQuestionAutomation& WithPropertyValue(PropertyValueT&& value) { SetPropertyValue(std::forward<PropertyValueT>(value)); return *this;}
    ///@}
  private:

    NumericQuestionPropertyValueAutomation m_propertyValue;
    bool m_propertyValueHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws

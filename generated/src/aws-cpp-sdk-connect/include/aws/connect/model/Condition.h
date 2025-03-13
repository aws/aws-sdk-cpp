/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/StringCondition.h>
#include <aws/connect/model/NumberCondition.h>
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
   * <p>A leaf node condition which can be used to specify a ProficiencyName,
   * ProficiencyValue and ProficiencyLimit.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/Condition">AWS
   * API Reference</a></p>
   */
  class Condition
  {
  public:
    AWS_CONNECT_API Condition() = default;
    AWS_CONNECT_API Condition(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Condition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A leaf node condition which can be used to specify a string condition.</p>
     *  <p>The currently supported values for <code>FieldName</code> are
     * <code>name</code> and&#x2028; <code>value</code>.</p> 
     */
    inline const StringCondition& GetStringCondition() const { return m_stringCondition; }
    inline bool StringConditionHasBeenSet() const { return m_stringConditionHasBeenSet; }
    template<typename StringConditionT = StringCondition>
    void SetStringCondition(StringConditionT&& value) { m_stringConditionHasBeenSet = true; m_stringCondition = std::forward<StringConditionT>(value); }
    template<typename StringConditionT = StringCondition>
    Condition& WithStringCondition(StringConditionT&& value) { SetStringCondition(std::forward<StringConditionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A leaf node condition which can be used to specify a numeric condition.</p>
     */
    inline const NumberCondition& GetNumberCondition() const { return m_numberCondition; }
    inline bool NumberConditionHasBeenSet() const { return m_numberConditionHasBeenSet; }
    template<typename NumberConditionT = NumberCondition>
    void SetNumberCondition(NumberConditionT&& value) { m_numberConditionHasBeenSet = true; m_numberCondition = std::forward<NumberConditionT>(value); }
    template<typename NumberConditionT = NumberCondition>
    Condition& WithNumberCondition(NumberConditionT&& value) { SetNumberCondition(std::forward<NumberConditionT>(value)); return *this;}
    ///@}
  private:

    StringCondition m_stringCondition;
    bool m_stringConditionHasBeenSet = false;

    NumberCondition m_numberCondition;
    bool m_numberConditionHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws

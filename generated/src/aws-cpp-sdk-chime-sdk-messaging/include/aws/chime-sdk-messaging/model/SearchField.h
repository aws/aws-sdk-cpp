/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-messaging/ChimeSDKMessaging_EXPORTS.h>
#include <aws/chime-sdk-messaging/model/SearchFieldKey.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/chime-sdk-messaging/model/SearchFieldOperator.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace ChimeSDKMessaging
{
namespace Model
{

  /**
   * <p>A <code>Field</code> of the channel that you want to search.</p> 
   * <p>This operation isn't supported for <code>AppInstanceUsers</code> with a large
   * number of memberships.</p> <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/SearchField">AWS
   * API Reference</a></p>
   */
  class SearchField
  {
  public:
    AWS_CHIMESDKMESSAGING_API SearchField() = default;
    AWS_CHIMESDKMESSAGING_API SearchField(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMESSAGING_API SearchField& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMESSAGING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An <code>enum</code> value that indicates the key to search the channel on.
     * <code>MEMBERS</code> allows you to search channels based on memberships. You can
     * use it with the <code>EQUALS</code> operator to get channels whose memberships
     * are equal to the specified values, and with the <code>INCLUDES</code> operator
     * to get channels whose memberships include the specified values.</p>
     */
    inline SearchFieldKey GetKey() const { return m_key; }
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
    inline void SetKey(SearchFieldKey value) { m_keyHasBeenSet = true; m_key = value; }
    inline SearchField& WithKey(SearchFieldKey value) { SetKey(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The values that you want to search for, a list of strings. The values must be
     * <code>AppInstanceUserArns</code> specified as a list of strings.</p> 
     * <p>This operation isn't supported for <code>AppInstanceUsers</code> with a large
     * number of memberships.</p> 
     */
    inline const Aws::Vector<Aws::String>& GetValues() const { return m_values; }
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }
    template<typename ValuesT = Aws::Vector<Aws::String>>
    void SetValues(ValuesT&& value) { m_valuesHasBeenSet = true; m_values = std::forward<ValuesT>(value); }
    template<typename ValuesT = Aws::Vector<Aws::String>>
    SearchField& WithValues(ValuesT&& value) { SetValues(std::forward<ValuesT>(value)); return *this;}
    template<typename ValuesT = Aws::String>
    SearchField& AddValues(ValuesT&& value) { m_valuesHasBeenSet = true; m_values.emplace_back(std::forward<ValuesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The operator used to compare field values, currently <code>EQUALS</code> or
     * <code>INCLUDES</code>. Use the <code>EQUALS</code> operator to find channels
     * whose memberships equal the specified values. Use the <code>INCLUDES</code>
     * operator to find channels whose memberships include the specified values.</p>
     */
    inline SearchFieldOperator GetOperator() const { return m_operator; }
    inline bool OperatorHasBeenSet() const { return m_operatorHasBeenSet; }
    inline void SetOperator(SearchFieldOperator value) { m_operatorHasBeenSet = true; m_operator = value; }
    inline SearchField& WithOperator(SearchFieldOperator value) { SetOperator(value); return *this;}
    ///@}
  private:

    SearchFieldKey m_key{SearchFieldKey::NOT_SET};
    bool m_keyHasBeenSet = false;

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet = false;

    SearchFieldOperator m_operator{SearchFieldOperator::NOT_SET};
    bool m_operatorHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMessaging
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-messaging/ChimeSDKMessaging_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>A list of message attribute values.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/MessageAttributeValue">AWS
   * API Reference</a></p>
   */
  class MessageAttributeValue
  {
  public:
    AWS_CHIMESDKMESSAGING_API MessageAttributeValue() = default;
    AWS_CHIMESDKMESSAGING_API MessageAttributeValue(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMESSAGING_API MessageAttributeValue& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMESSAGING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The strings in a message attribute value.</p>
     */
    inline const Aws::Vector<Aws::String>& GetStringValues() const { return m_stringValues; }
    inline bool StringValuesHasBeenSet() const { return m_stringValuesHasBeenSet; }
    template<typename StringValuesT = Aws::Vector<Aws::String>>
    void SetStringValues(StringValuesT&& value) { m_stringValuesHasBeenSet = true; m_stringValues = std::forward<StringValuesT>(value); }
    template<typename StringValuesT = Aws::Vector<Aws::String>>
    MessageAttributeValue& WithStringValues(StringValuesT&& value) { SetStringValues(std::forward<StringValuesT>(value)); return *this;}
    template<typename StringValuesT = Aws::String>
    MessageAttributeValue& AddStringValues(StringValuesT&& value) { m_stringValuesHasBeenSet = true; m_stringValues.emplace_back(std::forward<StringValuesT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_stringValues;
    bool m_stringValuesHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMessaging
} // namespace Aws

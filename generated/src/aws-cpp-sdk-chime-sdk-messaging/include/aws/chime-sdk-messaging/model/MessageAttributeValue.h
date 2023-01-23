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
    AWS_CHIMESDKMESSAGING_API MessageAttributeValue();
    AWS_CHIMESDKMESSAGING_API MessageAttributeValue(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMESSAGING_API MessageAttributeValue& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMESSAGING_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The strings in a message attribute value.</p>
     */
    inline const Aws::Vector<Aws::String>& GetStringValues() const{ return m_stringValues; }

    /**
     * <p>The strings in a message attribute value.</p>
     */
    inline bool StringValuesHasBeenSet() const { return m_stringValuesHasBeenSet; }

    /**
     * <p>The strings in a message attribute value.</p>
     */
    inline void SetStringValues(const Aws::Vector<Aws::String>& value) { m_stringValuesHasBeenSet = true; m_stringValues = value; }

    /**
     * <p>The strings in a message attribute value.</p>
     */
    inline void SetStringValues(Aws::Vector<Aws::String>&& value) { m_stringValuesHasBeenSet = true; m_stringValues = std::move(value); }

    /**
     * <p>The strings in a message attribute value.</p>
     */
    inline MessageAttributeValue& WithStringValues(const Aws::Vector<Aws::String>& value) { SetStringValues(value); return *this;}

    /**
     * <p>The strings in a message attribute value.</p>
     */
    inline MessageAttributeValue& WithStringValues(Aws::Vector<Aws::String>&& value) { SetStringValues(std::move(value)); return *this;}

    /**
     * <p>The strings in a message attribute value.</p>
     */
    inline MessageAttributeValue& AddStringValues(const Aws::String& value) { m_stringValuesHasBeenSet = true; m_stringValues.push_back(value); return *this; }

    /**
     * <p>The strings in a message attribute value.</p>
     */
    inline MessageAttributeValue& AddStringValues(Aws::String&& value) { m_stringValuesHasBeenSet = true; m_stringValues.push_back(std::move(value)); return *this; }

    /**
     * <p>The strings in a message attribute value.</p>
     */
    inline MessageAttributeValue& AddStringValues(const char* value) { m_stringValuesHasBeenSet = true; m_stringValues.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_stringValues;
    bool m_stringValuesHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMessaging
} // namespace Aws

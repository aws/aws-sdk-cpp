/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
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
namespace IoT
{
namespace Model
{

  /**
   * <p>A key-value pair that you define in the header. Both the key and the value
   * are either literal strings or valid <a
   * href="https://docs.aws.amazon.com/iot/latest/developerguide/iot-substitution-templates.html">substitution
   * templates</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/UserProperty">AWS
   * API Reference</a></p>
   */
  class UserProperty
  {
  public:
    AWS_IOT_API UserProperty();
    AWS_IOT_API UserProperty(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API UserProperty& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A key to be specified in <code>UserProperty</code>.</p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }

    /**
     * <p>A key to be specified in <code>UserProperty</code>.</p>
     */
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    /**
     * <p>A key to be specified in <code>UserProperty</code>.</p>
     */
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>A key to be specified in <code>UserProperty</code>.</p>
     */
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p>A key to be specified in <code>UserProperty</code>.</p>
     */
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }

    /**
     * <p>A key to be specified in <code>UserProperty</code>.</p>
     */
    inline UserProperty& WithKey(const Aws::String& value) { SetKey(value); return *this;}

    /**
     * <p>A key to be specified in <code>UserProperty</code>.</p>
     */
    inline UserProperty& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}

    /**
     * <p>A key to be specified in <code>UserProperty</code>.</p>
     */
    inline UserProperty& WithKey(const char* value) { SetKey(value); return *this;}


    /**
     * <p>A value to be specified in <code>UserProperty</code>.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>A value to be specified in <code>UserProperty</code>.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>A value to be specified in <code>UserProperty</code>.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>A value to be specified in <code>UserProperty</code>.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>A value to be specified in <code>UserProperty</code>.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>A value to be specified in <code>UserProperty</code>.</p>
     */
    inline UserProperty& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>A value to be specified in <code>UserProperty</code>.</p>
     */
    inline UserProperty& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>A value to be specified in <code>UserProperty</code>.</p>
     */
    inline UserProperty& WithValue(const char* value) { SetValue(value); return *this;}

  private:

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws

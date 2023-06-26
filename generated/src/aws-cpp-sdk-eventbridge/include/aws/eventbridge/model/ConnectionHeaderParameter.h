/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eventbridge/EventBridge_EXPORTS.h>
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
namespace EventBridge
{
namespace Model
{

  /**
   * <p>Additional parameter included in the header. You can include up to 100
   * additional header parameters per request. An event payload cannot exceed 64
   * KB.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridge-2015-10-07/ConnectionHeaderParameter">AWS
   * API Reference</a></p>
   */
  class ConnectionHeaderParameter
  {
  public:
    AWS_EVENTBRIDGE_API ConnectionHeaderParameter();
    AWS_EVENTBRIDGE_API ConnectionHeaderParameter(Aws::Utils::Json::JsonView jsonValue);
    AWS_EVENTBRIDGE_API ConnectionHeaderParameter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EVENTBRIDGE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The key for the parameter.</p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }

    /**
     * <p>The key for the parameter.</p>
     */
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    /**
     * <p>The key for the parameter.</p>
     */
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>The key for the parameter.</p>
     */
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p>The key for the parameter.</p>
     */
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }

    /**
     * <p>The key for the parameter.</p>
     */
    inline ConnectionHeaderParameter& WithKey(const Aws::String& value) { SetKey(value); return *this;}

    /**
     * <p>The key for the parameter.</p>
     */
    inline ConnectionHeaderParameter& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}

    /**
     * <p>The key for the parameter.</p>
     */
    inline ConnectionHeaderParameter& WithKey(const char* value) { SetKey(value); return *this;}


    /**
     * <p>The value associated with the key.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The value associated with the key.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The value associated with the key.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The value associated with the key.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The value associated with the key.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The value associated with the key.</p>
     */
    inline ConnectionHeaderParameter& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The value associated with the key.</p>
     */
    inline ConnectionHeaderParameter& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The value associated with the key.</p>
     */
    inline ConnectionHeaderParameter& WithValue(const char* value) { SetValue(value); return *this;}


    /**
     * <p>Specified whether the value is a secret.</p>
     */
    inline bool GetIsValueSecret() const{ return m_isValueSecret; }

    /**
     * <p>Specified whether the value is a secret.</p>
     */
    inline bool IsValueSecretHasBeenSet() const { return m_isValueSecretHasBeenSet; }

    /**
     * <p>Specified whether the value is a secret.</p>
     */
    inline void SetIsValueSecret(bool value) { m_isValueSecretHasBeenSet = true; m_isValueSecret = value; }

    /**
     * <p>Specified whether the value is a secret.</p>
     */
    inline ConnectionHeaderParameter& WithIsValueSecret(bool value) { SetIsValueSecret(value); return *this;}

  private:

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;

    bool m_isValueSecret;
    bool m_isValueSecretHasBeenSet = false;
  };

} // namespace Model
} // namespace EventBridge
} // namespace Aws

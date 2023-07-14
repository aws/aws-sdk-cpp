﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/nimble/NimbleStudio_EXPORTS.h>
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
namespace NimbleStudio
{
namespace Model
{

  /**
   * <p>A parameter for a studio component script, in the form of a key:value
   * pair.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/ScriptParameterKeyValue">AWS
   * API Reference</a></p>
   */
  class AWS_NIMBLESTUDIO_API ScriptParameterKeyValue
  {
  public:
    ScriptParameterKeyValue();
    ScriptParameterKeyValue(Aws::Utils::Json::JsonView jsonValue);
    ScriptParameterKeyValue& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A script parameter key.</p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }

    /**
     * <p>A script parameter key.</p>
     */
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    /**
     * <p>A script parameter key.</p>
     */
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>A script parameter key.</p>
     */
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p>A script parameter key.</p>
     */
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }

    /**
     * <p>A script parameter key.</p>
     */
    inline ScriptParameterKeyValue& WithKey(const Aws::String& value) { SetKey(value); return *this;}

    /**
     * <p>A script parameter key.</p>
     */
    inline ScriptParameterKeyValue& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}

    /**
     * <p>A script parameter key.</p>
     */
    inline ScriptParameterKeyValue& WithKey(const char* value) { SetKey(value); return *this;}


    /**
     * <p>A script parameter value.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>A script parameter value.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>A script parameter value.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>A script parameter value.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>A script parameter value.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>A script parameter value.</p>
     */
    inline ScriptParameterKeyValue& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>A script parameter value.</p>
     */
    inline ScriptParameterKeyValue& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>A script parameter value.</p>
     */
    inline ScriptParameterKeyValue& WithValue(const char* value) { SetValue(value); return *this;}

  private:

    Aws::String m_key;
    bool m_keyHasBeenSet;

    Aws::String m_value;
    bool m_valueHasBeenSet;
  };

} // namespace Model
} // namespace NimbleStudio
} // namespace Aws

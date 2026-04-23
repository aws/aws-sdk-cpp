/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/inspector/Inspector_EXPORTS.h>
#include <aws/inspector/model/ScopeType.h>
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
namespace Inspector
{
namespace Model
{

  /**
   * <p>This data type contains key-value pairs that identify various Amazon
   * resources.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/Scope">AWS API
   * Reference</a></p>
   */
  class AWS_INSPECTOR_API Scope
  {
  public:
    Scope();
    Scope(Aws::Utils::Json::JsonView jsonValue);
    Scope& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The type of the scope.</p>
     */
    inline const ScopeType& GetKey() const{ return m_key; }

    /**
     * <p>The type of the scope.</p>
     */
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    /**
     * <p>The type of the scope.</p>
     */
    inline void SetKey(const ScopeType& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>The type of the scope.</p>
     */
    inline void SetKey(ScopeType&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p>The type of the scope.</p>
     */
    inline Scope& WithKey(const ScopeType& value) { SetKey(value); return *this;}

    /**
     * <p>The type of the scope.</p>
     */
    inline Scope& WithKey(ScopeType&& value) { SetKey(std::move(value)); return *this;}


    /**
     * <p>The resource identifier for the specified scope type.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The resource identifier for the specified scope type.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The resource identifier for the specified scope type.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The resource identifier for the specified scope type.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The resource identifier for the specified scope type.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The resource identifier for the specified scope type.</p>
     */
    inline Scope& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The resource identifier for the specified scope type.</p>
     */
    inline Scope& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The resource identifier for the specified scope type.</p>
     */
    inline Scope& WithValue(const char* value) { SetValue(value); return *this;}

  private:

    ScopeType m_key;
    bool m_keyHasBeenSet;

    Aws::String m_value;
    bool m_valueHasBeenSet;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws

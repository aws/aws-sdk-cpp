﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/accessanalyzer/AccessAnalyzer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/accessanalyzer/model/Substring.h>
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
namespace AccessAnalyzer
{
namespace Model
{

  /**
   * <p>A single element in a path through the JSON representation of a
   * policy.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/PathElement">AWS
   * API Reference</a></p>
   */
  class PathElement
  {
  public:
    AWS_ACCESSANALYZER_API PathElement();
    AWS_ACCESSANALYZER_API PathElement(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API PathElement& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Refers to an index in a JSON array.</p>
     */
    inline int GetIndex() const{ return m_index; }
    inline bool IndexHasBeenSet() const { return m_indexHasBeenSet; }
    inline void SetIndex(int value) { m_indexHasBeenSet = true; m_index = value; }
    inline PathElement& WithIndex(int value) { SetIndex(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Refers to a key in a JSON object.</p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }
    inline PathElement& WithKey(const Aws::String& value) { SetKey(value); return *this;}
    inline PathElement& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}
    inline PathElement& WithKey(const char* value) { SetKey(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Refers to a substring of a literal string in a JSON object.</p>
     */
    inline const Substring& GetSubstring() const{ return m_substring; }
    inline bool SubstringHasBeenSet() const { return m_substringHasBeenSet; }
    inline void SetSubstring(const Substring& value) { m_substringHasBeenSet = true; m_substring = value; }
    inline void SetSubstring(Substring&& value) { m_substringHasBeenSet = true; m_substring = std::move(value); }
    inline PathElement& WithSubstring(const Substring& value) { SetSubstring(value); return *this;}
    inline PathElement& WithSubstring(Substring&& value) { SetSubstring(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Refers to the value associated with a given key in a JSON object.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }
    inline PathElement& WithValue(const Aws::String& value) { SetValue(value); return *this;}
    inline PathElement& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}
    inline PathElement& WithValue(const char* value) { SetValue(value); return *this;}
    ///@}
  private:

    int m_index;
    bool m_indexHasBeenSet = false;

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    Substring m_substring;
    bool m_substringHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws

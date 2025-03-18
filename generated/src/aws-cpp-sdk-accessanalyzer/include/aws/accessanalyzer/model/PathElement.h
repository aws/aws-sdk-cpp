/**
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
    AWS_ACCESSANALYZER_API PathElement() = default;
    AWS_ACCESSANALYZER_API PathElement(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API PathElement& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Refers to an index in a JSON array.</p>
     */
    inline int GetIndex() const { return m_index; }
    inline bool IndexHasBeenSet() const { return m_indexHasBeenSet; }
    inline void SetIndex(int value) { m_indexHasBeenSet = true; m_index = value; }
    inline PathElement& WithIndex(int value) { SetIndex(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Refers to a key in a JSON object.</p>
     */
    inline const Aws::String& GetKey() const { return m_key; }
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
    template<typename KeyT = Aws::String>
    void SetKey(KeyT&& value) { m_keyHasBeenSet = true; m_key = std::forward<KeyT>(value); }
    template<typename KeyT = Aws::String>
    PathElement& WithKey(KeyT&& value) { SetKey(std::forward<KeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Refers to a substring of a literal string in a JSON object.</p>
     */
    inline const Substring& GetSubstring() const { return m_substring; }
    inline bool SubstringHasBeenSet() const { return m_substringHasBeenSet; }
    template<typename SubstringT = Substring>
    void SetSubstring(SubstringT&& value) { m_substringHasBeenSet = true; m_substring = std::forward<SubstringT>(value); }
    template<typename SubstringT = Substring>
    PathElement& WithSubstring(SubstringT&& value) { SetSubstring(std::forward<SubstringT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Refers to the value associated with a given key in a JSON object.</p>
     */
    inline const Aws::String& GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    template<typename ValueT = Aws::String>
    void SetValue(ValueT&& value) { m_valueHasBeenSet = true; m_value = std::forward<ValueT>(value); }
    template<typename ValueT = Aws::String>
    PathElement& WithValue(ValueT&& value) { SetValue(std::forward<ValueT>(value)); return *this;}
    ///@}
  private:

    int m_index{0};
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

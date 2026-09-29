/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/deadline/Deadline_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace deadline {
namespace Model {

/**
 * <p>The details of job parameters.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/JobParameter">AWS
 * API Reference</a></p>
 */
class JobParameter {
 public:
  AWS_DEADLINE_API JobParameter() = default;
  AWS_DEADLINE_API JobParameter(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEADLINE_API JobParameter& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEADLINE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A signed integer represented as a string.</p>
   */
  inline const Aws::String& GetInt() const { return m_int; }
  inline bool IntHasBeenSet() const { return m_intHasBeenSet; }
  template <typename IntT = Aws::String>
  void SetInt(IntT&& value) {
    m_intHasBeenSet = true;
    m_int = std::forward<IntT>(value);
  }
  template <typename IntT = Aws::String>
  JobParameter& WithInt(IntT&& value) {
    SetInt(std::forward<IntT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A double precision IEEE-754 floating point number represented as a
   * string.</p>
   */
  inline const Aws::String& GetFloat() const { return m_float; }
  inline bool FloatHasBeenSet() const { return m_floatHasBeenSet; }
  template <typename FloatT = Aws::String>
  void SetFloat(FloatT&& value) {
    m_floatHasBeenSet = true;
    m_float = std::forward<FloatT>(value);
  }
  template <typename FloatT = Aws::String>
  JobParameter& WithFloat(FloatT&& value) {
    SetFloat(std::forward<FloatT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A UTF-8 string.</p>
   */
  inline const Aws::String& GetString() const { return m_string; }
  inline bool StringHasBeenSet() const { return m_stringHasBeenSet; }
  template <typename StringT = Aws::String>
  void SetString(StringT&& value) {
    m_stringHasBeenSet = true;
    m_string = std::forward<StringT>(value);
  }
  template <typename StringT = Aws::String>
  JobParameter& WithString(StringT&& value) {
    SetString(std::forward<StringT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A file system path represented as a string.</p>
   */
  inline const Aws::String& GetPath() const { return m_path; }
  inline bool PathHasBeenSet() const { return m_pathHasBeenSet; }
  template <typename PathT = Aws::String>
  void SetPath(PathT&& value) {
    m_pathHasBeenSet = true;
    m_path = std::forward<PathT>(value);
  }
  template <typename PathT = Aws::String>
  JobParameter& WithPath(PathT&& value) {
    SetPath(std::forward<PathT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A boolean value represented as a string. Accepted values are
   * <code>true</code>, <code>false</code>, <code>yes</code>, <code>no</code>,
   * <code>on</code>, <code>off</code>, <code>1</code>, and <code>0</code>,
   * case-insensitive.</p>
   */
  inline const Aws::String& GetBool() const { return m_bool; }
  inline bool BoolHasBeenSet() const { return m_boolHasBeenSet; }
  template <typename BoolT = Aws::String>
  void SetBool(BoolT&& value) {
    m_boolHasBeenSet = true;
    m_bool = std::forward<BoolT>(value);
  }
  template <typename BoolT = Aws::String>
  JobParameter& WithBool(BoolT&& value) {
    SetBool(std::forward<BoolT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An Open Job Description range expression represented as a string, such as
   * <code>1-10:2</code>.</p>
   */
  inline const Aws::String& GetRangeExpr() const { return m_rangeExpr; }
  inline bool RangeExprHasBeenSet() const { return m_rangeExprHasBeenSet; }
  template <typename RangeExprT = Aws::String>
  void SetRangeExpr(RangeExprT&& value) {
    m_rangeExprHasBeenSet = true;
    m_rangeExpr = std::forward<RangeExprT>(value);
  }
  template <typename RangeExprT = Aws::String>
  JobParameter& WithRangeExpr(RangeExprT&& value) {
    SetRangeExpr(std::forward<RangeExprT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of UTF-8 strings.</p>
   */
  inline const Aws::Vector<Aws::String>& GetStringList() const { return m_stringList; }
  inline bool StringListHasBeenSet() const { return m_stringListHasBeenSet; }
  template <typename StringListT = Aws::Vector<Aws::String>>
  void SetStringList(StringListT&& value) {
    m_stringListHasBeenSet = true;
    m_stringList = std::forward<StringListT>(value);
  }
  template <typename StringListT = Aws::Vector<Aws::String>>
  JobParameter& WithStringList(StringListT&& value) {
    SetStringList(std::forward<StringListT>(value));
    return *this;
  }
  template <typename StringListT = Aws::String>
  JobParameter& AddStringList(StringListT&& value) {
    m_stringListHasBeenSet = true;
    m_stringList.emplace_back(std::forward<StringListT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of file system paths, each represented as a string.</p>
   */
  inline const Aws::Vector<Aws::String>& GetPathList() const { return m_pathList; }
  inline bool PathListHasBeenSet() const { return m_pathListHasBeenSet; }
  template <typename PathListT = Aws::Vector<Aws::String>>
  void SetPathList(PathListT&& value) {
    m_pathListHasBeenSet = true;
    m_pathList = std::forward<PathListT>(value);
  }
  template <typename PathListT = Aws::Vector<Aws::String>>
  JobParameter& WithPathList(PathListT&& value) {
    SetPathList(std::forward<PathListT>(value));
    return *this;
  }
  template <typename PathListT = Aws::String>
  JobParameter& AddPathList(PathListT&& value) {
    m_pathListHasBeenSet = true;
    m_pathList.emplace_back(std::forward<PathListT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of signed integers, each represented as a string.</p>
   */
  inline const Aws::Vector<Aws::String>& GetIntList() const { return m_intList; }
  inline bool IntListHasBeenSet() const { return m_intListHasBeenSet; }
  template <typename IntListT = Aws::Vector<Aws::String>>
  void SetIntList(IntListT&& value) {
    m_intListHasBeenSet = true;
    m_intList = std::forward<IntListT>(value);
  }
  template <typename IntListT = Aws::Vector<Aws::String>>
  JobParameter& WithIntList(IntListT&& value) {
    SetIntList(std::forward<IntListT>(value));
    return *this;
  }
  template <typename IntListT = Aws::String>
  JobParameter& AddIntList(IntListT&& value) {
    m_intListHasBeenSet = true;
    m_intList.emplace_back(std::forward<IntListT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of double precision IEEE-754 floating point numbers, each represented
   * as a string.</p>
   */
  inline const Aws::Vector<Aws::String>& GetFloatList() const { return m_floatList; }
  inline bool FloatListHasBeenSet() const { return m_floatListHasBeenSet; }
  template <typename FloatListT = Aws::Vector<Aws::String>>
  void SetFloatList(FloatListT&& value) {
    m_floatListHasBeenSet = true;
    m_floatList = std::forward<FloatListT>(value);
  }
  template <typename FloatListT = Aws::Vector<Aws::String>>
  JobParameter& WithFloatList(FloatListT&& value) {
    SetFloatList(std::forward<FloatListT>(value));
    return *this;
  }
  template <typename FloatListT = Aws::String>
  JobParameter& AddFloatList(FloatListT&& value) {
    m_floatListHasBeenSet = true;
    m_floatList.emplace_back(std::forward<FloatListT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of boolean values, each represented as a string.</p>
   */
  inline const Aws::Vector<Aws::String>& GetBoolList() const { return m_boolList; }
  inline bool BoolListHasBeenSet() const { return m_boolListHasBeenSet; }
  template <typename BoolListT = Aws::Vector<Aws::String>>
  void SetBoolList(BoolListT&& value) {
    m_boolListHasBeenSet = true;
    m_boolList = std::forward<BoolListT>(value);
  }
  template <typename BoolListT = Aws::Vector<Aws::String>>
  JobParameter& WithBoolList(BoolListT&& value) {
    SetBoolList(std::forward<BoolListT>(value));
    return *this;
  }
  template <typename BoolListT = Aws::String>
  JobParameter& AddBoolList(BoolListT&& value) {
    m_boolListHasBeenSet = true;
    m_boolList.emplace_back(std::forward<BoolListT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of lists of signed integers, each represented as a string.</p>
   */
  inline const Aws::Vector<Aws::Vector<Aws::String>>& GetIntListList() const { return m_intListList; }
  inline bool IntListListHasBeenSet() const { return m_intListListHasBeenSet; }
  template <typename IntListListT = Aws::Vector<Aws::Vector<Aws::String>>>
  void SetIntListList(IntListListT&& value) {
    m_intListListHasBeenSet = true;
    m_intListList = std::forward<IntListListT>(value);
  }
  template <typename IntListListT = Aws::Vector<Aws::Vector<Aws::String>>>
  JobParameter& WithIntListList(IntListListT&& value) {
    SetIntListList(std::forward<IntListListT>(value));
    return *this;
  }
  template <typename IntListListT = Aws::Vector<Aws::String>>
  JobParameter& AddIntListList(IntListListT&& value) {
    m_intListListHasBeenSet = true;
    m_intListList.emplace_back(std::forward<IntListListT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_int;

  Aws::String m_float;

  Aws::String m_string;

  Aws::String m_path;

  Aws::String m_bool;

  Aws::String m_rangeExpr;

  Aws::Vector<Aws::String> m_stringList;

  Aws::Vector<Aws::String> m_pathList;

  Aws::Vector<Aws::String> m_intList;

  Aws::Vector<Aws::String> m_floatList;

  Aws::Vector<Aws::String> m_boolList;

  Aws::Vector<Aws::Vector<Aws::String>> m_intListList;
  bool m_intHasBeenSet = false;
  bool m_floatHasBeenSet = false;
  bool m_stringHasBeenSet = false;
  bool m_pathHasBeenSet = false;
  bool m_boolHasBeenSet = false;
  bool m_rangeExprHasBeenSet = false;
  bool m_stringListHasBeenSet = false;
  bool m_pathListHasBeenSet = false;
  bool m_intListHasBeenSet = false;
  bool m_floatListHasBeenSet = false;
  bool m_boolListHasBeenSet = false;
  bool m_intListListHasBeenSet = false;
};

}  // namespace Model
}  // namespace deadline
}  // namespace Aws

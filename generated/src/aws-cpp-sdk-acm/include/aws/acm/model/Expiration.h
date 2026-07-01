/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/acm/ACM_EXPORTS.h>
#include <aws/acm/model/TimeType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ACM {
namespace Model {

/**
 * <p>Specifies an expiration configuration.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/acm-2015-12-08/Expiration">AWS API
 * Reference</a></p>
 */
class Expiration {
 public:
  AWS_ACM_API Expiration() = default;
  AWS_ACM_API Expiration(Aws::Utils::Json::JsonView jsonValue);
  AWS_ACM_API Expiration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ACM_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The numeric value of the expiration.</p>
   */
  inline long long GetValue() const { return m_value; }
  inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
  inline void SetValue(long long value) {
    m_valueHasBeenSet = true;
    m_value = value;
  }
  inline Expiration& WithValue(long long value) {
    SetValue(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time unit for the expiration value.</p>
   */
  inline TimeType GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  inline void SetType(TimeType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline Expiration& WithType(TimeType value) {
    SetType(value);
    return *this;
  }
  ///@}
 private:
  long long m_value{0};

  TimeType m_type{TimeType::NOT_SET};
  bool m_valueHasBeenSet = false;
  bool m_typeHasBeenSet = false;
};

}  // namespace Model
}  // namespace ACM
}  // namespace Aws

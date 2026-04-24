/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Array.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/query-protocol/QueryProtocolRequest.h>
#include <aws/query-protocol/QueryProtocol_EXPORTS.h>
#include <aws/query-protocol/model/FooEnum.h>

#include <utility>

namespace Aws {
namespace QueryProtocol {
namespace Model {

/**
 */
class SimpleInputParamsRequest : public QueryProtocolRequest {
 public:
  AWS_QUERYPROTOCOL_API SimpleInputParamsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "SimpleInputParams"; }

  AWS_QUERYPROTOCOL_API Aws::String SerializePayload() const override;

 protected:
  AWS_QUERYPROTOCOL_API void DumpBodyToUrl(Aws::Http::URI& uri) const override;

 public:
  ///@{

  inline const Aws::String& GetFoo() const { return m_foo; }
  inline bool FooHasBeenSet() const { return m_fooHasBeenSet; }
  template <typename FooT = Aws::String>
  void SetFoo(FooT&& value) {
    m_fooHasBeenSet = true;
    m_foo = std::forward<FooT>(value);
  }
  template <typename FooT = Aws::String>
  SimpleInputParamsRequest& WithFoo(FooT&& value) {
    SetFoo(std::forward<FooT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetBar() const { return m_bar; }
  inline bool BarHasBeenSet() const { return m_barHasBeenSet; }
  template <typename BarT = Aws::String>
  void SetBar(BarT&& value) {
    m_barHasBeenSet = true;
    m_bar = std::forward<BarT>(value);
  }
  template <typename BarT = Aws::String>
  SimpleInputParamsRequest& WithBar(BarT&& value) {
    SetBar(std::forward<BarT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline bool GetBaz() const { return m_baz; }
  inline bool BazHasBeenSet() const { return m_bazHasBeenSet; }
  inline void SetBaz(bool value) {
    m_bazHasBeenSet = true;
    m_baz = value;
  }
  inline SimpleInputParamsRequest& WithBaz(bool value) {
    SetBaz(value);
    return *this;
  }
  ///@}

  ///@{

  inline int GetBam() const { return m_bam; }
  inline bool BamHasBeenSet() const { return m_bamHasBeenSet; }
  inline void SetBam(int value) {
    m_bamHasBeenSet = true;
    m_bam = value;
  }
  inline SimpleInputParamsRequest& WithBam(int value) {
    SetBam(value);
    return *this;
  }
  ///@}

  ///@{

  inline double GetFloatValue() const { return m_floatValue; }
  inline bool FloatValueHasBeenSet() const { return m_floatValueHasBeenSet; }
  inline void SetFloatValue(double value) {
    m_floatValueHasBeenSet = true;
    m_floatValue = value;
  }
  inline SimpleInputParamsRequest& WithFloatValue(double value) {
    SetFloatValue(value);
    return *this;
  }
  ///@}

  ///@{

  inline double GetBoo() const { return m_boo; }
  inline bool BooHasBeenSet() const { return m_booHasBeenSet; }
  inline void SetBoo(double value) {
    m_booHasBeenSet = true;
    m_boo = value;
  }
  inline SimpleInputParamsRequest& WithBoo(double value) {
    SetBoo(value);
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Utils::ByteBuffer& GetQux() const { return m_qux; }
  inline bool QuxHasBeenSet() const { return m_quxHasBeenSet; }
  template <typename QuxT = Aws::Utils::ByteBuffer>
  void SetQux(QuxT&& value) {
    m_quxHasBeenSet = true;
    m_qux = std::forward<QuxT>(value);
  }
  template <typename QuxT = Aws::Utils::ByteBuffer>
  SimpleInputParamsRequest& WithQux(QuxT&& value) {
    SetQux(std::forward<QuxT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline FooEnum GetFooEnum() const { return m_fooEnum; }
  inline bool FooEnumHasBeenSet() const { return m_fooEnumHasBeenSet; }
  inline void SetFooEnum(FooEnum value) {
    m_fooEnumHasBeenSet = true;
    m_fooEnum = value;
  }
  inline SimpleInputParamsRequest& WithFooEnum(FooEnum value) {
    SetFooEnum(value);
    return *this;
  }
  ///@}

  ///@{

  inline int GetIntegerEnum() const { return m_integerEnum; }
  inline bool IntegerEnumHasBeenSet() const { return m_integerEnumHasBeenSet; }
  inline void SetIntegerEnum(int value) {
    m_integerEnumHasBeenSet = true;
    m_integerEnum = value;
  }
  inline SimpleInputParamsRequest& WithIntegerEnum(int value) {
    SetIntegerEnum(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_foo;
  bool m_fooHasBeenSet = false;

  Aws::String m_bar;
  bool m_barHasBeenSet = false;

  bool m_baz{false};
  bool m_bazHasBeenSet = false;

  int m_bam{0};
  bool m_bamHasBeenSet = false;

  double m_floatValue{0.0};
  bool m_floatValueHasBeenSet = false;

  double m_boo{0.0};
  bool m_booHasBeenSet = false;

  Aws::Utils::ByteBuffer m_qux{};
  bool m_quxHasBeenSet = false;

  FooEnum m_fooEnum{FooEnum::NOT_SET};
  bool m_fooEnumHasBeenSet = false;

  int m_integerEnum{0};
  bool m_integerEnumHasBeenSet = false;
};

}  // namespace Model
}  // namespace QueryProtocol
}  // namespace Aws

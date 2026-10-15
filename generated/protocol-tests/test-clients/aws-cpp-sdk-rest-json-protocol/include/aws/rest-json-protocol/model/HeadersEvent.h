/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Array.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rest-json-protocol/RestJsonProtocol_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace RestJsonProtocol {
namespace Model {

/**
 */
class HeadersEvent {
 public:
  AWS_RESTJSONPROTOCOL_API HeadersEvent() = default;
  AWS_RESTJSONPROTOCOL_API HeadersEvent(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESTJSONPROTOCOL_API HeadersEvent& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESTJSONPROTOCOL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{

  inline bool GetBooleanHeader() const { return m_booleanHeader; }
  inline bool BooleanHeaderHasBeenSet() const { return m_booleanHeaderHasBeenSet; }
  inline void SetBooleanHeader(bool value) {
    m_booleanHeaderHasBeenSet = true;
    m_booleanHeader = value;
  }
  inline HeadersEvent& WithBooleanHeader(bool value) {
    SetBooleanHeader(value);
    return *this;
  }
  ///@}

  ///@{

  inline int GetByteHeader() const { return m_byteHeader; }
  inline bool ByteHeaderHasBeenSet() const { return m_byteHeaderHasBeenSet; }
  inline void SetByteHeader(int value) {
    m_byteHeaderHasBeenSet = true;
    m_byteHeader = value;
  }
  inline HeadersEvent& WithByteHeader(int value) {
    SetByteHeader(value);
    return *this;
  }
  ///@}

  ///@{

  inline int GetShortHeader() const { return m_shortHeader; }
  inline bool ShortHeaderHasBeenSet() const { return m_shortHeaderHasBeenSet; }
  inline void SetShortHeader(int value) {
    m_shortHeaderHasBeenSet = true;
    m_shortHeader = value;
  }
  inline HeadersEvent& WithShortHeader(int value) {
    SetShortHeader(value);
    return *this;
  }
  ///@}

  ///@{

  inline int GetIntHeader() const { return m_intHeader; }
  inline bool IntHeaderHasBeenSet() const { return m_intHeaderHasBeenSet; }
  inline void SetIntHeader(int value) {
    m_intHeaderHasBeenSet = true;
    m_intHeader = value;
  }
  inline HeadersEvent& WithIntHeader(int value) {
    SetIntHeader(value);
    return *this;
  }
  ///@}

  ///@{

  inline long long GetLongHeader() const { return m_longHeader; }
  inline bool LongHeaderHasBeenSet() const { return m_longHeaderHasBeenSet; }
  inline void SetLongHeader(long long value) {
    m_longHeaderHasBeenSet = true;
    m_longHeader = value;
  }
  inline HeadersEvent& WithLongHeader(long long value) {
    SetLongHeader(value);
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Utils::ByteBuffer& GetBlobHeader() const { return m_blobHeader; }
  inline bool BlobHeaderHasBeenSet() const { return m_blobHeaderHasBeenSet; }
  template <typename BlobHeaderT = Aws::Utils::ByteBuffer>
  void SetBlobHeader(BlobHeaderT&& value) {
    m_blobHeaderHasBeenSet = true;
    m_blobHeader = std::forward<BlobHeaderT>(value);
  }
  template <typename BlobHeaderT = Aws::Utils::ByteBuffer>
  HeadersEvent& WithBlobHeader(BlobHeaderT&& value) {
    SetBlobHeader(std::forward<BlobHeaderT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetStringHeader() const { return m_stringHeader; }
  inline bool StringHeaderHasBeenSet() const { return m_stringHeaderHasBeenSet; }
  template <typename StringHeaderT = Aws::String>
  void SetStringHeader(StringHeaderT&& value) {
    m_stringHeaderHasBeenSet = true;
    m_stringHeader = std::forward<StringHeaderT>(value);
  }
  template <typename StringHeaderT = Aws::String>
  HeadersEvent& WithStringHeader(StringHeaderT&& value) {
    SetStringHeader(std::forward<StringHeaderT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Utils::DateTime& GetTimestampHeader() const { return m_timestampHeader; }
  inline bool TimestampHeaderHasBeenSet() const { return m_timestampHeaderHasBeenSet; }
  template <typename TimestampHeaderT = Aws::Utils::DateTime>
  void SetTimestampHeader(TimestampHeaderT&& value) {
    m_timestampHeaderHasBeenSet = true;
    m_timestampHeader = std::forward<TimestampHeaderT>(value);
  }
  template <typename TimestampHeaderT = Aws::Utils::DateTime>
  HeadersEvent& WithTimestampHeader(TimestampHeaderT&& value) {
    SetTimestampHeader(std::forward<TimestampHeaderT>(value));
    return *this;
  }
  ///@}
 private:
  bool m_booleanHeader{false};

  int m_byteHeader{0};

  int m_shortHeader{0};

  int m_intHeader{0};

  long long m_longHeader{0};

  Aws::Utils::ByteBuffer m_blobHeader{};

  Aws::String m_stringHeader;

  Aws::Utils::DateTime m_timestampHeader{};
  bool m_booleanHeaderHasBeenSet = false;
  bool m_byteHeaderHasBeenSet = false;
  bool m_shortHeaderHasBeenSet = false;
  bool m_intHeaderHasBeenSet = false;
  bool m_longHeaderHasBeenSet = false;
  bool m_blobHeaderHasBeenSet = false;
  bool m_stringHeaderHasBeenSet = false;
  bool m_timestampHeaderHasBeenSet = false;
};

}  // namespace Model
}  // namespace RestJsonProtocol
}  // namespace Aws

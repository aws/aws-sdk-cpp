/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/rpcv2cborcorpustests/RpcV2CborCorpusTests_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace RpcV2CborCorpusTests {
namespace Model {

class ListEvent {
 public:
  AWS_RPCV2CBORCORPUSTESTS_API ListEvent() = default;
  AWS_RPCV2CBORCORPUSTESTS_API ListEvent(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_RPCV2CBORCORPUSTESTS_API ListEvent& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_RPCV2CBORCORPUSTESTS_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{

  inline const Aws::Vector<Aws::String>& GetStrings() const { return m_strings; }
  inline bool StringsHasBeenSet() const { return m_stringsHasBeenSet; }
  template <typename StringsT = Aws::Vector<Aws::String>>
  void SetStrings(StringsT&& value) {
    m_stringsHasBeenSet = true;
    m_strings = std::forward<StringsT>(value);
  }
  template <typename StringsT = Aws::Vector<Aws::String>>
  ListEvent& WithStrings(StringsT&& value) {
    SetStrings(std::forward<StringsT>(value));
    return *this;
  }
  template <typename StringsT = Aws::String>
  ListEvent& AddStrings(StringsT&& value) {
    m_stringsHasBeenSet = true;
    m_strings.emplace_back(std::forward<StringsT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Vector<int64_t>& GetIntegers() const { return m_integers; }
  inline bool IntegersHasBeenSet() const { return m_integersHasBeenSet; }
  template <typename IntegersT = Aws::Vector<int64_t>>
  void SetIntegers(IntegersT&& value) {
    m_integersHasBeenSet = true;
    m_integers = std::forward<IntegersT>(value);
  }
  template <typename IntegersT = Aws::Vector<int64_t>>
  ListEvent& WithIntegers(IntegersT&& value) {
    SetIntegers(std::forward<IntegersT>(value));
    return *this;
  }
  inline ListEvent& AddIntegers(int64_t value) {
    m_integersHasBeenSet = true;
    m_integers.push_back(value);
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Vector<Aws::Utils::DateTime>& GetTimestamps() const { return m_timestamps; }
  inline bool TimestampsHasBeenSet() const { return m_timestampsHasBeenSet; }
  template <typename TimestampsT = Aws::Vector<Aws::Utils::DateTime>>
  void SetTimestamps(TimestampsT&& value) {
    m_timestampsHasBeenSet = true;
    m_timestamps = std::forward<TimestampsT>(value);
  }
  template <typename TimestampsT = Aws::Vector<Aws::Utils::DateTime>>
  ListEvent& WithTimestamps(TimestampsT&& value) {
    SetTimestamps(std::forward<TimestampsT>(value));
    return *this;
  }
  template <typename TimestampsT = Aws::Utils::DateTime>
  ListEvent& AddTimestamps(TimestampsT&& value) {
    m_timestampsHasBeenSet = true;
    m_timestamps.emplace_back(std::forward<TimestampsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::String> m_strings;

  Aws::Vector<int64_t> m_integers;

  Aws::Vector<Aws::Utils::DateTime> m_timestamps;
  bool m_stringsHasBeenSet = false;
  bool m_integersHasBeenSet = false;
  bool m_timestampsHasBeenSet = false;
};

}  // namespace Model
}  // namespace RpcV2CborCorpusTests
}  // namespace Aws

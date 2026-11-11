/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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

class MapEvent {
 public:
  AWS_RPCV2CBORCORPUSTESTS_API MapEvent() = default;
  AWS_RPCV2CBORCORPUSTESTS_API MapEvent(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_RPCV2CBORCORPUSTESTS_API MapEvent& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_RPCV2CBORCORPUSTESTS_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{

  inline const Aws::Map<Aws::String, Aws::String>& GetStrings() const { return m_strings; }
  inline bool StringsHasBeenSet() const { return m_stringsHasBeenSet; }
  template <typename StringsT = Aws::Map<Aws::String, Aws::String>>
  void SetStrings(StringsT&& value) {
    m_stringsHasBeenSet = true;
    m_strings = std::forward<StringsT>(value);
  }
  template <typename StringsT = Aws::Map<Aws::String, Aws::String>>
  MapEvent& WithStrings(StringsT&& value) {
    SetStrings(std::forward<StringsT>(value));
    return *this;
  }
  template <typename StringsKeyT = Aws::String, typename StringsValueT = Aws::String>
  MapEvent& AddStrings(StringsKeyT&& key, StringsValueT&& value) {
    m_stringsHasBeenSet = true;
    m_strings.emplace(std::forward<StringsKeyT>(key), std::forward<StringsValueT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Map<Aws::String, int64_t>& GetIntegers() const { return m_integers; }
  inline bool IntegersHasBeenSet() const { return m_integersHasBeenSet; }
  template <typename IntegersT = Aws::Map<Aws::String, int64_t>>
  void SetIntegers(IntegersT&& value) {
    m_integersHasBeenSet = true;
    m_integers = std::forward<IntegersT>(value);
  }
  template <typename IntegersT = Aws::Map<Aws::String, int64_t>>
  MapEvent& WithIntegers(IntegersT&& value) {
    SetIntegers(std::forward<IntegersT>(value));
    return *this;
  }
  inline MapEvent& AddIntegers(Aws::String key, int64_t value) {
    m_integersHasBeenSet = true;
    m_integers.emplace(key, value);
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Map<Aws::String, Aws::Utils::DateTime>& GetTimestamps() const { return m_timestamps; }
  inline bool TimestampsHasBeenSet() const { return m_timestampsHasBeenSet; }
  template <typename TimestampsT = Aws::Map<Aws::String, Aws::Utils::DateTime>>
  void SetTimestamps(TimestampsT&& value) {
    m_timestampsHasBeenSet = true;
    m_timestamps = std::forward<TimestampsT>(value);
  }
  template <typename TimestampsT = Aws::Map<Aws::String, Aws::Utils::DateTime>>
  MapEvent& WithTimestamps(TimestampsT&& value) {
    SetTimestamps(std::forward<TimestampsT>(value));
    return *this;
  }
  template <typename TimestampsKeyT = Aws::String, typename TimestampsValueT = Aws::Utils::DateTime>
  MapEvent& AddTimestamps(TimestampsKeyT&& key, TimestampsValueT&& value) {
    m_timestampsHasBeenSet = true;
    m_timestamps.emplace(std::forward<TimestampsKeyT>(key), std::forward<TimestampsValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Map<Aws::String, Aws::String> m_strings;

  Aws::Map<Aws::String, int64_t> m_integers;

  Aws::Map<Aws::String, Aws::Utils::DateTime> m_timestamps;
  bool m_stringsHasBeenSet = false;
  bool m_integersHasBeenSet = false;
  bool m_timestampsHasBeenSet = false;
};

}  // namespace Model
}  // namespace RpcV2CborCorpusTests
}  // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/interconnect/Interconnect_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace Interconnect {
namespace Model {

/**
 * <p>Contains the details about the available and supported
 * bandwidths.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/interconnect-2022-07-26/Bandwidths">AWS
 * API Reference</a></p>
 */
class Bandwidths {
 public:
  AWS_INTERCONNECT_API Bandwidths() = default;
  AWS_INTERCONNECT_API Bandwidths(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_INTERCONNECT_API Bandwidths& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_INTERCONNECT_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The list of currently available bandwidths.</p>
   */
  inline const Aws::Vector<Aws::String>& GetAvailable() const { return m_available; }
  inline bool AvailableHasBeenSet() const { return m_availableHasBeenSet; }
  template <typename AvailableT = Aws::Vector<Aws::String>>
  void SetAvailable(AvailableT&& value) {
    m_availableHasBeenSet = true;
    m_available = std::forward<AvailableT>(value);
  }
  template <typename AvailableT = Aws::Vector<Aws::String>>
  Bandwidths& WithAvailable(AvailableT&& value) {
    SetAvailable(std::forward<AvailableT>(value));
    return *this;
  }
  template <typename AvailableT = Aws::String>
  Bandwidths& AddAvailable(AvailableT&& value) {
    m_availableHasBeenSet = true;
    m_available.emplace_back(std::forward<AvailableT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of all bandwidths that this environment plans to support</p>
   */
  inline const Aws::Vector<Aws::String>& GetSupported() const { return m_supported; }
  inline bool SupportedHasBeenSet() const { return m_supportedHasBeenSet; }
  template <typename SupportedT = Aws::Vector<Aws::String>>
  void SetSupported(SupportedT&& value) {
    m_supportedHasBeenSet = true;
    m_supported = std::forward<SupportedT>(value);
  }
  template <typename SupportedT = Aws::Vector<Aws::String>>
  Bandwidths& WithSupported(SupportedT&& value) {
    SetSupported(std::forward<SupportedT>(value));
    return *this;
  }
  template <typename SupportedT = Aws::String>
  Bandwidths& AddSupported(SupportedT&& value) {
    m_supportedHasBeenSet = true;
    m_supported.emplace_back(std::forward<SupportedT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::String> m_available;

  Aws::Vector<Aws::String> m_supported;
  bool m_availableHasBeenSet = false;
  bool m_supportedHasBeenSet = false;
};

}  // namespace Model
}  // namespace Interconnect
}  // namespace Aws

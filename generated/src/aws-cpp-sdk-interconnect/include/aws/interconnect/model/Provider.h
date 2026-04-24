/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
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
 * <p>Describes the respective AWS Interconnect Partner organization.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/interconnect-2022-07-26/Provider">AWS
 * API Reference</a></p>
 */
class Provider {
 public:
  AWS_INTERCONNECT_API Provider() = default;
  AWS_INTERCONNECT_API Provider(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_INTERCONNECT_API Provider& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_INTERCONNECT_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The provider's name. Specifically, connections to/from this Cloud Service
   * Provider will be considered Multicloud connections.</p>
   */
  inline const Aws::String& GetCloudServiceProvider() const { return m_cloudServiceProvider; }
  inline bool CloudServiceProviderHasBeenSet() const { return m_cloudServiceProviderHasBeenSet; }
  template <typename CloudServiceProviderT = Aws::String>
  void SetCloudServiceProvider(CloudServiceProviderT&& value) {
    m_cloudServiceProviderHasBeenSet = true;
    m_cloudServiceProvider = std::forward<CloudServiceProviderT>(value);
  }
  template <typename CloudServiceProviderT = Aws::String>
  Provider& WithCloudServiceProvider(CloudServiceProviderT&& value) {
    SetCloudServiceProvider(std::forward<CloudServiceProviderT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The provider's name. Specifically, connections to/from this Last Mile
   * Provider will be considered LastMile connections.</p>
   */
  inline const Aws::String& GetLastMileProvider() const { return m_lastMileProvider; }
  inline bool LastMileProviderHasBeenSet() const { return m_lastMileProviderHasBeenSet; }
  template <typename LastMileProviderT = Aws::String>
  void SetLastMileProvider(LastMileProviderT&& value) {
    m_lastMileProviderHasBeenSet = true;
    m_lastMileProvider = std::forward<LastMileProviderT>(value);
  }
  template <typename LastMileProviderT = Aws::String>
  Provider& WithLastMileProvider(LastMileProviderT&& value) {
    SetLastMileProvider(std::forward<LastMileProviderT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_cloudServiceProvider;

  Aws::String m_lastMileProvider;
  bool m_cloudServiceProviderHasBeenSet = false;
  bool m_lastMileProviderHasBeenSet = false;
};

}  // namespace Model
}  // namespace Interconnect
}  // namespace Aws

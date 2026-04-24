/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/interconnect/Interconnect_EXPORTS.h>
#include <aws/interconnect/model/Provider.h>

#include <utility>
namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace Interconnect {
namespace Model {
class DescribeConnectionProposalResult {
 public:
  AWS_INTERCONNECT_API DescribeConnectionProposalResult() = default;
  AWS_INTERCONNECT_API DescribeConnectionProposalResult(const Aws::AmazonWebServiceResult<Aws::Utils::Cbor::CborValue>& result);
  AWS_INTERCONNECT_API DescribeConnectionProposalResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Cbor::CborValue>& result);

  ///@{
  /**
   * <p>The bandwidth of the proposed <a>Connection</a>. </p>
   */
  inline const Aws::String& GetBandwidth() const { return m_bandwidth; }
  template <typename BandwidthT = Aws::String>
  void SetBandwidth(BandwidthT&& value) {
    m_bandwidthHasBeenSet = true;
    m_bandwidth = std::forward<BandwidthT>(value);
  }
  template <typename BandwidthT = Aws::String>
  DescribeConnectionProposalResult& WithBandwidth(BandwidthT&& value) {
    SetBandwidth(std::forward<BandwidthT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the <a>Environment</a> upon which the <a>Connection</a>
   * would be placed if this proposal were accepted.</p>
   */
  inline const Aws::String& GetEnvironmentId() const { return m_environmentId; }
  template <typename EnvironmentIdT = Aws::String>
  void SetEnvironmentId(EnvironmentIdT&& value) {
    m_environmentIdHasBeenSet = true;
    m_environmentId = std::forward<EnvironmentIdT>(value);
  }
  template <typename EnvironmentIdT = Aws::String>
  DescribeConnectionProposalResult& WithEnvironmentId(EnvironmentIdT&& value) {
    SetEnvironmentId(std::forward<EnvironmentIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The partner provider of the specific <a>Environment</a> of the proposal.</p>
   */
  inline const Provider& GetProvider() const { return m_provider; }
  template <typename ProviderT = Provider>
  void SetProvider(ProviderT&& value) {
    m_providerHasBeenSet = true;
    m_provider = std::forward<ProviderT>(value);
  }
  template <typename ProviderT = Provider>
  DescribeConnectionProposalResult& WithProvider(ProviderT&& value) {
    SetProvider(std::forward<ProviderT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The partner specific location distinguisher of the specific
   * <a>Environment</a> of the proposal.</p>
   */
  inline const Aws::String& GetLocation() const { return m_location; }
  template <typename LocationT = Aws::String>
  void SetLocation(LocationT&& value) {
    m_locationHasBeenSet = true;
    m_location = std::forward<LocationT>(value);
  }
  template <typename LocationT = Aws::String>
  DescribeConnectionProposalResult& WithLocation(LocationT&& value) {
    SetLocation(std::forward<LocationT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  DescribeConnectionProposalResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_bandwidth;

  Aws::String m_environmentId;

  Provider m_provider;

  Aws::String m_location;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_bandwidthHasBeenSet = false;
  bool m_environmentIdHasBeenSet = false;
  bool m_providerHasBeenSet = false;
  bool m_locationHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Interconnect
}  // namespace Aws

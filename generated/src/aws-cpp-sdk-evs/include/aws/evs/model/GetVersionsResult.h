/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/evs/EVS_EXPORTS.h>
#include <aws/evs/model/InstanceTypeEsxVersionsInfo.h>
#include <aws/evs/model/VcfVersionInfo.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace EVS {
namespace Model {
class GetVersionsResult {
 public:
  AWS_EVS_API GetVersionsResult() = default;
  AWS_EVS_API GetVersionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_EVS_API GetVersionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>A list of VCF versions with their availability status, default ESX version,
   * and instance types.</p>
   */
  inline const Aws::Vector<VcfVersionInfo>& GetVcfVersions() const { return m_vcfVersions; }
  template <typename VcfVersionsT = Aws::Vector<VcfVersionInfo>>
  void SetVcfVersions(VcfVersionsT&& value) {
    m_vcfVersionsHasBeenSet = true;
    m_vcfVersions = std::forward<VcfVersionsT>(value);
  }
  template <typename VcfVersionsT = Aws::Vector<VcfVersionInfo>>
  GetVersionsResult& WithVcfVersions(VcfVersionsT&& value) {
    SetVcfVersions(std::forward<VcfVersionsT>(value));
    return *this;
  }
  template <typename VcfVersionsT = VcfVersionInfo>
  GetVersionsResult& AddVcfVersions(VcfVersionsT&& value) {
    m_vcfVersionsHasBeenSet = true;
    m_vcfVersions.emplace_back(std::forward<VcfVersionsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of EC2 instance types and their available ESX versions.</p>
   */
  inline const Aws::Vector<InstanceTypeEsxVersionsInfo>& GetInstanceTypeEsxVersions() const { return m_instanceTypeEsxVersions; }
  template <typename InstanceTypeEsxVersionsT = Aws::Vector<InstanceTypeEsxVersionsInfo>>
  void SetInstanceTypeEsxVersions(InstanceTypeEsxVersionsT&& value) {
    m_instanceTypeEsxVersionsHasBeenSet = true;
    m_instanceTypeEsxVersions = std::forward<InstanceTypeEsxVersionsT>(value);
  }
  template <typename InstanceTypeEsxVersionsT = Aws::Vector<InstanceTypeEsxVersionsInfo>>
  GetVersionsResult& WithInstanceTypeEsxVersions(InstanceTypeEsxVersionsT&& value) {
    SetInstanceTypeEsxVersions(std::forward<InstanceTypeEsxVersionsT>(value));
    return *this;
  }
  template <typename InstanceTypeEsxVersionsT = InstanceTypeEsxVersionsInfo>
  GetVersionsResult& AddInstanceTypeEsxVersions(InstanceTypeEsxVersionsT&& value) {
    m_instanceTypeEsxVersionsHasBeenSet = true;
    m_instanceTypeEsxVersions.emplace_back(std::forward<InstanceTypeEsxVersionsT>(value));
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
  GetVersionsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<VcfVersionInfo> m_vcfVersions;

  Aws::Vector<InstanceTypeEsxVersionsInfo> m_instanceTypeEsxVersions;

  Aws::String m_requestId;
  bool m_vcfVersionsHasBeenSet = false;
  bool m_instanceTypeEsxVersionsHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace EVS
}  // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/evs/EVS_EXPORTS.h>
#include <aws/evs/model/InstanceType.h>
#include <aws/evs/model/VcfVersion.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace EVS {
namespace Model {

/**
 * <p>Information about a VCF versions provided by Amazon EVS, including its
 * status, default ESX version, and EC2 instance types.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/evs-2023-07-27/VcfVersionInfo">AWS
 * API Reference</a></p>
 */
class VcfVersionInfo {
 public:
  AWS_EVS_API VcfVersionInfo() = default;
  AWS_EVS_API VcfVersionInfo(Aws::Utils::Json::JsonView jsonValue);
  AWS_EVS_API VcfVersionInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_EVS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The VCF version number.</p>
   */
  inline VcfVersion GetVcfVersion() const { return m_vcfVersion; }
  inline bool VcfVersionHasBeenSet() const { return m_vcfVersionHasBeenSet; }
  inline void SetVcfVersion(VcfVersion value) {
    m_vcfVersionHasBeenSet = true;
    m_vcfVersion = value;
  }
  inline VcfVersionInfo& WithVcfVersion(VcfVersion value) {
    SetVcfVersion(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status for this VCF version. Valid values are:</p> <ul> <li> <p>
   * <code>AVAILABLE</code> - This VCF version is available to you.</p> </li> <li>
   * <p> <code>RESTRICTED</code> - This VCF version has limited availability.</p>
   * </li> </ul>  <p> If the version you need shows RESTRICTED, and you
   * require, check out <a
   * href="https://docs.aws.amazon.com/evs/latest/userguide/versions-provided.html">VCF
   * versions and EC2 instance types provided by Amazon EVS</a> for more information.
   * </p>
   */
  inline const Aws::String& GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  template <typename StatusT = Aws::String>
  void SetStatus(StatusT&& value) {
    m_statusHasBeenSet = true;
    m_status = std::forward<StatusT>(value);
  }
  template <typename StatusT = Aws::String>
  VcfVersionInfo& WithStatus(StatusT&& value) {
    SetStatus(std::forward<StatusT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The default ESX version for this VCF version. It is based on Broadcom's Bill
   * Of Materials (BOM).</p>
   */
  inline const Aws::String& GetDefaultEsxVersion() const { return m_defaultEsxVersion; }
  inline bool DefaultEsxVersionHasBeenSet() const { return m_defaultEsxVersionHasBeenSet; }
  template <typename DefaultEsxVersionT = Aws::String>
  void SetDefaultEsxVersion(DefaultEsxVersionT&& value) {
    m_defaultEsxVersionHasBeenSet = true;
    m_defaultEsxVersion = std::forward<DefaultEsxVersionT>(value);
  }
  template <typename DefaultEsxVersionT = Aws::String>
  VcfVersionInfo& WithDefaultEsxVersion(DefaultEsxVersionT&& value) {
    SetDefaultEsxVersion(std::forward<DefaultEsxVersionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>EC2 instance types provided by Amazon EVS for this VCF version for creating
   * environments.</p>
   */
  inline const Aws::Vector<InstanceType>& GetInstanceTypes() const { return m_instanceTypes; }
  inline bool InstanceTypesHasBeenSet() const { return m_instanceTypesHasBeenSet; }
  template <typename InstanceTypesT = Aws::Vector<InstanceType>>
  void SetInstanceTypes(InstanceTypesT&& value) {
    m_instanceTypesHasBeenSet = true;
    m_instanceTypes = std::forward<InstanceTypesT>(value);
  }
  template <typename InstanceTypesT = Aws::Vector<InstanceType>>
  VcfVersionInfo& WithInstanceTypes(InstanceTypesT&& value) {
    SetInstanceTypes(std::forward<InstanceTypesT>(value));
    return *this;
  }
  inline VcfVersionInfo& AddInstanceTypes(InstanceType value) {
    m_instanceTypesHasBeenSet = true;
    m_instanceTypes.push_back(value);
    return *this;
  }
  ///@}
 private:
  VcfVersion m_vcfVersion{VcfVersion::NOT_SET};

  Aws::String m_status;

  Aws::String m_defaultEsxVersion;

  Aws::Vector<InstanceType> m_instanceTypes;
  bool m_vcfVersionHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_defaultEsxVersionHasBeenSet = false;
  bool m_instanceTypesHasBeenSet = false;
};

}  // namespace Model
}  // namespace EVS
}  // namespace Aws

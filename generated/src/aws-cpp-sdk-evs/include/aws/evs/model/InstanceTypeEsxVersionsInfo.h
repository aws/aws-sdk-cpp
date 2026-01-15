/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/evs/EVS_EXPORTS.h>
#include <aws/evs/model/InstanceType.h>

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
 * <p>Information about ESX versions offered for each EC2 instance
 * type.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/evs-2023-07-27/InstanceTypeEsxVersionsInfo">AWS
 * API Reference</a></p>
 */
class InstanceTypeEsxVersionsInfo {
 public:
  AWS_EVS_API InstanceTypeEsxVersionsInfo() = default;
  AWS_EVS_API InstanceTypeEsxVersionsInfo(Aws::Utils::Json::JsonView jsonValue);
  AWS_EVS_API InstanceTypeEsxVersionsInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_EVS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The EC2 instance type.</p>
   */
  inline InstanceType GetInstanceType() const { return m_instanceType; }
  inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
  inline void SetInstanceType(InstanceType value) {
    m_instanceTypeHasBeenSet = true;
    m_instanceType = value;
  }
  inline InstanceTypeEsxVersionsInfo& WithInstanceType(InstanceType value) {
    SetInstanceType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of ESX versions offered for this instance type.</p>
   */
  inline const Aws::Vector<Aws::String>& GetEsxVersions() const { return m_esxVersions; }
  inline bool EsxVersionsHasBeenSet() const { return m_esxVersionsHasBeenSet; }
  template <typename EsxVersionsT = Aws::Vector<Aws::String>>
  void SetEsxVersions(EsxVersionsT&& value) {
    m_esxVersionsHasBeenSet = true;
    m_esxVersions = std::forward<EsxVersionsT>(value);
  }
  template <typename EsxVersionsT = Aws::Vector<Aws::String>>
  InstanceTypeEsxVersionsInfo& WithEsxVersions(EsxVersionsT&& value) {
    SetEsxVersions(std::forward<EsxVersionsT>(value));
    return *this;
  }
  template <typename EsxVersionsT = Aws::String>
  InstanceTypeEsxVersionsInfo& AddEsxVersions(EsxVersionsT&& value) {
    m_esxVersionsHasBeenSet = true;
    m_esxVersions.emplace_back(std::forward<EsxVersionsT>(value));
    return *this;
  }
  ///@}
 private:
  InstanceType m_instanceType{InstanceType::NOT_SET};

  Aws::Vector<Aws::String> m_esxVersions;
  bool m_instanceTypeHasBeenSet = false;
  bool m_esxVersionsHasBeenSet = false;
};

}  // namespace Model
}  // namespace EVS
}  // namespace Aws

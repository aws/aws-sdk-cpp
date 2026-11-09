/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/continuum/Continuum_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Continuum {
namespace Model {

/**
 * <p>A cloud or application resource a finding concerns.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/continuum-2022-07-26/FindingResource">AWS
 * API Reference</a></p>
 */
class FindingResource {
 public:
  AWS_CONTINUUM_API FindingResource() = default;
  AWS_CONTINUUM_API FindingResource(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONTINUUM_API FindingResource& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONTINUUM_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{

  inline const Aws::String& GetUid() const { return m_uid; }
  inline bool UidHasBeenSet() const { return m_uidHasBeenSet; }
  template <typename UidT = Aws::String>
  void SetUid(UidT&& value) {
    m_uidHasBeenSet = true;
    m_uid = std::forward<UidT>(value);
  }
  template <typename UidT = Aws::String>
  FindingResource& WithUid(UidT&& value) {
    SetUid(std::forward<UidT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  FindingResource& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  template <typename TypeT = Aws::String>
  void SetType(TypeT&& value) {
    m_typeHasBeenSet = true;
    m_type = std::forward<TypeT>(value);
  }
  template <typename TypeT = Aws::String>
  FindingResource& WithType(TypeT&& value) {
    SetType(std::forward<TypeT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRegion() const { return m_region; }
  inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }
  template <typename RegionT = Aws::String>
  void SetRegion(RegionT&& value) {
    m_regionHasBeenSet = true;
    m_region = std::forward<RegionT>(value);
  }
  template <typename RegionT = Aws::String>
  FindingResource& WithRegion(RegionT&& value) {
    SetRegion(std::forward<RegionT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_uid;

  Aws::String m_name;

  Aws::String m_type;

  Aws::String m_region;
  bool m_uidHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_typeHasBeenSet = false;
  bool m_regionHasBeenSet = false;
};

}  // namespace Model
}  // namespace Continuum
}  // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/datazone/DataZone_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace DataZone {
namespace Model {

/**
 * <p>The enforcement details of a glossary term.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/GlossaryTermEnforcementDetail">AWS
 * API Reference</a></p>
 */
class GlossaryTermEnforcementDetail {
 public:
  AWS_DATAZONE_API GlossaryTermEnforcementDetail() = default;
  AWS_DATAZONE_API GlossaryTermEnforcementDetail(Aws::Utils::Json::JsonView jsonValue);
  AWS_DATAZONE_API GlossaryTermEnforcementDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ID of the required glossary term.</p>
   */
  inline const Aws::Vector<Aws::String>& GetRequiredGlossaryTermIds() const { return m_requiredGlossaryTermIds; }
  inline bool RequiredGlossaryTermIdsHasBeenSet() const { return m_requiredGlossaryTermIdsHasBeenSet; }
  template <typename RequiredGlossaryTermIdsT = Aws::Vector<Aws::String>>
  void SetRequiredGlossaryTermIds(RequiredGlossaryTermIdsT&& value) {
    m_requiredGlossaryTermIdsHasBeenSet = true;
    m_requiredGlossaryTermIds = std::forward<RequiredGlossaryTermIdsT>(value);
  }
  template <typename RequiredGlossaryTermIdsT = Aws::Vector<Aws::String>>
  GlossaryTermEnforcementDetail& WithRequiredGlossaryTermIds(RequiredGlossaryTermIdsT&& value) {
    SetRequiredGlossaryTermIds(std::forward<RequiredGlossaryTermIdsT>(value));
    return *this;
  }
  template <typename RequiredGlossaryTermIdsT = Aws::String>
  GlossaryTermEnforcementDetail& AddRequiredGlossaryTermIds(RequiredGlossaryTermIdsT&& value) {
    m_requiredGlossaryTermIdsHasBeenSet = true;
    m_requiredGlossaryTermIds.emplace_back(std::forward<RequiredGlossaryTermIdsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::String> m_requiredGlossaryTermIds;
  bool m_requiredGlossaryTermIdsHasBeenSet = false;
};

}  // namespace Model
}  // namespace DataZone
}  // namespace Aws

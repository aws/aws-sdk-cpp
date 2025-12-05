/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/model/GlossaryTermEnforcementDetail.h>
#include <aws/datazone/model/MetadataFormEnforcementDetail.h>

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
 * <p>The details of a rule.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/RuleDetail">AWS
 * API Reference</a></p>
 */
class RuleDetail {
 public:
  AWS_DATAZONE_API RuleDetail() = default;
  AWS_DATAZONE_API RuleDetail(Aws::Utils::Json::JsonView jsonValue);
  AWS_DATAZONE_API RuleDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The enforcement details of a glossary term that's part of the metadata
   * rule.</p>
   */
  inline const GlossaryTermEnforcementDetail& GetGlossaryTermEnforcementDetail() const { return m_glossaryTermEnforcementDetail; }
  inline bool GlossaryTermEnforcementDetailHasBeenSet() const { return m_glossaryTermEnforcementDetailHasBeenSet; }
  template <typename GlossaryTermEnforcementDetailT = GlossaryTermEnforcementDetail>
  void SetGlossaryTermEnforcementDetail(GlossaryTermEnforcementDetailT&& value) {
    m_glossaryTermEnforcementDetailHasBeenSet = true;
    m_glossaryTermEnforcementDetail = std::forward<GlossaryTermEnforcementDetailT>(value);
  }
  template <typename GlossaryTermEnforcementDetailT = GlossaryTermEnforcementDetail>
  RuleDetail& WithGlossaryTermEnforcementDetail(GlossaryTermEnforcementDetailT&& value) {
    SetGlossaryTermEnforcementDetail(std::forward<GlossaryTermEnforcementDetailT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The enforcement detail of the metadata form.</p>
   */
  inline const MetadataFormEnforcementDetail& GetMetadataFormEnforcementDetail() const { return m_metadataFormEnforcementDetail; }
  inline bool MetadataFormEnforcementDetailHasBeenSet() const { return m_metadataFormEnforcementDetailHasBeenSet; }
  template <typename MetadataFormEnforcementDetailT = MetadataFormEnforcementDetail>
  void SetMetadataFormEnforcementDetail(MetadataFormEnforcementDetailT&& value) {
    m_metadataFormEnforcementDetailHasBeenSet = true;
    m_metadataFormEnforcementDetail = std::forward<MetadataFormEnforcementDetailT>(value);
  }
  template <typename MetadataFormEnforcementDetailT = MetadataFormEnforcementDetail>
  RuleDetail& WithMetadataFormEnforcementDetail(MetadataFormEnforcementDetailT&& value) {
    SetMetadataFormEnforcementDetail(std::forward<MetadataFormEnforcementDetailT>(value));
    return *this;
  }
  ///@}
 private:
  GlossaryTermEnforcementDetail m_glossaryTermEnforcementDetail;

  MetadataFormEnforcementDetail m_metadataFormEnforcementDetail;
  bool m_glossaryTermEnforcementDetailHasBeenSet = false;
  bool m_metadataFormEnforcementDetailHasBeenSet = false;
};

}  // namespace Model
}  // namespace DataZone
}  // namespace Aws

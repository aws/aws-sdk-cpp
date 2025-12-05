/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/controlcatalog/ControlCatalog_EXPORTS.h>
#include <aws/controlcatalog/model/ControlRelationType.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ControlCatalog {
namespace Model {

/**
 * <p>A structure that describes a control's relationship status with other
 * controls.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/controlcatalog-2018-05-10/RelatedControlMappingDetails">AWS
 * API Reference</a></p>
 */
class RelatedControlMappingDetails {
 public:
  AWS_CONTROLCATALOG_API RelatedControlMappingDetails() = default;
  AWS_CONTROLCATALOG_API RelatedControlMappingDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONTROLCATALOG_API RelatedControlMappingDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONTROLCATALOG_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier of a control.</p>
   */
  inline const Aws::String& GetControlArn() const { return m_controlArn; }
  inline bool ControlArnHasBeenSet() const { return m_controlArnHasBeenSet; }
  template <typename ControlArnT = Aws::String>
  void SetControlArn(ControlArnT&& value) {
    m_controlArnHasBeenSet = true;
    m_controlArn = std::forward<ControlArnT>(value);
  }
  template <typename ControlArnT = Aws::String>
  RelatedControlMappingDetails& WithControlArn(ControlArnT&& value) {
    SetControlArn(std::forward<ControlArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Returns an enumerated value that represents the relationship between two or
   * more controls.</p>
   */
  inline ControlRelationType GetRelationType() const { return m_relationType; }
  inline bool RelationTypeHasBeenSet() const { return m_relationTypeHasBeenSet; }
  inline void SetRelationType(ControlRelationType value) {
    m_relationTypeHasBeenSet = true;
    m_relationType = value;
  }
  inline RelatedControlMappingDetails& WithRelationType(ControlRelationType value) {
    SetRelationType(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_controlArn;

  ControlRelationType m_relationType{ControlRelationType::NOT_SET};
  bool m_controlArnHasBeenSet = false;
  bool m_relationTypeHasBeenSet = false;
};

}  // namespace Model
}  // namespace ControlCatalog
}  // namespace Aws

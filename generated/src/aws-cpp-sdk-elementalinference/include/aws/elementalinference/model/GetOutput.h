/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elementalinference/ElementalInference_EXPORTS.h>
#include <aws/elementalinference/model/OutputConfig.h>
#include <aws/elementalinference/model/OutputStatus.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ElementalInference {
namespace Model {

/**
 * <p>Contains configuration information about one output in a feed. It is used in
 * the GetFeed action.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/elementalinference-2018-11-14/GetOutput">AWS
 * API Reference</a></p>
 */
class GetOutput {
 public:
  AWS_ELEMENTALINFERENCE_API GetOutput() = default;
  AWS_ELEMENTALINFERENCE_API GetOutput(Aws::Utils::Json::JsonView jsonValue);
  AWS_ELEMENTALINFERENCE_API GetOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ELEMENTALINFERENCE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ARN of the output.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  GetOutput& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A typed property for an output in a feed. It is used in the GetFeed action.
   * It identifies the action for Elemental Inference to perform. It also provides a
   * repository for the results of that action. For example, CroppingConfig output
   * will contain the metadata for the crop feature. </p>
   */
  inline const OutputConfig& GetOutputConfig() const { return m_outputConfig; }
  inline bool OutputConfigHasBeenSet() const { return m_outputConfigHasBeenSet; }
  template <typename OutputConfigT = OutputConfig>
  void SetOutputConfig(OutputConfigT&& value) {
    m_outputConfigHasBeenSet = true;
    m_outputConfig = std::forward<OutputConfigT>(value);
  }
  template <typename OutputConfigT = OutputConfig>
  GetOutput& WithOutputConfig(OutputConfigT&& value) {
    SetOutputConfig(std::forward<OutputConfigT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the output.</p>
   */
  inline OutputStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(OutputStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline GetOutput& WithStatus(OutputStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The description of the output.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  GetOutput& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>True means that the output was originally created in the feed by the
   * AssociateFeed operation. False means it was created using CreateFeed or
   * UpdateFeed. You will need this value if you use the UpdateFeed operation to
   * modify the list of outputs in the feed.</p>
   */
  inline bool GetFromAssociation() const { return m_fromAssociation; }
  inline bool FromAssociationHasBeenSet() const { return m_fromAssociationHasBeenSet; }
  inline void SetFromAssociation(bool value) {
    m_fromAssociationHasBeenSet = true;
    m_fromAssociation = value;
  }
  inline GetOutput& WithFromAssociation(bool value) {
    SetFromAssociation(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;

  OutputConfig m_outputConfig;

  OutputStatus m_status{OutputStatus::NOT_SET};

  Aws::String m_description;

  bool m_fromAssociation{false};
  bool m_nameHasBeenSet = false;
  bool m_outputConfigHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_fromAssociationHasBeenSet = false;
};

}  // namespace Model
}  // namespace ElementalInference
}  // namespace Aws

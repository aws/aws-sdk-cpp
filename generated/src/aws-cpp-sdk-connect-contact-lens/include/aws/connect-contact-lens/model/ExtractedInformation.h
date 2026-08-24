/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect-contact-lens/ConnectContactLens_EXPORTS.h>
#include <aws/connect-contact-lens/model/ExtractedInformationFailureCode.h>
#include <aws/connect-contact-lens/model/ExtractedInformationValue.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ConnectContactLens {
namespace Model {

/**
 * <p>Segment containing information extracted from the conversation. Each segment
 * represents the results for a single extraction definition.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-contact-lens-2020-08-21/ExtractedInformation">AWS
 * API Reference</a></p>
 */
class ExtractedInformation {
 public:
  AWS_CONNECTCONTACTLENS_API ExtractedInformation() = default;
  AWS_CONNECTCONTACTLENS_API ExtractedInformation(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECTCONTACTLENS_API ExtractedInformation& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECTCONTACTLENS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The identifier of the extraction definition that produced this result.</p>
   */
  inline const Aws::String& GetExtractionDefinitionId() const { return m_extractionDefinitionId; }
  inline bool ExtractionDefinitionIdHasBeenSet() const { return m_extractionDefinitionIdHasBeenSet; }
  template <typename ExtractionDefinitionIdT = Aws::String>
  void SetExtractionDefinitionId(ExtractionDefinitionIdT&& value) {
    m_extractionDefinitionIdHasBeenSet = true;
    m_extractionDefinitionId = std::forward<ExtractionDefinitionIdT>(value);
  }
  template <typename ExtractionDefinitionIdT = Aws::String>
  ExtractedInformation& WithExtractionDefinitionId(ExtractionDefinitionIdT&& value) {
    SetExtractionDefinitionId(std::forward<ExtractionDefinitionIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the extraction definition that produced this result.</p>
   */
  inline const Aws::String& GetExtractionDefinitionName() const { return m_extractionDefinitionName; }
  inline bool ExtractionDefinitionNameHasBeenSet() const { return m_extractionDefinitionNameHasBeenSet; }
  template <typename ExtractionDefinitionNameT = Aws::String>
  void SetExtractionDefinitionName(ExtractionDefinitionNameT&& value) {
    m_extractionDefinitionNameHasBeenSet = true;
    m_extractionDefinitionName = std::forward<ExtractionDefinitionNameT>(value);
  }
  template <typename ExtractionDefinitionNameT = Aws::String>
  ExtractedInformation& WithExtractionDefinitionName(ExtractionDefinitionNameT&& value) {
    SetExtractionDefinitionName(std::forward<ExtractionDefinitionNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The display label of the extraction definition that produced this result.</p>
   */
  inline const Aws::String& GetExtractionDefinitionDisplayLabel() const { return m_extractionDefinitionDisplayLabel; }
  inline bool ExtractionDefinitionDisplayLabelHasBeenSet() const { return m_extractionDefinitionDisplayLabelHasBeenSet; }
  template <typename ExtractionDefinitionDisplayLabelT = Aws::String>
  void SetExtractionDefinitionDisplayLabel(ExtractionDefinitionDisplayLabelT&& value) {
    m_extractionDefinitionDisplayLabelHasBeenSet = true;
    m_extractionDefinitionDisplayLabel = std::forward<ExtractionDefinitionDisplayLabelT>(value);
  }
  template <typename ExtractionDefinitionDisplayLabelT = Aws::String>
  ExtractedInformation& WithExtractionDefinitionDisplayLabel(ExtractionDefinitionDisplayLabelT&& value) {
    SetExtractionDefinitionDisplayLabel(std::forward<ExtractionDefinitionDisplayLabelT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of values extracted from the conversation for this extraction
   * definition. This field is empty when a <code>FailureCode</code> is present.</p>
   */
  inline const Aws::Vector<ExtractedInformationValue>& GetExtractedValues() const { return m_extractedValues; }
  inline bool ExtractedValuesHasBeenSet() const { return m_extractedValuesHasBeenSet; }
  template <typename ExtractedValuesT = Aws::Vector<ExtractedInformationValue>>
  void SetExtractedValues(ExtractedValuesT&& value) {
    m_extractedValuesHasBeenSet = true;
    m_extractedValues = std::forward<ExtractedValuesT>(value);
  }
  template <typename ExtractedValuesT = Aws::Vector<ExtractedInformationValue>>
  ExtractedInformation& WithExtractedValues(ExtractedValuesT&& value) {
    SetExtractedValues(std::forward<ExtractedValuesT>(value));
    return *this;
  }
  template <typename ExtractedValuesT = ExtractedInformationValue>
  ExtractedInformation& AddExtractedValues(ExtractedValuesT&& value) {
    m_extractedValuesHasBeenSet = true;
    m_extractedValues.emplace_back(std::forward<ExtractedValuesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>If the information failed to be extracted, one of the following failure codes
   * occurs:</p> <ul> <li> <p> <code>QUOTA_EXCEEDED</code>: The number of concurrent
   * analytics jobs reached your service quota.</p> </li> <li> <p>
   * <code>INSUFFICIENT_CONVERSATION_CONTENT</code>: Information extraction requires
   * a conversation with at least one turn from each participant.</p> </li> <li> <p>
   * <code>FAILED_SAFETY_GUIDELINES</code>: The extracted information cannot be
   * provided because it failed to meet system safety guidelines.</p> </li> <li> <p>
   * <code>INTERNAL_ERROR</code>: Internal system error.</p> </li> <li> <p>
   * <code>MAX_PACKAGE_FEATURE_ONLY</code>: Information extraction is only available
   * in Amazon Connect Customer instances.</p> </li> </ul>
   */
  inline ExtractedInformationFailureCode GetFailureCode() const { return m_failureCode; }
  inline bool FailureCodeHasBeenSet() const { return m_failureCodeHasBeenSet; }
  inline void SetFailureCode(ExtractedInformationFailureCode value) {
    m_failureCodeHasBeenSet = true;
    m_failureCode = value;
  }
  inline ExtractedInformation& WithFailureCode(ExtractedInformationFailureCode value) {
    SetFailureCode(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_extractionDefinitionId;

  Aws::String m_extractionDefinitionName;

  Aws::String m_extractionDefinitionDisplayLabel;

  Aws::Vector<ExtractedInformationValue> m_extractedValues;

  ExtractedInformationFailureCode m_failureCode{ExtractedInformationFailureCode::NOT_SET};
  bool m_extractionDefinitionIdHasBeenSet = false;
  bool m_extractionDefinitionNameHasBeenSet = false;
  bool m_extractionDefinitionDisplayLabelHasBeenSet = false;
  bool m_extractedValuesHasBeenSet = false;
  bool m_failureCodeHasBeenSet = false;
};

}  // namespace Model
}  // namespace ConnectContactLens
}  // namespace Aws

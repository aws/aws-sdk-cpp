/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcases/ConnectCases_EXPORTS.h>
#include <aws/connectcases/model/FieldIdentifier.h>
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
namespace ConnectCases {
namespace Model {

/**
 * <p>Specifies the fields whose values to take from the secondary case when you
 * merge cases.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connectcases-2022-10-03/FieldsConfiguration">AWS
 * API Reference</a></p>
 */
class FieldsConfiguration {
 public:
  AWS_CONNECTCASES_API FieldsConfiguration() = default;
  AWS_CONNECTCASES_API FieldsConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECTCASES_API FieldsConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECTCASES_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The fields whose values to take from the source case. Each field must exist
   * on the source case and must be a field that can be merged. Don't list the same
   * field more than once.</p>
   */
  inline const Aws::Vector<FieldIdentifier>& GetFieldIds() const { return m_fieldIds; }
  inline bool FieldIdsHasBeenSet() const { return m_fieldIdsHasBeenSet; }
  template <typename FieldIdsT = Aws::Vector<FieldIdentifier>>
  void SetFieldIds(FieldIdsT&& value) {
    m_fieldIdsHasBeenSet = true;
    m_fieldIds = std::forward<FieldIdsT>(value);
  }
  template <typename FieldIdsT = Aws::Vector<FieldIdentifier>>
  FieldsConfiguration& WithFieldIds(FieldIdsT&& value) {
    SetFieldIds(std::forward<FieldIdsT>(value));
    return *this;
  }
  template <typename FieldIdsT = FieldIdentifier>
  FieldsConfiguration& AddFieldIds(FieldIdsT&& value) {
    m_fieldIdsHasBeenSet = true;
    m_fieldIds.emplace_back(std::forward<FieldIdsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the case to take the field values from. This must be
   * the secondary case.</p>
   */
  inline const Aws::String& GetSourceCaseId() const { return m_sourceCaseId; }
  inline bool SourceCaseIdHasBeenSet() const { return m_sourceCaseIdHasBeenSet; }
  template <typename SourceCaseIdT = Aws::String>
  void SetSourceCaseId(SourceCaseIdT&& value) {
    m_sourceCaseIdHasBeenSet = true;
    m_sourceCaseId = std::forward<SourceCaseIdT>(value);
  }
  template <typename SourceCaseIdT = Aws::String>
  FieldsConfiguration& WithSourceCaseId(SourceCaseIdT&& value) {
    SetSourceCaseId(std::forward<SourceCaseIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<FieldIdentifier> m_fieldIds;

  Aws::String m_sourceCaseId;
  bool m_fieldIdsHasBeenSet = false;
  bool m_sourceCaseIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace ConnectCases
}  // namespace Aws

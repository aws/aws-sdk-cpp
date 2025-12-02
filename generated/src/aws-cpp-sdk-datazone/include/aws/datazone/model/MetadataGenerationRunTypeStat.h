/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/model/MetadataGenerationRunStatus.h>
#include <aws/datazone/model/MetadataGenerationRunType.h>

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
 * <p>The statistics of the metadata generation run type.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/MetadataGenerationRunTypeStat">AWS
 * API Reference</a></p>
 */
class MetadataGenerationRunTypeStat {
 public:
  AWS_DATAZONE_API MetadataGenerationRunTypeStat() = default;
  AWS_DATAZONE_API MetadataGenerationRunTypeStat(Aws::Utils::Json::JsonView jsonValue);
  AWS_DATAZONE_API MetadataGenerationRunTypeStat& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The error message displayed if the action fails to run.</p>
   */
  inline const Aws::String& GetErrorMessage() const { return m_errorMessage; }
  inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }
  template <typename ErrorMessageT = Aws::String>
  void SetErrorMessage(ErrorMessageT&& value) {
    m_errorMessageHasBeenSet = true;
    m_errorMessage = std::forward<ErrorMessageT>(value);
  }
  template <typename ErrorMessageT = Aws::String>
  MetadataGenerationRunTypeStat& WithErrorMessage(ErrorMessageT&& value) {
    SetErrorMessage(std::forward<ErrorMessageT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the metadata generation run type statistics.</p>
   */
  inline MetadataGenerationRunStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(MetadataGenerationRunStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline MetadataGenerationRunTypeStat& WithStatus(MetadataGenerationRunStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of the metadata generation run type statistics.</p>
   */
  inline MetadataGenerationRunType GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  inline void SetType(MetadataGenerationRunType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline MetadataGenerationRunTypeStat& WithType(MetadataGenerationRunType value) {
    SetType(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_errorMessage;
  bool m_errorMessageHasBeenSet = false;

  MetadataGenerationRunStatus m_status{MetadataGenerationRunStatus::NOT_SET};
  bool m_statusHasBeenSet = false;

  MetadataGenerationRunType m_type{MetadataGenerationRunType::NOT_SET};
  bool m_typeHasBeenSet = false;
};

}  // namespace Model
}  // namespace DataZone
}  // namespace Aws

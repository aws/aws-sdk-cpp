/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connecthealth/ConnectHealth_EXPORTS.h>
#include <aws/connecthealth/model/DatasetStatus.h>
#include <aws/connecthealth/model/DatasetType.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ConnectHealth {
namespace Model {

/**
 * <p>Summary information about a Dataset.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connecthealth-2025-01-29/DatasetSummary">AWS
 * API Reference</a></p>
 */
class DatasetSummary {
 public:
  AWS_CONNECTHEALTH_API DatasetSummary() = default;
  AWS_CONNECTHEALTH_API DatasetSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECTHEALTH_API DatasetSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECTHEALTH_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the dataset.</p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  DatasetSummary& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the dataset.</p>
   */
  inline const Aws::String& GetDatasetId() const { return m_datasetId; }
  inline bool DatasetIdHasBeenSet() const { return m_datasetIdHasBeenSet; }
  template <typename DatasetIdT = Aws::String>
  void SetDatasetId(DatasetIdT&& value) {
    m_datasetIdHasBeenSet = true;
    m_datasetId = std::forward<DatasetIdT>(value);
  }
  template <typename DatasetIdT = Aws::String>
  DatasetSummary& WithDatasetId(DatasetIdT&& value) {
    SetDatasetId(std::forward<DatasetIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the dataset.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  DatasetSummary& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of the dataset.</p>
   */
  inline DatasetType GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  inline void SetType(DatasetType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline DatasetSummary& WithType(DatasetType value) {
    SetType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the dataset.</p>
   */
  inline DatasetStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(DatasetStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline DatasetSummary& WithStatus(DatasetStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Details about the status of the dataset, such as the reason that it failed to
   * build or delete.</p>
   */
  inline const Aws::String& GetStatusDetails() const { return m_statusDetails; }
  inline bool StatusDetailsHasBeenSet() const { return m_statusDetailsHasBeenSet; }
  template <typename StatusDetailsT = Aws::String>
  void SetStatusDetails(StatusDetailsT&& value) {
    m_statusDetailsHasBeenSet = true;
    m_statusDetails = std::forward<StatusDetailsT>(value);
  }
  template <typename StatusDetailsT = Aws::String>
  DatasetSummary& WithStatusDetails(StatusDetailsT&& value) {
    SetStatusDetails(std::forward<StatusDetailsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time that the dataset was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  DatasetSummary& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time that the dataset was last updated.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  DatasetSummary& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_arn;

  Aws::String m_datasetId;

  Aws::String m_name;

  DatasetType m_type{DatasetType::NOT_SET};

  DatasetStatus m_status{DatasetStatus::NOT_SET};

  Aws::String m_statusDetails;

  Aws::Utils::DateTime m_createdAt{};

  Aws::Utils::DateTime m_updatedAt{};
  bool m_arnHasBeenSet = false;
  bool m_datasetIdHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_typeHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_statusDetailsHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
};

}  // namespace Model
}  // namespace ConnectHealth
}  // namespace Aws

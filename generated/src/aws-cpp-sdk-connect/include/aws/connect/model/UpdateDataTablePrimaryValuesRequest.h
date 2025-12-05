/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/ConnectRequest.h>
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/DataTableLockVersion.h>
#include <aws/connect/model/PrimaryValue.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace Connect {
namespace Model {

/**
 */
class UpdateDataTablePrimaryValuesRequest : public ConnectRequest {
 public:
  AWS_CONNECT_API UpdateDataTablePrimaryValuesRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateDataTablePrimaryValues"; }

  AWS_CONNECT_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The unique identifier for the Amazon Connect instance.</p>
   */
  inline const Aws::String& GetInstanceId() const { return m_instanceId; }
  inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
  template <typename InstanceIdT = Aws::String>
  void SetInstanceId(InstanceIdT&& value) {
    m_instanceIdHasBeenSet = true;
    m_instanceId = std::forward<InstanceIdT>(value);
  }
  template <typename InstanceIdT = Aws::String>
  UpdateDataTablePrimaryValuesRequest& WithInstanceId(InstanceIdT&& value) {
    SetInstanceId(std::forward<InstanceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier for the data table. Must also accept the table ARN with
   * or without a version alias. If the version is provided as part of the identifier
   * or ARN, the version must be one of the two available system managed aliases,
   * $SAVED or $LATEST.</p>
   */
  inline const Aws::String& GetDataTableId() const { return m_dataTableId; }
  inline bool DataTableIdHasBeenSet() const { return m_dataTableIdHasBeenSet; }
  template <typename DataTableIdT = Aws::String>
  void SetDataTableId(DataTableIdT&& value) {
    m_dataTableIdHasBeenSet = true;
    m_dataTableId = std::forward<DataTableIdT>(value);
  }
  template <typename DataTableIdT = Aws::String>
  UpdateDataTablePrimaryValuesRequest& WithDataTableId(DataTableIdT&& value) {
    SetDataTableId(std::forward<DataTableIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current primary values for the record. Required and must include values
   * for all primary attributes. Fails if the table has primary attributes and some
   * primary values are omitted.</p>
   */
  inline const Aws::Vector<PrimaryValue>& GetPrimaryValues() const { return m_primaryValues; }
  inline bool PrimaryValuesHasBeenSet() const { return m_primaryValuesHasBeenSet; }
  template <typename PrimaryValuesT = Aws::Vector<PrimaryValue>>
  void SetPrimaryValues(PrimaryValuesT&& value) {
    m_primaryValuesHasBeenSet = true;
    m_primaryValues = std::forward<PrimaryValuesT>(value);
  }
  template <typename PrimaryValuesT = Aws::Vector<PrimaryValue>>
  UpdateDataTablePrimaryValuesRequest& WithPrimaryValues(PrimaryValuesT&& value) {
    SetPrimaryValues(std::forward<PrimaryValuesT>(value));
    return *this;
  }
  template <typename PrimaryValuesT = PrimaryValue>
  UpdateDataTablePrimaryValuesRequest& AddPrimaryValues(PrimaryValuesT&& value) {
    m_primaryValuesHasBeenSet = true;
    m_primaryValues.emplace_back(std::forward<PrimaryValuesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The new primary values for the record. Required and must include values for
   * all primary attributes. The combination must be unique within the table.</p>
   */
  inline const Aws::Vector<PrimaryValue>& GetNewPrimaryValues() const { return m_newPrimaryValues; }
  inline bool NewPrimaryValuesHasBeenSet() const { return m_newPrimaryValuesHasBeenSet; }
  template <typename NewPrimaryValuesT = Aws::Vector<PrimaryValue>>
  void SetNewPrimaryValues(NewPrimaryValuesT&& value) {
    m_newPrimaryValuesHasBeenSet = true;
    m_newPrimaryValues = std::forward<NewPrimaryValuesT>(value);
  }
  template <typename NewPrimaryValuesT = Aws::Vector<PrimaryValue>>
  UpdateDataTablePrimaryValuesRequest& WithNewPrimaryValues(NewPrimaryValuesT&& value) {
    SetNewPrimaryValues(std::forward<NewPrimaryValuesT>(value));
    return *this;
  }
  template <typename NewPrimaryValuesT = PrimaryValue>
  UpdateDataTablePrimaryValuesRequest& AddNewPrimaryValues(NewPrimaryValuesT&& value) {
    m_newPrimaryValuesHasBeenSet = true;
    m_newPrimaryValues.emplace_back(std::forward<NewPrimaryValuesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The lock version information required for optimistic locking to prevent
   * concurrent modifications.</p>
   */
  inline const DataTableLockVersion& GetLockVersion() const { return m_lockVersion; }
  inline bool LockVersionHasBeenSet() const { return m_lockVersionHasBeenSet; }
  template <typename LockVersionT = DataTableLockVersion>
  void SetLockVersion(LockVersionT&& value) {
    m_lockVersionHasBeenSet = true;
    m_lockVersion = std::forward<LockVersionT>(value);
  }
  template <typename LockVersionT = DataTableLockVersion>
  UpdateDataTablePrimaryValuesRequest& WithLockVersion(LockVersionT&& value) {
    SetLockVersion(std::forward<LockVersionT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_instanceId;

  Aws::String m_dataTableId;

  Aws::Vector<PrimaryValue> m_primaryValues;

  Aws::Vector<PrimaryValue> m_newPrimaryValues;

  DataTableLockVersion m_lockVersion;
  bool m_instanceIdHasBeenSet = false;
  bool m_dataTableIdHasBeenSet = false;
  bool m_primaryValuesHasBeenSet = false;
  bool m_newPrimaryValuesHasBeenSet = false;
  bool m_lockVersionHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws

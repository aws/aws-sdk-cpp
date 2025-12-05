/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/ConnectRequest.h>
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/PrimaryAttributeValueFilter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace Http {
class URI;
}  // namespace Http
namespace Connect {
namespace Model {

/**
 */
class ListDataTableValuesRequest : public ConnectRequest {
 public:
  AWS_CONNECT_API ListDataTableValuesRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListDataTableValues"; }

  AWS_CONNECT_API Aws::String SerializePayload() const override;

  AWS_CONNECT_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

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
  ListDataTableValuesRequest& WithInstanceId(InstanceIdT&& value) {
    SetInstanceId(std::forward<InstanceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier for the data table whose values should be listed.</p>
   */
  inline const Aws::String& GetDataTableId() const { return m_dataTableId; }
  inline bool DataTableIdHasBeenSet() const { return m_dataTableIdHasBeenSet; }
  template <typename DataTableIdT = Aws::String>
  void SetDataTableId(DataTableIdT&& value) {
    m_dataTableIdHasBeenSet = true;
    m_dataTableId = std::forward<DataTableIdT>(value);
  }
  template <typename DataTableIdT = Aws::String>
  ListDataTableValuesRequest& WithDataTableId(DataTableIdT&& value) {
    SetDataTableId(std::forward<DataTableIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Optional list of specific record IDs to retrieve values for.</p>
   */
  inline const Aws::Vector<Aws::String>& GetRecordIds() const { return m_recordIds; }
  inline bool RecordIdsHasBeenSet() const { return m_recordIdsHasBeenSet; }
  template <typename RecordIdsT = Aws::Vector<Aws::String>>
  void SetRecordIds(RecordIdsT&& value) {
    m_recordIdsHasBeenSet = true;
    m_recordIds = std::forward<RecordIdsT>(value);
  }
  template <typename RecordIdsT = Aws::Vector<Aws::String>>
  ListDataTableValuesRequest& WithRecordIds(RecordIdsT&& value) {
    SetRecordIds(std::forward<RecordIdsT>(value));
    return *this;
  }
  template <typename RecordIdsT = Aws::String>
  ListDataTableValuesRequest& AddRecordIds(RecordIdsT&& value) {
    m_recordIdsHasBeenSet = true;
    m_recordIds.emplace_back(std::forward<RecordIdsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Optional filter to retrieve values for records matching specific primary
   * attribute criteria.</p>
   */
  inline const Aws::Vector<PrimaryAttributeValueFilter>& GetPrimaryAttributeValues() const { return m_primaryAttributeValues; }
  inline bool PrimaryAttributeValuesHasBeenSet() const { return m_primaryAttributeValuesHasBeenSet; }
  template <typename PrimaryAttributeValuesT = Aws::Vector<PrimaryAttributeValueFilter>>
  void SetPrimaryAttributeValues(PrimaryAttributeValuesT&& value) {
    m_primaryAttributeValuesHasBeenSet = true;
    m_primaryAttributeValues = std::forward<PrimaryAttributeValuesT>(value);
  }
  template <typename PrimaryAttributeValuesT = Aws::Vector<PrimaryAttributeValueFilter>>
  ListDataTableValuesRequest& WithPrimaryAttributeValues(PrimaryAttributeValuesT&& value) {
    SetPrimaryAttributeValues(std::forward<PrimaryAttributeValuesT>(value));
    return *this;
  }
  template <typename PrimaryAttributeValuesT = PrimaryAttributeValueFilter>
  ListDataTableValuesRequest& AddPrimaryAttributeValues(PrimaryAttributeValuesT&& value) {
    m_primaryAttributeValuesHasBeenSet = true;
    m_primaryAttributeValues.emplace_back(std::forward<PrimaryAttributeValuesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specify the pagination token from a previous request to retrieve the next
   * page of results.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListDataTableValuesRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of data table values to return in one page of results.</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline ListDataTableValuesRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_instanceId;

  Aws::String m_dataTableId;

  Aws::Vector<Aws::String> m_recordIds;

  Aws::Vector<PrimaryAttributeValueFilter> m_primaryAttributeValues;

  Aws::String m_nextToken;

  int m_maxResults{0};
  bool m_instanceIdHasBeenSet = false;
  bool m_dataTableIdHasBeenSet = false;
  bool m_recordIdsHasBeenSet = false;
  bool m_primaryAttributeValuesHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_maxResultsHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws

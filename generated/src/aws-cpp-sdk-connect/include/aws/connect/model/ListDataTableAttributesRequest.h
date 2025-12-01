/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/ConnectRequest.h>
#include <aws/connect/Connect_EXPORTS.h>
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
class ListDataTableAttributesRequest : public ConnectRequest {
 public:
  AWS_CONNECT_API ListDataTableAttributesRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListDataTableAttributes"; }

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
  ListDataTableAttributesRequest& WithInstanceId(InstanceIdT&& value) {
    SetInstanceId(std::forward<InstanceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier for the data table whose attributes should be
   * listed.</p>
   */
  inline const Aws::String& GetDataTableId() const { return m_dataTableId; }
  inline bool DataTableIdHasBeenSet() const { return m_dataTableIdHasBeenSet; }
  template <typename DataTableIdT = Aws::String>
  void SetDataTableId(DataTableIdT&& value) {
    m_dataTableIdHasBeenSet = true;
    m_dataTableId = std::forward<DataTableIdT>(value);
  }
  template <typename DataTableIdT = Aws::String>
  ListDataTableAttributesRequest& WithDataTableId(DataTableIdT&& value) {
    SetDataTableId(std::forward<DataTableIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Optional list of specific attribute IDs to retrieve. Used for CloudFormation
   * to effectively describe attributes by ID. If NextToken is provided, this
   * parameter is ignored.</p>
   */
  inline const Aws::Vector<Aws::String>& GetAttributeIds() const { return m_attributeIds; }
  inline bool AttributeIdsHasBeenSet() const { return m_attributeIdsHasBeenSet; }
  template <typename AttributeIdsT = Aws::Vector<Aws::String>>
  void SetAttributeIds(AttributeIdsT&& value) {
    m_attributeIdsHasBeenSet = true;
    m_attributeIds = std::forward<AttributeIdsT>(value);
  }
  template <typename AttributeIdsT = Aws::Vector<Aws::String>>
  ListDataTableAttributesRequest& WithAttributeIds(AttributeIdsT&& value) {
    SetAttributeIds(std::forward<AttributeIdsT>(value));
    return *this;
  }
  template <typename AttributeIdsT = Aws::String>
  ListDataTableAttributesRequest& AddAttributeIds(AttributeIdsT&& value) {
    m_attributeIdsHasBeenSet = true;
    m_attributeIds.emplace_back(std::forward<AttributeIdsT>(value));
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
  ListDataTableAttributesRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of data table attributes to return in one page of
   * results.</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline ListDataTableAttributesRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_instanceId;
  bool m_instanceIdHasBeenSet = false;

  Aws::String m_dataTableId;
  bool m_dataTableIdHasBeenSet = false;

  Aws::Vector<Aws::String> m_attributeIds;
  bool m_attributeIdsHasBeenSet = false;

  Aws::String m_nextToken;
  bool m_nextTokenHasBeenSet = false;

  int m_maxResults{0};
  bool m_maxResultsHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws

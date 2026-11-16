/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connecthealth/ConnectHealthRequest.h>
#include <aws/connecthealth/ConnectHealth_EXPORTS.h>
#include <aws/connecthealth/model/DatasetType.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Http {
class URI;
}  // namespace Http
namespace ConnectHealth {
namespace Model {

/**
 */
class ListDatasetsRequest : public ConnectHealthRequest {
 public:
  AWS_CONNECTHEALTH_API ListDatasetsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListDatasets"; }

  AWS_CONNECTHEALTH_API Aws::String SerializePayload() const override;

  AWS_CONNECTHEALTH_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

  ///@{
  /**
   * <p>The unique identifier of the parent Domain.</p>
   */
  inline const Aws::String& GetDomainId() const { return m_domainId; }
  inline bool DomainIdHasBeenSet() const { return m_domainIdHasBeenSet; }
  template <typename DomainIdT = Aws::String>
  void SetDomainId(DomainIdT&& value) {
    m_domainIdHasBeenSet = true;
    m_domainId = std::forward<DomainIdT>(value);
  }
  template <typename DomainIdT = Aws::String>
  ListDatasetsRequest& WithDomainId(DomainIdT&& value) {
    SetDomainId(std::forward<DomainIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Returns only datasets of this type.</p>
   */
  inline DatasetType GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  inline void SetType(DatasetType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline ListDatasetsRequest& WithType(DatasetType value) {
    SetType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The token for the next page of results, from a previous ListDatasets
   * response. If you don't specify a value, the operation returns the first page of
   * results.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListDatasetsRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of datasets to return in one page. The default is 100.</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline ListDatasetsRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_domainId;

  DatasetType m_type{DatasetType::NOT_SET};

  Aws::String m_nextToken;

  int m_maxResults{0};
  bool m_domainIdHasBeenSet = false;
  bool m_typeHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_maxResultsHasBeenSet = false;
};

}  // namespace Model
}  // namespace ConnectHealth
}  // namespace Aws

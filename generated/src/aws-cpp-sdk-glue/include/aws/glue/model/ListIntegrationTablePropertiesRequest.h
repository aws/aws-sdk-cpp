/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/glue/GlueRequest.h>
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/IntegrationTablePropertiesFilter.h>

#include <utility>

namespace Aws {
namespace Glue {
namespace Model {

/**
 */
class ListIntegrationTablePropertiesRequest : public GlueRequest {
 public:
  AWS_GLUE_API ListIntegrationTablePropertiesRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListIntegrationTableProperties"; }

  AWS_GLUE_API Aws::String SerializePayload() const override;

  AWS_GLUE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The pagination token for the next page of results. The initial value is
   * <code>null</code>.</p>
   */
  inline const Aws::String& GetMarker() const { return m_marker; }
  inline bool MarkerHasBeenSet() const { return m_markerHasBeenSet; }
  template <typename MarkerT = Aws::String>
  void SetMarker(MarkerT&& value) {
    m_markerHasBeenSet = true;
    m_marker = std::forward<MarkerT>(value);
  }
  template <typename MarkerT = Aws::String>
  ListIntegrationTablePropertiesRequest& WithMarker(MarkerT&& value) {
    SetMarker(std::forward<MarkerT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of filters. Supported filter keys are <code>SourceArn</code>,
   * <code>TargetArn</code>, <code>SourceTableName</code>, and
   * <code>TargetTableName</code>.</p>
   */
  inline const Aws::Vector<IntegrationTablePropertiesFilter>& GetFilters() const { return m_filters; }
  inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
  template <typename FiltersT = Aws::Vector<IntegrationTablePropertiesFilter>>
  void SetFilters(FiltersT&& value) {
    m_filtersHasBeenSet = true;
    m_filters = std::forward<FiltersT>(value);
  }
  template <typename FiltersT = Aws::Vector<IntegrationTablePropertiesFilter>>
  ListIntegrationTablePropertiesRequest& WithFilters(FiltersT&& value) {
    SetFilters(std::forward<FiltersT>(value));
    return *this;
  }
  template <typename FiltersT = IntegrationTablePropertiesFilter>
  ListIntegrationTablePropertiesRequest& AddFilters(FiltersT&& value) {
    m_filtersHasBeenSet = true;
    m_filters.emplace_back(std::forward<FiltersT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of records to return in the response.</p>
   */
  inline int GetMaxRecords() const { return m_maxRecords; }
  inline bool MaxRecordsHasBeenSet() const { return m_maxRecordsHasBeenSet; }
  inline void SetMaxRecords(int value) {
    m_maxRecordsHasBeenSet = true;
    m_maxRecords = value;
  }
  inline ListIntegrationTablePropertiesRequest& WithMaxRecords(int value) {
    SetMaxRecords(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_marker;

  Aws::Vector<IntegrationTablePropertiesFilter> m_filters;

  int m_maxRecords{0};
  bool m_markerHasBeenSet = false;
  bool m_filtersHasBeenSet = false;
  bool m_maxRecordsHasBeenSet = false;
};

}  // namespace Model
}  // namespace Glue
}  // namespace Aws

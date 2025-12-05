/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/glue/GlueRequest.h>
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/IntegrationResourcePropertyFilter.h>

#include <utility>

namespace Aws {
namespace Glue {
namespace Model {

/**
 */
class ListIntegrationResourcePropertiesRequest : public GlueRequest {
 public:
  AWS_GLUE_API ListIntegrationResourcePropertiesRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListIntegrationResourceProperties"; }

  AWS_GLUE_API Aws::String SerializePayload() const override;

  AWS_GLUE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>This is the pagination token for next page, initial value is
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
  ListIntegrationResourcePropertiesRequest& WithMarker(MarkerT&& value) {
    SetMarker(std::forward<MarkerT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of filters, supported filter Key is <code>SourceArn</code> and
   * <code>TargetArn</code>.</p>
   */
  inline const Aws::Vector<IntegrationResourcePropertyFilter>& GetFilters() const { return m_filters; }
  inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
  template <typename FiltersT = Aws::Vector<IntegrationResourcePropertyFilter>>
  void SetFilters(FiltersT&& value) {
    m_filtersHasBeenSet = true;
    m_filters = std::forward<FiltersT>(value);
  }
  template <typename FiltersT = Aws::Vector<IntegrationResourcePropertyFilter>>
  ListIntegrationResourcePropertiesRequest& WithFilters(FiltersT&& value) {
    SetFilters(std::forward<FiltersT>(value));
    return *this;
  }
  template <typename FiltersT = IntegrationResourcePropertyFilter>
  ListIntegrationResourcePropertiesRequest& AddFilters(FiltersT&& value) {
    m_filtersHasBeenSet = true;
    m_filters.emplace_back(std::forward<FiltersT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>This is total number of items to be evaluated.</p>
   */
  inline int GetMaxRecords() const { return m_maxRecords; }
  inline bool MaxRecordsHasBeenSet() const { return m_maxRecordsHasBeenSet; }
  inline void SetMaxRecords(int value) {
    m_maxRecordsHasBeenSet = true;
    m_maxRecords = value;
  }
  inline ListIntegrationResourcePropertiesRequest& WithMaxRecords(int value) {
    SetMaxRecords(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_marker;

  Aws::Vector<IntegrationResourcePropertyFilter> m_filters;

  int m_maxRecords{0};
  bool m_markerHasBeenSet = false;
  bool m_filtersHasBeenSet = false;
  bool m_maxRecordsHasBeenSet = false;
};

}  // namespace Model
}  // namespace Glue
}  // namespace Aws

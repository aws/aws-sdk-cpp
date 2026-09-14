/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/IntegrationTableProperties.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace Glue {
namespace Model {
class ListIntegrationTablePropertiesResult {
 public:
  AWS_GLUE_API ListIntegrationTablePropertiesResult() = default;
  AWS_GLUE_API ListIntegrationTablePropertiesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_GLUE_API ListIntegrationTablePropertiesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>A list of integration table properties meeting the filter criteria.</p>
   */
  inline const Aws::Vector<IntegrationTableProperties>& GetIntegrationTablePropertiesList() const {
    return m_integrationTablePropertiesList;
  }
  template <typename IntegrationTablePropertiesListT = Aws::Vector<IntegrationTableProperties>>
  void SetIntegrationTablePropertiesList(IntegrationTablePropertiesListT&& value) {
    m_integrationTablePropertiesListHasBeenSet = true;
    m_integrationTablePropertiesList = std::forward<IntegrationTablePropertiesListT>(value);
  }
  template <typename IntegrationTablePropertiesListT = Aws::Vector<IntegrationTableProperties>>
  ListIntegrationTablePropertiesResult& WithIntegrationTablePropertiesList(IntegrationTablePropertiesListT&& value) {
    SetIntegrationTablePropertiesList(std::forward<IntegrationTablePropertiesListT>(value));
    return *this;
  }
  template <typename IntegrationTablePropertiesListT = IntegrationTableProperties>
  ListIntegrationTablePropertiesResult& AddIntegrationTablePropertiesList(IntegrationTablePropertiesListT&& value) {
    m_integrationTablePropertiesListHasBeenSet = true;
    m_integrationTablePropertiesList.emplace_back(std::forward<IntegrationTablePropertiesListT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The pagination token for the next page. Returns <code>null</code> if there
   * are no more results.</p>
   */
  inline const Aws::String& GetMarker() const { return m_marker; }
  template <typename MarkerT = Aws::String>
  void SetMarker(MarkerT&& value) {
    m_markerHasBeenSet = true;
    m_marker = std::forward<MarkerT>(value);
  }
  template <typename MarkerT = Aws::String>
  ListIntegrationTablePropertiesResult& WithMarker(MarkerT&& value) {
    SetMarker(std::forward<MarkerT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  ListIntegrationTablePropertiesResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<IntegrationTableProperties> m_integrationTablePropertiesList;

  Aws::String m_marker;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_integrationTablePropertiesListHasBeenSet = false;
  bool m_markerHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Glue
}  // namespace Aws

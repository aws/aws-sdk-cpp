/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/IntegrationResourceProperty.h>

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
class ListIntegrationResourcePropertiesResult {
 public:
  AWS_GLUE_API ListIntegrationResourcePropertiesResult() = default;
  AWS_GLUE_API ListIntegrationResourcePropertiesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_GLUE_API ListIntegrationResourcePropertiesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>A list of integration resource property meeting the filter criteria.</p>
   */
  inline const Aws::Vector<IntegrationResourceProperty>& GetIntegrationResourcePropertyList() const {
    return m_integrationResourcePropertyList;
  }
  template <typename IntegrationResourcePropertyListT = Aws::Vector<IntegrationResourceProperty>>
  void SetIntegrationResourcePropertyList(IntegrationResourcePropertyListT&& value) {
    m_integrationResourcePropertyListHasBeenSet = true;
    m_integrationResourcePropertyList = std::forward<IntegrationResourcePropertyListT>(value);
  }
  template <typename IntegrationResourcePropertyListT = Aws::Vector<IntegrationResourceProperty>>
  ListIntegrationResourcePropertiesResult& WithIntegrationResourcePropertyList(IntegrationResourcePropertyListT&& value) {
    SetIntegrationResourcePropertyList(std::forward<IntegrationResourcePropertyListT>(value));
    return *this;
  }
  template <typename IntegrationResourcePropertyListT = IntegrationResourceProperty>
  ListIntegrationResourcePropertiesResult& AddIntegrationResourcePropertyList(IntegrationResourcePropertyListT&& value) {
    m_integrationResourcePropertyListHasBeenSet = true;
    m_integrationResourcePropertyList.emplace_back(std::forward<IntegrationResourcePropertyListT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>This is the pagination token for the next page.</p>
   */
  inline const Aws::String& GetMarker() const { return m_marker; }
  template <typename MarkerT = Aws::String>
  void SetMarker(MarkerT&& value) {
    m_markerHasBeenSet = true;
    m_marker = std::forward<MarkerT>(value);
  }
  template <typename MarkerT = Aws::String>
  ListIntegrationResourcePropertiesResult& WithMarker(MarkerT&& value) {
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
  ListIntegrationResourcePropertiesResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<IntegrationResourceProperty> m_integrationResourcePropertyList;

  Aws::String m_marker;

  Aws::String m_requestId;
  bool m_integrationResourcePropertyListHasBeenSet = false;
  bool m_markerHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Glue
}  // namespace Aws

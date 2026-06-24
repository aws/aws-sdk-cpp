/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/model/LineageEventProcessingStatus.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace DataZone {
namespace Model {
class DeleteLineageEventResult {
 public:
  AWS_DATAZONE_API DeleteLineageEventResult() = default;
  AWS_DATAZONE_API DeleteLineageEventResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_DATAZONE_API DeleteLineageEventResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The ID of the lineage event.</p>
   */
  inline const Aws::String& GetId() const { return m_id; }
  template <typename IdT = Aws::String>
  void SetId(IdT&& value) {
    m_idHasBeenSet = true;
    m_id = std::forward<IdT>(value);
  }
  template <typename IdT = Aws::String>
  DeleteLineageEventResult& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the domain.</p>
   */
  inline const Aws::String& GetDomainId() const { return m_domainId; }
  template <typename DomainIdT = Aws::String>
  void SetDomainId(DomainIdT&& value) {
    m_domainIdHasBeenSet = true;
    m_domainId = std::forward<DomainIdT>(value);
  }
  template <typename DomainIdT = Aws::String>
  DeleteLineageEventResult& WithDomainId(DomainIdT&& value) {
    SetDomainId(std::forward<DomainIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The progressing status of the lineage event.</p>
   */
  inline LineageEventProcessingStatus GetProcessingStatus() const { return m_processingStatus; }
  inline void SetProcessingStatus(LineageEventProcessingStatus value) {
    m_processingStatusHasBeenSet = true;
    m_processingStatus = value;
  }
  inline DeleteLineageEventResult& WithProcessingStatus(LineageEventProcessingStatus value) {
    SetProcessingStatus(value);
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
  DeleteLineageEventResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_id;

  Aws::String m_domainId;

  LineageEventProcessingStatus m_processingStatus{LineageEventProcessingStatus::NOT_SET};

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_idHasBeenSet = false;
  bool m_domainIdHasBeenSet = false;
  bool m_processingStatusHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace DataZone
}  // namespace Aws

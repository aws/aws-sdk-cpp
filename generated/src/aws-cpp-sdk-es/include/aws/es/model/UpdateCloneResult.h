/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/es/ElasticsearchService_EXPORTS.h>
#include <aws/es/model/CutoverOptions.h>
#include <aws/es/model/RetentionOptions.h>
#include <aws/es/model/TrafficSplitOptions.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace ElasticsearchService {
namespace Model {
/**
 * <p>Container for the response returned by the <code>UpdateClone</code>
 * operation.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/UpdateCloneResponse">AWS
 * API Reference</a></p>
 */
class UpdateCloneResult {
 public:
  AWS_ELASTICSEARCHSERVICE_API UpdateCloneResult() = default;
  AWS_ELASTICSEARCHSERVICE_API UpdateCloneResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_ELASTICSEARCHSERVICE_API UpdateCloneResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The name of the domain.</p>
   */
  inline const Aws::String& GetDomainName() const { return m_domainName; }
  template <typename DomainNameT = Aws::String>
  void SetDomainName(DomainNameT&& value) {
    m_domainNameHasBeenSet = true;
    m_domainName = std::forward<DomainNameT>(value);
  }
  template <typename DomainNameT = Aws::String>
  UpdateCloneResult& WithDomainName(DomainNameT&& value) {
    SetDomainName(std::forward<DomainNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the configuration change. Use it with
   * <code>DescribeDomainChangeProgress</code> to track the change.</p>
   */
  inline const Aws::String& GetChangeId() const { return m_changeId; }
  template <typename ChangeIdT = Aws::String>
  void SetChangeId(ChangeIdT&& value) {
    m_changeIdHasBeenSet = true;
    m_changeId = std::forward<ChangeIdT>(value);
  }
  template <typename ChangeIdT = Aws::String>
  UpdateCloneResult& WithChangeId(ChangeIdT&& value) {
    SetChangeId(std::forward<ChangeIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The requested cutover target and the status of the cutover.</p>
   */
  inline const CutoverOptions& GetCutoverOptions() const { return m_cutoverOptions; }
  template <typename CutoverOptionsT = CutoverOptions>
  void SetCutoverOptions(CutoverOptionsT&& value) {
    m_cutoverOptionsHasBeenSet = true;
    m_cutoverOptions = std::forward<CutoverOptionsT>(value);
  }
  template <typename CutoverOptionsT = CutoverOptions>
  UpdateCloneResult& WithCutoverOptions(CutoverOptionsT&& value) {
    SetCutoverOptions(std::forward<CutoverOptionsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current and requested traffic split, and the status of the traffic
   * shift.</p>
   */
  inline const TrafficSplitOptions& GetTrafficSplitOptions() const { return m_trafficSplitOptions; }
  template <typename TrafficSplitOptionsT = TrafficSplitOptions>
  void SetTrafficSplitOptions(TrafficSplitOptionsT&& value) {
    m_trafficSplitOptionsHasBeenSet = true;
    m_trafficSplitOptions = std::forward<TrafficSplitOptionsT>(value);
  }
  template <typename TrafficSplitOptionsT = TrafficSplitOptions>
  UpdateCloneResult& WithTrafficSplitOptions(TrafficSplitOptionsT&& value) {
    SetTrafficSplitOptions(std::forward<TrafficSplitOptionsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The retention settings for the upgrade.</p>
   */
  inline const RetentionOptions& GetRetentionOptions() const { return m_retentionOptions; }
  template <typename RetentionOptionsT = RetentionOptions>
  void SetRetentionOptions(RetentionOptionsT&& value) {
    m_retentionOptionsHasBeenSet = true;
    m_retentionOptions = std::forward<RetentionOptionsT>(value);
  }
  template <typename RetentionOptionsT = RetentionOptions>
  UpdateCloneResult& WithRetentionOptions(RetentionOptionsT&& value) {
    SetRetentionOptions(std::forward<RetentionOptionsT>(value));
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
  UpdateCloneResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_domainName;

  Aws::String m_changeId;

  CutoverOptions m_cutoverOptions;

  TrafficSplitOptions m_trafficSplitOptions;

  RetentionOptions m_retentionOptions;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_domainNameHasBeenSet = false;
  bool m_changeIdHasBeenSet = false;
  bool m_cutoverOptionsHasBeenSet = false;
  bool m_trafficSplitOptionsHasBeenSet = false;
  bool m_retentionOptionsHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace ElasticsearchService
}  // namespace Aws

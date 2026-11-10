/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/es/ElasticsearchServiceRequest.h>
#include <aws/es/ElasticsearchService_EXPORTS.h>
#include <aws/es/model/CutoverRequestOptions.h>
#include <aws/es/model/RetentionOptions.h>
#include <aws/es/model/TrafficSplitRequestOptions.h>

#include <utility>

namespace Aws {
namespace ElasticsearchService {
namespace Model {

/**
 * <p>Container for the request parameters to the <code>UpdateClone</code>
 * operation.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/UpdateCloneRequest">AWS
 * API Reference</a></p>
 */
class UpdateCloneRequest : public ElasticsearchServiceRequest {
 public:
  AWS_ELASTICSEARCHSERVICE_API UpdateCloneRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateClone"; }

  AWS_ELASTICSEARCHSERVICE_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The name of the domain that has a cloned blue/green upgrade in progress.</p>
   */
  inline const Aws::String& GetDomainName() const { return m_domainName; }
  inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
  template <typename DomainNameT = Aws::String>
  void SetDomainName(DomainNameT&& value) {
    m_domainNameHasBeenSet = true;
    m_domainName = std::forward<DomainNameT>(value);
  }
  template <typename DomainNameT = Aws::String>
  UpdateCloneRequest& WithDomainName(DomainNameT&& value) {
    SetDomainName(std::forward<DomainNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Shifts a percentage of search traffic from the primary cluster to the cloned
   * cluster.</p>
   */
  inline const TrafficSplitRequestOptions& GetTrafficSplitOptions() const { return m_trafficSplitOptions; }
  inline bool TrafficSplitOptionsHasBeenSet() const { return m_trafficSplitOptionsHasBeenSet; }
  template <typename TrafficSplitOptionsT = TrafficSplitRequestOptions>
  void SetTrafficSplitOptions(TrafficSplitOptionsT&& value) {
    m_trafficSplitOptionsHasBeenSet = true;
    m_trafficSplitOptions = std::forward<TrafficSplitOptionsT>(value);
  }
  template <typename TrafficSplitOptionsT = TrafficSplitRequestOptions>
  UpdateCloneRequest& WithTrafficSplitOptions(TrafficSplitOptionsT&& value) {
    SetTrafficSplitOptions(std::forward<TrafficSplitOptionsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Cuts the domain over to the cloned cluster or back to the primary
   * cluster.</p>
   */
  inline const CutoverRequestOptions& GetCutoverOptions() const { return m_cutoverOptions; }
  inline bool CutoverOptionsHasBeenSet() const { return m_cutoverOptionsHasBeenSet; }
  template <typename CutoverOptionsT = CutoverRequestOptions>
  void SetCutoverOptions(CutoverOptionsT&& value) {
    m_cutoverOptionsHasBeenSet = true;
    m_cutoverOptions = std::forward<CutoverOptionsT>(value);
  }
  template <typename CutoverOptionsT = CutoverRequestOptions>
  UpdateCloneRequest& WithCutoverOptions(CutoverOptionsT&& value) {
    SetCutoverOptions(std::forward<CutoverOptionsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Changes the retention period, or ends it after cutover completes.</p>
   */
  inline const RetentionOptions& GetRetentionOptions() const { return m_retentionOptions; }
  inline bool RetentionOptionsHasBeenSet() const { return m_retentionOptionsHasBeenSet; }
  template <typename RetentionOptionsT = RetentionOptions>
  void SetRetentionOptions(RetentionOptionsT&& value) {
    m_retentionOptionsHasBeenSet = true;
    m_retentionOptions = std::forward<RetentionOptionsT>(value);
  }
  template <typename RetentionOptionsT = RetentionOptions>
  UpdateCloneRequest& WithRetentionOptions(RetentionOptionsT&& value) {
    SetRetentionOptions(std::forward<RetentionOptionsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_domainName;

  TrafficSplitRequestOptions m_trafficSplitOptions;

  CutoverRequestOptions m_cutoverOptions;

  RetentionOptions m_retentionOptions;
  bool m_domainNameHasBeenSet = false;
  bool m_trafficSplitOptionsHasBeenSet = false;
  bool m_cutoverOptionsHasBeenSet = false;
  bool m_retentionOptionsHasBeenSet = false;
};

}  // namespace Model
}  // namespace ElasticsearchService
}  // namespace Aws

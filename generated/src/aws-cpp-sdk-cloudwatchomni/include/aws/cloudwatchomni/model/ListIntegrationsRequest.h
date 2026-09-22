/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudwatchomni/CloudWatchOmniRequest.h>
#include <aws/cloudwatchomni/CloudWatchOmni_EXPORTS.h>
#include <aws/cloudwatchomni/model/IntegrationStatus.h>
#include <aws/cloudwatchomni/model/IntegrationType.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace CloudWatchOmni {
namespace Model {

/**
 * <p>The request for listing the integrations in an account.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/cloudwatchomni-2025-01-01/ListIntegrationsInput">AWS
 * API Reference</a></p>
 */
class ListIntegrationsRequest : public CloudWatchOmniRequest {
 public:
  AWS_CLOUDWATCHOMNI_API ListIntegrationsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListIntegrations"; }

  AWS_CLOUDWATCHOMNI_API Aws::String SerializePayload() const override;

  AWS_CLOUDWATCHOMNI_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>Returns only integrations of this provider type.</p>
   */
  inline IntegrationType GetIntegrationType() const { return m_integrationType; }
  inline bool IntegrationTypeHasBeenSet() const { return m_integrationTypeHasBeenSet; }
  inline void SetIntegrationType(IntegrationType value) {
    m_integrationTypeHasBeenSet = true;
    m_integrationType = value;
  }
  inline ListIntegrationsRequest& WithIntegrationType(IntegrationType value) {
    SetIntegrationType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Returns only integrations in this status.</p>
   */
  inline IntegrationStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(IntegrationStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline ListIntegrationsRequest& WithStatus(IntegrationStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Returns only the integration with this exact name.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  ListIntegrationsRequest& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Pagination token from a previous response; omit for the first page.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListIntegrationsRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Maximum number of integrations to return in one page.</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline ListIntegrationsRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}
 private:
  IntegrationType m_integrationType{IntegrationType::NOT_SET};

  IntegrationStatus m_status{IntegrationStatus::NOT_SET};

  Aws::String m_name;

  Aws::String m_nextToken;

  int m_maxResults{0};
  bool m_integrationTypeHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_maxResultsHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudWatchOmni
}  // namespace Aws

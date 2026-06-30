/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appconfig/AppConfigRequest.h>
#include <aws/appconfig/AppConfig_EXPORTS.h>
#include <aws/appconfig/model/ExperimentRunStatus.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Http {
class URI;
}  // namespace Http
namespace AppConfig {
namespace Model {

/**
 */
class ListExperimentRunsRequest : public AppConfigRequest {
 public:
  AWS_APPCONFIG_API ListExperimentRunsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListExperimentRuns"; }

  AWS_APPCONFIG_API Aws::String SerializePayload() const override;

  AWS_APPCONFIG_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

  ///@{
  /**
   * <p>The application ID or name.</p>
   */
  inline const Aws::String& GetApplicationIdentifier() const { return m_applicationIdentifier; }
  inline bool ApplicationIdentifierHasBeenSet() const { return m_applicationIdentifierHasBeenSet; }
  template <typename ApplicationIdentifierT = Aws::String>
  void SetApplicationIdentifier(ApplicationIdentifierT&& value) {
    m_applicationIdentifierHasBeenSet = true;
    m_applicationIdentifier = std::forward<ApplicationIdentifierT>(value);
  }
  template <typename ApplicationIdentifierT = Aws::String>
  ListExperimentRunsRequest& WithApplicationIdentifier(ApplicationIdentifierT&& value) {
    SetApplicationIdentifier(std::forward<ApplicationIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The experiment definition ID or name.</p>
   */
  inline const Aws::String& GetExperimentDefinitionIdentifier() const { return m_experimentDefinitionIdentifier; }
  inline bool ExperimentDefinitionIdentifierHasBeenSet() const { return m_experimentDefinitionIdentifierHasBeenSet; }
  template <typename ExperimentDefinitionIdentifierT = Aws::String>
  void SetExperimentDefinitionIdentifier(ExperimentDefinitionIdentifierT&& value) {
    m_experimentDefinitionIdentifierHasBeenSet = true;
    m_experimentDefinitionIdentifier = std::forward<ExperimentDefinitionIdentifierT>(value);
  }
  template <typename ExperimentDefinitionIdentifierT = Aws::String>
  ListExperimentRunsRequest& WithExperimentDefinitionIdentifier(ExperimentDefinitionIdentifierT&& value) {
    SetExperimentDefinitionIdentifier(std::forward<ExperimentDefinitionIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of items to return.</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline ListExperimentRunsRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A token to start the list from a previously truncated response.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListExperimentRunsRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A filter for the experiment run status.</p>
   */
  inline ExperimentRunStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(ExperimentRunStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline ListExperimentRunsRequest& WithStatus(ExperimentRunStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_applicationIdentifier;

  Aws::String m_experimentDefinitionIdentifier;

  int m_maxResults{0};

  Aws::String m_nextToken;

  ExperimentRunStatus m_status{ExperimentRunStatus::NOT_SET};
  bool m_applicationIdentifierHasBeenSet = false;
  bool m_experimentDefinitionIdentifierHasBeenSet = false;
  bool m_maxResultsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_statusHasBeenSet = false;
};

}  // namespace Model
}  // namespace AppConfig
}  // namespace Aws

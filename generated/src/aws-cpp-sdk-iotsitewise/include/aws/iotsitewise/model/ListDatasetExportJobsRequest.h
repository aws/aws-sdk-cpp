/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotsitewise/IoTSiteWiseRequest.h>
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/iotsitewise/model/DatasetExportJobFilter.h>

#include <utility>

namespace Aws {
namespace Http {
class URI;
}  // namespace Http
namespace IoTSiteWise {
namespace Model {

/**
 * <p>Request to list dataset export jobs for a workspace.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/ListDatasetExportJobsRequest">AWS
 * API Reference</a></p>
 */
class ListDatasetExportJobsRequest : public IoTSiteWiseRequest {
 public:
  AWS_IOTSITEWISE_API ListDatasetExportJobsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListDatasetExportJobs"; }

  AWS_IOTSITEWISE_API Aws::String SerializePayload() const override;

  AWS_IOTSITEWISE_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

  ///@{
  /**
   * <p>The name of the workspace whose dataset export jobs should be listed.</p>
   */
  inline const Aws::String& GetWorkspaceName() const { return m_workspaceName; }
  inline bool WorkspaceNameHasBeenSet() const { return m_workspaceNameHasBeenSet; }
  template <typename WorkspaceNameT = Aws::String>
  void SetWorkspaceName(WorkspaceNameT&& value) {
    m_workspaceNameHasBeenSet = true;
    m_workspaceName = std::forward<WorkspaceNameT>(value);
  }
  template <typename WorkspaceNameT = Aws::String>
  ListDatasetExportJobsRequest& WithWorkspaceName(WorkspaceNameT&& value) {
    SetWorkspaceName(std::forward<WorkspaceNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The optional filter that returns only jobs matching the given filter value.
   * Defaults to ALL.</p>
   */
  inline DatasetExportJobFilter GetFilter() const { return m_filter; }
  inline bool FilterHasBeenSet() const { return m_filterHasBeenSet; }
  inline void SetFilter(DatasetExportJobFilter value) {
    m_filterHasBeenSet = true;
    m_filter = value;
  }
  inline ListDatasetExportJobsRequest& WithFilter(DatasetExportJobFilter value) {
    SetFilter(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of results to return for each paginated request.</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline ListDatasetExportJobsRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The token to be used for the next set of paginated results.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListDatasetExportJobsRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_workspaceName;

  DatasetExportJobFilter m_filter{DatasetExportJobFilter::NOT_SET};

  int m_maxResults{0};

  Aws::String m_nextToken;
  bool m_workspaceNameHasBeenSet = false;
  bool m_filterHasBeenSet = false;
  bool m_maxResultsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
};

}  // namespace Model
}  // namespace IoTSiteWise
}  // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotsitewise/IoTSiteWiseRequest.h>
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/iotsitewise/model/DatasetSourceType.h>
#include <aws/iotsitewise/model/DatasetTypeEnum.h>

#include <utility>

namespace Aws {
namespace Http {
class URI;
}  // namespace Http
namespace IoTSiteWise {
namespace Model {

/**
 */
class ListDatasetsRequest : public IoTSiteWiseRequest {
 public:
  AWS_IOTSITEWISE_API ListDatasetsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListDatasets"; }

  AWS_IOTSITEWISE_API Aws::String SerializePayload() const override;

  AWS_IOTSITEWISE_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

  ///@{
  /**
   * <p>The type of data source for the dataset.</p>
   */
  inline DatasetSourceType GetSourceType() const { return m_sourceType; }
  inline bool SourceTypeHasBeenSet() const { return m_sourceTypeHasBeenSet; }
  inline void SetSourceType(DatasetSourceType value) {
    m_sourceTypeHasBeenSet = true;
    m_sourceType = value;
  }
  inline ListDatasetsRequest& WithSourceType(DatasetSourceType value) {
    SetSourceType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the workspace to filter datasets by.</p>
   */
  inline const Aws::String& GetWorkspaceName() const { return m_workspaceName; }
  inline bool WorkspaceNameHasBeenSet() const { return m_workspaceNameHasBeenSet; }
  template <typename WorkspaceNameT = Aws::String>
  void SetWorkspaceName(WorkspaceNameT&& value) {
    m_workspaceNameHasBeenSet = true;
    m_workspaceName = std::forward<WorkspaceNameT>(value);
  }
  template <typename WorkspaceNameT = Aws::String>
  ListDatasetsRequest& WithWorkspaceName(WorkspaceNameT&& value) {
    SetWorkspaceName(std::forward<WorkspaceNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of dataset to filter by: a session dataset, a curated dataset, or a
   * connection to an external datasource.</p>
   */
  inline DatasetTypeEnum GetDatasetType() const { return m_datasetType; }
  inline bool DatasetTypeHasBeenSet() const { return m_datasetTypeHasBeenSet; }
  inline void SetDatasetType(DatasetTypeEnum value) {
    m_datasetTypeHasBeenSet = true;
    m_datasetType = value;
  }
  inline ListDatasetsRequest& WithDatasetType(DatasetTypeEnum value) {
    SetDatasetType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The token for the next set of results, or null if there are no additional
   * results.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListDatasetsRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
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
  inline ListDatasetsRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}
 private:
  DatasetSourceType m_sourceType{DatasetSourceType::NOT_SET};

  Aws::String m_workspaceName;

  DatasetTypeEnum m_datasetType{DatasetTypeEnum::NOT_SET};

  Aws::String m_nextToken;

  int m_maxResults{0};
  bool m_sourceTypeHasBeenSet = false;
  bool m_workspaceNameHasBeenSet = false;
  bool m_datasetTypeHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_maxResultsHasBeenSet = false;
};

}  // namespace Model
}  // namespace IoTSiteWise
}  // namespace Aws

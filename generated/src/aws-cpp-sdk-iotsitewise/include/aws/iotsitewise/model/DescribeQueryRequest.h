/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotsitewise/IoTSiteWiseRequest.h>
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>

#include <utility>

namespace Aws {
namespace IoTSiteWise {
namespace Model {

/**
 */
class DescribeQueryRequest : public IoTSiteWiseRequest {
 public:
  AWS_IOTSITEWISE_API DescribeQueryRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "DescribeQuery"; }

  AWS_IOTSITEWISE_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The name of the workspace associated with the query.</p>
   */
  inline const Aws::String& GetWorkspaceName() const { return m_workspaceName; }
  inline bool WorkspaceNameHasBeenSet() const { return m_workspaceNameHasBeenSet; }
  template <typename WorkspaceNameT = Aws::String>
  void SetWorkspaceName(WorkspaceNameT&& value) {
    m_workspaceNameHasBeenSet = true;
    m_workspaceName = std::forward<WorkspaceNameT>(value);
  }
  template <typename WorkspaceNameT = Aws::String>
  DescribeQueryRequest& WithWorkspaceName(WorkspaceNameT&& value) {
    SetWorkspaceName(std::forward<WorkspaceNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier for the query execution.</p>
   */
  inline const Aws::String& GetQueryId() const { return m_queryId; }
  inline bool QueryIdHasBeenSet() const { return m_queryIdHasBeenSet; }
  template <typename QueryIdT = Aws::String>
  void SetQueryId(QueryIdT&& value) {
    m_queryIdHasBeenSet = true;
    m_queryId = std::forward<QueryIdT>(value);
  }
  template <typename QueryIdT = Aws::String>
  DescribeQueryRequest& WithQueryId(QueryIdT&& value) {
    SetQueryId(std::forward<QueryIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_workspaceName;

  Aws::String m_queryId;
  bool m_workspaceNameHasBeenSet = false;
  bool m_queryIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace IoTSiteWise
}  // namespace Aws

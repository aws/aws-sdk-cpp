/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotsitewise/IoTSiteWiseRequest.h>
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>

#include <utility>

namespace Aws {
namespace IoTSiteWise {
namespace Model {

/**
 */
class StartQueryRequest : public IoTSiteWiseRequest {
 public:
  AWS_IOTSITEWISE_API StartQueryRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "StartQuery"; }

  AWS_IOTSITEWISE_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>A unique case-sensitive identifier that you can provide to ensure the
   * idempotency of the request. Don't reuse this client token if a new idempotent
   * request is required.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  StartQueryRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the workspace to query.</p>
   */
  inline const Aws::String& GetWorkspaceName() const { return m_workspaceName; }
  inline bool WorkspaceNameHasBeenSet() const { return m_workspaceNameHasBeenSet; }
  template <typename WorkspaceNameT = Aws::String>
  void SetWorkspaceName(WorkspaceNameT&& value) {
    m_workspaceNameHasBeenSet = true;
    m_workspaceName = std::forward<WorkspaceNameT>(value);
  }
  template <typename WorkspaceNameT = Aws::String>
  StartQueryRequest& WithWorkspaceName(WorkspaceNameT&& value) {
    SetWorkspaceName(std::forward<WorkspaceNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The SQL query to execute against the workspace telemetry, annotations, data
   * segment, and dataset data.</p>
   */
  inline const Aws::String& GetQueryStatement() const { return m_queryStatement; }
  inline bool QueryStatementHasBeenSet() const { return m_queryStatementHasBeenSet; }
  template <typename QueryStatementT = Aws::String>
  void SetQueryStatement(QueryStatementT&& value) {
    m_queryStatementHasBeenSet = true;
    m_queryStatement = std::forward<QueryStatementT>(value);
  }
  template <typename QueryStatementT = Aws::String>
  StartQueryRequest& WithQueryStatement(QueryStatementT&& value) {
    SetQueryStatement(std::forward<QueryStatementT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};

  Aws::String m_workspaceName;

  Aws::String m_queryStatement;
  bool m_clientTokenHasBeenSet = true;
  bool m_workspaceNameHasBeenSet = false;
  bool m_queryStatementHasBeenSet = false;
};

}  // namespace Model
}  // namespace IoTSiteWise
}  // namespace Aws

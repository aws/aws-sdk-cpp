/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/logs/model/OpenSearchResourceStatus.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace CloudWatchLogs
{
namespace Model
{

  /**
   * <p>This structure contains information about the OpenSearch Service workspace
   * used for this integration. An OpenSearch Service workspace is the collection of
   * dashboards along with other OpenSearch Service tools. This workspace was created
   * automatically as part of the integration setup. For more information, see <a
   * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/application.html">Centralized
   * OpenSearch user interface (Dashboards) with OpenSearch
   * Service</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/OpenSearchWorkspace">AWS
   * API Reference</a></p>
   */
  class OpenSearchWorkspace
  {
  public:
    AWS_CLOUDWATCHLOGS_API OpenSearchWorkspace();
    AWS_CLOUDWATCHLOGS_API OpenSearchWorkspace(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API OpenSearchWorkspace& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of this workspace.</p>
     */
    inline const Aws::String& GetWorkspaceId() const{ return m_workspaceId; }
    inline bool WorkspaceIdHasBeenSet() const { return m_workspaceIdHasBeenSet; }
    inline void SetWorkspaceId(const Aws::String& value) { m_workspaceIdHasBeenSet = true; m_workspaceId = value; }
    inline void SetWorkspaceId(Aws::String&& value) { m_workspaceIdHasBeenSet = true; m_workspaceId = std::move(value); }
    inline void SetWorkspaceId(const char* value) { m_workspaceIdHasBeenSet = true; m_workspaceId.assign(value); }
    inline OpenSearchWorkspace& WithWorkspaceId(const Aws::String& value) { SetWorkspaceId(value); return *this;}
    inline OpenSearchWorkspace& WithWorkspaceId(Aws::String&& value) { SetWorkspaceId(std::move(value)); return *this;}
    inline OpenSearchWorkspace& WithWorkspaceId(const char* value) { SetWorkspaceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This structure contains information about the status of an OpenSearch Service
     * resource.</p>
     */
    inline const OpenSearchResourceStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const OpenSearchResourceStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(OpenSearchResourceStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline OpenSearchWorkspace& WithStatus(const OpenSearchResourceStatus& value) { SetStatus(value); return *this;}
    inline OpenSearchWorkspace& WithStatus(OpenSearchResourceStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_workspaceId;
    bool m_workspaceIdHasBeenSet = false;

    OpenSearchResourceStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws

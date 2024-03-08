/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecatalyst/CodeCatalyst_EXPORTS.h>
#include <aws/codecatalyst/CodeCatalystRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace CodeCatalyst
{
namespace Model
{

  /**
   */
  class StartWorkflowRunRequest : public CodeCatalystRequest
  {
  public:
    AWS_CODECATALYST_API StartWorkflowRunRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartWorkflowRun"; }

    AWS_CODECATALYST_API Aws::String SerializePayload() const override;

    AWS_CODECATALYST_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The name of the space.</p>
     */
    inline const Aws::String& GetSpaceName() const{ return m_spaceName; }

    /**
     * <p>The name of the space.</p>
     */
    inline bool SpaceNameHasBeenSet() const { return m_spaceNameHasBeenSet; }

    /**
     * <p>The name of the space.</p>
     */
    inline void SetSpaceName(const Aws::String& value) { m_spaceNameHasBeenSet = true; m_spaceName = value; }

    /**
     * <p>The name of the space.</p>
     */
    inline void SetSpaceName(Aws::String&& value) { m_spaceNameHasBeenSet = true; m_spaceName = std::move(value); }

    /**
     * <p>The name of the space.</p>
     */
    inline void SetSpaceName(const char* value) { m_spaceNameHasBeenSet = true; m_spaceName.assign(value); }

    /**
     * <p>The name of the space.</p>
     */
    inline StartWorkflowRunRequest& WithSpaceName(const Aws::String& value) { SetSpaceName(value); return *this;}

    /**
     * <p>The name of the space.</p>
     */
    inline StartWorkflowRunRequest& WithSpaceName(Aws::String&& value) { SetSpaceName(std::move(value)); return *this;}

    /**
     * <p>The name of the space.</p>
     */
    inline StartWorkflowRunRequest& WithSpaceName(const char* value) { SetSpaceName(value); return *this;}


    /**
     * <p>The name of the project in the space.</p>
     */
    inline const Aws::String& GetProjectName() const{ return m_projectName; }

    /**
     * <p>The name of the project in the space.</p>
     */
    inline bool ProjectNameHasBeenSet() const { return m_projectNameHasBeenSet; }

    /**
     * <p>The name of the project in the space.</p>
     */
    inline void SetProjectName(const Aws::String& value) { m_projectNameHasBeenSet = true; m_projectName = value; }

    /**
     * <p>The name of the project in the space.</p>
     */
    inline void SetProjectName(Aws::String&& value) { m_projectNameHasBeenSet = true; m_projectName = std::move(value); }

    /**
     * <p>The name of the project in the space.</p>
     */
    inline void SetProjectName(const char* value) { m_projectNameHasBeenSet = true; m_projectName.assign(value); }

    /**
     * <p>The name of the project in the space.</p>
     */
    inline StartWorkflowRunRequest& WithProjectName(const Aws::String& value) { SetProjectName(value); return *this;}

    /**
     * <p>The name of the project in the space.</p>
     */
    inline StartWorkflowRunRequest& WithProjectName(Aws::String&& value) { SetProjectName(std::move(value)); return *this;}

    /**
     * <p>The name of the project in the space.</p>
     */
    inline StartWorkflowRunRequest& WithProjectName(const char* value) { SetProjectName(value); return *this;}


    /**
     * <p>The system-generated unique ID of the workflow. To retrieve a list of
     * workflow IDs, use <a>ListWorkflows</a>.</p>
     */
    inline const Aws::String& GetWorkflowId() const{ return m_workflowId; }

    /**
     * <p>The system-generated unique ID of the workflow. To retrieve a list of
     * workflow IDs, use <a>ListWorkflows</a>.</p>
     */
    inline bool WorkflowIdHasBeenSet() const { return m_workflowIdHasBeenSet; }

    /**
     * <p>The system-generated unique ID of the workflow. To retrieve a list of
     * workflow IDs, use <a>ListWorkflows</a>.</p>
     */
    inline void SetWorkflowId(const Aws::String& value) { m_workflowIdHasBeenSet = true; m_workflowId = value; }

    /**
     * <p>The system-generated unique ID of the workflow. To retrieve a list of
     * workflow IDs, use <a>ListWorkflows</a>.</p>
     */
    inline void SetWorkflowId(Aws::String&& value) { m_workflowIdHasBeenSet = true; m_workflowId = std::move(value); }

    /**
     * <p>The system-generated unique ID of the workflow. To retrieve a list of
     * workflow IDs, use <a>ListWorkflows</a>.</p>
     */
    inline void SetWorkflowId(const char* value) { m_workflowIdHasBeenSet = true; m_workflowId.assign(value); }

    /**
     * <p>The system-generated unique ID of the workflow. To retrieve a list of
     * workflow IDs, use <a>ListWorkflows</a>.</p>
     */
    inline StartWorkflowRunRequest& WithWorkflowId(const Aws::String& value) { SetWorkflowId(value); return *this;}

    /**
     * <p>The system-generated unique ID of the workflow. To retrieve a list of
     * workflow IDs, use <a>ListWorkflows</a>.</p>
     */
    inline StartWorkflowRunRequest& WithWorkflowId(Aws::String&& value) { SetWorkflowId(std::move(value)); return *this;}

    /**
     * <p>The system-generated unique ID of the workflow. To retrieve a list of
     * workflow IDs, use <a>ListWorkflows</a>.</p>
     */
    inline StartWorkflowRunRequest& WithWorkflowId(const char* value) { SetWorkflowId(value); return *this;}


    /**
     * <p>A user-specified idempotency token. Idempotency ensures that an API request
     * completes only once. With an idempotent request, if the original request
     * completes successfully, the subsequent retries return the result from the
     * original successful request and have no additional effect.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>A user-specified idempotency token. Idempotency ensures that an API request
     * completes only once. With an idempotent request, if the original request
     * completes successfully, the subsequent retries return the result from the
     * original successful request and have no additional effect.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>A user-specified idempotency token. Idempotency ensures that an API request
     * completes only once. With an idempotent request, if the original request
     * completes successfully, the subsequent retries return the result from the
     * original successful request and have no additional effect.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>A user-specified idempotency token. Idempotency ensures that an API request
     * completes only once. With an idempotent request, if the original request
     * completes successfully, the subsequent retries return the result from the
     * original successful request and have no additional effect.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>A user-specified idempotency token. Idempotency ensures that an API request
     * completes only once. With an idempotent request, if the original request
     * completes successfully, the subsequent retries return the result from the
     * original successful request and have no additional effect.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>A user-specified idempotency token. Idempotency ensures that an API request
     * completes only once. With an idempotent request, if the original request
     * completes successfully, the subsequent retries return the result from the
     * original successful request and have no additional effect.</p>
     */
    inline StartWorkflowRunRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>A user-specified idempotency token. Idempotency ensures that an API request
     * completes only once. With an idempotent request, if the original request
     * completes successfully, the subsequent retries return the result from the
     * original successful request and have no additional effect.</p>
     */
    inline StartWorkflowRunRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>A user-specified idempotency token. Idempotency ensures that an API request
     * completes only once. With an idempotent request, if the original request
     * completes successfully, the subsequent retries return the result from the
     * original successful request and have no additional effect.</p>
     */
    inline StartWorkflowRunRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}

  private:

    Aws::String m_spaceName;
    bool m_spaceNameHasBeenSet = false;

    Aws::String m_projectName;
    bool m_projectNameHasBeenSet = false;

    Aws::String m_workflowId;
    bool m_workflowIdHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCatalyst
} // namespace Aws

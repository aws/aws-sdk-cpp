/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appflow/Appflow_EXPORTS.h>
#include <aws/appflow/AppflowRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace Appflow
{
namespace Model
{

  /**
   */
  class StartFlowRequest : public AppflowRequest
  {
  public:
    AWS_APPFLOW_API StartFlowRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartFlow"; }

    AWS_APPFLOW_API Aws::String SerializePayload() const override;


    /**
     * <p> The specified name of the flow. Spaces are not allowed. Use underscores (_)
     * or hyphens (-) only. </p>
     */
    inline const Aws::String& GetFlowName() const{ return m_flowName; }

    /**
     * <p> The specified name of the flow. Spaces are not allowed. Use underscores (_)
     * or hyphens (-) only. </p>
     */
    inline bool FlowNameHasBeenSet() const { return m_flowNameHasBeenSet; }

    /**
     * <p> The specified name of the flow. Spaces are not allowed. Use underscores (_)
     * or hyphens (-) only. </p>
     */
    inline void SetFlowName(const Aws::String& value) { m_flowNameHasBeenSet = true; m_flowName = value; }

    /**
     * <p> The specified name of the flow. Spaces are not allowed. Use underscores (_)
     * or hyphens (-) only. </p>
     */
    inline void SetFlowName(Aws::String&& value) { m_flowNameHasBeenSet = true; m_flowName = std::move(value); }

    /**
     * <p> The specified name of the flow. Spaces are not allowed. Use underscores (_)
     * or hyphens (-) only. </p>
     */
    inline void SetFlowName(const char* value) { m_flowNameHasBeenSet = true; m_flowName.assign(value); }

    /**
     * <p> The specified name of the flow. Spaces are not allowed. Use underscores (_)
     * or hyphens (-) only. </p>
     */
    inline StartFlowRequest& WithFlowName(const Aws::String& value) { SetFlowName(value); return *this;}

    /**
     * <p> The specified name of the flow. Spaces are not allowed. Use underscores (_)
     * or hyphens (-) only. </p>
     */
    inline StartFlowRequest& WithFlowName(Aws::String&& value) { SetFlowName(std::move(value)); return *this;}

    /**
     * <p> The specified name of the flow. Spaces are not allowed. Use underscores (_)
     * or hyphens (-) only. </p>
     */
    inline StartFlowRequest& WithFlowName(const char* value) { SetFlowName(value); return *this;}


    /**
     * <p>The <code>clientToken</code> parameter is an idempotency token. It ensures
     * that your <code>StartFlow</code> request completes only once. You choose the
     * value to pass. For example, if you don't receive a response from your request,
     * you can safely retry the request with the same <code>clientToken</code>
     * parameter value.</p> <p>If you omit a <code>clientToken</code> value, the Amazon
     * Web Services SDK that you are using inserts a value for you. This way, the SDK
     * can safely retry requests multiple times after a network error. You must provide
     * your own value for other use cases.</p> <p>If you specify input parameters that
     * differ from your first request, an error occurs for flows that run on a schedule
     * or based on an event. However, the error doesn't occur for flows that run on
     * demand. You set the conditions that initiate your flow for the
     * <code>triggerConfig</code> parameter.</p> <p>If you use a different value for
     * <code>clientToken</code>, Amazon AppFlow considers it a new call to
     * <code>StartFlow</code>. The token is active for 8 hours.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>The <code>clientToken</code> parameter is an idempotency token. It ensures
     * that your <code>StartFlow</code> request completes only once. You choose the
     * value to pass. For example, if you don't receive a response from your request,
     * you can safely retry the request with the same <code>clientToken</code>
     * parameter value.</p> <p>If you omit a <code>clientToken</code> value, the Amazon
     * Web Services SDK that you are using inserts a value for you. This way, the SDK
     * can safely retry requests multiple times after a network error. You must provide
     * your own value for other use cases.</p> <p>If you specify input parameters that
     * differ from your first request, an error occurs for flows that run on a schedule
     * or based on an event. However, the error doesn't occur for flows that run on
     * demand. You set the conditions that initiate your flow for the
     * <code>triggerConfig</code> parameter.</p> <p>If you use a different value for
     * <code>clientToken</code>, Amazon AppFlow considers it a new call to
     * <code>StartFlow</code>. The token is active for 8 hours.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>The <code>clientToken</code> parameter is an idempotency token. It ensures
     * that your <code>StartFlow</code> request completes only once. You choose the
     * value to pass. For example, if you don't receive a response from your request,
     * you can safely retry the request with the same <code>clientToken</code>
     * parameter value.</p> <p>If you omit a <code>clientToken</code> value, the Amazon
     * Web Services SDK that you are using inserts a value for you. This way, the SDK
     * can safely retry requests multiple times after a network error. You must provide
     * your own value for other use cases.</p> <p>If you specify input parameters that
     * differ from your first request, an error occurs for flows that run on a schedule
     * or based on an event. However, the error doesn't occur for flows that run on
     * demand. You set the conditions that initiate your flow for the
     * <code>triggerConfig</code> parameter.</p> <p>If you use a different value for
     * <code>clientToken</code>, Amazon AppFlow considers it a new call to
     * <code>StartFlow</code>. The token is active for 8 hours.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>The <code>clientToken</code> parameter is an idempotency token. It ensures
     * that your <code>StartFlow</code> request completes only once. You choose the
     * value to pass. For example, if you don't receive a response from your request,
     * you can safely retry the request with the same <code>clientToken</code>
     * parameter value.</p> <p>If you omit a <code>clientToken</code> value, the Amazon
     * Web Services SDK that you are using inserts a value for you. This way, the SDK
     * can safely retry requests multiple times after a network error. You must provide
     * your own value for other use cases.</p> <p>If you specify input parameters that
     * differ from your first request, an error occurs for flows that run on a schedule
     * or based on an event. However, the error doesn't occur for flows that run on
     * demand. You set the conditions that initiate your flow for the
     * <code>triggerConfig</code> parameter.</p> <p>If you use a different value for
     * <code>clientToken</code>, Amazon AppFlow considers it a new call to
     * <code>StartFlow</code>. The token is active for 8 hours.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>The <code>clientToken</code> parameter is an idempotency token. It ensures
     * that your <code>StartFlow</code> request completes only once. You choose the
     * value to pass. For example, if you don't receive a response from your request,
     * you can safely retry the request with the same <code>clientToken</code>
     * parameter value.</p> <p>If you omit a <code>clientToken</code> value, the Amazon
     * Web Services SDK that you are using inserts a value for you. This way, the SDK
     * can safely retry requests multiple times after a network error. You must provide
     * your own value for other use cases.</p> <p>If you specify input parameters that
     * differ from your first request, an error occurs for flows that run on a schedule
     * or based on an event. However, the error doesn't occur for flows that run on
     * demand. You set the conditions that initiate your flow for the
     * <code>triggerConfig</code> parameter.</p> <p>If you use a different value for
     * <code>clientToken</code>, Amazon AppFlow considers it a new call to
     * <code>StartFlow</code>. The token is active for 8 hours.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>The <code>clientToken</code> parameter is an idempotency token. It ensures
     * that your <code>StartFlow</code> request completes only once. You choose the
     * value to pass. For example, if you don't receive a response from your request,
     * you can safely retry the request with the same <code>clientToken</code>
     * parameter value.</p> <p>If you omit a <code>clientToken</code> value, the Amazon
     * Web Services SDK that you are using inserts a value for you. This way, the SDK
     * can safely retry requests multiple times after a network error. You must provide
     * your own value for other use cases.</p> <p>If you specify input parameters that
     * differ from your first request, an error occurs for flows that run on a schedule
     * or based on an event. However, the error doesn't occur for flows that run on
     * demand. You set the conditions that initiate your flow for the
     * <code>triggerConfig</code> parameter.</p> <p>If you use a different value for
     * <code>clientToken</code>, Amazon AppFlow considers it a new call to
     * <code>StartFlow</code>. The token is active for 8 hours.</p>
     */
    inline StartFlowRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>The <code>clientToken</code> parameter is an idempotency token. It ensures
     * that your <code>StartFlow</code> request completes only once. You choose the
     * value to pass. For example, if you don't receive a response from your request,
     * you can safely retry the request with the same <code>clientToken</code>
     * parameter value.</p> <p>If you omit a <code>clientToken</code> value, the Amazon
     * Web Services SDK that you are using inserts a value for you. This way, the SDK
     * can safely retry requests multiple times after a network error. You must provide
     * your own value for other use cases.</p> <p>If you specify input parameters that
     * differ from your first request, an error occurs for flows that run on a schedule
     * or based on an event. However, the error doesn't occur for flows that run on
     * demand. You set the conditions that initiate your flow for the
     * <code>triggerConfig</code> parameter.</p> <p>If you use a different value for
     * <code>clientToken</code>, Amazon AppFlow considers it a new call to
     * <code>StartFlow</code>. The token is active for 8 hours.</p>
     */
    inline StartFlowRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>The <code>clientToken</code> parameter is an idempotency token. It ensures
     * that your <code>StartFlow</code> request completes only once. You choose the
     * value to pass. For example, if you don't receive a response from your request,
     * you can safely retry the request with the same <code>clientToken</code>
     * parameter value.</p> <p>If you omit a <code>clientToken</code> value, the Amazon
     * Web Services SDK that you are using inserts a value for you. This way, the SDK
     * can safely retry requests multiple times after a network error. You must provide
     * your own value for other use cases.</p> <p>If you specify input parameters that
     * differ from your first request, an error occurs for flows that run on a schedule
     * or based on an event. However, the error doesn't occur for flows that run on
     * demand. You set the conditions that initiate your flow for the
     * <code>triggerConfig</code> parameter.</p> <p>If you use a different value for
     * <code>clientToken</code>, Amazon AppFlow considers it a new call to
     * <code>StartFlow</code>. The token is active for 8 hours.</p>
     */
    inline StartFlowRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}

  private:

    Aws::String m_flowName;
    bool m_flowNameHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws

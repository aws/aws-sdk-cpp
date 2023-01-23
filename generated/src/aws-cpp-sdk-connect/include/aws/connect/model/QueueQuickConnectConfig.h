/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace Connect
{
namespace Model
{

  /**
   * <p>Contains information about a queue for a quick connect. The flow must be of
   * type Transfer to Queue.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/QueueQuickConnectConfig">AWS
   * API Reference</a></p>
   */
  class QueueQuickConnectConfig
  {
  public:
    AWS_CONNECT_API QueueQuickConnectConfig();
    AWS_CONNECT_API QueueQuickConnectConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API QueueQuickConnectConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The identifier for the queue.</p>
     */
    inline const Aws::String& GetQueueId() const{ return m_queueId; }

    /**
     * <p>The identifier for the queue.</p>
     */
    inline bool QueueIdHasBeenSet() const { return m_queueIdHasBeenSet; }

    /**
     * <p>The identifier for the queue.</p>
     */
    inline void SetQueueId(const Aws::String& value) { m_queueIdHasBeenSet = true; m_queueId = value; }

    /**
     * <p>The identifier for the queue.</p>
     */
    inline void SetQueueId(Aws::String&& value) { m_queueIdHasBeenSet = true; m_queueId = std::move(value); }

    /**
     * <p>The identifier for the queue.</p>
     */
    inline void SetQueueId(const char* value) { m_queueIdHasBeenSet = true; m_queueId.assign(value); }

    /**
     * <p>The identifier for the queue.</p>
     */
    inline QueueQuickConnectConfig& WithQueueId(const Aws::String& value) { SetQueueId(value); return *this;}

    /**
     * <p>The identifier for the queue.</p>
     */
    inline QueueQuickConnectConfig& WithQueueId(Aws::String&& value) { SetQueueId(std::move(value)); return *this;}

    /**
     * <p>The identifier for the queue.</p>
     */
    inline QueueQuickConnectConfig& WithQueueId(const char* value) { SetQueueId(value); return *this;}


    /**
     * <p>The identifier of the flow.</p>
     */
    inline const Aws::String& GetContactFlowId() const{ return m_contactFlowId; }

    /**
     * <p>The identifier of the flow.</p>
     */
    inline bool ContactFlowIdHasBeenSet() const { return m_contactFlowIdHasBeenSet; }

    /**
     * <p>The identifier of the flow.</p>
     */
    inline void SetContactFlowId(const Aws::String& value) { m_contactFlowIdHasBeenSet = true; m_contactFlowId = value; }

    /**
     * <p>The identifier of the flow.</p>
     */
    inline void SetContactFlowId(Aws::String&& value) { m_contactFlowIdHasBeenSet = true; m_contactFlowId = std::move(value); }

    /**
     * <p>The identifier of the flow.</p>
     */
    inline void SetContactFlowId(const char* value) { m_contactFlowIdHasBeenSet = true; m_contactFlowId.assign(value); }

    /**
     * <p>The identifier of the flow.</p>
     */
    inline QueueQuickConnectConfig& WithContactFlowId(const Aws::String& value) { SetContactFlowId(value); return *this;}

    /**
     * <p>The identifier of the flow.</p>
     */
    inline QueueQuickConnectConfig& WithContactFlowId(Aws::String&& value) { SetContactFlowId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the flow.</p>
     */
    inline QueueQuickConnectConfig& WithContactFlowId(const char* value) { SetContactFlowId(value); return *this;}

  private:

    Aws::String m_queueId;
    bool m_queueIdHasBeenSet = false;

    Aws::String m_contactFlowId;
    bool m_contactFlowIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws

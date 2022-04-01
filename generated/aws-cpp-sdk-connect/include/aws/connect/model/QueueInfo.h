/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
   * <p>If this contact was queued, this contains information about the queue.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/QueueInfo">AWS
   * API Reference</a></p>
   */
  class AWS_CONNECT_API QueueInfo
  {
  public:
    QueueInfo();
    QueueInfo(Aws::Utils::Json::JsonView jsonValue);
    QueueInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The identifier of the agent who accepted the contact.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The identifier of the agent who accepted the contact.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The identifier of the agent who accepted the contact.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The identifier of the agent who accepted the contact.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The identifier of the agent who accepted the contact.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The identifier of the agent who accepted the contact.</p>
     */
    inline QueueInfo& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The identifier of the agent who accepted the contact.</p>
     */
    inline QueueInfo& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the agent who accepted the contact.</p>
     */
    inline QueueInfo& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The timestamp when the contact was added to the queue.</p>
     */
    inline const Aws::Utils::DateTime& GetEnqueueTimestamp() const{ return m_enqueueTimestamp; }

    /**
     * <p>The timestamp when the contact was added to the queue.</p>
     */
    inline bool EnqueueTimestampHasBeenSet() const { return m_enqueueTimestampHasBeenSet; }

    /**
     * <p>The timestamp when the contact was added to the queue.</p>
     */
    inline void SetEnqueueTimestamp(const Aws::Utils::DateTime& value) { m_enqueueTimestampHasBeenSet = true; m_enqueueTimestamp = value; }

    /**
     * <p>The timestamp when the contact was added to the queue.</p>
     */
    inline void SetEnqueueTimestamp(Aws::Utils::DateTime&& value) { m_enqueueTimestampHasBeenSet = true; m_enqueueTimestamp = std::move(value); }

    /**
     * <p>The timestamp when the contact was added to the queue.</p>
     */
    inline QueueInfo& WithEnqueueTimestamp(const Aws::Utils::DateTime& value) { SetEnqueueTimestamp(value); return *this;}

    /**
     * <p>The timestamp when the contact was added to the queue.</p>
     */
    inline QueueInfo& WithEnqueueTimestamp(Aws::Utils::DateTime&& value) { SetEnqueueTimestamp(std::move(value)); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet;

    Aws::Utils::DateTime m_enqueueTimestamp;
    bool m_enqueueTimestampHasBeenSet;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws

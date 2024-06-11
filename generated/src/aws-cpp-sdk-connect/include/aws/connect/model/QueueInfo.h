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
  class QueueInfo
  {
  public:
    AWS_CONNECT_API QueueInfo();
    AWS_CONNECT_API QueueInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API QueueInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier for the queue.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline QueueInfo& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline QueueInfo& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline QueueInfo& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the contact was added to the queue.</p>
     */
    inline const Aws::Utils::DateTime& GetEnqueueTimestamp() const{ return m_enqueueTimestamp; }
    inline bool EnqueueTimestampHasBeenSet() const { return m_enqueueTimestampHasBeenSet; }
    inline void SetEnqueueTimestamp(const Aws::Utils::DateTime& value) { m_enqueueTimestampHasBeenSet = true; m_enqueueTimestamp = value; }
    inline void SetEnqueueTimestamp(Aws::Utils::DateTime&& value) { m_enqueueTimestampHasBeenSet = true; m_enqueueTimestamp = std::move(value); }
    inline QueueInfo& WithEnqueueTimestamp(const Aws::Utils::DateTime& value) { SetEnqueueTimestamp(value); return *this;}
    inline QueueInfo& WithEnqueueTimestamp(Aws::Utils::DateTime&& value) { SetEnqueueTimestamp(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::Utils::DateTime m_enqueueTimestamp;
    bool m_enqueueTimestampHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws

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
    AWS_CONNECT_API QueueInfo() = default;
    AWS_CONNECT_API QueueInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API QueueInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier for the queue.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    QueueInfo& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the contact was added to the queue.</p>
     */
    inline const Aws::Utils::DateTime& GetEnqueueTimestamp() const { return m_enqueueTimestamp; }
    inline bool EnqueueTimestampHasBeenSet() const { return m_enqueueTimestampHasBeenSet; }
    template<typename EnqueueTimestampT = Aws::Utils::DateTime>
    void SetEnqueueTimestamp(EnqueueTimestampT&& value) { m_enqueueTimestampHasBeenSet = true; m_enqueueTimestamp = std::forward<EnqueueTimestampT>(value); }
    template<typename EnqueueTimestampT = Aws::Utils::DateTime>
    QueueInfo& WithEnqueueTimestamp(EnqueueTimestampT&& value) { SetEnqueueTimestamp(std::forward<EnqueueTimestampT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::Utils::DateTime m_enqueueTimestamp{};
    bool m_enqueueTimestampHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws

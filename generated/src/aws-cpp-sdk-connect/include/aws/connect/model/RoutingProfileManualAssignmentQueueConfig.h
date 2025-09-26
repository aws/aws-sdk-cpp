/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/RoutingProfileQueueReference.h>
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
   * <p>Contains information about the queue and channel for manual assignment
   * behaviour can be enabled.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/RoutingProfileManualAssignmentQueueConfig">AWS
   * API Reference</a></p>
   */
  class RoutingProfileManualAssignmentQueueConfig
  {
  public:
    AWS_CONNECT_API RoutingProfileManualAssignmentQueueConfig() = default;
    AWS_CONNECT_API RoutingProfileManualAssignmentQueueConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API RoutingProfileManualAssignmentQueueConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const RoutingProfileQueueReference& GetQueueReference() const { return m_queueReference; }
    inline bool QueueReferenceHasBeenSet() const { return m_queueReferenceHasBeenSet; }
    template<typename QueueReferenceT = RoutingProfileQueueReference>
    void SetQueueReference(QueueReferenceT&& value) { m_queueReferenceHasBeenSet = true; m_queueReference = std::forward<QueueReferenceT>(value); }
    template<typename QueueReferenceT = RoutingProfileQueueReference>
    RoutingProfileManualAssignmentQueueConfig& WithQueueReference(QueueReferenceT&& value) { SetQueueReference(std::forward<QueueReferenceT>(value)); return *this;}
    ///@}
  private:

    RoutingProfileQueueReference m_queueReference;
    bool m_queueReferenceHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws

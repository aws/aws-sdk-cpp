/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eventbridge/EventBridge_EXPORTS.h>
#include <aws/eventbridge/model/ReplicationState.h>
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
namespace EventBridge
{
namespace Model
{

  /**
   * <p>Endpoints can replicate all events to the secondary Region.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridge-2015-10-07/ReplicationConfig">AWS
   * API Reference</a></p>
   */
  class ReplicationConfig
  {
  public:
    AWS_EVENTBRIDGE_API ReplicationConfig();
    AWS_EVENTBRIDGE_API ReplicationConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_EVENTBRIDGE_API ReplicationConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EVENTBRIDGE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The state of event replication.</p>
     */
    inline const ReplicationState& GetState() const{ return m_state; }

    /**
     * <p>The state of event replication.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The state of event replication.</p>
     */
    inline void SetState(const ReplicationState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The state of event replication.</p>
     */
    inline void SetState(ReplicationState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The state of event replication.</p>
     */
    inline ReplicationConfig& WithState(const ReplicationState& value) { SetState(value); return *this;}

    /**
     * <p>The state of event replication.</p>
     */
    inline ReplicationConfig& WithState(ReplicationState&& value) { SetState(std::move(value)); return *this;}

  private:

    ReplicationState m_state;
    bool m_stateHasBeenSet = false;
  };

} // namespace Model
} // namespace EventBridge
} // namespace Aws

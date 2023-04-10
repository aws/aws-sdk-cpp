/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/BehaviorType.h>
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
   * <p>Defines the cross-channel routing behavior that allows an agent working on a
   * contact in one channel to be offered a contact from a different
   * channel.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/CrossChannelBehavior">AWS
   * API Reference</a></p>
   */
  class CrossChannelBehavior
  {
  public:
    AWS_CONNECT_API CrossChannelBehavior();
    AWS_CONNECT_API CrossChannelBehavior(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API CrossChannelBehavior& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies the other channels that can be routed to an agent handling their
     * current channel.</p>
     */
    inline const BehaviorType& GetBehaviorType() const{ return m_behaviorType; }

    /**
     * <p>Specifies the other channels that can be routed to an agent handling their
     * current channel.</p>
     */
    inline bool BehaviorTypeHasBeenSet() const { return m_behaviorTypeHasBeenSet; }

    /**
     * <p>Specifies the other channels that can be routed to an agent handling their
     * current channel.</p>
     */
    inline void SetBehaviorType(const BehaviorType& value) { m_behaviorTypeHasBeenSet = true; m_behaviorType = value; }

    /**
     * <p>Specifies the other channels that can be routed to an agent handling their
     * current channel.</p>
     */
    inline void SetBehaviorType(BehaviorType&& value) { m_behaviorTypeHasBeenSet = true; m_behaviorType = std::move(value); }

    /**
     * <p>Specifies the other channels that can be routed to an agent handling their
     * current channel.</p>
     */
    inline CrossChannelBehavior& WithBehaviorType(const BehaviorType& value) { SetBehaviorType(value); return *this;}

    /**
     * <p>Specifies the other channels that can be routed to an agent handling their
     * current channel.</p>
     */
    inline CrossChannelBehavior& WithBehaviorType(BehaviorType&& value) { SetBehaviorType(std::move(value)); return *this;}

  private:

    BehaviorType m_behaviorType;
    bool m_behaviorTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws

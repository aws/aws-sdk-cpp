/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eventbridge/EventBridge_EXPORTS.h>
#include <aws/eventbridge/model/Primary.h>
#include <aws/eventbridge/model/Secondary.h>
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
   * <p>The failover configuration for an endpoint. This includes what triggers
   * failover and what happens when it's triggered.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridge-2015-10-07/FailoverConfig">AWS
   * API Reference</a></p>
   */
  class FailoverConfig
  {
  public:
    AWS_EVENTBRIDGE_API FailoverConfig();
    AWS_EVENTBRIDGE_API FailoverConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_EVENTBRIDGE_API FailoverConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EVENTBRIDGE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The main Region of the endpoint.</p>
     */
    inline const Primary& GetPrimary() const{ return m_primary; }

    /**
     * <p>The main Region of the endpoint.</p>
     */
    inline bool PrimaryHasBeenSet() const { return m_primaryHasBeenSet; }

    /**
     * <p>The main Region of the endpoint.</p>
     */
    inline void SetPrimary(const Primary& value) { m_primaryHasBeenSet = true; m_primary = value; }

    /**
     * <p>The main Region of the endpoint.</p>
     */
    inline void SetPrimary(Primary&& value) { m_primaryHasBeenSet = true; m_primary = std::move(value); }

    /**
     * <p>The main Region of the endpoint.</p>
     */
    inline FailoverConfig& WithPrimary(const Primary& value) { SetPrimary(value); return *this;}

    /**
     * <p>The main Region of the endpoint.</p>
     */
    inline FailoverConfig& WithPrimary(Primary&& value) { SetPrimary(std::move(value)); return *this;}


    /**
     * <p>The Region that events are routed to when failover is triggered or event
     * replication is enabled.</p>
     */
    inline const Secondary& GetSecondary() const{ return m_secondary; }

    /**
     * <p>The Region that events are routed to when failover is triggered or event
     * replication is enabled.</p>
     */
    inline bool SecondaryHasBeenSet() const { return m_secondaryHasBeenSet; }

    /**
     * <p>The Region that events are routed to when failover is triggered or event
     * replication is enabled.</p>
     */
    inline void SetSecondary(const Secondary& value) { m_secondaryHasBeenSet = true; m_secondary = value; }

    /**
     * <p>The Region that events are routed to when failover is triggered or event
     * replication is enabled.</p>
     */
    inline void SetSecondary(Secondary&& value) { m_secondaryHasBeenSet = true; m_secondary = std::move(value); }

    /**
     * <p>The Region that events are routed to when failover is triggered or event
     * replication is enabled.</p>
     */
    inline FailoverConfig& WithSecondary(const Secondary& value) { SetSecondary(value); return *this;}

    /**
     * <p>The Region that events are routed to when failover is triggered or event
     * replication is enabled.</p>
     */
    inline FailoverConfig& WithSecondary(Secondary&& value) { SetSecondary(std::move(value)); return *this;}

  private:

    Primary m_primary;
    bool m_primaryHasBeenSet = false;

    Secondary m_secondary;
    bool m_secondaryHasBeenSet = false;
  };

} // namespace Model
} // namespace EventBridge
} // namespace Aws

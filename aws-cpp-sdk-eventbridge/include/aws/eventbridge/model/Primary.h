/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eventbridge/EventBridge_EXPORTS.h>
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
namespace EventBridge
{
namespace Model
{

  /**
   * <p>The primary Region of the endpoint.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridge-2015-10-07/Primary">AWS
   * API Reference</a></p>
   */
  class Primary
  {
  public:
    AWS_EVENTBRIDGE_API Primary();
    AWS_EVENTBRIDGE_API Primary(Aws::Utils::Json::JsonView jsonValue);
    AWS_EVENTBRIDGE_API Primary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EVENTBRIDGE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ARN of the health check used by the endpoint to determine whether
     * failover is triggered.</p>
     */
    inline const Aws::String& GetHealthCheck() const{ return m_healthCheck; }

    /**
     * <p>The ARN of the health check used by the endpoint to determine whether
     * failover is triggered.</p>
     */
    inline bool HealthCheckHasBeenSet() const { return m_healthCheckHasBeenSet; }

    /**
     * <p>The ARN of the health check used by the endpoint to determine whether
     * failover is triggered.</p>
     */
    inline void SetHealthCheck(const Aws::String& value) { m_healthCheckHasBeenSet = true; m_healthCheck = value; }

    /**
     * <p>The ARN of the health check used by the endpoint to determine whether
     * failover is triggered.</p>
     */
    inline void SetHealthCheck(Aws::String&& value) { m_healthCheckHasBeenSet = true; m_healthCheck = std::move(value); }

    /**
     * <p>The ARN of the health check used by the endpoint to determine whether
     * failover is triggered.</p>
     */
    inline void SetHealthCheck(const char* value) { m_healthCheckHasBeenSet = true; m_healthCheck.assign(value); }

    /**
     * <p>The ARN of the health check used by the endpoint to determine whether
     * failover is triggered.</p>
     */
    inline Primary& WithHealthCheck(const Aws::String& value) { SetHealthCheck(value); return *this;}

    /**
     * <p>The ARN of the health check used by the endpoint to determine whether
     * failover is triggered.</p>
     */
    inline Primary& WithHealthCheck(Aws::String&& value) { SetHealthCheck(std::move(value)); return *this;}

    /**
     * <p>The ARN of the health check used by the endpoint to determine whether
     * failover is triggered.</p>
     */
    inline Primary& WithHealthCheck(const char* value) { SetHealthCheck(value); return *this;}

  private:

    Aws::String m_healthCheck;
    bool m_healthCheckHasBeenSet = false;
  };

} // namespace Model
} // namespace EventBridge
} // namespace Aws

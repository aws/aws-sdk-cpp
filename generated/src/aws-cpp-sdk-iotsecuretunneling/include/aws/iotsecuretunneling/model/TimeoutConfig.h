/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsecuretunneling/IoTSecureTunneling_EXPORTS.h>

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
namespace IoTSecureTunneling
{
namespace Model
{

  /**
   * <p>Tunnel timeout configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsecuretunneling-2018-10-05/TimeoutConfig">AWS
   * API Reference</a></p>
   */
  class TimeoutConfig
  {
  public:
    AWS_IOTSECURETUNNELING_API TimeoutConfig();
    AWS_IOTSECURETUNNELING_API TimeoutConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSECURETUNNELING_API TimeoutConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSECURETUNNELING_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The maximum amount of time (in minutes) a tunnel can remain open. If not
     * specified, maxLifetimeTimeoutMinutes defaults to 720 minutes. Valid values are
     * from 1 minute to 12 hours (720 minutes) </p>
     */
    inline int GetMaxLifetimeTimeoutMinutes() const{ return m_maxLifetimeTimeoutMinutes; }

    /**
     * <p>The maximum amount of time (in minutes) a tunnel can remain open. If not
     * specified, maxLifetimeTimeoutMinutes defaults to 720 minutes. Valid values are
     * from 1 minute to 12 hours (720 minutes) </p>
     */
    inline bool MaxLifetimeTimeoutMinutesHasBeenSet() const { return m_maxLifetimeTimeoutMinutesHasBeenSet; }

    /**
     * <p>The maximum amount of time (in minutes) a tunnel can remain open. If not
     * specified, maxLifetimeTimeoutMinutes defaults to 720 minutes. Valid values are
     * from 1 minute to 12 hours (720 minutes) </p>
     */
    inline void SetMaxLifetimeTimeoutMinutes(int value) { m_maxLifetimeTimeoutMinutesHasBeenSet = true; m_maxLifetimeTimeoutMinutes = value; }

    /**
     * <p>The maximum amount of time (in minutes) a tunnel can remain open. If not
     * specified, maxLifetimeTimeoutMinutes defaults to 720 minutes. Valid values are
     * from 1 minute to 12 hours (720 minutes) </p>
     */
    inline TimeoutConfig& WithMaxLifetimeTimeoutMinutes(int value) { SetMaxLifetimeTimeoutMinutes(value); return *this;}

  private:

    int m_maxLifetimeTimeoutMinutes;
    bool m_maxLifetimeTimeoutMinutesHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSecureTunneling
} // namespace Aws

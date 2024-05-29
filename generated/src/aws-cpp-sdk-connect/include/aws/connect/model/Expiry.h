/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
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
   * <p>An object to specify the expiration of a routing step.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/Expiry">AWS API
   * Reference</a></p>
   */
  class Expiry
  {
  public:
    AWS_CONNECT_API Expiry();
    AWS_CONNECT_API Expiry(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Expiry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The number of seconds to wait before expiring the routing step.</p>
     */
    inline int GetDurationInSeconds() const{ return m_durationInSeconds; }

    /**
     * <p>The number of seconds to wait before expiring the routing step.</p>
     */
    inline bool DurationInSecondsHasBeenSet() const { return m_durationInSecondsHasBeenSet; }

    /**
     * <p>The number of seconds to wait before expiring the routing step.</p>
     */
    inline void SetDurationInSeconds(int value) { m_durationInSecondsHasBeenSet = true; m_durationInSeconds = value; }

    /**
     * <p>The number of seconds to wait before expiring the routing step.</p>
     */
    inline Expiry& WithDurationInSeconds(int value) { SetDurationInSeconds(value); return *this;}


    /**
     * <p>The timestamp indicating when the routing step expires.</p>
     */
    inline const Aws::Utils::DateTime& GetExpiryTimestamp() const{ return m_expiryTimestamp; }

    /**
     * <p>The timestamp indicating when the routing step expires.</p>
     */
    inline bool ExpiryTimestampHasBeenSet() const { return m_expiryTimestampHasBeenSet; }

    /**
     * <p>The timestamp indicating when the routing step expires.</p>
     */
    inline void SetExpiryTimestamp(const Aws::Utils::DateTime& value) { m_expiryTimestampHasBeenSet = true; m_expiryTimestamp = value; }

    /**
     * <p>The timestamp indicating when the routing step expires.</p>
     */
    inline void SetExpiryTimestamp(Aws::Utils::DateTime&& value) { m_expiryTimestampHasBeenSet = true; m_expiryTimestamp = std::move(value); }

    /**
     * <p>The timestamp indicating when the routing step expires.</p>
     */
    inline Expiry& WithExpiryTimestamp(const Aws::Utils::DateTime& value) { SetExpiryTimestamp(value); return *this;}

    /**
     * <p>The timestamp indicating when the routing step expires.</p>
     */
    inline Expiry& WithExpiryTimestamp(Aws::Utils::DateTime&& value) { SetExpiryTimestamp(std::move(value)); return *this;}

  private:

    int m_durationInSeconds;
    bool m_durationInSecondsHasBeenSet = false;

    Aws::Utils::DateTime m_expiryTimestamp;
    bool m_expiryTimestampHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws

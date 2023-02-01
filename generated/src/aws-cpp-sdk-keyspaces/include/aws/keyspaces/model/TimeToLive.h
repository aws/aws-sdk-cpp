/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/keyspaces/Keyspaces_EXPORTS.h>
#include <aws/keyspaces/model/TimeToLiveStatus.h>
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
namespace Keyspaces
{
namespace Model
{

  /**
   * <p>Enable custom Time to Live (TTL) settings for rows and columns without
   * setting a TTL default for the specified table.</p> <p>For more information, see
   * <a
   * href="https://docs.aws.amazon.com/keyspaces/latest/devguide/TTL-how-it-works.html#ttl-howitworks_enabling">Enabling
   * TTL on tables</a> in the <i>Amazon Keyspaces Developer Guide</i>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/keyspaces-2022-02-10/TimeToLive">AWS
   * API Reference</a></p>
   */
  class TimeToLive
  {
  public:
    AWS_KEYSPACES_API TimeToLive();
    AWS_KEYSPACES_API TimeToLive(Aws::Utils::Json::JsonView jsonValue);
    AWS_KEYSPACES_API TimeToLive& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KEYSPACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Shows how to enable custom Time to Live (TTL) settings for the specified
     * table.</p>
     */
    inline const TimeToLiveStatus& GetStatus() const{ return m_status; }

    /**
     * <p>Shows how to enable custom Time to Live (TTL) settings for the specified
     * table.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>Shows how to enable custom Time to Live (TTL) settings for the specified
     * table.</p>
     */
    inline void SetStatus(const TimeToLiveStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>Shows how to enable custom Time to Live (TTL) settings for the specified
     * table.</p>
     */
    inline void SetStatus(TimeToLiveStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>Shows how to enable custom Time to Live (TTL) settings for the specified
     * table.</p>
     */
    inline TimeToLive& WithStatus(const TimeToLiveStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>Shows how to enable custom Time to Live (TTL) settings for the specified
     * table.</p>
     */
    inline TimeToLive& WithStatus(TimeToLiveStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    TimeToLiveStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace Keyspaces
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-runtime/LexRuntimeV2_EXPORTS.h>

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
namespace LexRuntimeV2
{
namespace Model
{

  /**
   * <p>The time that a context is active. You can specify the time to live in
   * seconds or in conversation turns.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/runtime.lex.v2-2020-08-07/ActiveContextTimeToLive">AWS
   * API Reference</a></p>
   */
  class ActiveContextTimeToLive
  {
  public:
    AWS_LEXRUNTIMEV2_API ActiveContextTimeToLive();
    AWS_LEXRUNTIMEV2_API ActiveContextTimeToLive(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXRUNTIMEV2_API ActiveContextTimeToLive& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXRUNTIMEV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The number of seconds that the context is active. You can specify between 5
     * and 86400 seconds (24 hours).</p>
     */
    inline int GetTimeToLiveInSeconds() const{ return m_timeToLiveInSeconds; }

    /**
     * <p>The number of seconds that the context is active. You can specify between 5
     * and 86400 seconds (24 hours).</p>
     */
    inline bool TimeToLiveInSecondsHasBeenSet() const { return m_timeToLiveInSecondsHasBeenSet; }

    /**
     * <p>The number of seconds that the context is active. You can specify between 5
     * and 86400 seconds (24 hours).</p>
     */
    inline void SetTimeToLiveInSeconds(int value) { m_timeToLiveInSecondsHasBeenSet = true; m_timeToLiveInSeconds = value; }

    /**
     * <p>The number of seconds that the context is active. You can specify between 5
     * and 86400 seconds (24 hours).</p>
     */
    inline ActiveContextTimeToLive& WithTimeToLiveInSeconds(int value) { SetTimeToLiveInSeconds(value); return *this;}


    /**
     * <p>The number of turns that the context is active. You can specify up to 20
     * turns. Each request and response from the bot is a turn.</p>
     */
    inline int GetTurnsToLive() const{ return m_turnsToLive; }

    /**
     * <p>The number of turns that the context is active. You can specify up to 20
     * turns. Each request and response from the bot is a turn.</p>
     */
    inline bool TurnsToLiveHasBeenSet() const { return m_turnsToLiveHasBeenSet; }

    /**
     * <p>The number of turns that the context is active. You can specify up to 20
     * turns. Each request and response from the bot is a turn.</p>
     */
    inline void SetTurnsToLive(int value) { m_turnsToLiveHasBeenSet = true; m_turnsToLive = value; }

    /**
     * <p>The number of turns that the context is active. You can specify up to 20
     * turns. Each request and response from the bot is a turn.</p>
     */
    inline ActiveContextTimeToLive& WithTurnsToLive(int value) { SetTurnsToLive(value); return *this;}

  private:

    int m_timeToLiveInSeconds;
    bool m_timeToLiveInSecondsHasBeenSet = false;

    int m_turnsToLive;
    bool m_turnsToLiveHasBeenSet = false;
  };

} // namespace Model
} // namespace LexRuntimeV2
} // namespace Aws

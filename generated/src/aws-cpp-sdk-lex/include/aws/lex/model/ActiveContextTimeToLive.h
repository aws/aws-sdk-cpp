/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lex/LexRuntimeService_EXPORTS.h>

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
namespace LexRuntimeService
{
namespace Model
{

  /**
   * <p>The length of time or number of turns that a context remains
   * active.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/runtime.lex-2016-11-28/ActiveContextTimeToLive">AWS
   * API Reference</a></p>
   */
  class ActiveContextTimeToLive
  {
  public:
    AWS_LEXRUNTIMESERVICE_API ActiveContextTimeToLive();
    AWS_LEXRUNTIMESERVICE_API ActiveContextTimeToLive(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXRUNTIMESERVICE_API ActiveContextTimeToLive& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXRUNTIMESERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The number of seconds that the context should be active after it is first
     * sent in a <code>PostContent</code> or <code>PostText</code> response. You can
     * set the value between 5 and 86,400 seconds (24 hours).</p>
     */
    inline int GetTimeToLiveInSeconds() const{ return m_timeToLiveInSeconds; }

    /**
     * <p>The number of seconds that the context should be active after it is first
     * sent in a <code>PostContent</code> or <code>PostText</code> response. You can
     * set the value between 5 and 86,400 seconds (24 hours).</p>
     */
    inline bool TimeToLiveInSecondsHasBeenSet() const { return m_timeToLiveInSecondsHasBeenSet; }

    /**
     * <p>The number of seconds that the context should be active after it is first
     * sent in a <code>PostContent</code> or <code>PostText</code> response. You can
     * set the value between 5 and 86,400 seconds (24 hours).</p>
     */
    inline void SetTimeToLiveInSeconds(int value) { m_timeToLiveInSecondsHasBeenSet = true; m_timeToLiveInSeconds = value; }

    /**
     * <p>The number of seconds that the context should be active after it is first
     * sent in a <code>PostContent</code> or <code>PostText</code> response. You can
     * set the value between 5 and 86,400 seconds (24 hours).</p>
     */
    inline ActiveContextTimeToLive& WithTimeToLiveInSeconds(int value) { SetTimeToLiveInSeconds(value); return *this;}


    /**
     * <p>The number of conversation turns that the context should be active. A
     * conversation turn is one <code>PostContent</code> or <code>PostText</code>
     * request and the corresponding response from Amazon Lex.</p>
     */
    inline int GetTurnsToLive() const{ return m_turnsToLive; }

    /**
     * <p>The number of conversation turns that the context should be active. A
     * conversation turn is one <code>PostContent</code> or <code>PostText</code>
     * request and the corresponding response from Amazon Lex.</p>
     */
    inline bool TurnsToLiveHasBeenSet() const { return m_turnsToLiveHasBeenSet; }

    /**
     * <p>The number of conversation turns that the context should be active. A
     * conversation turn is one <code>PostContent</code> or <code>PostText</code>
     * request and the corresponding response from Amazon Lex.</p>
     */
    inline void SetTurnsToLive(int value) { m_turnsToLiveHasBeenSet = true; m_turnsToLive = value; }

    /**
     * <p>The number of conversation turns that the context should be active. A
     * conversation turn is one <code>PostContent</code> or <code>PostText</code>
     * request and the corresponding response from Amazon Lex.</p>
     */
    inline ActiveContextTimeToLive& WithTurnsToLive(int value) { SetTurnsToLive(value); return *this;}

  private:

    int m_timeToLiveInSeconds;
    bool m_timeToLiveInSecondsHasBeenSet = false;

    int m_turnsToLive;
    bool m_turnsToLiveHasBeenSet = false;
  };

} // namespace Model
} // namespace LexRuntimeService
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lex-models/LexModelBuildingService_EXPORTS.h>
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
namespace LexModelBuildingService
{
namespace Model
{

  /**
   * <p>The specification of an output context that is set when an intent is
   * fulfilled.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lex-models-2017-04-19/OutputContext">AWS
   * API Reference</a></p>
   */
  class OutputContext
  {
  public:
    AWS_LEXMODELBUILDINGSERVICE_API OutputContext();
    AWS_LEXMODELBUILDINGSERVICE_API OutputContext(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELBUILDINGSERVICE_API OutputContext& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELBUILDINGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the context.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the context.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the context.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the context.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the context.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the context.</p>
     */
    inline OutputContext& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the context.</p>
     */
    inline OutputContext& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the context.</p>
     */
    inline OutputContext& WithName(const char* value) { SetName(value); return *this;}


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
    inline OutputContext& WithTimeToLiveInSeconds(int value) { SetTimeToLiveInSeconds(value); return *this;}


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
    inline OutputContext& WithTurnsToLive(int value) { SetTurnsToLive(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    int m_timeToLiveInSeconds;
    bool m_timeToLiveInSecondsHasBeenSet = false;

    int m_turnsToLive;
    bool m_turnsToLiveHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelBuildingService
} // namespace Aws

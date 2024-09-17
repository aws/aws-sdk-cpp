/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
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
namespace LexModelsV2
{
namespace Model
{

  /**
   * <p>Describes a session context that is activated when an intent is
   * fulfilled.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/OutputContext">AWS
   * API Reference</a></p>
   */
  class OutputContext
  {
  public:
    AWS_LEXMODELSV2_API OutputContext();
    AWS_LEXMODELSV2_API OutputContext(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API OutputContext& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the output context.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline OutputContext& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline OutputContext& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline OutputContext& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of time, in seconds, that the output context should remain active.
     * The time is figured from the first time the context is sent to the user.</p>
     */
    inline int GetTimeToLiveInSeconds() const{ return m_timeToLiveInSeconds; }
    inline bool TimeToLiveInSecondsHasBeenSet() const { return m_timeToLiveInSecondsHasBeenSet; }
    inline void SetTimeToLiveInSeconds(int value) { m_timeToLiveInSecondsHasBeenSet = true; m_timeToLiveInSeconds = value; }
    inline OutputContext& WithTimeToLiveInSeconds(int value) { SetTimeToLiveInSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of conversation turns that the output context should remain
     * active. The number of turns is counted from the first time that the context is
     * sent to the user.</p>
     */
    inline int GetTurnsToLive() const{ return m_turnsToLive; }
    inline bool TurnsToLiveHasBeenSet() const { return m_turnsToLiveHasBeenSet; }
    inline void SetTurnsToLive(int value) { m_turnsToLiveHasBeenSet = true; m_turnsToLive = value; }
    inline OutputContext& WithTurnsToLive(int value) { SetTurnsToLive(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    int m_timeToLiveInSeconds;
    bool m_timeToLiveInSecondsHasBeenSet = false;

    int m_turnsToLive;
    bool m_turnsToLiveHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws

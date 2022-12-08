/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
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
namespace MediaLive
{
namespace Model
{

  /**
   * Placeholder documentation for MultiplexProgramSummary<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/MultiplexProgramSummary">AWS
   * API Reference</a></p>
   */
  class MultiplexProgramSummary
  {
  public:
    AWS_MEDIALIVE_API MultiplexProgramSummary();
    AWS_MEDIALIVE_API MultiplexProgramSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API MultiplexProgramSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The MediaLive Channel associated with the program.
     */
    inline const Aws::String& GetChannelId() const{ return m_channelId; }

    /**
     * The MediaLive Channel associated with the program.
     */
    inline bool ChannelIdHasBeenSet() const { return m_channelIdHasBeenSet; }

    /**
     * The MediaLive Channel associated with the program.
     */
    inline void SetChannelId(const Aws::String& value) { m_channelIdHasBeenSet = true; m_channelId = value; }

    /**
     * The MediaLive Channel associated with the program.
     */
    inline void SetChannelId(Aws::String&& value) { m_channelIdHasBeenSet = true; m_channelId = std::move(value); }

    /**
     * The MediaLive Channel associated with the program.
     */
    inline void SetChannelId(const char* value) { m_channelIdHasBeenSet = true; m_channelId.assign(value); }

    /**
     * The MediaLive Channel associated with the program.
     */
    inline MultiplexProgramSummary& WithChannelId(const Aws::String& value) { SetChannelId(value); return *this;}

    /**
     * The MediaLive Channel associated with the program.
     */
    inline MultiplexProgramSummary& WithChannelId(Aws::String&& value) { SetChannelId(std::move(value)); return *this;}

    /**
     * The MediaLive Channel associated with the program.
     */
    inline MultiplexProgramSummary& WithChannelId(const char* value) { SetChannelId(value); return *this;}


    /**
     * The name of the multiplex program.
     */
    inline const Aws::String& GetProgramName() const{ return m_programName; }

    /**
     * The name of the multiplex program.
     */
    inline bool ProgramNameHasBeenSet() const { return m_programNameHasBeenSet; }

    /**
     * The name of the multiplex program.
     */
    inline void SetProgramName(const Aws::String& value) { m_programNameHasBeenSet = true; m_programName = value; }

    /**
     * The name of the multiplex program.
     */
    inline void SetProgramName(Aws::String&& value) { m_programNameHasBeenSet = true; m_programName = std::move(value); }

    /**
     * The name of the multiplex program.
     */
    inline void SetProgramName(const char* value) { m_programNameHasBeenSet = true; m_programName.assign(value); }

    /**
     * The name of the multiplex program.
     */
    inline MultiplexProgramSummary& WithProgramName(const Aws::String& value) { SetProgramName(value); return *this;}

    /**
     * The name of the multiplex program.
     */
    inline MultiplexProgramSummary& WithProgramName(Aws::String&& value) { SetProgramName(std::move(value)); return *this;}

    /**
     * The name of the multiplex program.
     */
    inline MultiplexProgramSummary& WithProgramName(const char* value) { SetProgramName(value); return *this;}

  private:

    Aws::String m_channelId;
    bool m_channelIdHasBeenSet = false;

    Aws::String m_programName;
    bool m_programNameHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws

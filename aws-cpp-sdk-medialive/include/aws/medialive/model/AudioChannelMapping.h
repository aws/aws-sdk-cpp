/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/medialive/model/InputChannelLevel.h>
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
   * Audio Channel Mapping<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/AudioChannelMapping">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIALIVE_API AudioChannelMapping
  {
  public:
    AudioChannelMapping();
    AudioChannelMapping(Aws::Utils::Json::JsonView jsonValue);
    AudioChannelMapping& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Indices and gain values for each input channel that should be remixed into this
     * output channel.
     */
    inline const Aws::Vector<InputChannelLevel>& GetInputChannelLevels() const{ return m_inputChannelLevels; }

    /**
     * Indices and gain values for each input channel that should be remixed into this
     * output channel.
     */
    inline bool InputChannelLevelsHasBeenSet() const { return m_inputChannelLevelsHasBeenSet; }

    /**
     * Indices and gain values for each input channel that should be remixed into this
     * output channel.
     */
    inline void SetInputChannelLevels(const Aws::Vector<InputChannelLevel>& value) { m_inputChannelLevelsHasBeenSet = true; m_inputChannelLevels = value; }

    /**
     * Indices and gain values for each input channel that should be remixed into this
     * output channel.
     */
    inline void SetInputChannelLevels(Aws::Vector<InputChannelLevel>&& value) { m_inputChannelLevelsHasBeenSet = true; m_inputChannelLevels = std::move(value); }

    /**
     * Indices and gain values for each input channel that should be remixed into this
     * output channel.
     */
    inline AudioChannelMapping& WithInputChannelLevels(const Aws::Vector<InputChannelLevel>& value) { SetInputChannelLevels(value); return *this;}

    /**
     * Indices and gain values for each input channel that should be remixed into this
     * output channel.
     */
    inline AudioChannelMapping& WithInputChannelLevels(Aws::Vector<InputChannelLevel>&& value) { SetInputChannelLevels(std::move(value)); return *this;}

    /**
     * Indices and gain values for each input channel that should be remixed into this
     * output channel.
     */
    inline AudioChannelMapping& AddInputChannelLevels(const InputChannelLevel& value) { m_inputChannelLevelsHasBeenSet = true; m_inputChannelLevels.push_back(value); return *this; }

    /**
     * Indices and gain values for each input channel that should be remixed into this
     * output channel.
     */
    inline AudioChannelMapping& AddInputChannelLevels(InputChannelLevel&& value) { m_inputChannelLevelsHasBeenSet = true; m_inputChannelLevels.push_back(std::move(value)); return *this; }


    /**
     * The index of the output channel being produced.
     */
    inline int GetOutputChannel() const{ return m_outputChannel; }

    /**
     * The index of the output channel being produced.
     */
    inline bool OutputChannelHasBeenSet() const { return m_outputChannelHasBeenSet; }

    /**
     * The index of the output channel being produced.
     */
    inline void SetOutputChannel(int value) { m_outputChannelHasBeenSet = true; m_outputChannel = value; }

    /**
     * The index of the output channel being produced.
     */
    inline AudioChannelMapping& WithOutputChannel(int value) { SetOutputChannel(value); return *this;}

  private:

    Aws::Vector<InputChannelLevel> m_inputChannelLevels;
    bool m_inputChannelLevelsHasBeenSet;

    int m_outputChannel;
    bool m_outputChannelHasBeenSet;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws

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
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace MediaConvert
{
namespace Model
{

  /**
   * OutputChannel mapping settings.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/OutputChannelMapping">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIACONVERT_API OutputChannelMapping
  {
  public:
    OutputChannelMapping();
    OutputChannelMapping(Aws::Utils::Json::JsonView jsonValue);
    OutputChannelMapping& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * List of input channels
     */
    inline const Aws::Vector<int>& GetInputChannels() const{ return m_inputChannels; }

    /**
     * List of input channels
     */
    inline bool InputChannelsHasBeenSet() const { return m_inputChannelsHasBeenSet; }

    /**
     * List of input channels
     */
    inline void SetInputChannels(const Aws::Vector<int>& value) { m_inputChannelsHasBeenSet = true; m_inputChannels = value; }

    /**
     * List of input channels
     */
    inline void SetInputChannels(Aws::Vector<int>&& value) { m_inputChannelsHasBeenSet = true; m_inputChannels = std::move(value); }

    /**
     * List of input channels
     */
    inline OutputChannelMapping& WithInputChannels(const Aws::Vector<int>& value) { SetInputChannels(value); return *this;}

    /**
     * List of input channels
     */
    inline OutputChannelMapping& WithInputChannels(Aws::Vector<int>&& value) { SetInputChannels(std::move(value)); return *this;}

    /**
     * List of input channels
     */
    inline OutputChannelMapping& AddInputChannels(int value) { m_inputChannelsHasBeenSet = true; m_inputChannels.push_back(value); return *this; }

  private:

    Aws::Vector<int> m_inputChannels;
    bool m_inputChannelsHasBeenSet;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws

﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotanalytics/IoTAnalytics_EXPORTS.h>
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
namespace IoTAnalytics
{
namespace Model
{

  /**
   * <p>The activity that determines the source of the messages to be
   * processed.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/ChannelActivity">AWS
   * API Reference</a></p>
   */
  class ChannelActivity
  {
  public:
    AWS_IOTANALYTICS_API ChannelActivity();
    AWS_IOTANALYTICS_API ChannelActivity(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTANALYTICS_API ChannelActivity& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTANALYTICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the channel activity.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline ChannelActivity& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline ChannelActivity& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline ChannelActivity& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the channel from which the messages are processed.</p>
     */
    inline const Aws::String& GetChannelName() const{ return m_channelName; }
    inline bool ChannelNameHasBeenSet() const { return m_channelNameHasBeenSet; }
    inline void SetChannelName(const Aws::String& value) { m_channelNameHasBeenSet = true; m_channelName = value; }
    inline void SetChannelName(Aws::String&& value) { m_channelNameHasBeenSet = true; m_channelName = std::move(value); }
    inline void SetChannelName(const char* value) { m_channelNameHasBeenSet = true; m_channelName.assign(value); }
    inline ChannelActivity& WithChannelName(const Aws::String& value) { SetChannelName(value); return *this;}
    inline ChannelActivity& WithChannelName(Aws::String&& value) { SetChannelName(std::move(value)); return *this;}
    inline ChannelActivity& WithChannelName(const char* value) { SetChannelName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The next activity in the pipeline.</p>
     */
    inline const Aws::String& GetNext() const{ return m_next; }
    inline bool NextHasBeenSet() const { return m_nextHasBeenSet; }
    inline void SetNext(const Aws::String& value) { m_nextHasBeenSet = true; m_next = value; }
    inline void SetNext(Aws::String&& value) { m_nextHasBeenSet = true; m_next = std::move(value); }
    inline void SetNext(const char* value) { m_nextHasBeenSet = true; m_next.assign(value); }
    inline ChannelActivity& WithNext(const Aws::String& value) { SetNext(value); return *this;}
    inline ChannelActivity& WithNext(Aws::String&& value) { SetNext(std::move(value)); return *this;}
    inline ChannelActivity& WithNext(const char* value) { SetNext(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_channelName;
    bool m_channelNameHasBeenSet = false;

    Aws::String m_next;
    bool m_nextHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws

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
#include <aws/states/SFN_EXPORTS.h>
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
namespace SFN
{
namespace Model
{

  /**
   * <p>Contains details about an activity scheduled during an
   * execution.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/states-2016-11-23/ActivityScheduledEventDetails">AWS
   * API Reference</a></p>
   */
  class AWS_SFN_API ActivityScheduledEventDetails
  {
  public:
    ActivityScheduledEventDetails();
    ActivityScheduledEventDetails(Aws::Utils::Json::JsonView jsonValue);
    ActivityScheduledEventDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the scheduled activity.</p>
     */
    inline const Aws::String& GetResource() const{ return m_resource; }

    /**
     * <p>The Amazon Resource Name (ARN) of the scheduled activity.</p>
     */
    inline bool ResourceHasBeenSet() const { return m_resourceHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the scheduled activity.</p>
     */
    inline void SetResource(const Aws::String& value) { m_resourceHasBeenSet = true; m_resource = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the scheduled activity.</p>
     */
    inline void SetResource(Aws::String&& value) { m_resourceHasBeenSet = true; m_resource = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the scheduled activity.</p>
     */
    inline void SetResource(const char* value) { m_resourceHasBeenSet = true; m_resource.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the scheduled activity.</p>
     */
    inline ActivityScheduledEventDetails& WithResource(const Aws::String& value) { SetResource(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the scheduled activity.</p>
     */
    inline ActivityScheduledEventDetails& WithResource(Aws::String&& value) { SetResource(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the scheduled activity.</p>
     */
    inline ActivityScheduledEventDetails& WithResource(const char* value) { SetResource(value); return *this;}


    /**
     * <p>The JSON data input to the activity task.</p>
     */
    inline const Aws::String& GetInput() const{ return m_input; }

    /**
     * <p>The JSON data input to the activity task.</p>
     */
    inline bool InputHasBeenSet() const { return m_inputHasBeenSet; }

    /**
     * <p>The JSON data input to the activity task.</p>
     */
    inline void SetInput(const Aws::String& value) { m_inputHasBeenSet = true; m_input = value; }

    /**
     * <p>The JSON data input to the activity task.</p>
     */
    inline void SetInput(Aws::String&& value) { m_inputHasBeenSet = true; m_input = std::move(value); }

    /**
     * <p>The JSON data input to the activity task.</p>
     */
    inline void SetInput(const char* value) { m_inputHasBeenSet = true; m_input.assign(value); }

    /**
     * <p>The JSON data input to the activity task.</p>
     */
    inline ActivityScheduledEventDetails& WithInput(const Aws::String& value) { SetInput(value); return *this;}

    /**
     * <p>The JSON data input to the activity task.</p>
     */
    inline ActivityScheduledEventDetails& WithInput(Aws::String&& value) { SetInput(std::move(value)); return *this;}

    /**
     * <p>The JSON data input to the activity task.</p>
     */
    inline ActivityScheduledEventDetails& WithInput(const char* value) { SetInput(value); return *this;}


    /**
     * <p>The maximum allowed duration of the activity task.</p>
     */
    inline long long GetTimeoutInSeconds() const{ return m_timeoutInSeconds; }

    /**
     * <p>The maximum allowed duration of the activity task.</p>
     */
    inline bool TimeoutInSecondsHasBeenSet() const { return m_timeoutInSecondsHasBeenSet; }

    /**
     * <p>The maximum allowed duration of the activity task.</p>
     */
    inline void SetTimeoutInSeconds(long long value) { m_timeoutInSecondsHasBeenSet = true; m_timeoutInSeconds = value; }

    /**
     * <p>The maximum allowed duration of the activity task.</p>
     */
    inline ActivityScheduledEventDetails& WithTimeoutInSeconds(long long value) { SetTimeoutInSeconds(value); return *this;}


    /**
     * <p>The maximum allowed duration between two heartbeats for the activity
     * task.</p>
     */
    inline long long GetHeartbeatInSeconds() const{ return m_heartbeatInSeconds; }

    /**
     * <p>The maximum allowed duration between two heartbeats for the activity
     * task.</p>
     */
    inline bool HeartbeatInSecondsHasBeenSet() const { return m_heartbeatInSecondsHasBeenSet; }

    /**
     * <p>The maximum allowed duration between two heartbeats for the activity
     * task.</p>
     */
    inline void SetHeartbeatInSeconds(long long value) { m_heartbeatInSecondsHasBeenSet = true; m_heartbeatInSeconds = value; }

    /**
     * <p>The maximum allowed duration between two heartbeats for the activity
     * task.</p>
     */
    inline ActivityScheduledEventDetails& WithHeartbeatInSeconds(long long value) { SetHeartbeatInSeconds(value); return *this;}

  private:

    Aws::String m_resource;
    bool m_resourceHasBeenSet;

    Aws::String m_input;
    bool m_inputHasBeenSet;

    long long m_timeoutInSeconds;
    bool m_timeoutInSecondsHasBeenSet;

    long long m_heartbeatInSeconds;
    bool m_heartbeatInSecondsHasBeenSet;
  };

} // namespace Model
} // namespace SFN
} // namespace Aws

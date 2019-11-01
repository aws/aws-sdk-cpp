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
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/model/State.h>
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
namespace Pinpoint
{
namespace Model
{

  /**
   * <p>Changes the status of a journey.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/JourneyStateRequest">AWS
   * API Reference</a></p>
   */
  class AWS_PINPOINT_API JourneyStateRequest
  {
  public:
    JourneyStateRequest();
    JourneyStateRequest(Aws::Utils::Json::JsonView jsonValue);
    JourneyStateRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The status of the journey. Currently, the only supported value is
     * CANCELLED.</p> <p>If you cancel a journey, Amazon Pinpoint continues to perform
     * activities that are currently in progress, until those activities are complete.
     * Amazon Pinpoint also continues to collect and aggregate analytics data for those
     * activities, until they are complete, and any activities that were complete when
     * you cancelled the journey.</p> <p>After you cancel a journey, you can't add,
     * change, or remove any activities from the journey. In addition, Amazon Pinpoint
     * stops evaluating the journey and doesn't perform any activities that haven't
     * started.</p>
     */
    inline const State& GetState() const{ return m_state; }

    /**
     * <p>The status of the journey. Currently, the only supported value is
     * CANCELLED.</p> <p>If you cancel a journey, Amazon Pinpoint continues to perform
     * activities that are currently in progress, until those activities are complete.
     * Amazon Pinpoint also continues to collect and aggregate analytics data for those
     * activities, until they are complete, and any activities that were complete when
     * you cancelled the journey.</p> <p>After you cancel a journey, you can't add,
     * change, or remove any activities from the journey. In addition, Amazon Pinpoint
     * stops evaluating the journey and doesn't perform any activities that haven't
     * started.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The status of the journey. Currently, the only supported value is
     * CANCELLED.</p> <p>If you cancel a journey, Amazon Pinpoint continues to perform
     * activities that are currently in progress, until those activities are complete.
     * Amazon Pinpoint also continues to collect and aggregate analytics data for those
     * activities, until they are complete, and any activities that were complete when
     * you cancelled the journey.</p> <p>After you cancel a journey, you can't add,
     * change, or remove any activities from the journey. In addition, Amazon Pinpoint
     * stops evaluating the journey and doesn't perform any activities that haven't
     * started.</p>
     */
    inline void SetState(const State& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The status of the journey. Currently, the only supported value is
     * CANCELLED.</p> <p>If you cancel a journey, Amazon Pinpoint continues to perform
     * activities that are currently in progress, until those activities are complete.
     * Amazon Pinpoint also continues to collect and aggregate analytics data for those
     * activities, until they are complete, and any activities that were complete when
     * you cancelled the journey.</p> <p>After you cancel a journey, you can't add,
     * change, or remove any activities from the journey. In addition, Amazon Pinpoint
     * stops evaluating the journey and doesn't perform any activities that haven't
     * started.</p>
     */
    inline void SetState(State&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The status of the journey. Currently, the only supported value is
     * CANCELLED.</p> <p>If you cancel a journey, Amazon Pinpoint continues to perform
     * activities that are currently in progress, until those activities are complete.
     * Amazon Pinpoint also continues to collect and aggregate analytics data for those
     * activities, until they are complete, and any activities that were complete when
     * you cancelled the journey.</p> <p>After you cancel a journey, you can't add,
     * change, or remove any activities from the journey. In addition, Amazon Pinpoint
     * stops evaluating the journey and doesn't perform any activities that haven't
     * started.</p>
     */
    inline JourneyStateRequest& WithState(const State& value) { SetState(value); return *this;}

    /**
     * <p>The status of the journey. Currently, the only supported value is
     * CANCELLED.</p> <p>If you cancel a journey, Amazon Pinpoint continues to perform
     * activities that are currently in progress, until those activities are complete.
     * Amazon Pinpoint also continues to collect and aggregate analytics data for those
     * activities, until they are complete, and any activities that were complete when
     * you cancelled the journey.</p> <p>After you cancel a journey, you can't add,
     * change, or remove any activities from the journey. In addition, Amazon Pinpoint
     * stops evaluating the journey and doesn't perform any activities that haven't
     * started.</p>
     */
    inline JourneyStateRequest& WithState(State&& value) { SetState(std::move(value)); return *this;}

  private:

    State m_state;
    bool m_stateHasBeenSet;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws

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
#include <aws/codeguruprofiler/CodeGuruProfiler_EXPORTS.h>
#include <aws/codeguruprofiler/CodeGuruProfilerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CodeGuruProfiler
{
namespace Model
{

  /**
   * <p>The structure representing the configureAgentRequest.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codeguruprofiler-2019-07-18/ConfigureAgentRequest">AWS
   * API Reference</a></p>
   */
  class AWS_CODEGURUPROFILER_API ConfigureAgentRequest : public CodeGuruProfilerRequest
  {
  public:
    ConfigureAgentRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ConfigureAgent"; }

    Aws::String SerializePayload() const override;


    /**
     * <p/>
     */
    inline const Aws::String& GetFleetInstanceId() const{ return m_fleetInstanceId; }

    /**
     * <p/>
     */
    inline bool FleetInstanceIdHasBeenSet() const { return m_fleetInstanceIdHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetFleetInstanceId(const Aws::String& value) { m_fleetInstanceIdHasBeenSet = true; m_fleetInstanceId = value; }

    /**
     * <p/>
     */
    inline void SetFleetInstanceId(Aws::String&& value) { m_fleetInstanceIdHasBeenSet = true; m_fleetInstanceId = std::move(value); }

    /**
     * <p/>
     */
    inline void SetFleetInstanceId(const char* value) { m_fleetInstanceIdHasBeenSet = true; m_fleetInstanceId.assign(value); }

    /**
     * <p/>
     */
    inline ConfigureAgentRequest& WithFleetInstanceId(const Aws::String& value) { SetFleetInstanceId(value); return *this;}

    /**
     * <p/>
     */
    inline ConfigureAgentRequest& WithFleetInstanceId(Aws::String&& value) { SetFleetInstanceId(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline ConfigureAgentRequest& WithFleetInstanceId(const char* value) { SetFleetInstanceId(value); return *this;}


    /**
     * <p/>
     */
    inline const Aws::String& GetProfilingGroupName() const{ return m_profilingGroupName; }

    /**
     * <p/>
     */
    inline bool ProfilingGroupNameHasBeenSet() const { return m_profilingGroupNameHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetProfilingGroupName(const Aws::String& value) { m_profilingGroupNameHasBeenSet = true; m_profilingGroupName = value; }

    /**
     * <p/>
     */
    inline void SetProfilingGroupName(Aws::String&& value) { m_profilingGroupNameHasBeenSet = true; m_profilingGroupName = std::move(value); }

    /**
     * <p/>
     */
    inline void SetProfilingGroupName(const char* value) { m_profilingGroupNameHasBeenSet = true; m_profilingGroupName.assign(value); }

    /**
     * <p/>
     */
    inline ConfigureAgentRequest& WithProfilingGroupName(const Aws::String& value) { SetProfilingGroupName(value); return *this;}

    /**
     * <p/>
     */
    inline ConfigureAgentRequest& WithProfilingGroupName(Aws::String&& value) { SetProfilingGroupName(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline ConfigureAgentRequest& WithProfilingGroupName(const char* value) { SetProfilingGroupName(value); return *this;}

  private:

    Aws::String m_fleetInstanceId;
    bool m_fleetInstanceIdHasBeenSet;

    Aws::String m_profilingGroupName;
    bool m_profilingGroupNameHasBeenSet;
  };

} // namespace Model
} // namespace CodeGuruProfiler
} // namespace Aws

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
#include <aws/robomaker/RoboMaker_EXPORTS.h>
#include <aws/robomaker/RoboMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/robomaker/model/SimulationSoftwareSuite.h>
#include <aws/robomaker/model/RobotSoftwareSuite.h>
#include <aws/robomaker/model/RenderingEngine.h>
#include <aws/robomaker/model/SourceConfig.h>
#include <utility>

namespace Aws
{
namespace RoboMaker
{
namespace Model
{

  /**
   */
  class AWS_ROBOMAKER_API UpdateSimulationApplicationRequest : public RoboMakerRequest
  {
  public:
    UpdateSimulationApplicationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateSimulationApplication"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The application information for the simulation application.</p>
     */
    inline const Aws::String& GetApplication() const{ return m_application; }

    /**
     * <p>The application information for the simulation application.</p>
     */
    inline bool ApplicationHasBeenSet() const { return m_applicationHasBeenSet; }

    /**
     * <p>The application information for the simulation application.</p>
     */
    inline void SetApplication(const Aws::String& value) { m_applicationHasBeenSet = true; m_application = value; }

    /**
     * <p>The application information for the simulation application.</p>
     */
    inline void SetApplication(Aws::String&& value) { m_applicationHasBeenSet = true; m_application = std::move(value); }

    /**
     * <p>The application information for the simulation application.</p>
     */
    inline void SetApplication(const char* value) { m_applicationHasBeenSet = true; m_application.assign(value); }

    /**
     * <p>The application information for the simulation application.</p>
     */
    inline UpdateSimulationApplicationRequest& WithApplication(const Aws::String& value) { SetApplication(value); return *this;}

    /**
     * <p>The application information for the simulation application.</p>
     */
    inline UpdateSimulationApplicationRequest& WithApplication(Aws::String&& value) { SetApplication(std::move(value)); return *this;}

    /**
     * <p>The application information for the simulation application.</p>
     */
    inline UpdateSimulationApplicationRequest& WithApplication(const char* value) { SetApplication(value); return *this;}


    /**
     * <p>The sources of the simulation application.</p>
     */
    inline const Aws::Vector<SourceConfig>& GetSources() const{ return m_sources; }

    /**
     * <p>The sources of the simulation application.</p>
     */
    inline bool SourcesHasBeenSet() const { return m_sourcesHasBeenSet; }

    /**
     * <p>The sources of the simulation application.</p>
     */
    inline void SetSources(const Aws::Vector<SourceConfig>& value) { m_sourcesHasBeenSet = true; m_sources = value; }

    /**
     * <p>The sources of the simulation application.</p>
     */
    inline void SetSources(Aws::Vector<SourceConfig>&& value) { m_sourcesHasBeenSet = true; m_sources = std::move(value); }

    /**
     * <p>The sources of the simulation application.</p>
     */
    inline UpdateSimulationApplicationRequest& WithSources(const Aws::Vector<SourceConfig>& value) { SetSources(value); return *this;}

    /**
     * <p>The sources of the simulation application.</p>
     */
    inline UpdateSimulationApplicationRequest& WithSources(Aws::Vector<SourceConfig>&& value) { SetSources(std::move(value)); return *this;}

    /**
     * <p>The sources of the simulation application.</p>
     */
    inline UpdateSimulationApplicationRequest& AddSources(const SourceConfig& value) { m_sourcesHasBeenSet = true; m_sources.push_back(value); return *this; }

    /**
     * <p>The sources of the simulation application.</p>
     */
    inline UpdateSimulationApplicationRequest& AddSources(SourceConfig&& value) { m_sourcesHasBeenSet = true; m_sources.push_back(std::move(value)); return *this; }


    /**
     * <p>The simulation software suite used by the simulation application.</p>
     */
    inline const SimulationSoftwareSuite& GetSimulationSoftwareSuite() const{ return m_simulationSoftwareSuite; }

    /**
     * <p>The simulation software suite used by the simulation application.</p>
     */
    inline bool SimulationSoftwareSuiteHasBeenSet() const { return m_simulationSoftwareSuiteHasBeenSet; }

    /**
     * <p>The simulation software suite used by the simulation application.</p>
     */
    inline void SetSimulationSoftwareSuite(const SimulationSoftwareSuite& value) { m_simulationSoftwareSuiteHasBeenSet = true; m_simulationSoftwareSuite = value; }

    /**
     * <p>The simulation software suite used by the simulation application.</p>
     */
    inline void SetSimulationSoftwareSuite(SimulationSoftwareSuite&& value) { m_simulationSoftwareSuiteHasBeenSet = true; m_simulationSoftwareSuite = std::move(value); }

    /**
     * <p>The simulation software suite used by the simulation application.</p>
     */
    inline UpdateSimulationApplicationRequest& WithSimulationSoftwareSuite(const SimulationSoftwareSuite& value) { SetSimulationSoftwareSuite(value); return *this;}

    /**
     * <p>The simulation software suite used by the simulation application.</p>
     */
    inline UpdateSimulationApplicationRequest& WithSimulationSoftwareSuite(SimulationSoftwareSuite&& value) { SetSimulationSoftwareSuite(std::move(value)); return *this;}


    /**
     * <p>Information about the robot software suite.</p>
     */
    inline const RobotSoftwareSuite& GetRobotSoftwareSuite() const{ return m_robotSoftwareSuite; }

    /**
     * <p>Information about the robot software suite.</p>
     */
    inline bool RobotSoftwareSuiteHasBeenSet() const { return m_robotSoftwareSuiteHasBeenSet; }

    /**
     * <p>Information about the robot software suite.</p>
     */
    inline void SetRobotSoftwareSuite(const RobotSoftwareSuite& value) { m_robotSoftwareSuiteHasBeenSet = true; m_robotSoftwareSuite = value; }

    /**
     * <p>Information about the robot software suite.</p>
     */
    inline void SetRobotSoftwareSuite(RobotSoftwareSuite&& value) { m_robotSoftwareSuiteHasBeenSet = true; m_robotSoftwareSuite = std::move(value); }

    /**
     * <p>Information about the robot software suite.</p>
     */
    inline UpdateSimulationApplicationRequest& WithRobotSoftwareSuite(const RobotSoftwareSuite& value) { SetRobotSoftwareSuite(value); return *this;}

    /**
     * <p>Information about the robot software suite.</p>
     */
    inline UpdateSimulationApplicationRequest& WithRobotSoftwareSuite(RobotSoftwareSuite&& value) { SetRobotSoftwareSuite(std::move(value)); return *this;}


    /**
     * <p>The rendering engine for the simulation application.</p>
     */
    inline const RenderingEngine& GetRenderingEngine() const{ return m_renderingEngine; }

    /**
     * <p>The rendering engine for the simulation application.</p>
     */
    inline bool RenderingEngineHasBeenSet() const { return m_renderingEngineHasBeenSet; }

    /**
     * <p>The rendering engine for the simulation application.</p>
     */
    inline void SetRenderingEngine(const RenderingEngine& value) { m_renderingEngineHasBeenSet = true; m_renderingEngine = value; }

    /**
     * <p>The rendering engine for the simulation application.</p>
     */
    inline void SetRenderingEngine(RenderingEngine&& value) { m_renderingEngineHasBeenSet = true; m_renderingEngine = std::move(value); }

    /**
     * <p>The rendering engine for the simulation application.</p>
     */
    inline UpdateSimulationApplicationRequest& WithRenderingEngine(const RenderingEngine& value) { SetRenderingEngine(value); return *this;}

    /**
     * <p>The rendering engine for the simulation application.</p>
     */
    inline UpdateSimulationApplicationRequest& WithRenderingEngine(RenderingEngine&& value) { SetRenderingEngine(std::move(value)); return *this;}


    /**
     * <p>The revision id for the robot application.</p>
     */
    inline const Aws::String& GetCurrentRevisionId() const{ return m_currentRevisionId; }

    /**
     * <p>The revision id for the robot application.</p>
     */
    inline bool CurrentRevisionIdHasBeenSet() const { return m_currentRevisionIdHasBeenSet; }

    /**
     * <p>The revision id for the robot application.</p>
     */
    inline void SetCurrentRevisionId(const Aws::String& value) { m_currentRevisionIdHasBeenSet = true; m_currentRevisionId = value; }

    /**
     * <p>The revision id for the robot application.</p>
     */
    inline void SetCurrentRevisionId(Aws::String&& value) { m_currentRevisionIdHasBeenSet = true; m_currentRevisionId = std::move(value); }

    /**
     * <p>The revision id for the robot application.</p>
     */
    inline void SetCurrentRevisionId(const char* value) { m_currentRevisionIdHasBeenSet = true; m_currentRevisionId.assign(value); }

    /**
     * <p>The revision id for the robot application.</p>
     */
    inline UpdateSimulationApplicationRequest& WithCurrentRevisionId(const Aws::String& value) { SetCurrentRevisionId(value); return *this;}

    /**
     * <p>The revision id for the robot application.</p>
     */
    inline UpdateSimulationApplicationRequest& WithCurrentRevisionId(Aws::String&& value) { SetCurrentRevisionId(std::move(value)); return *this;}

    /**
     * <p>The revision id for the robot application.</p>
     */
    inline UpdateSimulationApplicationRequest& WithCurrentRevisionId(const char* value) { SetCurrentRevisionId(value); return *this;}

  private:

    Aws::String m_application;
    bool m_applicationHasBeenSet;

    Aws::Vector<SourceConfig> m_sources;
    bool m_sourcesHasBeenSet;

    SimulationSoftwareSuite m_simulationSoftwareSuite;
    bool m_simulationSoftwareSuiteHasBeenSet;

    RobotSoftwareSuite m_robotSoftwareSuite;
    bool m_robotSoftwareSuiteHasBeenSet;

    RenderingEngine m_renderingEngine;
    bool m_renderingEngineHasBeenSet;

    Aws::String m_currentRevisionId;
    bool m_currentRevisionIdHasBeenSet;
  };

} // namespace Model
} // namespace RoboMaker
} // namespace Aws

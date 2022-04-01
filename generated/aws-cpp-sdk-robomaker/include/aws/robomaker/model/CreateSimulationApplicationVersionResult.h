﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/robomaker/RoboMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/robomaker/model/SimulationSoftwareSuite.h>
#include <aws/robomaker/model/RobotSoftwareSuite.h>
#include <aws/robomaker/model/RenderingEngine.h>
#include <aws/core/utils/DateTime.h>
#include <aws/robomaker/model/Environment.h>
#include <aws/robomaker/model/Source.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace RoboMaker
{
namespace Model
{
  class AWS_ROBOMAKER_API CreateSimulationApplicationVersionResult
  {
  public:
    CreateSimulationApplicationVersionResult();
    CreateSimulationApplicationVersionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateSimulationApplicationVersionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the simulation application.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the simulation application.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the simulation application.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the simulation application.</p>
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the simulation application.</p>
     */
    inline CreateSimulationApplicationVersionResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the simulation application.</p>
     */
    inline CreateSimulationApplicationVersionResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the simulation application.</p>
     */
    inline CreateSimulationApplicationVersionResult& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The name of the simulation application.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the simulation application.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The name of the simulation application.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The name of the simulation application.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The name of the simulation application.</p>
     */
    inline CreateSimulationApplicationVersionResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the simulation application.</p>
     */
    inline CreateSimulationApplicationVersionResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the simulation application.</p>
     */
    inline CreateSimulationApplicationVersionResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The version of the simulation application.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }

    /**
     * <p>The version of the simulation application.</p>
     */
    inline void SetVersion(const Aws::String& value) { m_version = value; }

    /**
     * <p>The version of the simulation application.</p>
     */
    inline void SetVersion(Aws::String&& value) { m_version = std::move(value); }

    /**
     * <p>The version of the simulation application.</p>
     */
    inline void SetVersion(const char* value) { m_version.assign(value); }

    /**
     * <p>The version of the simulation application.</p>
     */
    inline CreateSimulationApplicationVersionResult& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}

    /**
     * <p>The version of the simulation application.</p>
     */
    inline CreateSimulationApplicationVersionResult& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the simulation application.</p>
     */
    inline CreateSimulationApplicationVersionResult& WithVersion(const char* value) { SetVersion(value); return *this;}


    /**
     * <p>The sources of the simulation application.</p>
     */
    inline const Aws::Vector<Source>& GetSources() const{ return m_sources; }

    /**
     * <p>The sources of the simulation application.</p>
     */
    inline void SetSources(const Aws::Vector<Source>& value) { m_sources = value; }

    /**
     * <p>The sources of the simulation application.</p>
     */
    inline void SetSources(Aws::Vector<Source>&& value) { m_sources = std::move(value); }

    /**
     * <p>The sources of the simulation application.</p>
     */
    inline CreateSimulationApplicationVersionResult& WithSources(const Aws::Vector<Source>& value) { SetSources(value); return *this;}

    /**
     * <p>The sources of the simulation application.</p>
     */
    inline CreateSimulationApplicationVersionResult& WithSources(Aws::Vector<Source>&& value) { SetSources(std::move(value)); return *this;}

    /**
     * <p>The sources of the simulation application.</p>
     */
    inline CreateSimulationApplicationVersionResult& AddSources(const Source& value) { m_sources.push_back(value); return *this; }

    /**
     * <p>The sources of the simulation application.</p>
     */
    inline CreateSimulationApplicationVersionResult& AddSources(Source&& value) { m_sources.push_back(std::move(value)); return *this; }


    /**
     * <p>The simulation software suite used by the simulation application.</p>
     */
    inline const SimulationSoftwareSuite& GetSimulationSoftwareSuite() const{ return m_simulationSoftwareSuite; }

    /**
     * <p>The simulation software suite used by the simulation application.</p>
     */
    inline void SetSimulationSoftwareSuite(const SimulationSoftwareSuite& value) { m_simulationSoftwareSuite = value; }

    /**
     * <p>The simulation software suite used by the simulation application.</p>
     */
    inline void SetSimulationSoftwareSuite(SimulationSoftwareSuite&& value) { m_simulationSoftwareSuite = std::move(value); }

    /**
     * <p>The simulation software suite used by the simulation application.</p>
     */
    inline CreateSimulationApplicationVersionResult& WithSimulationSoftwareSuite(const SimulationSoftwareSuite& value) { SetSimulationSoftwareSuite(value); return *this;}

    /**
     * <p>The simulation software suite used by the simulation application.</p>
     */
    inline CreateSimulationApplicationVersionResult& WithSimulationSoftwareSuite(SimulationSoftwareSuite&& value) { SetSimulationSoftwareSuite(std::move(value)); return *this;}


    /**
     * <p>Information about the robot software suite (ROS distribution).</p>
     */
    inline const RobotSoftwareSuite& GetRobotSoftwareSuite() const{ return m_robotSoftwareSuite; }

    /**
     * <p>Information about the robot software suite (ROS distribution).</p>
     */
    inline void SetRobotSoftwareSuite(const RobotSoftwareSuite& value) { m_robotSoftwareSuite = value; }

    /**
     * <p>Information about the robot software suite (ROS distribution).</p>
     */
    inline void SetRobotSoftwareSuite(RobotSoftwareSuite&& value) { m_robotSoftwareSuite = std::move(value); }

    /**
     * <p>Information about the robot software suite (ROS distribution).</p>
     */
    inline CreateSimulationApplicationVersionResult& WithRobotSoftwareSuite(const RobotSoftwareSuite& value) { SetRobotSoftwareSuite(value); return *this;}

    /**
     * <p>Information about the robot software suite (ROS distribution).</p>
     */
    inline CreateSimulationApplicationVersionResult& WithRobotSoftwareSuite(RobotSoftwareSuite&& value) { SetRobotSoftwareSuite(std::move(value)); return *this;}


    /**
     * <p>The rendering engine for the simulation application.</p>
     */
    inline const RenderingEngine& GetRenderingEngine() const{ return m_renderingEngine; }

    /**
     * <p>The rendering engine for the simulation application.</p>
     */
    inline void SetRenderingEngine(const RenderingEngine& value) { m_renderingEngine = value; }

    /**
     * <p>The rendering engine for the simulation application.</p>
     */
    inline void SetRenderingEngine(RenderingEngine&& value) { m_renderingEngine = std::move(value); }

    /**
     * <p>The rendering engine for the simulation application.</p>
     */
    inline CreateSimulationApplicationVersionResult& WithRenderingEngine(const RenderingEngine& value) { SetRenderingEngine(value); return *this;}

    /**
     * <p>The rendering engine for the simulation application.</p>
     */
    inline CreateSimulationApplicationVersionResult& WithRenderingEngine(RenderingEngine&& value) { SetRenderingEngine(std::move(value)); return *this;}


    /**
     * <p>The time, in milliseconds since the epoch, when the simulation application
     * was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const{ return m_lastUpdatedAt; }

    /**
     * <p>The time, in milliseconds since the epoch, when the simulation application
     * was last updated.</p>
     */
    inline void SetLastUpdatedAt(const Aws::Utils::DateTime& value) { m_lastUpdatedAt = value; }

    /**
     * <p>The time, in milliseconds since the epoch, when the simulation application
     * was last updated.</p>
     */
    inline void SetLastUpdatedAt(Aws::Utils::DateTime&& value) { m_lastUpdatedAt = std::move(value); }

    /**
     * <p>The time, in milliseconds since the epoch, when the simulation application
     * was last updated.</p>
     */
    inline CreateSimulationApplicationVersionResult& WithLastUpdatedAt(const Aws::Utils::DateTime& value) { SetLastUpdatedAt(value); return *this;}

    /**
     * <p>The time, in milliseconds since the epoch, when the simulation application
     * was last updated.</p>
     */
    inline CreateSimulationApplicationVersionResult& WithLastUpdatedAt(Aws::Utils::DateTime&& value) { SetLastUpdatedAt(std::move(value)); return *this;}


    /**
     * <p>The revision ID of the simulation application.</p>
     */
    inline const Aws::String& GetRevisionId() const{ return m_revisionId; }

    /**
     * <p>The revision ID of the simulation application.</p>
     */
    inline void SetRevisionId(const Aws::String& value) { m_revisionId = value; }

    /**
     * <p>The revision ID of the simulation application.</p>
     */
    inline void SetRevisionId(Aws::String&& value) { m_revisionId = std::move(value); }

    /**
     * <p>The revision ID of the simulation application.</p>
     */
    inline void SetRevisionId(const char* value) { m_revisionId.assign(value); }

    /**
     * <p>The revision ID of the simulation application.</p>
     */
    inline CreateSimulationApplicationVersionResult& WithRevisionId(const Aws::String& value) { SetRevisionId(value); return *this;}

    /**
     * <p>The revision ID of the simulation application.</p>
     */
    inline CreateSimulationApplicationVersionResult& WithRevisionId(Aws::String&& value) { SetRevisionId(std::move(value)); return *this;}

    /**
     * <p>The revision ID of the simulation application.</p>
     */
    inline CreateSimulationApplicationVersionResult& WithRevisionId(const char* value) { SetRevisionId(value); return *this;}


    /**
     * <p>The object that contains the Docker image URI used to create the simulation
     * application.</p>
     */
    inline const Environment& GetEnvironment() const{ return m_environment; }

    /**
     * <p>The object that contains the Docker image URI used to create the simulation
     * application.</p>
     */
    inline void SetEnvironment(const Environment& value) { m_environment = value; }

    /**
     * <p>The object that contains the Docker image URI used to create the simulation
     * application.</p>
     */
    inline void SetEnvironment(Environment&& value) { m_environment = std::move(value); }

    /**
     * <p>The object that contains the Docker image URI used to create the simulation
     * application.</p>
     */
    inline CreateSimulationApplicationVersionResult& WithEnvironment(const Environment& value) { SetEnvironment(value); return *this;}

    /**
     * <p>The object that contains the Docker image URI used to create the simulation
     * application.</p>
     */
    inline CreateSimulationApplicationVersionResult& WithEnvironment(Environment&& value) { SetEnvironment(std::move(value)); return *this;}

  private:

    Aws::String m_arn;

    Aws::String m_name;

    Aws::String m_version;

    Aws::Vector<Source> m_sources;

    SimulationSoftwareSuite m_simulationSoftwareSuite;

    RobotSoftwareSuite m_robotSoftwareSuite;

    RenderingEngine m_renderingEngine;

    Aws::Utils::DateTime m_lastUpdatedAt;

    Aws::String m_revisionId;

    Environment m_environment;
  };

} // namespace Model
} // namespace RoboMaker
} // namespace Aws

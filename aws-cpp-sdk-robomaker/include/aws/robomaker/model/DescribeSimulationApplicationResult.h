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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/robomaker/model/SimulationSoftwareSuite.h>
#include <aws/robomaker/model/RobotSoftwareSuite.h>
#include <aws/robomaker/model/RenderingEngine.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
  class AWS_ROBOMAKER_API DescribeSimulationApplicationResult
  {
  public:
    DescribeSimulationApplicationResult();
    DescribeSimulationApplicationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeSimulationApplicationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the robot simulation application.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the robot simulation application.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the robot simulation application.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the robot simulation application.</p>
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the robot simulation application.</p>
     */
    inline DescribeSimulationApplicationResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the robot simulation application.</p>
     */
    inline DescribeSimulationApplicationResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the robot simulation application.</p>
     */
    inline DescribeSimulationApplicationResult& WithArn(const char* value) { SetArn(value); return *this;}


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
    inline DescribeSimulationApplicationResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the simulation application.</p>
     */
    inline DescribeSimulationApplicationResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the simulation application.</p>
     */
    inline DescribeSimulationApplicationResult& WithName(const char* value) { SetName(value); return *this;}


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
    inline DescribeSimulationApplicationResult& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}

    /**
     * <p>The version of the simulation application.</p>
     */
    inline DescribeSimulationApplicationResult& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the simulation application.</p>
     */
    inline DescribeSimulationApplicationResult& WithVersion(const char* value) { SetVersion(value); return *this;}


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
    inline DescribeSimulationApplicationResult& WithSources(const Aws::Vector<Source>& value) { SetSources(value); return *this;}

    /**
     * <p>The sources of the simulation application.</p>
     */
    inline DescribeSimulationApplicationResult& WithSources(Aws::Vector<Source>&& value) { SetSources(std::move(value)); return *this;}

    /**
     * <p>The sources of the simulation application.</p>
     */
    inline DescribeSimulationApplicationResult& AddSources(const Source& value) { m_sources.push_back(value); return *this; }

    /**
     * <p>The sources of the simulation application.</p>
     */
    inline DescribeSimulationApplicationResult& AddSources(Source&& value) { m_sources.push_back(std::move(value)); return *this; }


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
    inline DescribeSimulationApplicationResult& WithSimulationSoftwareSuite(const SimulationSoftwareSuite& value) { SetSimulationSoftwareSuite(value); return *this;}

    /**
     * <p>The simulation software suite used by the simulation application.</p>
     */
    inline DescribeSimulationApplicationResult& WithSimulationSoftwareSuite(SimulationSoftwareSuite&& value) { SetSimulationSoftwareSuite(std::move(value)); return *this;}


    /**
     * <p>Information about the robot software suite.</p>
     */
    inline const RobotSoftwareSuite& GetRobotSoftwareSuite() const{ return m_robotSoftwareSuite; }

    /**
     * <p>Information about the robot software suite.</p>
     */
    inline void SetRobotSoftwareSuite(const RobotSoftwareSuite& value) { m_robotSoftwareSuite = value; }

    /**
     * <p>Information about the robot software suite.</p>
     */
    inline void SetRobotSoftwareSuite(RobotSoftwareSuite&& value) { m_robotSoftwareSuite = std::move(value); }

    /**
     * <p>Information about the robot software suite.</p>
     */
    inline DescribeSimulationApplicationResult& WithRobotSoftwareSuite(const RobotSoftwareSuite& value) { SetRobotSoftwareSuite(value); return *this;}

    /**
     * <p>Information about the robot software suite.</p>
     */
    inline DescribeSimulationApplicationResult& WithRobotSoftwareSuite(RobotSoftwareSuite&& value) { SetRobotSoftwareSuite(std::move(value)); return *this;}


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
    inline DescribeSimulationApplicationResult& WithRenderingEngine(const RenderingEngine& value) { SetRenderingEngine(value); return *this;}

    /**
     * <p>The rendering engine for the simulation application.</p>
     */
    inline DescribeSimulationApplicationResult& WithRenderingEngine(RenderingEngine&& value) { SetRenderingEngine(std::move(value)); return *this;}


    /**
     * <p>The revision id of the simulation application.</p>
     */
    inline const Aws::String& GetRevisionId() const{ return m_revisionId; }

    /**
     * <p>The revision id of the simulation application.</p>
     */
    inline void SetRevisionId(const Aws::String& value) { m_revisionId = value; }

    /**
     * <p>The revision id of the simulation application.</p>
     */
    inline void SetRevisionId(Aws::String&& value) { m_revisionId = std::move(value); }

    /**
     * <p>The revision id of the simulation application.</p>
     */
    inline void SetRevisionId(const char* value) { m_revisionId.assign(value); }

    /**
     * <p>The revision id of the simulation application.</p>
     */
    inline DescribeSimulationApplicationResult& WithRevisionId(const Aws::String& value) { SetRevisionId(value); return *this;}

    /**
     * <p>The revision id of the simulation application.</p>
     */
    inline DescribeSimulationApplicationResult& WithRevisionId(Aws::String&& value) { SetRevisionId(std::move(value)); return *this;}

    /**
     * <p>The revision id of the simulation application.</p>
     */
    inline DescribeSimulationApplicationResult& WithRevisionId(const char* value) { SetRevisionId(value); return *this;}


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
    inline DescribeSimulationApplicationResult& WithLastUpdatedAt(const Aws::Utils::DateTime& value) { SetLastUpdatedAt(value); return *this;}

    /**
     * <p>The time, in milliseconds since the epoch, when the simulation application
     * was last updated.</p>
     */
    inline DescribeSimulationApplicationResult& WithLastUpdatedAt(Aws::Utils::DateTime&& value) { SetLastUpdatedAt(std::move(value)); return *this;}


    /**
     * <p>The list of all tags added to the specified simulation application.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The list of all tags added to the specified simulation application.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }

    /**
     * <p>The list of all tags added to the specified simulation application.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }

    /**
     * <p>The list of all tags added to the specified simulation application.</p>
     */
    inline DescribeSimulationApplicationResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The list of all tags added to the specified simulation application.</p>
     */
    inline DescribeSimulationApplicationResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The list of all tags added to the specified simulation application.</p>
     */
    inline DescribeSimulationApplicationResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }

    /**
     * <p>The list of all tags added to the specified simulation application.</p>
     */
    inline DescribeSimulationApplicationResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The list of all tags added to the specified simulation application.</p>
     */
    inline DescribeSimulationApplicationResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The list of all tags added to the specified simulation application.</p>
     */
    inline DescribeSimulationApplicationResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The list of all tags added to the specified simulation application.</p>
     */
    inline DescribeSimulationApplicationResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The list of all tags added to the specified simulation application.</p>
     */
    inline DescribeSimulationApplicationResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The list of all tags added to the specified simulation application.</p>
     */
    inline DescribeSimulationApplicationResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_arn;

    Aws::String m_name;

    Aws::String m_version;

    Aws::Vector<Source> m_sources;

    SimulationSoftwareSuite m_simulationSoftwareSuite;

    RobotSoftwareSuite m_robotSoftwareSuite;

    RenderingEngine m_renderingEngine;

    Aws::String m_revisionId;

    Aws::Utils::DateTime m_lastUpdatedAt;

    Aws::Map<Aws::String, Aws::String> m_tags;
  };

} // namespace Model
} // namespace RoboMaker
} // namespace Aws

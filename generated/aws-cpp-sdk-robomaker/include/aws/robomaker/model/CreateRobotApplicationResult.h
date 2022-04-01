﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/robomaker/RoboMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/robomaker/model/RobotSoftwareSuite.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
  class AWS_ROBOMAKER_API CreateRobotApplicationResult
  {
  public:
    CreateRobotApplicationResult();
    CreateRobotApplicationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateRobotApplicationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the robot application.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the robot application.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the robot application.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the robot application.</p>
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the robot application.</p>
     */
    inline CreateRobotApplicationResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the robot application.</p>
     */
    inline CreateRobotApplicationResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the robot application.</p>
     */
    inline CreateRobotApplicationResult& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The name of the robot application.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the robot application.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The name of the robot application.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The name of the robot application.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The name of the robot application.</p>
     */
    inline CreateRobotApplicationResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the robot application.</p>
     */
    inline CreateRobotApplicationResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the robot application.</p>
     */
    inline CreateRobotApplicationResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The version of the robot application.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }

    /**
     * <p>The version of the robot application.</p>
     */
    inline void SetVersion(const Aws::String& value) { m_version = value; }

    /**
     * <p>The version of the robot application.</p>
     */
    inline void SetVersion(Aws::String&& value) { m_version = std::move(value); }

    /**
     * <p>The version of the robot application.</p>
     */
    inline void SetVersion(const char* value) { m_version.assign(value); }

    /**
     * <p>The version of the robot application.</p>
     */
    inline CreateRobotApplicationResult& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}

    /**
     * <p>The version of the robot application.</p>
     */
    inline CreateRobotApplicationResult& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the robot application.</p>
     */
    inline CreateRobotApplicationResult& WithVersion(const char* value) { SetVersion(value); return *this;}


    /**
     * <p>The sources of the robot application.</p>
     */
    inline const Aws::Vector<Source>& GetSources() const{ return m_sources; }

    /**
     * <p>The sources of the robot application.</p>
     */
    inline void SetSources(const Aws::Vector<Source>& value) { m_sources = value; }

    /**
     * <p>The sources of the robot application.</p>
     */
    inline void SetSources(Aws::Vector<Source>&& value) { m_sources = std::move(value); }

    /**
     * <p>The sources of the robot application.</p>
     */
    inline CreateRobotApplicationResult& WithSources(const Aws::Vector<Source>& value) { SetSources(value); return *this;}

    /**
     * <p>The sources of the robot application.</p>
     */
    inline CreateRobotApplicationResult& WithSources(Aws::Vector<Source>&& value) { SetSources(std::move(value)); return *this;}

    /**
     * <p>The sources of the robot application.</p>
     */
    inline CreateRobotApplicationResult& AddSources(const Source& value) { m_sources.push_back(value); return *this; }

    /**
     * <p>The sources of the robot application.</p>
     */
    inline CreateRobotApplicationResult& AddSources(Source&& value) { m_sources.push_back(std::move(value)); return *this; }


    /**
     * <p>The robot software suite (ROS distribution) used by the robot
     * application.</p>
     */
    inline const RobotSoftwareSuite& GetRobotSoftwareSuite() const{ return m_robotSoftwareSuite; }

    /**
     * <p>The robot software suite (ROS distribution) used by the robot
     * application.</p>
     */
    inline void SetRobotSoftwareSuite(const RobotSoftwareSuite& value) { m_robotSoftwareSuite = value; }

    /**
     * <p>The robot software suite (ROS distribution) used by the robot
     * application.</p>
     */
    inline void SetRobotSoftwareSuite(RobotSoftwareSuite&& value) { m_robotSoftwareSuite = std::move(value); }

    /**
     * <p>The robot software suite (ROS distribution) used by the robot
     * application.</p>
     */
    inline CreateRobotApplicationResult& WithRobotSoftwareSuite(const RobotSoftwareSuite& value) { SetRobotSoftwareSuite(value); return *this;}

    /**
     * <p>The robot software suite (ROS distribution) used by the robot
     * application.</p>
     */
    inline CreateRobotApplicationResult& WithRobotSoftwareSuite(RobotSoftwareSuite&& value) { SetRobotSoftwareSuite(std::move(value)); return *this;}


    /**
     * <p>The time, in milliseconds since the epoch, when the robot application was
     * last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const{ return m_lastUpdatedAt; }

    /**
     * <p>The time, in milliseconds since the epoch, when the robot application was
     * last updated.</p>
     */
    inline void SetLastUpdatedAt(const Aws::Utils::DateTime& value) { m_lastUpdatedAt = value; }

    /**
     * <p>The time, in milliseconds since the epoch, when the robot application was
     * last updated.</p>
     */
    inline void SetLastUpdatedAt(Aws::Utils::DateTime&& value) { m_lastUpdatedAt = std::move(value); }

    /**
     * <p>The time, in milliseconds since the epoch, when the robot application was
     * last updated.</p>
     */
    inline CreateRobotApplicationResult& WithLastUpdatedAt(const Aws::Utils::DateTime& value) { SetLastUpdatedAt(value); return *this;}

    /**
     * <p>The time, in milliseconds since the epoch, when the robot application was
     * last updated.</p>
     */
    inline CreateRobotApplicationResult& WithLastUpdatedAt(Aws::Utils::DateTime&& value) { SetLastUpdatedAt(std::move(value)); return *this;}


    /**
     * <p>The revision id of the robot application.</p>
     */
    inline const Aws::String& GetRevisionId() const{ return m_revisionId; }

    /**
     * <p>The revision id of the robot application.</p>
     */
    inline void SetRevisionId(const Aws::String& value) { m_revisionId = value; }

    /**
     * <p>The revision id of the robot application.</p>
     */
    inline void SetRevisionId(Aws::String&& value) { m_revisionId = std::move(value); }

    /**
     * <p>The revision id of the robot application.</p>
     */
    inline void SetRevisionId(const char* value) { m_revisionId.assign(value); }

    /**
     * <p>The revision id of the robot application.</p>
     */
    inline CreateRobotApplicationResult& WithRevisionId(const Aws::String& value) { SetRevisionId(value); return *this;}

    /**
     * <p>The revision id of the robot application.</p>
     */
    inline CreateRobotApplicationResult& WithRevisionId(Aws::String&& value) { SetRevisionId(std::move(value)); return *this;}

    /**
     * <p>The revision id of the robot application.</p>
     */
    inline CreateRobotApplicationResult& WithRevisionId(const char* value) { SetRevisionId(value); return *this;}


    /**
     * <p>The list of all tags added to the robot application.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The list of all tags added to the robot application.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }

    /**
     * <p>The list of all tags added to the robot application.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }

    /**
     * <p>The list of all tags added to the robot application.</p>
     */
    inline CreateRobotApplicationResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The list of all tags added to the robot application.</p>
     */
    inline CreateRobotApplicationResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The list of all tags added to the robot application.</p>
     */
    inline CreateRobotApplicationResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }

    /**
     * <p>The list of all tags added to the robot application.</p>
     */
    inline CreateRobotApplicationResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The list of all tags added to the robot application.</p>
     */
    inline CreateRobotApplicationResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The list of all tags added to the robot application.</p>
     */
    inline CreateRobotApplicationResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The list of all tags added to the robot application.</p>
     */
    inline CreateRobotApplicationResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The list of all tags added to the robot application.</p>
     */
    inline CreateRobotApplicationResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The list of all tags added to the robot application.</p>
     */
    inline CreateRobotApplicationResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }


    /**
     * <p>An object that contains the Docker image URI used to a create your robot
     * application.</p>
     */
    inline const Environment& GetEnvironment() const{ return m_environment; }

    /**
     * <p>An object that contains the Docker image URI used to a create your robot
     * application.</p>
     */
    inline void SetEnvironment(const Environment& value) { m_environment = value; }

    /**
     * <p>An object that contains the Docker image URI used to a create your robot
     * application.</p>
     */
    inline void SetEnvironment(Environment&& value) { m_environment = std::move(value); }

    /**
     * <p>An object that contains the Docker image URI used to a create your robot
     * application.</p>
     */
    inline CreateRobotApplicationResult& WithEnvironment(const Environment& value) { SetEnvironment(value); return *this;}

    /**
     * <p>An object that contains the Docker image URI used to a create your robot
     * application.</p>
     */
    inline CreateRobotApplicationResult& WithEnvironment(Environment&& value) { SetEnvironment(std::move(value)); return *this;}

  private:

    Aws::String m_arn;

    Aws::String m_name;

    Aws::String m_version;

    Aws::Vector<Source> m_sources;

    RobotSoftwareSuite m_robotSoftwareSuite;

    Aws::Utils::DateTime m_lastUpdatedAt;

    Aws::String m_revisionId;

    Aws::Map<Aws::String, Aws::String> m_tags;

    Environment m_environment;
  };

} // namespace Model
} // namespace RoboMaker
} // namespace Aws

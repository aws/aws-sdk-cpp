﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/robomaker/RoboMaker_EXPORTS.h>
#include <aws/robomaker/RoboMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/robomaker/model/RobotSoftwareSuite.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/robomaker/model/Environment.h>
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
  class AWS_ROBOMAKER_API CreateRobotApplicationRequest : public RoboMakerRequest
  {
  public:
    CreateRobotApplicationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateRobotApplication"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The name of the robot application.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the robot application.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the robot application.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the robot application.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the robot application.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the robot application.</p>
     */
    inline CreateRobotApplicationRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the robot application.</p>
     */
    inline CreateRobotApplicationRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the robot application.</p>
     */
    inline CreateRobotApplicationRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The sources of the robot application.</p>
     */
    inline const Aws::Vector<SourceConfig>& GetSources() const{ return m_sources; }

    /**
     * <p>The sources of the robot application.</p>
     */
    inline bool SourcesHasBeenSet() const { return m_sourcesHasBeenSet; }

    /**
     * <p>The sources of the robot application.</p>
     */
    inline void SetSources(const Aws::Vector<SourceConfig>& value) { m_sourcesHasBeenSet = true; m_sources = value; }

    /**
     * <p>The sources of the robot application.</p>
     */
    inline void SetSources(Aws::Vector<SourceConfig>&& value) { m_sourcesHasBeenSet = true; m_sources = std::move(value); }

    /**
     * <p>The sources of the robot application.</p>
     */
    inline CreateRobotApplicationRequest& WithSources(const Aws::Vector<SourceConfig>& value) { SetSources(value); return *this;}

    /**
     * <p>The sources of the robot application.</p>
     */
    inline CreateRobotApplicationRequest& WithSources(Aws::Vector<SourceConfig>&& value) { SetSources(std::move(value)); return *this;}

    /**
     * <p>The sources of the robot application.</p>
     */
    inline CreateRobotApplicationRequest& AddSources(const SourceConfig& value) { m_sourcesHasBeenSet = true; m_sources.push_back(value); return *this; }

    /**
     * <p>The sources of the robot application.</p>
     */
    inline CreateRobotApplicationRequest& AddSources(SourceConfig&& value) { m_sourcesHasBeenSet = true; m_sources.push_back(std::move(value)); return *this; }


    /**
     * <p>The robot software suite (ROS distribuition) used by the robot
     * application.</p>
     */
    inline const RobotSoftwareSuite& GetRobotSoftwareSuite() const{ return m_robotSoftwareSuite; }

    /**
     * <p>The robot software suite (ROS distribuition) used by the robot
     * application.</p>
     */
    inline bool RobotSoftwareSuiteHasBeenSet() const { return m_robotSoftwareSuiteHasBeenSet; }

    /**
     * <p>The robot software suite (ROS distribuition) used by the robot
     * application.</p>
     */
    inline void SetRobotSoftwareSuite(const RobotSoftwareSuite& value) { m_robotSoftwareSuiteHasBeenSet = true; m_robotSoftwareSuite = value; }

    /**
     * <p>The robot software suite (ROS distribuition) used by the robot
     * application.</p>
     */
    inline void SetRobotSoftwareSuite(RobotSoftwareSuite&& value) { m_robotSoftwareSuiteHasBeenSet = true; m_robotSoftwareSuite = std::move(value); }

    /**
     * <p>The robot software suite (ROS distribuition) used by the robot
     * application.</p>
     */
    inline CreateRobotApplicationRequest& WithRobotSoftwareSuite(const RobotSoftwareSuite& value) { SetRobotSoftwareSuite(value); return *this;}

    /**
     * <p>The robot software suite (ROS distribuition) used by the robot
     * application.</p>
     */
    inline CreateRobotApplicationRequest& WithRobotSoftwareSuite(RobotSoftwareSuite&& value) { SetRobotSoftwareSuite(std::move(value)); return *this;}


    /**
     * <p>A map that contains tag keys and tag values that are attached to the robot
     * application.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>A map that contains tag keys and tag values that are attached to the robot
     * application.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A map that contains tag keys and tag values that are attached to the robot
     * application.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A map that contains tag keys and tag values that are attached to the robot
     * application.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A map that contains tag keys and tag values that are attached to the robot
     * application.</p>
     */
    inline CreateRobotApplicationRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>A map that contains tag keys and tag values that are attached to the robot
     * application.</p>
     */
    inline CreateRobotApplicationRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A map that contains tag keys and tag values that are attached to the robot
     * application.</p>
     */
    inline CreateRobotApplicationRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>A map that contains tag keys and tag values that are attached to the robot
     * application.</p>
     */
    inline CreateRobotApplicationRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map that contains tag keys and tag values that are attached to the robot
     * application.</p>
     */
    inline CreateRobotApplicationRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map that contains tag keys and tag values that are attached to the robot
     * application.</p>
     */
    inline CreateRobotApplicationRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A map that contains tag keys and tag values that are attached to the robot
     * application.</p>
     */
    inline CreateRobotApplicationRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map that contains tag keys and tag values that are attached to the robot
     * application.</p>
     */
    inline CreateRobotApplicationRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map that contains tag keys and tag values that are attached to the robot
     * application.</p>
     */
    inline CreateRobotApplicationRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }


    /**
     * <p>The object that contains that URI of the Docker image that you use for your
     * robot application.</p>
     */
    inline const Environment& GetEnvironment() const{ return m_environment; }

    /**
     * <p>The object that contains that URI of the Docker image that you use for your
     * robot application.</p>
     */
    inline bool EnvironmentHasBeenSet() const { return m_environmentHasBeenSet; }

    /**
     * <p>The object that contains that URI of the Docker image that you use for your
     * robot application.</p>
     */
    inline void SetEnvironment(const Environment& value) { m_environmentHasBeenSet = true; m_environment = value; }

    /**
     * <p>The object that contains that URI of the Docker image that you use for your
     * robot application.</p>
     */
    inline void SetEnvironment(Environment&& value) { m_environmentHasBeenSet = true; m_environment = std::move(value); }

    /**
     * <p>The object that contains that URI of the Docker image that you use for your
     * robot application.</p>
     */
    inline CreateRobotApplicationRequest& WithEnvironment(const Environment& value) { SetEnvironment(value); return *this;}

    /**
     * <p>The object that contains that URI of the Docker image that you use for your
     * robot application.</p>
     */
    inline CreateRobotApplicationRequest& WithEnvironment(Environment&& value) { SetEnvironment(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::Vector<SourceConfig> m_sources;
    bool m_sourcesHasBeenSet;

    RobotSoftwareSuite m_robotSoftwareSuite;
    bool m_robotSoftwareSuiteHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet;

    Environment m_environment;
    bool m_environmentHasBeenSet;
  };

} // namespace Model
} // namespace RoboMaker
} // namespace Aws

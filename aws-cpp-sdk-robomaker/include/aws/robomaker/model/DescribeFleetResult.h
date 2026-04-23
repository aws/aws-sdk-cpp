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
#include <aws/core/utils/DateTime.h>
#include <aws/robomaker/model/DeploymentStatus.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/robomaker/model/Robot.h>
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
  class AWS_ROBOMAKER_API DescribeFleetResult
  {
  public:
    DescribeFleetResult();
    DescribeFleetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeFleetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The name of the fleet.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the fleet.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The name of the fleet.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The name of the fleet.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The name of the fleet.</p>
     */
    inline DescribeFleetResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the fleet.</p>
     */
    inline DescribeFleetResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the fleet.</p>
     */
    inline DescribeFleetResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the fleet.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the fleet.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the fleet.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the fleet.</p>
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the fleet.</p>
     */
    inline DescribeFleetResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the fleet.</p>
     */
    inline DescribeFleetResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the fleet.</p>
     */
    inline DescribeFleetResult& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>A list of robots.</p>
     */
    inline const Aws::Vector<Robot>& GetRobots() const{ return m_robots; }

    /**
     * <p>A list of robots.</p>
     */
    inline void SetRobots(const Aws::Vector<Robot>& value) { m_robots = value; }

    /**
     * <p>A list of robots.</p>
     */
    inline void SetRobots(Aws::Vector<Robot>&& value) { m_robots = std::move(value); }

    /**
     * <p>A list of robots.</p>
     */
    inline DescribeFleetResult& WithRobots(const Aws::Vector<Robot>& value) { SetRobots(value); return *this;}

    /**
     * <p>A list of robots.</p>
     */
    inline DescribeFleetResult& WithRobots(Aws::Vector<Robot>&& value) { SetRobots(std::move(value)); return *this;}

    /**
     * <p>A list of robots.</p>
     */
    inline DescribeFleetResult& AddRobots(const Robot& value) { m_robots.push_back(value); return *this; }

    /**
     * <p>A list of robots.</p>
     */
    inline DescribeFleetResult& AddRobots(Robot&& value) { m_robots.push_back(std::move(value)); return *this; }


    /**
     * <p>The time, in milliseconds since the epoch, when the fleet was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The time, in milliseconds since the epoch, when the fleet was created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }

    /**
     * <p>The time, in milliseconds since the epoch, when the fleet was created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }

    /**
     * <p>The time, in milliseconds since the epoch, when the fleet was created.</p>
     */
    inline DescribeFleetResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The time, in milliseconds since the epoch, when the fleet was created.</p>
     */
    inline DescribeFleetResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The status of the last deployment.</p>
     */
    inline const DeploymentStatus& GetLastDeploymentStatus() const{ return m_lastDeploymentStatus; }

    /**
     * <p>The status of the last deployment.</p>
     */
    inline void SetLastDeploymentStatus(const DeploymentStatus& value) { m_lastDeploymentStatus = value; }

    /**
     * <p>The status of the last deployment.</p>
     */
    inline void SetLastDeploymentStatus(DeploymentStatus&& value) { m_lastDeploymentStatus = std::move(value); }

    /**
     * <p>The status of the last deployment.</p>
     */
    inline DescribeFleetResult& WithLastDeploymentStatus(const DeploymentStatus& value) { SetLastDeploymentStatus(value); return *this;}

    /**
     * <p>The status of the last deployment.</p>
     */
    inline DescribeFleetResult& WithLastDeploymentStatus(DeploymentStatus&& value) { SetLastDeploymentStatus(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the last deployment job.</p>
     */
    inline const Aws::String& GetLastDeploymentJob() const{ return m_lastDeploymentJob; }

    /**
     * <p>The Amazon Resource Name (ARN) of the last deployment job.</p>
     */
    inline void SetLastDeploymentJob(const Aws::String& value) { m_lastDeploymentJob = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the last deployment job.</p>
     */
    inline void SetLastDeploymentJob(Aws::String&& value) { m_lastDeploymentJob = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the last deployment job.</p>
     */
    inline void SetLastDeploymentJob(const char* value) { m_lastDeploymentJob.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the last deployment job.</p>
     */
    inline DescribeFleetResult& WithLastDeploymentJob(const Aws::String& value) { SetLastDeploymentJob(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the last deployment job.</p>
     */
    inline DescribeFleetResult& WithLastDeploymentJob(Aws::String&& value) { SetLastDeploymentJob(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the last deployment job.</p>
     */
    inline DescribeFleetResult& WithLastDeploymentJob(const char* value) { SetLastDeploymentJob(value); return *this;}


    /**
     * <p>The time of the last deployment.</p>
     */
    inline const Aws::Utils::DateTime& GetLastDeploymentTime() const{ return m_lastDeploymentTime; }

    /**
     * <p>The time of the last deployment.</p>
     */
    inline void SetLastDeploymentTime(const Aws::Utils::DateTime& value) { m_lastDeploymentTime = value; }

    /**
     * <p>The time of the last deployment.</p>
     */
    inline void SetLastDeploymentTime(Aws::Utils::DateTime&& value) { m_lastDeploymentTime = std::move(value); }

    /**
     * <p>The time of the last deployment.</p>
     */
    inline DescribeFleetResult& WithLastDeploymentTime(const Aws::Utils::DateTime& value) { SetLastDeploymentTime(value); return *this;}

    /**
     * <p>The time of the last deployment.</p>
     */
    inline DescribeFleetResult& WithLastDeploymentTime(Aws::Utils::DateTime&& value) { SetLastDeploymentTime(std::move(value)); return *this;}


    /**
     * <p>The list of all tags added to the specified fleet.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The list of all tags added to the specified fleet.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }

    /**
     * <p>The list of all tags added to the specified fleet.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }

    /**
     * <p>The list of all tags added to the specified fleet.</p>
     */
    inline DescribeFleetResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The list of all tags added to the specified fleet.</p>
     */
    inline DescribeFleetResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The list of all tags added to the specified fleet.</p>
     */
    inline DescribeFleetResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }

    /**
     * <p>The list of all tags added to the specified fleet.</p>
     */
    inline DescribeFleetResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The list of all tags added to the specified fleet.</p>
     */
    inline DescribeFleetResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The list of all tags added to the specified fleet.</p>
     */
    inline DescribeFleetResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The list of all tags added to the specified fleet.</p>
     */
    inline DescribeFleetResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The list of all tags added to the specified fleet.</p>
     */
    inline DescribeFleetResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The list of all tags added to the specified fleet.</p>
     */
    inline DescribeFleetResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_name;

    Aws::String m_arn;

    Aws::Vector<Robot> m_robots;

    Aws::Utils::DateTime m_createdAt;

    DeploymentStatus m_lastDeploymentStatus;

    Aws::String m_lastDeploymentJob;

    Aws::Utils::DateTime m_lastDeploymentTime;

    Aws::Map<Aws::String, Aws::String> m_tags;
  };

} // namespace Model
} // namespace RoboMaker
} // namespace Aws

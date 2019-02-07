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
#include <aws/robomaker/model/RobotStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/robomaker/model/Architecture.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
  class AWS_ROBOMAKER_API DescribeRobotResult
  {
  public:
    DescribeRobotResult();
    DescribeRobotResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeRobotResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the robot.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the robot.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the robot.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the robot.</p>
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the robot.</p>
     */
    inline DescribeRobotResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the robot.</p>
     */
    inline DescribeRobotResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the robot.</p>
     */
    inline DescribeRobotResult& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The name of the robot.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the robot.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The name of the robot.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The name of the robot.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The name of the robot.</p>
     */
    inline DescribeRobotResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the robot.</p>
     */
    inline DescribeRobotResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the robot.</p>
     */
    inline DescribeRobotResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the fleet.</p>
     */
    inline const Aws::String& GetFleetArn() const{ return m_fleetArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the fleet.</p>
     */
    inline void SetFleetArn(const Aws::String& value) { m_fleetArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the fleet.</p>
     */
    inline void SetFleetArn(Aws::String&& value) { m_fleetArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the fleet.</p>
     */
    inline void SetFleetArn(const char* value) { m_fleetArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the fleet.</p>
     */
    inline DescribeRobotResult& WithFleetArn(const Aws::String& value) { SetFleetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the fleet.</p>
     */
    inline DescribeRobotResult& WithFleetArn(Aws::String&& value) { SetFleetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the fleet.</p>
     */
    inline DescribeRobotResult& WithFleetArn(const char* value) { SetFleetArn(value); return *this;}


    /**
     * <p>The status of the fleet.</p>
     */
    inline const RobotStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the fleet.</p>
     */
    inline void SetStatus(const RobotStatus& value) { m_status = value; }

    /**
     * <p>The status of the fleet.</p>
     */
    inline void SetStatus(RobotStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The status of the fleet.</p>
     */
    inline DescribeRobotResult& WithStatus(const RobotStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the fleet.</p>
     */
    inline DescribeRobotResult& WithStatus(RobotStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The Greengrass group id.</p>
     */
    inline const Aws::String& GetGreengrassGroupId() const{ return m_greengrassGroupId; }

    /**
     * <p>The Greengrass group id.</p>
     */
    inline void SetGreengrassGroupId(const Aws::String& value) { m_greengrassGroupId = value; }

    /**
     * <p>The Greengrass group id.</p>
     */
    inline void SetGreengrassGroupId(Aws::String&& value) { m_greengrassGroupId = std::move(value); }

    /**
     * <p>The Greengrass group id.</p>
     */
    inline void SetGreengrassGroupId(const char* value) { m_greengrassGroupId.assign(value); }

    /**
     * <p>The Greengrass group id.</p>
     */
    inline DescribeRobotResult& WithGreengrassGroupId(const Aws::String& value) { SetGreengrassGroupId(value); return *this;}

    /**
     * <p>The Greengrass group id.</p>
     */
    inline DescribeRobotResult& WithGreengrassGroupId(Aws::String&& value) { SetGreengrassGroupId(std::move(value)); return *this;}

    /**
     * <p>The Greengrass group id.</p>
     */
    inline DescribeRobotResult& WithGreengrassGroupId(const char* value) { SetGreengrassGroupId(value); return *this;}


    /**
     * <p>The time, in milliseconds since the epoch, when the robot was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The time, in milliseconds since the epoch, when the robot was created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }

    /**
     * <p>The time, in milliseconds since the epoch, when the robot was created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }

    /**
     * <p>The time, in milliseconds since the epoch, when the robot was created.</p>
     */
    inline DescribeRobotResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The time, in milliseconds since the epoch, when the robot was created.</p>
     */
    inline DescribeRobotResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The target architecture of the robot application.</p>
     */
    inline const Architecture& GetArchitecture() const{ return m_architecture; }

    /**
     * <p>The target architecture of the robot application.</p>
     */
    inline void SetArchitecture(const Architecture& value) { m_architecture = value; }

    /**
     * <p>The target architecture of the robot application.</p>
     */
    inline void SetArchitecture(Architecture&& value) { m_architecture = std::move(value); }

    /**
     * <p>The target architecture of the robot application.</p>
     */
    inline DescribeRobotResult& WithArchitecture(const Architecture& value) { SetArchitecture(value); return *this;}

    /**
     * <p>The target architecture of the robot application.</p>
     */
    inline DescribeRobotResult& WithArchitecture(Architecture&& value) { SetArchitecture(std::move(value)); return *this;}


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
    inline DescribeRobotResult& WithLastDeploymentJob(const Aws::String& value) { SetLastDeploymentJob(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the last deployment job.</p>
     */
    inline DescribeRobotResult& WithLastDeploymentJob(Aws::String&& value) { SetLastDeploymentJob(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the last deployment job.</p>
     */
    inline DescribeRobotResult& WithLastDeploymentJob(const char* value) { SetLastDeploymentJob(value); return *this;}


    /**
     * <p>The time of the last deployment job.</p>
     */
    inline const Aws::Utils::DateTime& GetLastDeploymentTime() const{ return m_lastDeploymentTime; }

    /**
     * <p>The time of the last deployment job.</p>
     */
    inline void SetLastDeploymentTime(const Aws::Utils::DateTime& value) { m_lastDeploymentTime = value; }

    /**
     * <p>The time of the last deployment job.</p>
     */
    inline void SetLastDeploymentTime(Aws::Utils::DateTime&& value) { m_lastDeploymentTime = std::move(value); }

    /**
     * <p>The time of the last deployment job.</p>
     */
    inline DescribeRobotResult& WithLastDeploymentTime(const Aws::Utils::DateTime& value) { SetLastDeploymentTime(value); return *this;}

    /**
     * <p>The time of the last deployment job.</p>
     */
    inline DescribeRobotResult& WithLastDeploymentTime(Aws::Utils::DateTime&& value) { SetLastDeploymentTime(std::move(value)); return *this;}


    /**
     * <p>The list of all tags added to the specified robot.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The list of all tags added to the specified robot.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }

    /**
     * <p>The list of all tags added to the specified robot.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }

    /**
     * <p>The list of all tags added to the specified robot.</p>
     */
    inline DescribeRobotResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The list of all tags added to the specified robot.</p>
     */
    inline DescribeRobotResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The list of all tags added to the specified robot.</p>
     */
    inline DescribeRobotResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }

    /**
     * <p>The list of all tags added to the specified robot.</p>
     */
    inline DescribeRobotResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The list of all tags added to the specified robot.</p>
     */
    inline DescribeRobotResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The list of all tags added to the specified robot.</p>
     */
    inline DescribeRobotResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The list of all tags added to the specified robot.</p>
     */
    inline DescribeRobotResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The list of all tags added to the specified robot.</p>
     */
    inline DescribeRobotResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The list of all tags added to the specified robot.</p>
     */
    inline DescribeRobotResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_arn;

    Aws::String m_name;

    Aws::String m_fleetArn;

    RobotStatus m_status;

    Aws::String m_greengrassGroupId;

    Aws::Utils::DateTime m_createdAt;

    Architecture m_architecture;

    Aws::String m_lastDeploymentJob;

    Aws::Utils::DateTime m_lastDeploymentTime;

    Aws::Map<Aws::String, Aws::String> m_tags;
  };

} // namespace Model
} // namespace RoboMaker
} // namespace Aws

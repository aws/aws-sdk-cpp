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
  class AWS_ROBOMAKER_API CreateRobotResult
  {
  public:
    CreateRobotResult();
    CreateRobotResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateRobotResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline CreateRobotResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the robot.</p>
     */
    inline CreateRobotResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the robot.</p>
     */
    inline CreateRobotResult& WithArn(const char* value) { SetArn(value); return *this;}


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
    inline CreateRobotResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the robot.</p>
     */
    inline CreateRobotResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the robot.</p>
     */
    inline CreateRobotResult& WithName(const char* value) { SetName(value); return *this;}


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
    inline CreateRobotResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The time, in milliseconds since the epoch, when the robot was created.</p>
     */
    inline CreateRobotResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the Greengrass group associated with the
     * robot.</p>
     */
    inline const Aws::String& GetGreengrassGroupId() const{ return m_greengrassGroupId; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Greengrass group associated with the
     * robot.</p>
     */
    inline void SetGreengrassGroupId(const Aws::String& value) { m_greengrassGroupId = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Greengrass group associated with the
     * robot.</p>
     */
    inline void SetGreengrassGroupId(Aws::String&& value) { m_greengrassGroupId = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Greengrass group associated with the
     * robot.</p>
     */
    inline void SetGreengrassGroupId(const char* value) { m_greengrassGroupId.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Greengrass group associated with the
     * robot.</p>
     */
    inline CreateRobotResult& WithGreengrassGroupId(const Aws::String& value) { SetGreengrassGroupId(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Greengrass group associated with the
     * robot.</p>
     */
    inline CreateRobotResult& WithGreengrassGroupId(Aws::String&& value) { SetGreengrassGroupId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Greengrass group associated with the
     * robot.</p>
     */
    inline CreateRobotResult& WithGreengrassGroupId(const char* value) { SetGreengrassGroupId(value); return *this;}


    /**
     * <p>The target architecture of the robot.</p>
     */
    inline const Architecture& GetArchitecture() const{ return m_architecture; }

    /**
     * <p>The target architecture of the robot.</p>
     */
    inline void SetArchitecture(const Architecture& value) { m_architecture = value; }

    /**
     * <p>The target architecture of the robot.</p>
     */
    inline void SetArchitecture(Architecture&& value) { m_architecture = std::move(value); }

    /**
     * <p>The target architecture of the robot.</p>
     */
    inline CreateRobotResult& WithArchitecture(const Architecture& value) { SetArchitecture(value); return *this;}

    /**
     * <p>The target architecture of the robot.</p>
     */
    inline CreateRobotResult& WithArchitecture(Architecture&& value) { SetArchitecture(std::move(value)); return *this;}


    /**
     * <p>The list of all tags added to the robot.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The list of all tags added to the robot.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }

    /**
     * <p>The list of all tags added to the robot.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }

    /**
     * <p>The list of all tags added to the robot.</p>
     */
    inline CreateRobotResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The list of all tags added to the robot.</p>
     */
    inline CreateRobotResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The list of all tags added to the robot.</p>
     */
    inline CreateRobotResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }

    /**
     * <p>The list of all tags added to the robot.</p>
     */
    inline CreateRobotResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The list of all tags added to the robot.</p>
     */
    inline CreateRobotResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The list of all tags added to the robot.</p>
     */
    inline CreateRobotResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The list of all tags added to the robot.</p>
     */
    inline CreateRobotResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The list of all tags added to the robot.</p>
     */
    inline CreateRobotResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The list of all tags added to the robot.</p>
     */
    inline CreateRobotResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_arn;

    Aws::String m_name;

    Aws::Utils::DateTime m_createdAt;

    Aws::String m_greengrassGroupId;

    Architecture m_architecture;

    Aws::Map<Aws::String, Aws::String> m_tags;
  };

} // namespace Model
} // namespace RoboMaker
} // namespace Aws

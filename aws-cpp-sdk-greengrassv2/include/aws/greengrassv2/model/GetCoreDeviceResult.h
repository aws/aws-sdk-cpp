/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/greengrassv2/GreengrassV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/greengrassv2/model/CoreDeviceStatus.h>
#include <aws/core/utils/DateTime.h>
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
namespace GreengrassV2
{
namespace Model
{
  class GetCoreDeviceResult
  {
  public:
    AWS_GREENGRASSV2_API GetCoreDeviceResult();
    AWS_GREENGRASSV2_API GetCoreDeviceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GREENGRASSV2_API GetCoreDeviceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The name of the core device. This is also the name of the IoT thing.</p>
     */
    inline const Aws::String& GetCoreDeviceThingName() const{ return m_coreDeviceThingName; }

    /**
     * <p>The name of the core device. This is also the name of the IoT thing.</p>
     */
    inline void SetCoreDeviceThingName(const Aws::String& value) { m_coreDeviceThingName = value; }

    /**
     * <p>The name of the core device. This is also the name of the IoT thing.</p>
     */
    inline void SetCoreDeviceThingName(Aws::String&& value) { m_coreDeviceThingName = std::move(value); }

    /**
     * <p>The name of the core device. This is also the name of the IoT thing.</p>
     */
    inline void SetCoreDeviceThingName(const char* value) { m_coreDeviceThingName.assign(value); }

    /**
     * <p>The name of the core device. This is also the name of the IoT thing.</p>
     */
    inline GetCoreDeviceResult& WithCoreDeviceThingName(const Aws::String& value) { SetCoreDeviceThingName(value); return *this;}

    /**
     * <p>The name of the core device. This is also the name of the IoT thing.</p>
     */
    inline GetCoreDeviceResult& WithCoreDeviceThingName(Aws::String&& value) { SetCoreDeviceThingName(std::move(value)); return *this;}

    /**
     * <p>The name of the core device. This is also the name of the IoT thing.</p>
     */
    inline GetCoreDeviceResult& WithCoreDeviceThingName(const char* value) { SetCoreDeviceThingName(value); return *this;}


    /**
     * <p>The version of the IoT Greengrass Core software that the core device runs.
     * This version is equivalent to the version of the Greengrass nucleus component
     * that runs on the core device. For more information, see the <a
     * href="https://docs.aws.amazon.com/greengrass/v2/developerguide/greengrass-nucleus-component.html">Greengrass
     * nucleus component</a> in the <i>IoT Greengrass V2 Developer Guide</i>.</p>
     */
    inline const Aws::String& GetCoreVersion() const{ return m_coreVersion; }

    /**
     * <p>The version of the IoT Greengrass Core software that the core device runs.
     * This version is equivalent to the version of the Greengrass nucleus component
     * that runs on the core device. For more information, see the <a
     * href="https://docs.aws.amazon.com/greengrass/v2/developerguide/greengrass-nucleus-component.html">Greengrass
     * nucleus component</a> in the <i>IoT Greengrass V2 Developer Guide</i>.</p>
     */
    inline void SetCoreVersion(const Aws::String& value) { m_coreVersion = value; }

    /**
     * <p>The version of the IoT Greengrass Core software that the core device runs.
     * This version is equivalent to the version of the Greengrass nucleus component
     * that runs on the core device. For more information, see the <a
     * href="https://docs.aws.amazon.com/greengrass/v2/developerguide/greengrass-nucleus-component.html">Greengrass
     * nucleus component</a> in the <i>IoT Greengrass V2 Developer Guide</i>.</p>
     */
    inline void SetCoreVersion(Aws::String&& value) { m_coreVersion = std::move(value); }

    /**
     * <p>The version of the IoT Greengrass Core software that the core device runs.
     * This version is equivalent to the version of the Greengrass nucleus component
     * that runs on the core device. For more information, see the <a
     * href="https://docs.aws.amazon.com/greengrass/v2/developerguide/greengrass-nucleus-component.html">Greengrass
     * nucleus component</a> in the <i>IoT Greengrass V2 Developer Guide</i>.</p>
     */
    inline void SetCoreVersion(const char* value) { m_coreVersion.assign(value); }

    /**
     * <p>The version of the IoT Greengrass Core software that the core device runs.
     * This version is equivalent to the version of the Greengrass nucleus component
     * that runs on the core device. For more information, see the <a
     * href="https://docs.aws.amazon.com/greengrass/v2/developerguide/greengrass-nucleus-component.html">Greengrass
     * nucleus component</a> in the <i>IoT Greengrass V2 Developer Guide</i>.</p>
     */
    inline GetCoreDeviceResult& WithCoreVersion(const Aws::String& value) { SetCoreVersion(value); return *this;}

    /**
     * <p>The version of the IoT Greengrass Core software that the core device runs.
     * This version is equivalent to the version of the Greengrass nucleus component
     * that runs on the core device. For more information, see the <a
     * href="https://docs.aws.amazon.com/greengrass/v2/developerguide/greengrass-nucleus-component.html">Greengrass
     * nucleus component</a> in the <i>IoT Greengrass V2 Developer Guide</i>.</p>
     */
    inline GetCoreDeviceResult& WithCoreVersion(Aws::String&& value) { SetCoreVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the IoT Greengrass Core software that the core device runs.
     * This version is equivalent to the version of the Greengrass nucleus component
     * that runs on the core device. For more information, see the <a
     * href="https://docs.aws.amazon.com/greengrass/v2/developerguide/greengrass-nucleus-component.html">Greengrass
     * nucleus component</a> in the <i>IoT Greengrass V2 Developer Guide</i>.</p>
     */
    inline GetCoreDeviceResult& WithCoreVersion(const char* value) { SetCoreVersion(value); return *this;}


    /**
     * <p>The operating system platform that the core device runs.</p>
     */
    inline const Aws::String& GetPlatform() const{ return m_platform; }

    /**
     * <p>The operating system platform that the core device runs.</p>
     */
    inline void SetPlatform(const Aws::String& value) { m_platform = value; }

    /**
     * <p>The operating system platform that the core device runs.</p>
     */
    inline void SetPlatform(Aws::String&& value) { m_platform = std::move(value); }

    /**
     * <p>The operating system platform that the core device runs.</p>
     */
    inline void SetPlatform(const char* value) { m_platform.assign(value); }

    /**
     * <p>The operating system platform that the core device runs.</p>
     */
    inline GetCoreDeviceResult& WithPlatform(const Aws::String& value) { SetPlatform(value); return *this;}

    /**
     * <p>The operating system platform that the core device runs.</p>
     */
    inline GetCoreDeviceResult& WithPlatform(Aws::String&& value) { SetPlatform(std::move(value)); return *this;}

    /**
     * <p>The operating system platform that the core device runs.</p>
     */
    inline GetCoreDeviceResult& WithPlatform(const char* value) { SetPlatform(value); return *this;}


    /**
     * <p>The computer architecture of the core device.</p>
     */
    inline const Aws::String& GetArchitecture() const{ return m_architecture; }

    /**
     * <p>The computer architecture of the core device.</p>
     */
    inline void SetArchitecture(const Aws::String& value) { m_architecture = value; }

    /**
     * <p>The computer architecture of the core device.</p>
     */
    inline void SetArchitecture(Aws::String&& value) { m_architecture = std::move(value); }

    /**
     * <p>The computer architecture of the core device.</p>
     */
    inline void SetArchitecture(const char* value) { m_architecture.assign(value); }

    /**
     * <p>The computer architecture of the core device.</p>
     */
    inline GetCoreDeviceResult& WithArchitecture(const Aws::String& value) { SetArchitecture(value); return *this;}

    /**
     * <p>The computer architecture of the core device.</p>
     */
    inline GetCoreDeviceResult& WithArchitecture(Aws::String&& value) { SetArchitecture(std::move(value)); return *this;}

    /**
     * <p>The computer architecture of the core device.</p>
     */
    inline GetCoreDeviceResult& WithArchitecture(const char* value) { SetArchitecture(value); return *this;}


    /**
     * <p>The status of the core device. The core device status can be:</p> <ul> <li>
     * <p> <code>HEALTHY</code> – The IoT Greengrass Core software and all components
     * run on the core device without issue.</p> </li> <li> <p> <code>UNHEALTHY</code>
     * – The IoT Greengrass Core software or a component is in a failed state on the
     * core device.</p> </li> </ul>
     */
    inline const CoreDeviceStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the core device. The core device status can be:</p> <ul> <li>
     * <p> <code>HEALTHY</code> – The IoT Greengrass Core software and all components
     * run on the core device without issue.</p> </li> <li> <p> <code>UNHEALTHY</code>
     * – The IoT Greengrass Core software or a component is in a failed state on the
     * core device.</p> </li> </ul>
     */
    inline void SetStatus(const CoreDeviceStatus& value) { m_status = value; }

    /**
     * <p>The status of the core device. The core device status can be:</p> <ul> <li>
     * <p> <code>HEALTHY</code> – The IoT Greengrass Core software and all components
     * run on the core device without issue.</p> </li> <li> <p> <code>UNHEALTHY</code>
     * – The IoT Greengrass Core software or a component is in a failed state on the
     * core device.</p> </li> </ul>
     */
    inline void SetStatus(CoreDeviceStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The status of the core device. The core device status can be:</p> <ul> <li>
     * <p> <code>HEALTHY</code> – The IoT Greengrass Core software and all components
     * run on the core device without issue.</p> </li> <li> <p> <code>UNHEALTHY</code>
     * – The IoT Greengrass Core software or a component is in a failed state on the
     * core device.</p> </li> </ul>
     */
    inline GetCoreDeviceResult& WithStatus(const CoreDeviceStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the core device. The core device status can be:</p> <ul> <li>
     * <p> <code>HEALTHY</code> – The IoT Greengrass Core software and all components
     * run on the core device without issue.</p> </li> <li> <p> <code>UNHEALTHY</code>
     * – The IoT Greengrass Core software or a component is in a failed state on the
     * core device.</p> </li> </ul>
     */
    inline GetCoreDeviceResult& WithStatus(CoreDeviceStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The time at which the core device's status last updated, expressed in ISO
     * 8601 format.</p>
     */
    inline const Aws::Utils::DateTime& GetLastStatusUpdateTimestamp() const{ return m_lastStatusUpdateTimestamp; }

    /**
     * <p>The time at which the core device's status last updated, expressed in ISO
     * 8601 format.</p>
     */
    inline void SetLastStatusUpdateTimestamp(const Aws::Utils::DateTime& value) { m_lastStatusUpdateTimestamp = value; }

    /**
     * <p>The time at which the core device's status last updated, expressed in ISO
     * 8601 format.</p>
     */
    inline void SetLastStatusUpdateTimestamp(Aws::Utils::DateTime&& value) { m_lastStatusUpdateTimestamp = std::move(value); }

    /**
     * <p>The time at which the core device's status last updated, expressed in ISO
     * 8601 format.</p>
     */
    inline GetCoreDeviceResult& WithLastStatusUpdateTimestamp(const Aws::Utils::DateTime& value) { SetLastStatusUpdateTimestamp(value); return *this;}

    /**
     * <p>The time at which the core device's status last updated, expressed in ISO
     * 8601 format.</p>
     */
    inline GetCoreDeviceResult& WithLastStatusUpdateTimestamp(Aws::Utils::DateTime&& value) { SetLastStatusUpdateTimestamp(std::move(value)); return *this;}


    /**
     * <p>A list of key-value pairs that contain metadata for the resource. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/greengrass/v2/developerguide/tag-resources.html">Tag
     * your resources</a> in the <i>IoT Greengrass V2 Developer Guide</i>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>A list of key-value pairs that contain metadata for the resource. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/greengrass/v2/developerguide/tag-resources.html">Tag
     * your resources</a> in the <i>IoT Greengrass V2 Developer Guide</i>.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }

    /**
     * <p>A list of key-value pairs that contain metadata for the resource. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/greengrass/v2/developerguide/tag-resources.html">Tag
     * your resources</a> in the <i>IoT Greengrass V2 Developer Guide</i>.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }

    /**
     * <p>A list of key-value pairs that contain metadata for the resource. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/greengrass/v2/developerguide/tag-resources.html">Tag
     * your resources</a> in the <i>IoT Greengrass V2 Developer Guide</i>.</p>
     */
    inline GetCoreDeviceResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>A list of key-value pairs that contain metadata for the resource. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/greengrass/v2/developerguide/tag-resources.html">Tag
     * your resources</a> in the <i>IoT Greengrass V2 Developer Guide</i>.</p>
     */
    inline GetCoreDeviceResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A list of key-value pairs that contain metadata for the resource. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/greengrass/v2/developerguide/tag-resources.html">Tag
     * your resources</a> in the <i>IoT Greengrass V2 Developer Guide</i>.</p>
     */
    inline GetCoreDeviceResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }

    /**
     * <p>A list of key-value pairs that contain metadata for the resource. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/greengrass/v2/developerguide/tag-resources.html">Tag
     * your resources</a> in the <i>IoT Greengrass V2 Developer Guide</i>.</p>
     */
    inline GetCoreDeviceResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A list of key-value pairs that contain metadata for the resource. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/greengrass/v2/developerguide/tag-resources.html">Tag
     * your resources</a> in the <i>IoT Greengrass V2 Developer Guide</i>.</p>
     */
    inline GetCoreDeviceResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A list of key-value pairs that contain metadata for the resource. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/greengrass/v2/developerguide/tag-resources.html">Tag
     * your resources</a> in the <i>IoT Greengrass V2 Developer Guide</i>.</p>
     */
    inline GetCoreDeviceResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A list of key-value pairs that contain metadata for the resource. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/greengrass/v2/developerguide/tag-resources.html">Tag
     * your resources</a> in the <i>IoT Greengrass V2 Developer Guide</i>.</p>
     */
    inline GetCoreDeviceResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A list of key-value pairs that contain metadata for the resource. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/greengrass/v2/developerguide/tag-resources.html">Tag
     * your resources</a> in the <i>IoT Greengrass V2 Developer Guide</i>.</p>
     */
    inline GetCoreDeviceResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A list of key-value pairs that contain metadata for the resource. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/greengrass/v2/developerguide/tag-resources.html">Tag
     * your resources</a> in the <i>IoT Greengrass V2 Developer Guide</i>.</p>
     */
    inline GetCoreDeviceResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_coreDeviceThingName;

    Aws::String m_coreVersion;

    Aws::String m_platform;

    Aws::String m_architecture;

    CoreDeviceStatus m_status;

    Aws::Utils::DateTime m_lastStatusUpdateTimestamp;

    Aws::Map<Aws::String, Aws::String> m_tags;
  };

} // namespace Model
} // namespace GreengrassV2
} // namespace Aws

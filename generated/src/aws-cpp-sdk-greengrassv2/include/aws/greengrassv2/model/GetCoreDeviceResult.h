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


    ///@{
    /**
     * <p>The name of the core device. This is also the name of the IoT thing.</p>
     */
    inline const Aws::String& GetCoreDeviceThingName() const{ return m_coreDeviceThingName; }
    inline void SetCoreDeviceThingName(const Aws::String& value) { m_coreDeviceThingName = value; }
    inline void SetCoreDeviceThingName(Aws::String&& value) { m_coreDeviceThingName = std::move(value); }
    inline void SetCoreDeviceThingName(const char* value) { m_coreDeviceThingName.assign(value); }
    inline GetCoreDeviceResult& WithCoreDeviceThingName(const Aws::String& value) { SetCoreDeviceThingName(value); return *this;}
    inline GetCoreDeviceResult& WithCoreDeviceThingName(Aws::String&& value) { SetCoreDeviceThingName(std::move(value)); return *this;}
    inline GetCoreDeviceResult& WithCoreDeviceThingName(const char* value) { SetCoreDeviceThingName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the IoT Greengrass Core software that the core device runs.
     * This version is equivalent to the version of the Greengrass nucleus component
     * that runs on the core device. For more information, see the <a
     * href="https://docs.aws.amazon.com/greengrass/v2/developerguide/greengrass-nucleus-component.html">Greengrass
     * nucleus component</a> in the <i>IoT Greengrass V2 Developer Guide</i>.</p>
     */
    inline const Aws::String& GetCoreVersion() const{ return m_coreVersion; }
    inline void SetCoreVersion(const Aws::String& value) { m_coreVersion = value; }
    inline void SetCoreVersion(Aws::String&& value) { m_coreVersion = std::move(value); }
    inline void SetCoreVersion(const char* value) { m_coreVersion.assign(value); }
    inline GetCoreDeviceResult& WithCoreVersion(const Aws::String& value) { SetCoreVersion(value); return *this;}
    inline GetCoreDeviceResult& WithCoreVersion(Aws::String&& value) { SetCoreVersion(std::move(value)); return *this;}
    inline GetCoreDeviceResult& WithCoreVersion(const char* value) { SetCoreVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The operating system platform that the core device runs.</p>
     */
    inline const Aws::String& GetPlatform() const{ return m_platform; }
    inline void SetPlatform(const Aws::String& value) { m_platform = value; }
    inline void SetPlatform(Aws::String&& value) { m_platform = std::move(value); }
    inline void SetPlatform(const char* value) { m_platform.assign(value); }
    inline GetCoreDeviceResult& WithPlatform(const Aws::String& value) { SetPlatform(value); return *this;}
    inline GetCoreDeviceResult& WithPlatform(Aws::String&& value) { SetPlatform(std::move(value)); return *this;}
    inline GetCoreDeviceResult& WithPlatform(const char* value) { SetPlatform(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The computer architecture of the core device.</p>
     */
    inline const Aws::String& GetArchitecture() const{ return m_architecture; }
    inline void SetArchitecture(const Aws::String& value) { m_architecture = value; }
    inline void SetArchitecture(Aws::String&& value) { m_architecture = std::move(value); }
    inline void SetArchitecture(const char* value) { m_architecture.assign(value); }
    inline GetCoreDeviceResult& WithArchitecture(const Aws::String& value) { SetArchitecture(value); return *this;}
    inline GetCoreDeviceResult& WithArchitecture(Aws::String&& value) { SetArchitecture(std::move(value)); return *this;}
    inline GetCoreDeviceResult& WithArchitecture(const char* value) { SetArchitecture(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The runtime for the core device. The runtime can be:</p> <ul> <li> <p>
     * <code>aws_nucleus_classic</code> </p> </li> <li> <p>
     * <code>aws_nucleus_lite</code> </p> </li> </ul>
     */
    inline const Aws::String& GetRuntime() const{ return m_runtime; }
    inline void SetRuntime(const Aws::String& value) { m_runtime = value; }
    inline void SetRuntime(Aws::String&& value) { m_runtime = std::move(value); }
    inline void SetRuntime(const char* value) { m_runtime.assign(value); }
    inline GetCoreDeviceResult& WithRuntime(const Aws::String& value) { SetRuntime(value); return *this;}
    inline GetCoreDeviceResult& WithRuntime(Aws::String&& value) { SetRuntime(std::move(value)); return *this;}
    inline GetCoreDeviceResult& WithRuntime(const char* value) { SetRuntime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the core device. The core device status can be:</p> <ul> <li>
     * <p> <code>HEALTHY</code> – The IoT Greengrass Core software and all components
     * run on the core device without issue.</p> </li> <li> <p> <code>UNHEALTHY</code>
     * – The IoT Greengrass Core software or a component is in a failed state on the
     * core device.</p> </li> </ul>
     */
    inline const CoreDeviceStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const CoreDeviceStatus& value) { m_status = value; }
    inline void SetStatus(CoreDeviceStatus&& value) { m_status = std::move(value); }
    inline GetCoreDeviceResult& WithStatus(const CoreDeviceStatus& value) { SetStatus(value); return *this;}
    inline GetCoreDeviceResult& WithStatus(CoreDeviceStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the core device's status last updated, expressed in ISO
     * 8601 format.</p>
     */
    inline const Aws::Utils::DateTime& GetLastStatusUpdateTimestamp() const{ return m_lastStatusUpdateTimestamp; }
    inline void SetLastStatusUpdateTimestamp(const Aws::Utils::DateTime& value) { m_lastStatusUpdateTimestamp = value; }
    inline void SetLastStatusUpdateTimestamp(Aws::Utils::DateTime&& value) { m_lastStatusUpdateTimestamp = std::move(value); }
    inline GetCoreDeviceResult& WithLastStatusUpdateTimestamp(const Aws::Utils::DateTime& value) { SetLastStatusUpdateTimestamp(value); return *this;}
    inline GetCoreDeviceResult& WithLastStatusUpdateTimestamp(Aws::Utils::DateTime&& value) { SetLastStatusUpdateTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of key-value pairs that contain metadata for the resource. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/greengrass/v2/developerguide/tag-resources.html">Tag
     * your resources</a> in the <i>IoT Greengrass V2 Developer Guide</i>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }
    inline GetCoreDeviceResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline GetCoreDeviceResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline GetCoreDeviceResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }
    inline GetCoreDeviceResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }
    inline GetCoreDeviceResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline GetCoreDeviceResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline GetCoreDeviceResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline GetCoreDeviceResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }
    inline GetCoreDeviceResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetCoreDeviceResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetCoreDeviceResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetCoreDeviceResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_coreDeviceThingName;

    Aws::String m_coreVersion;

    Aws::String m_platform;

    Aws::String m_architecture;

    Aws::String m_runtime;

    CoreDeviceStatus m_status;

    Aws::Utils::DateTime m_lastStatusUpdateTimestamp;

    Aws::Map<Aws::String, Aws::String> m_tags;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace GreengrassV2
} // namespace Aws

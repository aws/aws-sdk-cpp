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
    AWS_GREENGRASSV2_API GetCoreDeviceResult() = default;
    AWS_GREENGRASSV2_API GetCoreDeviceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GREENGRASSV2_API GetCoreDeviceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the core device. This is also the name of the IoT thing.</p>
     */
    inline const Aws::String& GetCoreDeviceThingName() const { return m_coreDeviceThingName; }
    template<typename CoreDeviceThingNameT = Aws::String>
    void SetCoreDeviceThingName(CoreDeviceThingNameT&& value) { m_coreDeviceThingNameHasBeenSet = true; m_coreDeviceThingName = std::forward<CoreDeviceThingNameT>(value); }
    template<typename CoreDeviceThingNameT = Aws::String>
    GetCoreDeviceResult& WithCoreDeviceThingName(CoreDeviceThingNameT&& value) { SetCoreDeviceThingName(std::forward<CoreDeviceThingNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the IoT Greengrass Core software that the core device runs.
     * This version is equivalent to the version of the Greengrass nucleus component
     * that runs on the core device. For more information, see the <a
     * href="https://docs.aws.amazon.com/greengrass/v2/developerguide/greengrass-nucleus-component.html">Greengrass
     * nucleus component</a> in the <i>IoT Greengrass V2 Developer Guide</i>.</p>
     */
    inline const Aws::String& GetCoreVersion() const { return m_coreVersion; }
    template<typename CoreVersionT = Aws::String>
    void SetCoreVersion(CoreVersionT&& value) { m_coreVersionHasBeenSet = true; m_coreVersion = std::forward<CoreVersionT>(value); }
    template<typename CoreVersionT = Aws::String>
    GetCoreDeviceResult& WithCoreVersion(CoreVersionT&& value) { SetCoreVersion(std::forward<CoreVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The operating system platform that the core device runs.</p>
     */
    inline const Aws::String& GetPlatform() const { return m_platform; }
    template<typename PlatformT = Aws::String>
    void SetPlatform(PlatformT&& value) { m_platformHasBeenSet = true; m_platform = std::forward<PlatformT>(value); }
    template<typename PlatformT = Aws::String>
    GetCoreDeviceResult& WithPlatform(PlatformT&& value) { SetPlatform(std::forward<PlatformT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The computer architecture of the core device.</p>
     */
    inline const Aws::String& GetArchitecture() const { return m_architecture; }
    template<typename ArchitectureT = Aws::String>
    void SetArchitecture(ArchitectureT&& value) { m_architectureHasBeenSet = true; m_architecture = std::forward<ArchitectureT>(value); }
    template<typename ArchitectureT = Aws::String>
    GetCoreDeviceResult& WithArchitecture(ArchitectureT&& value) { SetArchitecture(std::forward<ArchitectureT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The runtime for the core device. The runtime can be:</p> <ul> <li> <p>
     * <code>aws_nucleus_classic</code> </p> </li> <li> <p>
     * <code>aws_nucleus_lite</code> </p> </li> </ul>
     */
    inline const Aws::String& GetRuntime() const { return m_runtime; }
    template<typename RuntimeT = Aws::String>
    void SetRuntime(RuntimeT&& value) { m_runtimeHasBeenSet = true; m_runtime = std::forward<RuntimeT>(value); }
    template<typename RuntimeT = Aws::String>
    GetCoreDeviceResult& WithRuntime(RuntimeT&& value) { SetRuntime(std::forward<RuntimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the core device. The core device status can be:</p> <ul> <li>
     * <p> <code>HEALTHY</code> – The IoT Greengrass Core software and all components
     * run on the core device without issue.</p> </li> <li> <p> <code>UNHEALTHY</code>
     * – The IoT Greengrass Core software or a component is in a failed state on the
     * core device.</p> </li> </ul>
     */
    inline CoreDeviceStatus GetStatus() const { return m_status; }
    inline void SetStatus(CoreDeviceStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline GetCoreDeviceResult& WithStatus(CoreDeviceStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the core device's status last updated, expressed in ISO
     * 8601 format.</p>
     */
    inline const Aws::Utils::DateTime& GetLastStatusUpdateTimestamp() const { return m_lastStatusUpdateTimestamp; }
    template<typename LastStatusUpdateTimestampT = Aws::Utils::DateTime>
    void SetLastStatusUpdateTimestamp(LastStatusUpdateTimestampT&& value) { m_lastStatusUpdateTimestampHasBeenSet = true; m_lastStatusUpdateTimestamp = std::forward<LastStatusUpdateTimestampT>(value); }
    template<typename LastStatusUpdateTimestampT = Aws::Utils::DateTime>
    GetCoreDeviceResult& WithLastStatusUpdateTimestamp(LastStatusUpdateTimestampT&& value) { SetLastStatusUpdateTimestamp(std::forward<LastStatusUpdateTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of key-value pairs that contain metadata for the resource. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/greengrass/v2/developerguide/tag-resources.html">Tag
     * your resources</a> in the <i>IoT Greengrass V2 Developer Guide</i>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    GetCoreDeviceResult& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    GetCoreDeviceResult& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetCoreDeviceResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_coreDeviceThingName;
    bool m_coreDeviceThingNameHasBeenSet = false;

    Aws::String m_coreVersion;
    bool m_coreVersionHasBeenSet = false;

    Aws::String m_platform;
    bool m_platformHasBeenSet = false;

    Aws::String m_architecture;
    bool m_architectureHasBeenSet = false;

    Aws::String m_runtime;
    bool m_runtimeHasBeenSet = false;

    CoreDeviceStatus m_status{CoreDeviceStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_lastStatusUpdateTimestamp{};
    bool m_lastStatusUpdateTimestampHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace GreengrassV2
} // namespace Aws

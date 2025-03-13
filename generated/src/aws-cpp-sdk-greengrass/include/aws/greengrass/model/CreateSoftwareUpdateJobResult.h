/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/greengrass/Greengrass_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace Greengrass
{
namespace Model
{
  class CreateSoftwareUpdateJobResult
  {
  public:
    AWS_GREENGRASS_API CreateSoftwareUpdateJobResult() = default;
    AWS_GREENGRASS_API CreateSoftwareUpdateJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GREENGRASS_API CreateSoftwareUpdateJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * The IoT Job ARN corresponding to this update.
     */
    inline const Aws::String& GetIotJobArn() const { return m_iotJobArn; }
    template<typename IotJobArnT = Aws::String>
    void SetIotJobArn(IotJobArnT&& value) { m_iotJobArnHasBeenSet = true; m_iotJobArn = std::forward<IotJobArnT>(value); }
    template<typename IotJobArnT = Aws::String>
    CreateSoftwareUpdateJobResult& WithIotJobArn(IotJobArnT&& value) { SetIotJobArn(std::forward<IotJobArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The IoT Job Id corresponding to this update.
     */
    inline const Aws::String& GetIotJobId() const { return m_iotJobId; }
    template<typename IotJobIdT = Aws::String>
    void SetIotJobId(IotJobIdT&& value) { m_iotJobIdHasBeenSet = true; m_iotJobId = std::forward<IotJobIdT>(value); }
    template<typename IotJobIdT = Aws::String>
    CreateSoftwareUpdateJobResult& WithIotJobId(IotJobIdT&& value) { SetIotJobId(std::forward<IotJobIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The software version installed on the device or devices after the update.
     */
    inline const Aws::String& GetPlatformSoftwareVersion() const { return m_platformSoftwareVersion; }
    template<typename PlatformSoftwareVersionT = Aws::String>
    void SetPlatformSoftwareVersion(PlatformSoftwareVersionT&& value) { m_platformSoftwareVersionHasBeenSet = true; m_platformSoftwareVersion = std::forward<PlatformSoftwareVersionT>(value); }
    template<typename PlatformSoftwareVersionT = Aws::String>
    CreateSoftwareUpdateJobResult& WithPlatformSoftwareVersion(PlatformSoftwareVersionT&& value) { SetPlatformSoftwareVersion(std::forward<PlatformSoftwareVersionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateSoftwareUpdateJobResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_iotJobArn;
    bool m_iotJobArnHasBeenSet = false;

    Aws::String m_iotJobId;
    bool m_iotJobIdHasBeenSet = false;

    Aws::String m_platformSoftwareVersion;
    bool m_platformSoftwareVersionHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws

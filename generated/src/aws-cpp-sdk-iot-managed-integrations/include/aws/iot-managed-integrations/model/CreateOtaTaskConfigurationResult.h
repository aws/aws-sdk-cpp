/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot-managed-integrations/IoTManagedIntegrations_EXPORTS.h>
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
namespace IoTManagedIntegrations
{
namespace Model
{
  class CreateOtaTaskConfigurationResult
  {
  public:
    AWS_IOTMANAGEDINTEGRATIONS_API CreateOtaTaskConfigurationResult() = default;
    AWS_IOTMANAGEDINTEGRATIONS_API CreateOtaTaskConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTMANAGEDINTEGRATIONS_API CreateOtaTaskConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The identifier of the over-the-air (OTA) task configuration.</p>
     */
    inline const Aws::String& GetTaskConfigurationId() const { return m_taskConfigurationId; }
    template<typename TaskConfigurationIdT = Aws::String>
    void SetTaskConfigurationId(TaskConfigurationIdT&& value) { m_taskConfigurationIdHasBeenSet = true; m_taskConfigurationId = std::forward<TaskConfigurationIdT>(value); }
    template<typename TaskConfigurationIdT = Aws::String>
    CreateOtaTaskConfigurationResult& WithTaskConfigurationId(TaskConfigurationIdT&& value) { SetTaskConfigurationId(std::forward<TaskConfigurationIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateOtaTaskConfigurationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_taskConfigurationId;
    bool m_taskConfigurationIdHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTManagedIntegrations
} // namespace Aws

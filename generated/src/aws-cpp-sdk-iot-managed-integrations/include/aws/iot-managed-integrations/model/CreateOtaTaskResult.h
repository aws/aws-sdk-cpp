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
  class CreateOtaTaskResult
  {
  public:
    AWS_IOTMANAGEDINTEGRATIONS_API CreateOtaTaskResult();
    AWS_IOTMANAGEDINTEGRATIONS_API CreateOtaTaskResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTMANAGEDINTEGRATIONS_API CreateOtaTaskResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The identifier of the over-the-air (OTA) task.</p>
     */
    inline const Aws::String& GetTaskId() const{ return m_taskId; }
    inline void SetTaskId(const Aws::String& value) { m_taskId = value; }
    inline void SetTaskId(Aws::String&& value) { m_taskId = std::move(value); }
    inline void SetTaskId(const char* value) { m_taskId.assign(value); }
    inline CreateOtaTaskResult& WithTaskId(const Aws::String& value) { SetTaskId(value); return *this;}
    inline CreateOtaTaskResult& WithTaskId(Aws::String&& value) { SetTaskId(std::move(value)); return *this;}
    inline CreateOtaTaskResult& WithTaskId(const char* value) { SetTaskId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the over-the-air (OTA) task.</p>
     */
    inline const Aws::String& GetTaskArn() const{ return m_taskArn; }
    inline void SetTaskArn(const Aws::String& value) { m_taskArn = value; }
    inline void SetTaskArn(Aws::String&& value) { m_taskArn = std::move(value); }
    inline void SetTaskArn(const char* value) { m_taskArn.assign(value); }
    inline CreateOtaTaskResult& WithTaskArn(const Aws::String& value) { SetTaskArn(value); return *this;}
    inline CreateOtaTaskResult& WithTaskArn(Aws::String&& value) { SetTaskArn(std::move(value)); return *this;}
    inline CreateOtaTaskResult& WithTaskArn(const char* value) { SetTaskArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the over-the-air (OTA) task.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline CreateOtaTaskResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreateOtaTaskResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreateOtaTaskResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateOtaTaskResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateOtaTaskResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateOtaTaskResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_taskId;

    Aws::String m_taskArn;

    Aws::String m_description;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoTManagedIntegrations
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotevents/IoTEvents_EXPORTS.h>
#include <aws/iotevents/model/InputConfiguration.h>
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
namespace IoTEvents
{
namespace Model
{
  class CreateInputResult
  {
  public:
    AWS_IOTEVENTS_API CreateInputResult();
    AWS_IOTEVENTS_API CreateInputResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTEVENTS_API CreateInputResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the configuration of the input.</p>
     */
    inline const InputConfiguration& GetInputConfiguration() const{ return m_inputConfiguration; }

    /**
     * <p>Information about the configuration of the input.</p>
     */
    inline void SetInputConfiguration(const InputConfiguration& value) { m_inputConfiguration = value; }

    /**
     * <p>Information about the configuration of the input.</p>
     */
    inline void SetInputConfiguration(InputConfiguration&& value) { m_inputConfiguration = std::move(value); }

    /**
     * <p>Information about the configuration of the input.</p>
     */
    inline CreateInputResult& WithInputConfiguration(const InputConfiguration& value) { SetInputConfiguration(value); return *this;}

    /**
     * <p>Information about the configuration of the input.</p>
     */
    inline CreateInputResult& WithInputConfiguration(InputConfiguration&& value) { SetInputConfiguration(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateInputResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateInputResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateInputResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    InputConfiguration m_inputConfiguration;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoTEvents
} // namespace Aws

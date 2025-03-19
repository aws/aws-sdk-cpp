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
    AWS_IOTEVENTS_API CreateInputResult() = default;
    AWS_IOTEVENTS_API CreateInputResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTEVENTS_API CreateInputResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the configuration of the input.</p>
     */
    inline const InputConfiguration& GetInputConfiguration() const { return m_inputConfiguration; }
    template<typename InputConfigurationT = InputConfiguration>
    void SetInputConfiguration(InputConfigurationT&& value) { m_inputConfigurationHasBeenSet = true; m_inputConfiguration = std::forward<InputConfigurationT>(value); }
    template<typename InputConfigurationT = InputConfiguration>
    CreateInputResult& WithInputConfiguration(InputConfigurationT&& value) { SetInputConfiguration(std::forward<InputConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateInputResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    InputConfiguration m_inputConfiguration;
    bool m_inputConfigurationHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTEvents
} // namespace Aws

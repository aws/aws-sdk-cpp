/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotevents/IoTEvents_EXPORTS.h>
#include <aws/iotevents/model/InputConfiguration.h>
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
  class UpdateInputResult
  {
  public:
    AWS_IOTEVENTS_API UpdateInputResult();
    AWS_IOTEVENTS_API UpdateInputResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTEVENTS_API UpdateInputResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline UpdateInputResult& WithInputConfiguration(const InputConfiguration& value) { SetInputConfiguration(value); return *this;}

    /**
     * <p>Information about the configuration of the input.</p>
     */
    inline UpdateInputResult& WithInputConfiguration(InputConfiguration&& value) { SetInputConfiguration(std::move(value)); return *this;}

  private:

    InputConfiguration m_inputConfiguration;
  };

} // namespace Model
} // namespace IoTEvents
} // namespace Aws

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
  class AWS_IOTEVENTS_API UpdateInputResult
  {
  public:
    UpdateInputResult();
    UpdateInputResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    UpdateInputResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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

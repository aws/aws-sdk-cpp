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
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/medialive/model/InputDeviceSummary.h>
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
namespace MediaLive
{
namespace Model
{
  /**
   * Placeholder documentation for ListInputDevicesResponse<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/ListInputDevicesResponse">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIALIVE_API ListInputDevicesResult
  {
  public:
    ListInputDevicesResult();
    ListInputDevicesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListInputDevicesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * The list of input devices.
     */
    inline const Aws::Vector<InputDeviceSummary>& GetInputDevices() const{ return m_inputDevices; }

    /**
     * The list of input devices.
     */
    inline void SetInputDevices(const Aws::Vector<InputDeviceSummary>& value) { m_inputDevices = value; }

    /**
     * The list of input devices.
     */
    inline void SetInputDevices(Aws::Vector<InputDeviceSummary>&& value) { m_inputDevices = std::move(value); }

    /**
     * The list of input devices.
     */
    inline ListInputDevicesResult& WithInputDevices(const Aws::Vector<InputDeviceSummary>& value) { SetInputDevices(value); return *this;}

    /**
     * The list of input devices.
     */
    inline ListInputDevicesResult& WithInputDevices(Aws::Vector<InputDeviceSummary>&& value) { SetInputDevices(std::move(value)); return *this;}

    /**
     * The list of input devices.
     */
    inline ListInputDevicesResult& AddInputDevices(const InputDeviceSummary& value) { m_inputDevices.push_back(value); return *this; }

    /**
     * The list of input devices.
     */
    inline ListInputDevicesResult& AddInputDevices(InputDeviceSummary&& value) { m_inputDevices.push_back(std::move(value)); return *this; }


    /**
     * A token to get additional list results.
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * A token to get additional list results.
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * A token to get additional list results.
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * A token to get additional list results.
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * A token to get additional list results.
     */
    inline ListInputDevicesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * A token to get additional list results.
     */
    inline ListInputDevicesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * A token to get additional list results.
     */
    inline ListInputDevicesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<InputDeviceSummary> m_inputDevices;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws

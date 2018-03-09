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
#include <aws/alexaforbusiness/AlexaForBusiness_EXPORTS.h>
#include <aws/alexaforbusiness/model/Device.h>
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
namespace AlexaForBusiness
{
namespace Model
{
  class AWS_ALEXAFORBUSINESS_API GetDeviceResult
  {
  public:
    GetDeviceResult();
    GetDeviceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetDeviceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The details of the device requested. Required.</p>
     */
    inline const Device& GetDevice() const{ return m_device; }

    /**
     * <p>The details of the device requested. Required.</p>
     */
    inline void SetDevice(const Device& value) { m_device = value; }

    /**
     * <p>The details of the device requested. Required.</p>
     */
    inline void SetDevice(Device&& value) { m_device = std::move(value); }

    /**
     * <p>The details of the device requested. Required.</p>
     */
    inline GetDeviceResult& WithDevice(const Device& value) { SetDevice(value); return *this;}

    /**
     * <p>The details of the device requested. Required.</p>
     */
    inline GetDeviceResult& WithDevice(Device&& value) { SetDevice(std::move(value)); return *this;}

  private:

    Device m_device;
  };

} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws

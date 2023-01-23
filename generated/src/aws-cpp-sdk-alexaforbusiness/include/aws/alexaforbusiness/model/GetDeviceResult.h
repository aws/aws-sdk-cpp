/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class GetDeviceResult
  {
  public:
    AWS_ALEXAFORBUSINESS_API GetDeviceResult();
    AWS_ALEXAFORBUSINESS_API GetDeviceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ALEXAFORBUSINESS_API GetDeviceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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

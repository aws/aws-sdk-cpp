/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
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
namespace IoTWireless
{
namespace Model
{
  class TestWirelessDeviceResult
  {
  public:
    AWS_IOTWIRELESS_API TestWirelessDeviceResult();
    AWS_IOTWIRELESS_API TestWirelessDeviceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTWIRELESS_API TestWirelessDeviceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The result returned by the test.</p>
     */
    inline const Aws::String& GetResult() const{ return m_result; }

    /**
     * <p>The result returned by the test.</p>
     */
    inline void SetResult(const Aws::String& value) { m_result = value; }

    /**
     * <p>The result returned by the test.</p>
     */
    inline void SetResult(Aws::String&& value) { m_result = std::move(value); }

    /**
     * <p>The result returned by the test.</p>
     */
    inline void SetResult(const char* value) { m_result.assign(value); }

    /**
     * <p>The result returned by the test.</p>
     */
    inline TestWirelessDeviceResult& WithResult(const Aws::String& value) { SetResult(value); return *this;}

    /**
     * <p>The result returned by the test.</p>
     */
    inline TestWirelessDeviceResult& WithResult(Aws::String&& value) { SetResult(std::move(value)); return *this;}

    /**
     * <p>The result returned by the test.</p>
     */
    inline TestWirelessDeviceResult& WithResult(const char* value) { SetResult(value); return *this;}

  private:

    Aws::String m_result;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws

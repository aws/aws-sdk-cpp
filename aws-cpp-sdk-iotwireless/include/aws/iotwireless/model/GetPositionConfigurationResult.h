/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/iotwireless/model/PositionSolverDetails.h>
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
  class AWS_IOTWIRELESS_API GetPositionConfigurationResult
  {
  public:
    GetPositionConfigurationResult();
    GetPositionConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetPositionConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The wrapper for the solver configuration details object.</p>
     */
    inline const PositionSolverDetails& GetSolvers() const{ return m_solvers; }

    /**
     * <p>The wrapper for the solver configuration details object.</p>
     */
    inline void SetSolvers(const PositionSolverDetails& value) { m_solvers = value; }

    /**
     * <p>The wrapper for the solver configuration details object.</p>
     */
    inline void SetSolvers(PositionSolverDetails&& value) { m_solvers = std::move(value); }

    /**
     * <p>The wrapper for the solver configuration details object.</p>
     */
    inline GetPositionConfigurationResult& WithSolvers(const PositionSolverDetails& value) { SetSolvers(value); return *this;}

    /**
     * <p>The wrapper for the solver configuration details object.</p>
     */
    inline GetPositionConfigurationResult& WithSolvers(PositionSolverDetails&& value) { SetSolvers(std::move(value)); return *this;}


    /**
     * <p>The position data destination that describes the AWS IoT rule that processes
     * the device's position data for use by AWS IoT Core for LoRaWAN.</p>
     */
    inline const Aws::String& GetDestination() const{ return m_destination; }

    /**
     * <p>The position data destination that describes the AWS IoT rule that processes
     * the device's position data for use by AWS IoT Core for LoRaWAN.</p>
     */
    inline void SetDestination(const Aws::String& value) { m_destination = value; }

    /**
     * <p>The position data destination that describes the AWS IoT rule that processes
     * the device's position data for use by AWS IoT Core for LoRaWAN.</p>
     */
    inline void SetDestination(Aws::String&& value) { m_destination = std::move(value); }

    /**
     * <p>The position data destination that describes the AWS IoT rule that processes
     * the device's position data for use by AWS IoT Core for LoRaWAN.</p>
     */
    inline void SetDestination(const char* value) { m_destination.assign(value); }

    /**
     * <p>The position data destination that describes the AWS IoT rule that processes
     * the device's position data for use by AWS IoT Core for LoRaWAN.</p>
     */
    inline GetPositionConfigurationResult& WithDestination(const Aws::String& value) { SetDestination(value); return *this;}

    /**
     * <p>The position data destination that describes the AWS IoT rule that processes
     * the device's position data for use by AWS IoT Core for LoRaWAN.</p>
     */
    inline GetPositionConfigurationResult& WithDestination(Aws::String&& value) { SetDestination(std::move(value)); return *this;}

    /**
     * <p>The position data destination that describes the AWS IoT rule that processes
     * the device's position data for use by AWS IoT Core for LoRaWAN.</p>
     */
    inline GetPositionConfigurationResult& WithDestination(const char* value) { SetDestination(value); return *this;}

  private:

    PositionSolverDetails m_solvers;

    Aws::String m_destination;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws

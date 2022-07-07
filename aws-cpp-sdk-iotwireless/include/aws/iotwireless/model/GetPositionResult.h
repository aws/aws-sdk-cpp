/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iotwireless/model/Accuracy.h>
#include <aws/iotwireless/model/PositionSolverType.h>
#include <aws/iotwireless/model/PositionSolverProvider.h>
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
  class AWS_IOTWIRELESS_API GetPositionResult
  {
  public:
    GetPositionResult();
    GetPositionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetPositionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The position information of the resource.</p>
     */
    inline const Aws::Vector<double>& GetPosition() const{ return m_position; }

    /**
     * <p>The position information of the resource.</p>
     */
    inline void SetPosition(const Aws::Vector<double>& value) { m_position = value; }

    /**
     * <p>The position information of the resource.</p>
     */
    inline void SetPosition(Aws::Vector<double>&& value) { m_position = std::move(value); }

    /**
     * <p>The position information of the resource.</p>
     */
    inline GetPositionResult& WithPosition(const Aws::Vector<double>& value) { SetPosition(value); return *this;}

    /**
     * <p>The position information of the resource.</p>
     */
    inline GetPositionResult& WithPosition(Aws::Vector<double>&& value) { SetPosition(std::move(value)); return *this;}

    /**
     * <p>The position information of the resource.</p>
     */
    inline GetPositionResult& AddPosition(double value) { m_position.push_back(value); return *this; }


    /**
     * <p>The accuracy of the estimated position in meters. An empty value indicates
     * that no position data is available. A value of ‘0.0’ value indicates that
     * position data is available. This data corresponds to the position information
     * that you specified instead of the position computed by solver.</p>
     */
    inline const Accuracy& GetAccuracy() const{ return m_accuracy; }

    /**
     * <p>The accuracy of the estimated position in meters. An empty value indicates
     * that no position data is available. A value of ‘0.0’ value indicates that
     * position data is available. This data corresponds to the position information
     * that you specified instead of the position computed by solver.</p>
     */
    inline void SetAccuracy(const Accuracy& value) { m_accuracy = value; }

    /**
     * <p>The accuracy of the estimated position in meters. An empty value indicates
     * that no position data is available. A value of ‘0.0’ value indicates that
     * position data is available. This data corresponds to the position information
     * that you specified instead of the position computed by solver.</p>
     */
    inline void SetAccuracy(Accuracy&& value) { m_accuracy = std::move(value); }

    /**
     * <p>The accuracy of the estimated position in meters. An empty value indicates
     * that no position data is available. A value of ‘0.0’ value indicates that
     * position data is available. This data corresponds to the position information
     * that you specified instead of the position computed by solver.</p>
     */
    inline GetPositionResult& WithAccuracy(const Accuracy& value) { SetAccuracy(value); return *this;}

    /**
     * <p>The accuracy of the estimated position in meters. An empty value indicates
     * that no position data is available. A value of ‘0.0’ value indicates that
     * position data is available. This data corresponds to the position information
     * that you specified instead of the position computed by solver.</p>
     */
    inline GetPositionResult& WithAccuracy(Accuracy&& value) { SetAccuracy(std::move(value)); return *this;}


    /**
     * <p>The type of solver used to identify the position of the resource.</p>
     */
    inline const PositionSolverType& GetSolverType() const{ return m_solverType; }

    /**
     * <p>The type of solver used to identify the position of the resource.</p>
     */
    inline void SetSolverType(const PositionSolverType& value) { m_solverType = value; }

    /**
     * <p>The type of solver used to identify the position of the resource.</p>
     */
    inline void SetSolverType(PositionSolverType&& value) { m_solverType = std::move(value); }

    /**
     * <p>The type of solver used to identify the position of the resource.</p>
     */
    inline GetPositionResult& WithSolverType(const PositionSolverType& value) { SetSolverType(value); return *this;}

    /**
     * <p>The type of solver used to identify the position of the resource.</p>
     */
    inline GetPositionResult& WithSolverType(PositionSolverType&& value) { SetSolverType(std::move(value)); return *this;}


    /**
     * <p>The vendor of the positioning solver.</p>
     */
    inline const PositionSolverProvider& GetSolverProvider() const{ return m_solverProvider; }

    /**
     * <p>The vendor of the positioning solver.</p>
     */
    inline void SetSolverProvider(const PositionSolverProvider& value) { m_solverProvider = value; }

    /**
     * <p>The vendor of the positioning solver.</p>
     */
    inline void SetSolverProvider(PositionSolverProvider&& value) { m_solverProvider = std::move(value); }

    /**
     * <p>The vendor of the positioning solver.</p>
     */
    inline GetPositionResult& WithSolverProvider(const PositionSolverProvider& value) { SetSolverProvider(value); return *this;}

    /**
     * <p>The vendor of the positioning solver.</p>
     */
    inline GetPositionResult& WithSolverProvider(PositionSolverProvider&& value) { SetSolverProvider(std::move(value)); return *this;}


    /**
     * <p>The version of the positioning solver.</p>
     */
    inline const Aws::String& GetSolverVersion() const{ return m_solverVersion; }

    /**
     * <p>The version of the positioning solver.</p>
     */
    inline void SetSolverVersion(const Aws::String& value) { m_solverVersion = value; }

    /**
     * <p>The version of the positioning solver.</p>
     */
    inline void SetSolverVersion(Aws::String&& value) { m_solverVersion = std::move(value); }

    /**
     * <p>The version of the positioning solver.</p>
     */
    inline void SetSolverVersion(const char* value) { m_solverVersion.assign(value); }

    /**
     * <p>The version of the positioning solver.</p>
     */
    inline GetPositionResult& WithSolverVersion(const Aws::String& value) { SetSolverVersion(value); return *this;}

    /**
     * <p>The version of the positioning solver.</p>
     */
    inline GetPositionResult& WithSolverVersion(Aws::String&& value) { SetSolverVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the positioning solver.</p>
     */
    inline GetPositionResult& WithSolverVersion(const char* value) { SetSolverVersion(value); return *this;}


    /**
     * <p>The timestamp at which the device's position was determined.</p>
     */
    inline const Aws::String& GetTimestamp() const{ return m_timestamp; }

    /**
     * <p>The timestamp at which the device's position was determined.</p>
     */
    inline void SetTimestamp(const Aws::String& value) { m_timestamp = value; }

    /**
     * <p>The timestamp at which the device's position was determined.</p>
     */
    inline void SetTimestamp(Aws::String&& value) { m_timestamp = std::move(value); }

    /**
     * <p>The timestamp at which the device's position was determined.</p>
     */
    inline void SetTimestamp(const char* value) { m_timestamp.assign(value); }

    /**
     * <p>The timestamp at which the device's position was determined.</p>
     */
    inline GetPositionResult& WithTimestamp(const Aws::String& value) { SetTimestamp(value); return *this;}

    /**
     * <p>The timestamp at which the device's position was determined.</p>
     */
    inline GetPositionResult& WithTimestamp(Aws::String&& value) { SetTimestamp(std::move(value)); return *this;}

    /**
     * <p>The timestamp at which the device's position was determined.</p>
     */
    inline GetPositionResult& WithTimestamp(const char* value) { SetTimestamp(value); return *this;}

  private:

    Aws::Vector<double> m_position;

    Accuracy m_accuracy;

    PositionSolverType m_solverType;

    PositionSolverProvider m_solverProvider;

    Aws::String m_solverVersion;

    Aws::String m_timestamp;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws

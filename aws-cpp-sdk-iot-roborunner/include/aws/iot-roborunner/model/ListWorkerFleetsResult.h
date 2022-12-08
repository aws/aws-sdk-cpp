/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot-roborunner/IoTRoboRunner_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iot-roborunner/model/WorkerFleet.h>
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
namespace IoTRoboRunner
{
namespace Model
{
  class ListWorkerFleetsResult
  {
  public:
    AWS_IOTROBORUNNER_API ListWorkerFleetsResult();
    AWS_IOTROBORUNNER_API ListWorkerFleetsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTROBORUNNER_API ListWorkerFleetsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    
    inline ListWorkerFleetsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    
    inline ListWorkerFleetsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    
    inline ListWorkerFleetsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::Vector<WorkerFleet>& GetWorkerFleets() const{ return m_workerFleets; }

    
    inline void SetWorkerFleets(const Aws::Vector<WorkerFleet>& value) { m_workerFleets = value; }

    
    inline void SetWorkerFleets(Aws::Vector<WorkerFleet>&& value) { m_workerFleets = std::move(value); }

    
    inline ListWorkerFleetsResult& WithWorkerFleets(const Aws::Vector<WorkerFleet>& value) { SetWorkerFleets(value); return *this;}

    
    inline ListWorkerFleetsResult& WithWorkerFleets(Aws::Vector<WorkerFleet>&& value) { SetWorkerFleets(std::move(value)); return *this;}

    
    inline ListWorkerFleetsResult& AddWorkerFleets(const WorkerFleet& value) { m_workerFleets.push_back(value); return *this; }

    
    inline ListWorkerFleetsResult& AddWorkerFleets(WorkerFleet&& value) { m_workerFleets.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<WorkerFleet> m_workerFleets;
  };

} // namespace Model
} // namespace IoTRoboRunner
} // namespace Aws

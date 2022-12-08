/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot-roborunner/IoTRoboRunner_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iot-roborunner/model/Worker.h>
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
  class ListWorkersResult
  {
  public:
    AWS_IOTROBORUNNER_API ListWorkersResult();
    AWS_IOTROBORUNNER_API ListWorkersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTROBORUNNER_API ListWorkersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    
    inline ListWorkersResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    
    inline ListWorkersResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    
    inline ListWorkersResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::Vector<Worker>& GetWorkers() const{ return m_workers; }

    
    inline void SetWorkers(const Aws::Vector<Worker>& value) { m_workers = value; }

    
    inline void SetWorkers(Aws::Vector<Worker>&& value) { m_workers = std::move(value); }

    
    inline ListWorkersResult& WithWorkers(const Aws::Vector<Worker>& value) { SetWorkers(value); return *this;}

    
    inline ListWorkersResult& WithWorkers(Aws::Vector<Worker>&& value) { SetWorkers(std::move(value)); return *this;}

    
    inline ListWorkersResult& AddWorkers(const Worker& value) { m_workers.push_back(value); return *this; }

    
    inline ListWorkersResult& AddWorkers(Worker&& value) { m_workers.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<Worker> m_workers;
  };

} // namespace Model
} // namespace IoTRoboRunner
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot-roborunner/IoTRoboRunner_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iot-roborunner/model/Destination.h>
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
  class ListDestinationsResult
  {
  public:
    AWS_IOTROBORUNNER_API ListDestinationsResult();
    AWS_IOTROBORUNNER_API ListDestinationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTROBORUNNER_API ListDestinationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    
    inline ListDestinationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    
    inline ListDestinationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    
    inline ListDestinationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::Vector<Destination>& GetDestinations() const{ return m_destinations; }

    
    inline void SetDestinations(const Aws::Vector<Destination>& value) { m_destinations = value; }

    
    inline void SetDestinations(Aws::Vector<Destination>&& value) { m_destinations = std::move(value); }

    
    inline ListDestinationsResult& WithDestinations(const Aws::Vector<Destination>& value) { SetDestinations(value); return *this;}

    
    inline ListDestinationsResult& WithDestinations(Aws::Vector<Destination>&& value) { SetDestinations(std::move(value)); return *this;}

    
    inline ListDestinationsResult& AddDestinations(const Destination& value) { m_destinations.push_back(value); return *this; }

    
    inline ListDestinationsResult& AddDestinations(Destination&& value) { m_destinations.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<Destination> m_destinations;
  };

} // namespace Model
} // namespace IoTRoboRunner
} // namespace Aws

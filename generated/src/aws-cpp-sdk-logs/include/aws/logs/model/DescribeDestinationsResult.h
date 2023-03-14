/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/logs/model/Destination.h>
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
namespace CloudWatchLogs
{
namespace Model
{
  class DescribeDestinationsResult
  {
  public:
    AWS_CLOUDWATCHLOGS_API DescribeDestinationsResult();
    AWS_CLOUDWATCHLOGS_API DescribeDestinationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDWATCHLOGS_API DescribeDestinationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The destinations.</p>
     */
    inline const Aws::Vector<Destination>& GetDestinations() const{ return m_destinations; }

    /**
     * <p>The destinations.</p>
     */
    inline void SetDestinations(const Aws::Vector<Destination>& value) { m_destinations = value; }

    /**
     * <p>The destinations.</p>
     */
    inline void SetDestinations(Aws::Vector<Destination>&& value) { m_destinations = std::move(value); }

    /**
     * <p>The destinations.</p>
     */
    inline DescribeDestinationsResult& WithDestinations(const Aws::Vector<Destination>& value) { SetDestinations(value); return *this;}

    /**
     * <p>The destinations.</p>
     */
    inline DescribeDestinationsResult& WithDestinations(Aws::Vector<Destination>&& value) { SetDestinations(std::move(value)); return *this;}

    /**
     * <p>The destinations.</p>
     */
    inline DescribeDestinationsResult& AddDestinations(const Destination& value) { m_destinations.push_back(value); return *this; }

    /**
     * <p>The destinations.</p>
     */
    inline DescribeDestinationsResult& AddDestinations(Destination&& value) { m_destinations.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    
    inline DescribeDestinationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    
    inline DescribeDestinationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    
    inline DescribeDestinationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeDestinationsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeDestinationsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeDestinationsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<Destination> m_destinations;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws

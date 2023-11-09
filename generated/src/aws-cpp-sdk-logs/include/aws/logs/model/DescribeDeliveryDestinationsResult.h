/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/logs/model/DeliveryDestination.h>
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
  class DescribeDeliveryDestinationsResult
  {
  public:
    AWS_CLOUDWATCHLOGS_API DescribeDeliveryDestinationsResult();
    AWS_CLOUDWATCHLOGS_API DescribeDeliveryDestinationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDWATCHLOGS_API DescribeDeliveryDestinationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of structures. Each structure contains information about one
     * delivery destination in the account.</p>
     */
    inline const Aws::Vector<DeliveryDestination>& GetDeliveryDestinations() const{ return m_deliveryDestinations; }

    /**
     * <p>An array of structures. Each structure contains information about one
     * delivery destination in the account.</p>
     */
    inline void SetDeliveryDestinations(const Aws::Vector<DeliveryDestination>& value) { m_deliveryDestinations = value; }

    /**
     * <p>An array of structures. Each structure contains information about one
     * delivery destination in the account.</p>
     */
    inline void SetDeliveryDestinations(Aws::Vector<DeliveryDestination>&& value) { m_deliveryDestinations = std::move(value); }

    /**
     * <p>An array of structures. Each structure contains information about one
     * delivery destination in the account.</p>
     */
    inline DescribeDeliveryDestinationsResult& WithDeliveryDestinations(const Aws::Vector<DeliveryDestination>& value) { SetDeliveryDestinations(value); return *this;}

    /**
     * <p>An array of structures. Each structure contains information about one
     * delivery destination in the account.</p>
     */
    inline DescribeDeliveryDestinationsResult& WithDeliveryDestinations(Aws::Vector<DeliveryDestination>&& value) { SetDeliveryDestinations(std::move(value)); return *this;}

    /**
     * <p>An array of structures. Each structure contains information about one
     * delivery destination in the account.</p>
     */
    inline DescribeDeliveryDestinationsResult& AddDeliveryDestinations(const DeliveryDestination& value) { m_deliveryDestinations.push_back(value); return *this; }

    /**
     * <p>An array of structures. Each structure contains information about one
     * delivery destination in the account.</p>
     */
    inline DescribeDeliveryDestinationsResult& AddDeliveryDestinations(DeliveryDestination&& value) { m_deliveryDestinations.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    
    inline DescribeDeliveryDestinationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    
    inline DescribeDeliveryDestinationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    
    inline DescribeDeliveryDestinationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeDeliveryDestinationsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeDeliveryDestinationsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeDeliveryDestinationsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<DeliveryDestination> m_deliveryDestinations;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws

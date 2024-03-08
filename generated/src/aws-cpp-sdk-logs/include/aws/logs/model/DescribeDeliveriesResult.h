/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/logs/model/Delivery.h>
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
  class DescribeDeliveriesResult
  {
  public:
    AWS_CLOUDWATCHLOGS_API DescribeDeliveriesResult();
    AWS_CLOUDWATCHLOGS_API DescribeDeliveriesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDWATCHLOGS_API DescribeDeliveriesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of structures. Each structure contains information about one
     * delivery in the account.</p>
     */
    inline const Aws::Vector<Delivery>& GetDeliveries() const{ return m_deliveries; }

    /**
     * <p>An array of structures. Each structure contains information about one
     * delivery in the account.</p>
     */
    inline void SetDeliveries(const Aws::Vector<Delivery>& value) { m_deliveries = value; }

    /**
     * <p>An array of structures. Each structure contains information about one
     * delivery in the account.</p>
     */
    inline void SetDeliveries(Aws::Vector<Delivery>&& value) { m_deliveries = std::move(value); }

    /**
     * <p>An array of structures. Each structure contains information about one
     * delivery in the account.</p>
     */
    inline DescribeDeliveriesResult& WithDeliveries(const Aws::Vector<Delivery>& value) { SetDeliveries(value); return *this;}

    /**
     * <p>An array of structures. Each structure contains information about one
     * delivery in the account.</p>
     */
    inline DescribeDeliveriesResult& WithDeliveries(Aws::Vector<Delivery>&& value) { SetDeliveries(std::move(value)); return *this;}

    /**
     * <p>An array of structures. Each structure contains information about one
     * delivery in the account.</p>
     */
    inline DescribeDeliveriesResult& AddDeliveries(const Delivery& value) { m_deliveries.push_back(value); return *this; }

    /**
     * <p>An array of structures. Each structure contains information about one
     * delivery in the account.</p>
     */
    inline DescribeDeliveriesResult& AddDeliveries(Delivery&& value) { m_deliveries.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    
    inline DescribeDeliveriesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    
    inline DescribeDeliveriesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    
    inline DescribeDeliveriesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeDeliveriesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeDeliveriesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeDeliveriesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<Delivery> m_deliveries;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws

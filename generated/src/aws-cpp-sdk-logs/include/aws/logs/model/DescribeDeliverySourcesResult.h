/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/logs/model/DeliverySource.h>
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
  class DescribeDeliverySourcesResult
  {
  public:
    AWS_CLOUDWATCHLOGS_API DescribeDeliverySourcesResult();
    AWS_CLOUDWATCHLOGS_API DescribeDeliverySourcesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDWATCHLOGS_API DescribeDeliverySourcesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of structures. Each structure contains information about one
     * delivery source in the account.</p>
     */
    inline const Aws::Vector<DeliverySource>& GetDeliverySources() const{ return m_deliverySources; }

    /**
     * <p>An array of structures. Each structure contains information about one
     * delivery source in the account.</p>
     */
    inline void SetDeliverySources(const Aws::Vector<DeliverySource>& value) { m_deliverySources = value; }

    /**
     * <p>An array of structures. Each structure contains information about one
     * delivery source in the account.</p>
     */
    inline void SetDeliverySources(Aws::Vector<DeliverySource>&& value) { m_deliverySources = std::move(value); }

    /**
     * <p>An array of structures. Each structure contains information about one
     * delivery source in the account.</p>
     */
    inline DescribeDeliverySourcesResult& WithDeliverySources(const Aws::Vector<DeliverySource>& value) { SetDeliverySources(value); return *this;}

    /**
     * <p>An array of structures. Each structure contains information about one
     * delivery source in the account.</p>
     */
    inline DescribeDeliverySourcesResult& WithDeliverySources(Aws::Vector<DeliverySource>&& value) { SetDeliverySources(std::move(value)); return *this;}

    /**
     * <p>An array of structures. Each structure contains information about one
     * delivery source in the account.</p>
     */
    inline DescribeDeliverySourcesResult& AddDeliverySources(const DeliverySource& value) { m_deliverySources.push_back(value); return *this; }

    /**
     * <p>An array of structures. Each structure contains information about one
     * delivery source in the account.</p>
     */
    inline DescribeDeliverySourcesResult& AddDeliverySources(DeliverySource&& value) { m_deliverySources.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    
    inline DescribeDeliverySourcesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    
    inline DescribeDeliverySourcesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    
    inline DescribeDeliverySourcesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeDeliverySourcesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeDeliverySourcesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeDeliverySourcesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<DeliverySource> m_deliverySources;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws

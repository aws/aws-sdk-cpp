/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apprunner/AppRunner_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace AppRunner
{
namespace Model
{
  class ListServicesForAutoScalingConfigurationResult
  {
  public:
    AWS_APPRUNNER_API ListServicesForAutoScalingConfigurationResult();
    AWS_APPRUNNER_API ListServicesForAutoScalingConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPRUNNER_API ListServicesForAutoScalingConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of service ARN records. In a paginated request, the request returns up
     * to <code>MaxResults</code> records for each call.</p>
     */
    inline const Aws::Vector<Aws::String>& GetServiceArnList() const{ return m_serviceArnList; }

    /**
     * <p>A list of service ARN records. In a paginated request, the request returns up
     * to <code>MaxResults</code> records for each call.</p>
     */
    inline void SetServiceArnList(const Aws::Vector<Aws::String>& value) { m_serviceArnList = value; }

    /**
     * <p>A list of service ARN records. In a paginated request, the request returns up
     * to <code>MaxResults</code> records for each call.</p>
     */
    inline void SetServiceArnList(Aws::Vector<Aws::String>&& value) { m_serviceArnList = std::move(value); }

    /**
     * <p>A list of service ARN records. In a paginated request, the request returns up
     * to <code>MaxResults</code> records for each call.</p>
     */
    inline ListServicesForAutoScalingConfigurationResult& WithServiceArnList(const Aws::Vector<Aws::String>& value) { SetServiceArnList(value); return *this;}

    /**
     * <p>A list of service ARN records. In a paginated request, the request returns up
     * to <code>MaxResults</code> records for each call.</p>
     */
    inline ListServicesForAutoScalingConfigurationResult& WithServiceArnList(Aws::Vector<Aws::String>&& value) { SetServiceArnList(std::move(value)); return *this;}

    /**
     * <p>A list of service ARN records. In a paginated request, the request returns up
     * to <code>MaxResults</code> records for each call.</p>
     */
    inline ListServicesForAutoScalingConfigurationResult& AddServiceArnList(const Aws::String& value) { m_serviceArnList.push_back(value); return *this; }

    /**
     * <p>A list of service ARN records. In a paginated request, the request returns up
     * to <code>MaxResults</code> records for each call.</p>
     */
    inline ListServicesForAutoScalingConfigurationResult& AddServiceArnList(Aws::String&& value) { m_serviceArnList.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of service ARN records. In a paginated request, the request returns up
     * to <code>MaxResults</code> records for each call.</p>
     */
    inline ListServicesForAutoScalingConfigurationResult& AddServiceArnList(const char* value) { m_serviceArnList.push_back(value); return *this; }


    /**
     * <p>The token that you can pass in a subsequent request to get the next result
     * page. It's returned in a paginated request.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token that you can pass in a subsequent request to get the next result
     * page. It's returned in a paginated request.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token that you can pass in a subsequent request to get the next result
     * page. It's returned in a paginated request.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token that you can pass in a subsequent request to get the next result
     * page. It's returned in a paginated request.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token that you can pass in a subsequent request to get the next result
     * page. It's returned in a paginated request.</p>
     */
    inline ListServicesForAutoScalingConfigurationResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token that you can pass in a subsequent request to get the next result
     * page. It's returned in a paginated request.</p>
     */
    inline ListServicesForAutoScalingConfigurationResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token that you can pass in a subsequent request to get the next result
     * page. It's returned in a paginated request.</p>
     */
    inline ListServicesForAutoScalingConfigurationResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListServicesForAutoScalingConfigurationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListServicesForAutoScalingConfigurationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListServicesForAutoScalingConfigurationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_serviceArnList;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace AppRunner
} // namespace Aws

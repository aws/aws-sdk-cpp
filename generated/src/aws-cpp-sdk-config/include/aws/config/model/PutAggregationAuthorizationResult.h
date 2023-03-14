/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/config/model/AggregationAuthorization.h>
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
namespace ConfigService
{
namespace Model
{
  class PutAggregationAuthorizationResult
  {
  public:
    AWS_CONFIGSERVICE_API PutAggregationAuthorizationResult();
    AWS_CONFIGSERVICE_API PutAggregationAuthorizationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONFIGSERVICE_API PutAggregationAuthorizationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Returns an AggregationAuthorization object. </p>
     */
    inline const AggregationAuthorization& GetAggregationAuthorization() const{ return m_aggregationAuthorization; }

    /**
     * <p>Returns an AggregationAuthorization object. </p>
     */
    inline void SetAggregationAuthorization(const AggregationAuthorization& value) { m_aggregationAuthorization = value; }

    /**
     * <p>Returns an AggregationAuthorization object. </p>
     */
    inline void SetAggregationAuthorization(AggregationAuthorization&& value) { m_aggregationAuthorization = std::move(value); }

    /**
     * <p>Returns an AggregationAuthorization object. </p>
     */
    inline PutAggregationAuthorizationResult& WithAggregationAuthorization(const AggregationAuthorization& value) { SetAggregationAuthorization(value); return *this;}

    /**
     * <p>Returns an AggregationAuthorization object. </p>
     */
    inline PutAggregationAuthorizationResult& WithAggregationAuthorization(AggregationAuthorization&& value) { SetAggregationAuthorization(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline PutAggregationAuthorizationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline PutAggregationAuthorizationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline PutAggregationAuthorizationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    AggregationAuthorization m_aggregationAuthorization;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/config/model/AggregationAuthorization.h>
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

  private:

    AggregationAuthorization m_aggregationAuthorization;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws

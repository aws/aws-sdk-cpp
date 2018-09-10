/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_CONFIGSERVICE_API PutAggregationAuthorizationResult
  {
  public:
    PutAggregationAuthorizationResult();
    PutAggregationAuthorizationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    PutAggregationAuthorizationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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

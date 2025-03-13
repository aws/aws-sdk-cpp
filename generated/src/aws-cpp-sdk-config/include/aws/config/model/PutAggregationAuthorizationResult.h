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
    AWS_CONFIGSERVICE_API PutAggregationAuthorizationResult() = default;
    AWS_CONFIGSERVICE_API PutAggregationAuthorizationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONFIGSERVICE_API PutAggregationAuthorizationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Returns an AggregationAuthorization object. </p>
     */
    inline const AggregationAuthorization& GetAggregationAuthorization() const { return m_aggregationAuthorization; }
    template<typename AggregationAuthorizationT = AggregationAuthorization>
    void SetAggregationAuthorization(AggregationAuthorizationT&& value) { m_aggregationAuthorizationHasBeenSet = true; m_aggregationAuthorization = std::forward<AggregationAuthorizationT>(value); }
    template<typename AggregationAuthorizationT = AggregationAuthorization>
    PutAggregationAuthorizationResult& WithAggregationAuthorization(AggregationAuthorizationT&& value) { SetAggregationAuthorization(std::forward<AggregationAuthorizationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    PutAggregationAuthorizationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    AggregationAuthorization m_aggregationAuthorization;
    bool m_aggregationAuthorizationHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws

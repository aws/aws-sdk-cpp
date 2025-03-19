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
    AWS_APPRUNNER_API ListServicesForAutoScalingConfigurationResult() = default;
    AWS_APPRUNNER_API ListServicesForAutoScalingConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPRUNNER_API ListServicesForAutoScalingConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of service ARN records. In a paginated request, the request returns up
     * to <code>MaxResults</code> records for each call.</p>
     */
    inline const Aws::Vector<Aws::String>& GetServiceArnList() const { return m_serviceArnList; }
    template<typename ServiceArnListT = Aws::Vector<Aws::String>>
    void SetServiceArnList(ServiceArnListT&& value) { m_serviceArnListHasBeenSet = true; m_serviceArnList = std::forward<ServiceArnListT>(value); }
    template<typename ServiceArnListT = Aws::Vector<Aws::String>>
    ListServicesForAutoScalingConfigurationResult& WithServiceArnList(ServiceArnListT&& value) { SetServiceArnList(std::forward<ServiceArnListT>(value)); return *this;}
    template<typename ServiceArnListT = Aws::String>
    ListServicesForAutoScalingConfigurationResult& AddServiceArnList(ServiceArnListT&& value) { m_serviceArnListHasBeenSet = true; m_serviceArnList.emplace_back(std::forward<ServiceArnListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token that you can pass in a subsequent request to get the next result
     * page. It's returned in a paginated request.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListServicesForAutoScalingConfigurationResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListServicesForAutoScalingConfigurationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_serviceArnList;
    bool m_serviceArnListHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AppRunner
} // namespace Aws

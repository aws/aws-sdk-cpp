/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/license-manager-user-subscriptions/LicenseManagerUserSubscriptions_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/license-manager-user-subscriptions/model/InstanceSummary.h>
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
namespace LicenseManagerUserSubscriptions
{
namespace Model
{
  class ListInstancesResult
  {
  public:
    AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API ListInstancesResult() = default;
    AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API ListInstancesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API ListInstancesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of <code>InstanceSummary</code> resources that contain details about
     * the instances that provide user-based subscriptions and also meet the request
     * criteria.</p>
     */
    inline const Aws::Vector<InstanceSummary>& GetInstanceSummaries() const { return m_instanceSummaries; }
    template<typename InstanceSummariesT = Aws::Vector<InstanceSummary>>
    void SetInstanceSummaries(InstanceSummariesT&& value) { m_instanceSummariesHasBeenSet = true; m_instanceSummaries = std::forward<InstanceSummariesT>(value); }
    template<typename InstanceSummariesT = Aws::Vector<InstanceSummary>>
    ListInstancesResult& WithInstanceSummaries(InstanceSummariesT&& value) { SetInstanceSummaries(std::forward<InstanceSummariesT>(value)); return *this;}
    template<typename InstanceSummariesT = InstanceSummary>
    ListInstancesResult& AddInstanceSummaries(InstanceSummariesT&& value) { m_instanceSummariesHasBeenSet = true; m_instanceSummaries.emplace_back(std::forward<InstanceSummariesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The next token used for paginated responses. When this field isn't empty,
     * there are additional elements that the service hasn't included in this request.
     * Use this token with the next request to retrieve additional objects.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListInstancesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListInstancesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<InstanceSummary> m_instanceSummaries;
    bool m_instanceSummariesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LicenseManagerUserSubscriptions
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/license-manager-user-subscriptions/LicenseManagerUserSubscriptions_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/license-manager-user-subscriptions/model/InstanceUserSummary.h>
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
  class ListUserAssociationsResult
  {
  public:
    AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API ListUserAssociationsResult() = default;
    AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API ListUserAssociationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API ListUserAssociationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Metadata that describes the list user association operation.</p>
     */
    inline const Aws::Vector<InstanceUserSummary>& GetInstanceUserSummaries() const { return m_instanceUserSummaries; }
    template<typename InstanceUserSummariesT = Aws::Vector<InstanceUserSummary>>
    void SetInstanceUserSummaries(InstanceUserSummariesT&& value) { m_instanceUserSummariesHasBeenSet = true; m_instanceUserSummaries = std::forward<InstanceUserSummariesT>(value); }
    template<typename InstanceUserSummariesT = Aws::Vector<InstanceUserSummary>>
    ListUserAssociationsResult& WithInstanceUserSummaries(InstanceUserSummariesT&& value) { SetInstanceUserSummaries(std::forward<InstanceUserSummariesT>(value)); return *this;}
    template<typename InstanceUserSummariesT = InstanceUserSummary>
    ListUserAssociationsResult& AddInstanceUserSummaries(InstanceUserSummariesT&& value) { m_instanceUserSummariesHasBeenSet = true; m_instanceUserSummaries.emplace_back(std::forward<InstanceUserSummariesT>(value)); return *this; }
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
    ListUserAssociationsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListUserAssociationsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<InstanceUserSummary> m_instanceUserSummaries;
    bool m_instanceUserSummariesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LicenseManagerUserSubscriptions
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/license-manager-user-subscriptions/LicenseManagerUserSubscriptions_EXPORTS.h>
#include <aws/license-manager-user-subscriptions/model/InstanceUserSummary.h>
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
namespace LicenseManagerUserSubscriptions
{
namespace Model
{
  class AssociateUserResult
  {
  public:
    AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API AssociateUserResult() = default;
    AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API AssociateUserResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API AssociateUserResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Metadata that describes the associate user operation.</p>
     */
    inline const InstanceUserSummary& GetInstanceUserSummary() const { return m_instanceUserSummary; }
    template<typename InstanceUserSummaryT = InstanceUserSummary>
    void SetInstanceUserSummary(InstanceUserSummaryT&& value) { m_instanceUserSummaryHasBeenSet = true; m_instanceUserSummary = std::forward<InstanceUserSummaryT>(value); }
    template<typename InstanceUserSummaryT = InstanceUserSummary>
    AssociateUserResult& WithInstanceUserSummary(InstanceUserSummaryT&& value) { SetInstanceUserSummary(std::forward<InstanceUserSummaryT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    AssociateUserResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    InstanceUserSummary m_instanceUserSummary;
    bool m_instanceUserSummaryHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LicenseManagerUserSubscriptions
} // namespace Aws

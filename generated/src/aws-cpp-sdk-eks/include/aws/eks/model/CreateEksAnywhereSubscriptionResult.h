/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/eks/model/EksAnywhereSubscription.h>
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
namespace EKS
{
namespace Model
{
  class CreateEksAnywhereSubscriptionResult
  {
  public:
    AWS_EKS_API CreateEksAnywhereSubscriptionResult() = default;
    AWS_EKS_API CreateEksAnywhereSubscriptionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_EKS_API CreateEksAnywhereSubscriptionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The full description of the subscription.</p>
     */
    inline const EksAnywhereSubscription& GetSubscription() const { return m_subscription; }
    template<typename SubscriptionT = EksAnywhereSubscription>
    void SetSubscription(SubscriptionT&& value) { m_subscriptionHasBeenSet = true; m_subscription = std::forward<SubscriptionT>(value); }
    template<typename SubscriptionT = EksAnywhereSubscription>
    CreateEksAnywhereSubscriptionResult& WithSubscription(SubscriptionT&& value) { SetSubscription(std::forward<SubscriptionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateEksAnywhereSubscriptionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    EksAnywhereSubscription m_subscription;
    bool m_subscriptionHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws

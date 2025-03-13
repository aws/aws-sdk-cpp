/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>
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
namespace CostExplorer
{
namespace Model
{
  class CreateAnomalySubscriptionResult
  {
  public:
    AWS_COSTEXPLORER_API CreateAnomalySubscriptionResult() = default;
    AWS_COSTEXPLORER_API CreateAnomalySubscriptionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COSTEXPLORER_API CreateAnomalySubscriptionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The unique identifier of your newly created cost anomaly subscription. </p>
     */
    inline const Aws::String& GetSubscriptionArn() const { return m_subscriptionArn; }
    template<typename SubscriptionArnT = Aws::String>
    void SetSubscriptionArn(SubscriptionArnT&& value) { m_subscriptionArnHasBeenSet = true; m_subscriptionArn = std::forward<SubscriptionArnT>(value); }
    template<typename SubscriptionArnT = Aws::String>
    CreateAnomalySubscriptionResult& WithSubscriptionArn(SubscriptionArnT&& value) { SetSubscriptionArn(std::forward<SubscriptionArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateAnomalySubscriptionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_subscriptionArn;
    bool m_subscriptionArnHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws

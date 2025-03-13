/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
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
namespace IoT
{
namespace Model
{
  class CreateBillingGroupResult
  {
  public:
    AWS_IOT_API CreateBillingGroupResult() = default;
    AWS_IOT_API CreateBillingGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API CreateBillingGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name you gave to the billing group.</p>
     */
    inline const Aws::String& GetBillingGroupName() const { return m_billingGroupName; }
    template<typename BillingGroupNameT = Aws::String>
    void SetBillingGroupName(BillingGroupNameT&& value) { m_billingGroupNameHasBeenSet = true; m_billingGroupName = std::forward<BillingGroupNameT>(value); }
    template<typename BillingGroupNameT = Aws::String>
    CreateBillingGroupResult& WithBillingGroupName(BillingGroupNameT&& value) { SetBillingGroupName(std::forward<BillingGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the billing group.</p>
     */
    inline const Aws::String& GetBillingGroupArn() const { return m_billingGroupArn; }
    template<typename BillingGroupArnT = Aws::String>
    void SetBillingGroupArn(BillingGroupArnT&& value) { m_billingGroupArnHasBeenSet = true; m_billingGroupArn = std::forward<BillingGroupArnT>(value); }
    template<typename BillingGroupArnT = Aws::String>
    CreateBillingGroupResult& WithBillingGroupArn(BillingGroupArnT&& value) { SetBillingGroupArn(std::forward<BillingGroupArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the billing group.</p>
     */
    inline const Aws::String& GetBillingGroupId() const { return m_billingGroupId; }
    template<typename BillingGroupIdT = Aws::String>
    void SetBillingGroupId(BillingGroupIdT&& value) { m_billingGroupIdHasBeenSet = true; m_billingGroupId = std::forward<BillingGroupIdT>(value); }
    template<typename BillingGroupIdT = Aws::String>
    CreateBillingGroupResult& WithBillingGroupId(BillingGroupIdT&& value) { SetBillingGroupId(std::forward<BillingGroupIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateBillingGroupResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_billingGroupName;
    bool m_billingGroupNameHasBeenSet = false;

    Aws::String m_billingGroupArn;
    bool m_billingGroupArnHasBeenSet = false;

    Aws::String m_billingGroupId;
    bool m_billingGroupIdHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws

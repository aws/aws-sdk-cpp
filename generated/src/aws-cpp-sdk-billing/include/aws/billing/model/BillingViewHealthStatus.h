/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/billing/Billing_EXPORTS.h>
#include <aws/billing/model/BillingViewStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/billing/model/BillingViewStatusReason.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Billing
{
namespace Model
{

  /**
   * <p> Represents the health status of a billing view, including a status code and
   * optional reasons for the status. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/billing-2023-09-07/BillingViewHealthStatus">AWS
   * API Reference</a></p>
   */
  class BillingViewHealthStatus
  {
  public:
    AWS_BILLING_API BillingViewHealthStatus() = default;
    AWS_BILLING_API BillingViewHealthStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_BILLING_API BillingViewHealthStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BILLING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The current health status code of the billing view.</p>
     */
    inline BillingViewStatus GetStatusCode() const { return m_statusCode; }
    inline bool StatusCodeHasBeenSet() const { return m_statusCodeHasBeenSet; }
    inline void SetStatusCode(BillingViewStatus value) { m_statusCodeHasBeenSet = true; m_statusCode = value; }
    inline BillingViewHealthStatus& WithStatusCode(BillingViewStatus value) { SetStatusCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of reasons explaining the current health status, if applicable.</p>
     */
    inline const Aws::Vector<BillingViewStatusReason>& GetStatusReasons() const { return m_statusReasons; }
    inline bool StatusReasonsHasBeenSet() const { return m_statusReasonsHasBeenSet; }
    template<typename StatusReasonsT = Aws::Vector<BillingViewStatusReason>>
    void SetStatusReasons(StatusReasonsT&& value) { m_statusReasonsHasBeenSet = true; m_statusReasons = std::forward<StatusReasonsT>(value); }
    template<typename StatusReasonsT = Aws::Vector<BillingViewStatusReason>>
    BillingViewHealthStatus& WithStatusReasons(StatusReasonsT&& value) { SetStatusReasons(std::forward<StatusReasonsT>(value)); return *this;}
    inline BillingViewHealthStatus& AddStatusReasons(BillingViewStatusReason value) { m_statusReasonsHasBeenSet = true; m_statusReasons.push_back(value); return *this; }
    ///@}
  private:

    BillingViewStatus m_statusCode{BillingViewStatus::NOT_SET};
    bool m_statusCodeHasBeenSet = false;

    Aws::Vector<BillingViewStatusReason> m_statusReasons;
    bool m_statusReasonsHasBeenSet = false;
  };

} // namespace Model
} // namespace Billing
} // namespace Aws

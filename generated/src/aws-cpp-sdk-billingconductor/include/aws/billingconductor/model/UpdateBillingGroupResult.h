/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/billingconductor/BillingConductor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/billingconductor/model/BillingGroupStatus.h>
#include <aws/billingconductor/model/UpdateBillingGroupAccountGrouping.h>
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
namespace BillingConductor
{
namespace Model
{
  class UpdateBillingGroupResult
  {
  public:
    AWS_BILLINGCONDUCTOR_API UpdateBillingGroupResult();
    AWS_BILLINGCONDUCTOR_API UpdateBillingGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BILLINGCONDUCTOR_API UpdateBillingGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the billing group that was updated. </p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline void SetArn(const Aws::String& value) { m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arn.assign(value); }
    inline UpdateBillingGroupResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline UpdateBillingGroupResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline UpdateBillingGroupResult& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the billing group. The names must be unique to each billing
     * group. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline UpdateBillingGroupResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline UpdateBillingGroupResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline UpdateBillingGroupResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> A description of the billing group. </p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline UpdateBillingGroupResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline UpdateBillingGroupResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline UpdateBillingGroupResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The account ID that serves as the main account in a billing group. </p>
     */
    inline const Aws::String& GetPrimaryAccountId() const{ return m_primaryAccountId; }
    inline void SetPrimaryAccountId(const Aws::String& value) { m_primaryAccountId = value; }
    inline void SetPrimaryAccountId(Aws::String&& value) { m_primaryAccountId = std::move(value); }
    inline void SetPrimaryAccountId(const char* value) { m_primaryAccountId.assign(value); }
    inline UpdateBillingGroupResult& WithPrimaryAccountId(const Aws::String& value) { SetPrimaryAccountId(value); return *this;}
    inline UpdateBillingGroupResult& WithPrimaryAccountId(Aws::String&& value) { SetPrimaryAccountId(std::move(value)); return *this;}
    inline UpdateBillingGroupResult& WithPrimaryAccountId(const char* value) { SetPrimaryAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) of the pricing plan to compute Amazon Web
     * Services charges for the billing group. </p>
     */
    inline const Aws::String& GetPricingPlanArn() const{ return m_pricingPlanArn; }
    inline void SetPricingPlanArn(const Aws::String& value) { m_pricingPlanArn = value; }
    inline void SetPricingPlanArn(Aws::String&& value) { m_pricingPlanArn = std::move(value); }
    inline void SetPricingPlanArn(const char* value) { m_pricingPlanArn.assign(value); }
    inline UpdateBillingGroupResult& WithPricingPlanArn(const Aws::String& value) { SetPricingPlanArn(value); return *this;}
    inline UpdateBillingGroupResult& WithPricingPlanArn(Aws::String&& value) { SetPricingPlanArn(std::move(value)); return *this;}
    inline UpdateBillingGroupResult& WithPricingPlanArn(const char* value) { SetPricingPlanArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The number of accounts in the particular billing group. </p>
     */
    inline long long GetSize() const{ return m_size; }
    inline void SetSize(long long value) { m_size = value; }
    inline UpdateBillingGroupResult& WithSize(long long value) { SetSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The most recent time when the billing group was modified. </p>
     */
    inline long long GetLastModifiedTime() const{ return m_lastModifiedTime; }
    inline void SetLastModifiedTime(long long value) { m_lastModifiedTime = value; }
    inline UpdateBillingGroupResult& WithLastModifiedTime(long long value) { SetLastModifiedTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The status of the billing group. Only one of the valid values can be used.
     * </p>
     */
    inline const BillingGroupStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const BillingGroupStatus& value) { m_status = value; }
    inline void SetStatus(BillingGroupStatus&& value) { m_status = std::move(value); }
    inline UpdateBillingGroupResult& WithStatus(const BillingGroupStatus& value) { SetStatus(value); return *this;}
    inline UpdateBillingGroupResult& WithStatus(BillingGroupStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The reason why the billing group is in its current status. </p>
     */
    inline const Aws::String& GetStatusReason() const{ return m_statusReason; }
    inline void SetStatusReason(const Aws::String& value) { m_statusReason = value; }
    inline void SetStatusReason(Aws::String&& value) { m_statusReason = std::move(value); }
    inline void SetStatusReason(const char* value) { m_statusReason.assign(value); }
    inline UpdateBillingGroupResult& WithStatusReason(const Aws::String& value) { SetStatusReason(value); return *this;}
    inline UpdateBillingGroupResult& WithStatusReason(Aws::String&& value) { SetStatusReason(std::move(value)); return *this;}
    inline UpdateBillingGroupResult& WithStatusReason(const char* value) { SetStatusReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies if the billing group has automatic account association
     * (<code>AutoAssociate</code>) enabled.</p>
     */
    inline const UpdateBillingGroupAccountGrouping& GetAccountGrouping() const{ return m_accountGrouping; }
    inline void SetAccountGrouping(const UpdateBillingGroupAccountGrouping& value) { m_accountGrouping = value; }
    inline void SetAccountGrouping(UpdateBillingGroupAccountGrouping&& value) { m_accountGrouping = std::move(value); }
    inline UpdateBillingGroupResult& WithAccountGrouping(const UpdateBillingGroupAccountGrouping& value) { SetAccountGrouping(value); return *this;}
    inline UpdateBillingGroupResult& WithAccountGrouping(UpdateBillingGroupAccountGrouping&& value) { SetAccountGrouping(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UpdateBillingGroupResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UpdateBillingGroupResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UpdateBillingGroupResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;

    Aws::String m_name;

    Aws::String m_description;

    Aws::String m_primaryAccountId;

    Aws::String m_pricingPlanArn;

    long long m_size;

    long long m_lastModifiedTime;

    BillingGroupStatus m_status;

    Aws::String m_statusReason;

    UpdateBillingGroupAccountGrouping m_accountGrouping;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace BillingConductor
} // namespace Aws

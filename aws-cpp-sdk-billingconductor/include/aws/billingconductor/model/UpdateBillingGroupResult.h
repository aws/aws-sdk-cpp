/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/billingconductor/BillingConductor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/billingconductor/model/BillingGroupStatus.h>
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


    /**
     * <p>The Amazon Resource Name (ARN) of the billing group that was updated. </p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the billing group that was updated. </p>
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the billing group that was updated. </p>
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the billing group that was updated. </p>
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the billing group that was updated. </p>
     */
    inline UpdateBillingGroupResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the billing group that was updated. </p>
     */
    inline UpdateBillingGroupResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the billing group that was updated. </p>
     */
    inline UpdateBillingGroupResult& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p> The name of the billing group. The names must be unique to each billing
     * group. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p> The name of the billing group. The names must be unique to each billing
     * group. </p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p> The name of the billing group. The names must be unique to each billing
     * group. </p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p> The name of the billing group. The names must be unique to each billing
     * group. </p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p> The name of the billing group. The names must be unique to each billing
     * group. </p>
     */
    inline UpdateBillingGroupResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p> The name of the billing group. The names must be unique to each billing
     * group. </p>
     */
    inline UpdateBillingGroupResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p> The name of the billing group. The names must be unique to each billing
     * group. </p>
     */
    inline UpdateBillingGroupResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p> A description of the billing group. </p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p> A description of the billing group. </p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p> A description of the billing group. </p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p> A description of the billing group. </p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p> A description of the billing group. </p>
     */
    inline UpdateBillingGroupResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p> A description of the billing group. </p>
     */
    inline UpdateBillingGroupResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p> A description of the billing group. </p>
     */
    inline UpdateBillingGroupResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p> The account ID that serves as the main account in a billing group. </p>
     */
    inline const Aws::String& GetPrimaryAccountId() const{ return m_primaryAccountId; }

    /**
     * <p> The account ID that serves as the main account in a billing group. </p>
     */
    inline void SetPrimaryAccountId(const Aws::String& value) { m_primaryAccountId = value; }

    /**
     * <p> The account ID that serves as the main account in a billing group. </p>
     */
    inline void SetPrimaryAccountId(Aws::String&& value) { m_primaryAccountId = std::move(value); }

    /**
     * <p> The account ID that serves as the main account in a billing group. </p>
     */
    inline void SetPrimaryAccountId(const char* value) { m_primaryAccountId.assign(value); }

    /**
     * <p> The account ID that serves as the main account in a billing group. </p>
     */
    inline UpdateBillingGroupResult& WithPrimaryAccountId(const Aws::String& value) { SetPrimaryAccountId(value); return *this;}

    /**
     * <p> The account ID that serves as the main account in a billing group. </p>
     */
    inline UpdateBillingGroupResult& WithPrimaryAccountId(Aws::String&& value) { SetPrimaryAccountId(std::move(value)); return *this;}

    /**
     * <p> The account ID that serves as the main account in a billing group. </p>
     */
    inline UpdateBillingGroupResult& WithPrimaryAccountId(const char* value) { SetPrimaryAccountId(value); return *this;}


    /**
     * <p> The Amazon Resource Name (ARN) of the pricing plan to compute Amazon Web
     * Services charges for the billing group. </p>
     */
    inline const Aws::String& GetPricingPlanArn() const{ return m_pricingPlanArn; }

    /**
     * <p> The Amazon Resource Name (ARN) of the pricing plan to compute Amazon Web
     * Services charges for the billing group. </p>
     */
    inline void SetPricingPlanArn(const Aws::String& value) { m_pricingPlanArn = value; }

    /**
     * <p> The Amazon Resource Name (ARN) of the pricing plan to compute Amazon Web
     * Services charges for the billing group. </p>
     */
    inline void SetPricingPlanArn(Aws::String&& value) { m_pricingPlanArn = std::move(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of the pricing plan to compute Amazon Web
     * Services charges for the billing group. </p>
     */
    inline void SetPricingPlanArn(const char* value) { m_pricingPlanArn.assign(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of the pricing plan to compute Amazon Web
     * Services charges for the billing group. </p>
     */
    inline UpdateBillingGroupResult& WithPricingPlanArn(const Aws::String& value) { SetPricingPlanArn(value); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of the pricing plan to compute Amazon Web
     * Services charges for the billing group. </p>
     */
    inline UpdateBillingGroupResult& WithPricingPlanArn(Aws::String&& value) { SetPricingPlanArn(std::move(value)); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of the pricing plan to compute Amazon Web
     * Services charges for the billing group. </p>
     */
    inline UpdateBillingGroupResult& WithPricingPlanArn(const char* value) { SetPricingPlanArn(value); return *this;}


    /**
     * <p> The number of accounts in the particular billing group. </p>
     */
    inline long long GetSize() const{ return m_size; }

    /**
     * <p> The number of accounts in the particular billing group. </p>
     */
    inline void SetSize(long long value) { m_size = value; }

    /**
     * <p> The number of accounts in the particular billing group. </p>
     */
    inline UpdateBillingGroupResult& WithSize(long long value) { SetSize(value); return *this;}


    /**
     * <p> The most recent time when the billing group was modified. </p>
     */
    inline long long GetLastModifiedTime() const{ return m_lastModifiedTime; }

    /**
     * <p> The most recent time when the billing group was modified. </p>
     */
    inline void SetLastModifiedTime(long long value) { m_lastModifiedTime = value; }

    /**
     * <p> The most recent time when the billing group was modified. </p>
     */
    inline UpdateBillingGroupResult& WithLastModifiedTime(long long value) { SetLastModifiedTime(value); return *this;}


    /**
     * <p> The status of the billing group. Only one of the valid values can be used.
     * </p>
     */
    inline const BillingGroupStatus& GetStatus() const{ return m_status; }

    /**
     * <p> The status of the billing group. Only one of the valid values can be used.
     * </p>
     */
    inline void SetStatus(const BillingGroupStatus& value) { m_status = value; }

    /**
     * <p> The status of the billing group. Only one of the valid values can be used.
     * </p>
     */
    inline void SetStatus(BillingGroupStatus&& value) { m_status = std::move(value); }

    /**
     * <p> The status of the billing group. Only one of the valid values can be used.
     * </p>
     */
    inline UpdateBillingGroupResult& WithStatus(const BillingGroupStatus& value) { SetStatus(value); return *this;}

    /**
     * <p> The status of the billing group. Only one of the valid values can be used.
     * </p>
     */
    inline UpdateBillingGroupResult& WithStatus(BillingGroupStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p> The reason why the billing group is in its current status. </p>
     */
    inline const Aws::String& GetStatusReason() const{ return m_statusReason; }

    /**
     * <p> The reason why the billing group is in its current status. </p>
     */
    inline void SetStatusReason(const Aws::String& value) { m_statusReason = value; }

    /**
     * <p> The reason why the billing group is in its current status. </p>
     */
    inline void SetStatusReason(Aws::String&& value) { m_statusReason = std::move(value); }

    /**
     * <p> The reason why the billing group is in its current status. </p>
     */
    inline void SetStatusReason(const char* value) { m_statusReason.assign(value); }

    /**
     * <p> The reason why the billing group is in its current status. </p>
     */
    inline UpdateBillingGroupResult& WithStatusReason(const Aws::String& value) { SetStatusReason(value); return *this;}

    /**
     * <p> The reason why the billing group is in its current status. </p>
     */
    inline UpdateBillingGroupResult& WithStatusReason(Aws::String&& value) { SetStatusReason(std::move(value)); return *this;}

    /**
     * <p> The reason why the billing group is in its current status. </p>
     */
    inline UpdateBillingGroupResult& WithStatusReason(const char* value) { SetStatusReason(value); return *this;}

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
  };

} // namespace Model
} // namespace BillingConductor
} // namespace Aws

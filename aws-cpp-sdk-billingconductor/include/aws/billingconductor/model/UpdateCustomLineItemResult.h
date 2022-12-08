/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/billingconductor/BillingConductor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/billingconductor/model/ListCustomLineItemChargeDetails.h>
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
  class UpdateCustomLineItemResult
  {
  public:
    AWS_BILLINGCONDUCTOR_API UpdateCustomLineItemResult();
    AWS_BILLINGCONDUCTOR_API UpdateCustomLineItemResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BILLINGCONDUCTOR_API UpdateCustomLineItemResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> The ARN of the successfully updated custom line item. </p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p> The ARN of the successfully updated custom line item. </p>
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * <p> The ARN of the successfully updated custom line item. </p>
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * <p> The ARN of the successfully updated custom line item. </p>
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * <p> The ARN of the successfully updated custom line item. </p>
     */
    inline UpdateCustomLineItemResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p> The ARN of the successfully updated custom line item. </p>
     */
    inline UpdateCustomLineItemResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p> The ARN of the successfully updated custom line item. </p>
     */
    inline UpdateCustomLineItemResult& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p> The ARN of the billing group that the custom line item is applied to. </p>
     */
    inline const Aws::String& GetBillingGroupArn() const{ return m_billingGroupArn; }

    /**
     * <p> The ARN of the billing group that the custom line item is applied to. </p>
     */
    inline void SetBillingGroupArn(const Aws::String& value) { m_billingGroupArn = value; }

    /**
     * <p> The ARN of the billing group that the custom line item is applied to. </p>
     */
    inline void SetBillingGroupArn(Aws::String&& value) { m_billingGroupArn = std::move(value); }

    /**
     * <p> The ARN of the billing group that the custom line item is applied to. </p>
     */
    inline void SetBillingGroupArn(const char* value) { m_billingGroupArn.assign(value); }

    /**
     * <p> The ARN of the billing group that the custom line item is applied to. </p>
     */
    inline UpdateCustomLineItemResult& WithBillingGroupArn(const Aws::String& value) { SetBillingGroupArn(value); return *this;}

    /**
     * <p> The ARN of the billing group that the custom line item is applied to. </p>
     */
    inline UpdateCustomLineItemResult& WithBillingGroupArn(Aws::String&& value) { SetBillingGroupArn(std::move(value)); return *this;}

    /**
     * <p> The ARN of the billing group that the custom line item is applied to. </p>
     */
    inline UpdateCustomLineItemResult& WithBillingGroupArn(const char* value) { SetBillingGroupArn(value); return *this;}


    /**
     * <p> The name of the successfully updated custom line item. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p> The name of the successfully updated custom line item. </p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p> The name of the successfully updated custom line item. </p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p> The name of the successfully updated custom line item. </p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p> The name of the successfully updated custom line item. </p>
     */
    inline UpdateCustomLineItemResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p> The name of the successfully updated custom line item. </p>
     */
    inline UpdateCustomLineItemResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p> The name of the successfully updated custom line item. </p>
     */
    inline UpdateCustomLineItemResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p> The description of the successfully updated custom line item. </p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p> The description of the successfully updated custom line item. </p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p> The description of the successfully updated custom line item. </p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p> The description of the successfully updated custom line item. </p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p> The description of the successfully updated custom line item. </p>
     */
    inline UpdateCustomLineItemResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p> The description of the successfully updated custom line item. </p>
     */
    inline UpdateCustomLineItemResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p> The description of the successfully updated custom line item. </p>
     */
    inline UpdateCustomLineItemResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p> A <code>ListCustomLineItemChargeDetails</code> containing the charge details
     * of the successfully updated custom line item. </p>
     */
    inline const ListCustomLineItemChargeDetails& GetChargeDetails() const{ return m_chargeDetails; }

    /**
     * <p> A <code>ListCustomLineItemChargeDetails</code> containing the charge details
     * of the successfully updated custom line item. </p>
     */
    inline void SetChargeDetails(const ListCustomLineItemChargeDetails& value) { m_chargeDetails = value; }

    /**
     * <p> A <code>ListCustomLineItemChargeDetails</code> containing the charge details
     * of the successfully updated custom line item. </p>
     */
    inline void SetChargeDetails(ListCustomLineItemChargeDetails&& value) { m_chargeDetails = std::move(value); }

    /**
     * <p> A <code>ListCustomLineItemChargeDetails</code> containing the charge details
     * of the successfully updated custom line item. </p>
     */
    inline UpdateCustomLineItemResult& WithChargeDetails(const ListCustomLineItemChargeDetails& value) { SetChargeDetails(value); return *this;}

    /**
     * <p> A <code>ListCustomLineItemChargeDetails</code> containing the charge details
     * of the successfully updated custom line item. </p>
     */
    inline UpdateCustomLineItemResult& WithChargeDetails(ListCustomLineItemChargeDetails&& value) { SetChargeDetails(std::move(value)); return *this;}


    /**
     * <p> The most recent time when the custom line item was modified. </p>
     */
    inline long long GetLastModifiedTime() const{ return m_lastModifiedTime; }

    /**
     * <p> The most recent time when the custom line item was modified. </p>
     */
    inline void SetLastModifiedTime(long long value) { m_lastModifiedTime = value; }

    /**
     * <p> The most recent time when the custom line item was modified. </p>
     */
    inline UpdateCustomLineItemResult& WithLastModifiedTime(long long value) { SetLastModifiedTime(value); return *this;}


    /**
     * <p> The number of resources that are associated to the custom line item. </p>
     */
    inline long long GetAssociationSize() const{ return m_associationSize; }

    /**
     * <p> The number of resources that are associated to the custom line item. </p>
     */
    inline void SetAssociationSize(long long value) { m_associationSize = value; }

    /**
     * <p> The number of resources that are associated to the custom line item. </p>
     */
    inline UpdateCustomLineItemResult& WithAssociationSize(long long value) { SetAssociationSize(value); return *this;}

  private:

    Aws::String m_arn;

    Aws::String m_billingGroupArn;

    Aws::String m_name;

    Aws::String m_description;

    ListCustomLineItemChargeDetails m_chargeDetails;

    long long m_lastModifiedTime;

    long long m_associationSize;
  };

} // namespace Model
} // namespace BillingConductor
} // namespace Aws

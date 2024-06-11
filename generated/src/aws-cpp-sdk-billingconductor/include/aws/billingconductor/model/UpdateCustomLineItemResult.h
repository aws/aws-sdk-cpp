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


    ///@{
    /**
     * <p> The ARN of the successfully updated custom line item. </p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline void SetArn(const Aws::String& value) { m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arn.assign(value); }
    inline UpdateCustomLineItemResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline UpdateCustomLineItemResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline UpdateCustomLineItemResult& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The ARN of the billing group that the custom line item is applied to. </p>
     */
    inline const Aws::String& GetBillingGroupArn() const{ return m_billingGroupArn; }
    inline void SetBillingGroupArn(const Aws::String& value) { m_billingGroupArn = value; }
    inline void SetBillingGroupArn(Aws::String&& value) { m_billingGroupArn = std::move(value); }
    inline void SetBillingGroupArn(const char* value) { m_billingGroupArn.assign(value); }
    inline UpdateCustomLineItemResult& WithBillingGroupArn(const Aws::String& value) { SetBillingGroupArn(value); return *this;}
    inline UpdateCustomLineItemResult& WithBillingGroupArn(Aws::String&& value) { SetBillingGroupArn(std::move(value)); return *this;}
    inline UpdateCustomLineItemResult& WithBillingGroupArn(const char* value) { SetBillingGroupArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the successfully updated custom line item. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline UpdateCustomLineItemResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline UpdateCustomLineItemResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline UpdateCustomLineItemResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The description of the successfully updated custom line item. </p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline UpdateCustomLineItemResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline UpdateCustomLineItemResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline UpdateCustomLineItemResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> A <code>ListCustomLineItemChargeDetails</code> containing the charge details
     * of the successfully updated custom line item. </p>
     */
    inline const ListCustomLineItemChargeDetails& GetChargeDetails() const{ return m_chargeDetails; }
    inline void SetChargeDetails(const ListCustomLineItemChargeDetails& value) { m_chargeDetails = value; }
    inline void SetChargeDetails(ListCustomLineItemChargeDetails&& value) { m_chargeDetails = std::move(value); }
    inline UpdateCustomLineItemResult& WithChargeDetails(const ListCustomLineItemChargeDetails& value) { SetChargeDetails(value); return *this;}
    inline UpdateCustomLineItemResult& WithChargeDetails(ListCustomLineItemChargeDetails&& value) { SetChargeDetails(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The most recent time when the custom line item was modified. </p>
     */
    inline long long GetLastModifiedTime() const{ return m_lastModifiedTime; }
    inline void SetLastModifiedTime(long long value) { m_lastModifiedTime = value; }
    inline UpdateCustomLineItemResult& WithLastModifiedTime(long long value) { SetLastModifiedTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The number of resources that are associated to the custom line item. </p>
     */
    inline long long GetAssociationSize() const{ return m_associationSize; }
    inline void SetAssociationSize(long long value) { m_associationSize = value; }
    inline UpdateCustomLineItemResult& WithAssociationSize(long long value) { SetAssociationSize(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UpdateCustomLineItemResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UpdateCustomLineItemResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UpdateCustomLineItemResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;

    Aws::String m_billingGroupArn;

    Aws::String m_name;

    Aws::String m_description;

    ListCustomLineItemChargeDetails m_chargeDetails;

    long long m_lastModifiedTime;

    long long m_associationSize;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace BillingConductor
} // namespace Aws

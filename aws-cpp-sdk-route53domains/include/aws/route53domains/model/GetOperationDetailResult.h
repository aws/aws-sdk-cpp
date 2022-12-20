/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53domains/Route53Domains_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53domains/model/OperationStatus.h>
#include <aws/route53domains/model/OperationType.h>
#include <aws/core/utils/DateTime.h>
#include <aws/route53domains/model/StatusFlag.h>
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
namespace Route53Domains
{
namespace Model
{
  /**
   * <p>The GetOperationDetail response includes the following
   * elements.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53domains-2014-05-15/GetOperationDetailResponse">AWS
   * API Reference</a></p>
   */
  class GetOperationDetailResult
  {
  public:
    AWS_ROUTE53DOMAINS_API GetOperationDetailResult();
    AWS_ROUTE53DOMAINS_API GetOperationDetailResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROUTE53DOMAINS_API GetOperationDetailResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The identifier for the operation.</p>
     */
    inline const Aws::String& GetOperationId() const{ return m_operationId; }

    /**
     * <p>The identifier for the operation.</p>
     */
    inline void SetOperationId(const Aws::String& value) { m_operationId = value; }

    /**
     * <p>The identifier for the operation.</p>
     */
    inline void SetOperationId(Aws::String&& value) { m_operationId = std::move(value); }

    /**
     * <p>The identifier for the operation.</p>
     */
    inline void SetOperationId(const char* value) { m_operationId.assign(value); }

    /**
     * <p>The identifier for the operation.</p>
     */
    inline GetOperationDetailResult& WithOperationId(const Aws::String& value) { SetOperationId(value); return *this;}

    /**
     * <p>The identifier for the operation.</p>
     */
    inline GetOperationDetailResult& WithOperationId(Aws::String&& value) { SetOperationId(std::move(value)); return *this;}

    /**
     * <p>The identifier for the operation.</p>
     */
    inline GetOperationDetailResult& WithOperationId(const char* value) { SetOperationId(value); return *this;}


    /**
     * <p>The current status of the requested operation in the system.</p>
     */
    inline const OperationStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The current status of the requested operation in the system.</p>
     */
    inline void SetStatus(const OperationStatus& value) { m_status = value; }

    /**
     * <p>The current status of the requested operation in the system.</p>
     */
    inline void SetStatus(OperationStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The current status of the requested operation in the system.</p>
     */
    inline GetOperationDetailResult& WithStatus(const OperationStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The current status of the requested operation in the system.</p>
     */
    inline GetOperationDetailResult& WithStatus(OperationStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>Detailed information on the status including possible errors.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>Detailed information on the status including possible errors.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_message = value; }

    /**
     * <p>Detailed information on the status including possible errors.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_message = std::move(value); }

    /**
     * <p>Detailed information on the status including possible errors.</p>
     */
    inline void SetMessage(const char* value) { m_message.assign(value); }

    /**
     * <p>Detailed information on the status including possible errors.</p>
     */
    inline GetOperationDetailResult& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>Detailed information on the status including possible errors.</p>
     */
    inline GetOperationDetailResult& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>Detailed information on the status including possible errors.</p>
     */
    inline GetOperationDetailResult& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <p>The name of a domain.</p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }

    /**
     * <p>The name of a domain.</p>
     */
    inline void SetDomainName(const Aws::String& value) { m_domainName = value; }

    /**
     * <p>The name of a domain.</p>
     */
    inline void SetDomainName(Aws::String&& value) { m_domainName = std::move(value); }

    /**
     * <p>The name of a domain.</p>
     */
    inline void SetDomainName(const char* value) { m_domainName.assign(value); }

    /**
     * <p>The name of a domain.</p>
     */
    inline GetOperationDetailResult& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    /**
     * <p>The name of a domain.</p>
     */
    inline GetOperationDetailResult& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}

    /**
     * <p>The name of a domain.</p>
     */
    inline GetOperationDetailResult& WithDomainName(const char* value) { SetDomainName(value); return *this;}


    /**
     * <p>The type of operation that was requested.</p>
     */
    inline const OperationType& GetType() const{ return m_type; }

    /**
     * <p>The type of operation that was requested.</p>
     */
    inline void SetType(const OperationType& value) { m_type = value; }

    /**
     * <p>The type of operation that was requested.</p>
     */
    inline void SetType(OperationType&& value) { m_type = std::move(value); }

    /**
     * <p>The type of operation that was requested.</p>
     */
    inline GetOperationDetailResult& WithType(const OperationType& value) { SetType(value); return *this;}

    /**
     * <p>The type of operation that was requested.</p>
     */
    inline GetOperationDetailResult& WithType(OperationType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The date when the request was submitted.</p>
     */
    inline const Aws::Utils::DateTime& GetSubmittedDate() const{ return m_submittedDate; }

    /**
     * <p>The date when the request was submitted.</p>
     */
    inline void SetSubmittedDate(const Aws::Utils::DateTime& value) { m_submittedDate = value; }

    /**
     * <p>The date when the request was submitted.</p>
     */
    inline void SetSubmittedDate(Aws::Utils::DateTime&& value) { m_submittedDate = std::move(value); }

    /**
     * <p>The date when the request was submitted.</p>
     */
    inline GetOperationDetailResult& WithSubmittedDate(const Aws::Utils::DateTime& value) { SetSubmittedDate(value); return *this;}

    /**
     * <p>The date when the request was submitted.</p>
     */
    inline GetOperationDetailResult& WithSubmittedDate(Aws::Utils::DateTime&& value) { SetSubmittedDate(std::move(value)); return *this;}


    /**
     * <p> The date when the operation was last updated. </p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedDate() const{ return m_lastUpdatedDate; }

    /**
     * <p> The date when the operation was last updated. </p>
     */
    inline void SetLastUpdatedDate(const Aws::Utils::DateTime& value) { m_lastUpdatedDate = value; }

    /**
     * <p> The date when the operation was last updated. </p>
     */
    inline void SetLastUpdatedDate(Aws::Utils::DateTime&& value) { m_lastUpdatedDate = std::move(value); }

    /**
     * <p> The date when the operation was last updated. </p>
     */
    inline GetOperationDetailResult& WithLastUpdatedDate(const Aws::Utils::DateTime& value) { SetLastUpdatedDate(value); return *this;}

    /**
     * <p> The date when the operation was last updated. </p>
     */
    inline GetOperationDetailResult& WithLastUpdatedDate(Aws::Utils::DateTime&& value) { SetLastUpdatedDate(std::move(value)); return *this;}


    /**
     * <p> Lists any outstanding operations that require customer action. Valid values
     * are:</p> <ul> <li> <p> <code>PENDING_ACCEPTANCE</code>: The operation is waiting
     * for acceptance from the account that is receiving the domain.</p> </li> <li> <p>
     * <code>PENDING_CUSTOMER_ACTION</code>: The operation is waiting for customer
     * action, for example, returning an email.</p> </li> <li> <p>
     * <code>PENDING_AUTHORIZATION</code>: The operation is waiting for the form of
     * authorization. For more information, see <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_domains_ResendOperationAuthorization.html">ResendOperationAuthorization</a>.</p>
     * </li> <li> <p> <code>PENDING_PAYMENT_VERIFICATION</code>: The operation is
     * waiting for the payment method to validate.</p> </li> <li> <p>
     * <code>PENDING_SUPPORT_CASE</code>: The operation includes a support case and is
     * waiting for its resolution.</p> </li> </ul>
     */
    inline const StatusFlag& GetStatusFlag() const{ return m_statusFlag; }

    /**
     * <p> Lists any outstanding operations that require customer action. Valid values
     * are:</p> <ul> <li> <p> <code>PENDING_ACCEPTANCE</code>: The operation is waiting
     * for acceptance from the account that is receiving the domain.</p> </li> <li> <p>
     * <code>PENDING_CUSTOMER_ACTION</code>: The operation is waiting for customer
     * action, for example, returning an email.</p> </li> <li> <p>
     * <code>PENDING_AUTHORIZATION</code>: The operation is waiting for the form of
     * authorization. For more information, see <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_domains_ResendOperationAuthorization.html">ResendOperationAuthorization</a>.</p>
     * </li> <li> <p> <code>PENDING_PAYMENT_VERIFICATION</code>: The operation is
     * waiting for the payment method to validate.</p> </li> <li> <p>
     * <code>PENDING_SUPPORT_CASE</code>: The operation includes a support case and is
     * waiting for its resolution.</p> </li> </ul>
     */
    inline void SetStatusFlag(const StatusFlag& value) { m_statusFlag = value; }

    /**
     * <p> Lists any outstanding operations that require customer action. Valid values
     * are:</p> <ul> <li> <p> <code>PENDING_ACCEPTANCE</code>: The operation is waiting
     * for acceptance from the account that is receiving the domain.</p> </li> <li> <p>
     * <code>PENDING_CUSTOMER_ACTION</code>: The operation is waiting for customer
     * action, for example, returning an email.</p> </li> <li> <p>
     * <code>PENDING_AUTHORIZATION</code>: The operation is waiting for the form of
     * authorization. For more information, see <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_domains_ResendOperationAuthorization.html">ResendOperationAuthorization</a>.</p>
     * </li> <li> <p> <code>PENDING_PAYMENT_VERIFICATION</code>: The operation is
     * waiting for the payment method to validate.</p> </li> <li> <p>
     * <code>PENDING_SUPPORT_CASE</code>: The operation includes a support case and is
     * waiting for its resolution.</p> </li> </ul>
     */
    inline void SetStatusFlag(StatusFlag&& value) { m_statusFlag = std::move(value); }

    /**
     * <p> Lists any outstanding operations that require customer action. Valid values
     * are:</p> <ul> <li> <p> <code>PENDING_ACCEPTANCE</code>: The operation is waiting
     * for acceptance from the account that is receiving the domain.</p> </li> <li> <p>
     * <code>PENDING_CUSTOMER_ACTION</code>: The operation is waiting for customer
     * action, for example, returning an email.</p> </li> <li> <p>
     * <code>PENDING_AUTHORIZATION</code>: The operation is waiting for the form of
     * authorization. For more information, see <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_domains_ResendOperationAuthorization.html">ResendOperationAuthorization</a>.</p>
     * </li> <li> <p> <code>PENDING_PAYMENT_VERIFICATION</code>: The operation is
     * waiting for the payment method to validate.</p> </li> <li> <p>
     * <code>PENDING_SUPPORT_CASE</code>: The operation includes a support case and is
     * waiting for its resolution.</p> </li> </ul>
     */
    inline GetOperationDetailResult& WithStatusFlag(const StatusFlag& value) { SetStatusFlag(value); return *this;}

    /**
     * <p> Lists any outstanding operations that require customer action. Valid values
     * are:</p> <ul> <li> <p> <code>PENDING_ACCEPTANCE</code>: The operation is waiting
     * for acceptance from the account that is receiving the domain.</p> </li> <li> <p>
     * <code>PENDING_CUSTOMER_ACTION</code>: The operation is waiting for customer
     * action, for example, returning an email.</p> </li> <li> <p>
     * <code>PENDING_AUTHORIZATION</code>: The operation is waiting for the form of
     * authorization. For more information, see <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_domains_ResendOperationAuthorization.html">ResendOperationAuthorization</a>.</p>
     * </li> <li> <p> <code>PENDING_PAYMENT_VERIFICATION</code>: The operation is
     * waiting for the payment method to validate.</p> </li> <li> <p>
     * <code>PENDING_SUPPORT_CASE</code>: The operation includes a support case and is
     * waiting for its resolution.</p> </li> </ul>
     */
    inline GetOperationDetailResult& WithStatusFlag(StatusFlag&& value) { SetStatusFlag(std::move(value)); return *this;}

  private:

    Aws::String m_operationId;

    OperationStatus m_status;

    Aws::String m_message;

    Aws::String m_domainName;

    OperationType m_type;

    Aws::Utils::DateTime m_submittedDate;

    Aws::Utils::DateTime m_lastUpdatedDate;

    StatusFlag m_statusFlag;
  };

} // namespace Model
} // namespace Route53Domains
} // namespace Aws

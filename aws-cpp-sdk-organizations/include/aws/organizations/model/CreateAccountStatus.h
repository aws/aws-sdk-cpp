/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/organizations/Organizations_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/organizations/model/CreateAccountState.h>
#include <aws/core/utils/DateTime.h>
#include <aws/organizations/model/CreateAccountFailureReason.h>
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
namespace Organizations
{
namespace Model
{

  /**
   * <p>Contains the status about a <a>CreateAccount</a> or
   * <a>CreateGovCloudAccount</a> request to create an Amazon Web Services account or
   * an Amazon Web Services GovCloud (US) account in an organization.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/CreateAccountStatus">AWS
   * API Reference</a></p>
   */
  class CreateAccountStatus
  {
  public:
    AWS_ORGANIZATIONS_API CreateAccountStatus();
    AWS_ORGANIZATIONS_API CreateAccountStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_ORGANIZATIONS_API CreateAccountStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ORGANIZATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique identifier (ID) that references this request. You get this value
     * from the response of the initial <a>CreateAccount</a> request to create the
     * account.</p> <p>The <a href="http://wikipedia.org/wiki/regex">regex pattern</a>
     * for a create account request ID string requires "car-" followed by from 8 to 32
     * lowercase letters or digits.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The unique identifier (ID) that references this request. You get this value
     * from the response of the initial <a>CreateAccount</a> request to create the
     * account.</p> <p>The <a href="http://wikipedia.org/wiki/regex">regex pattern</a>
     * for a create account request ID string requires "car-" followed by from 8 to 32
     * lowercase letters or digits.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The unique identifier (ID) that references this request. You get this value
     * from the response of the initial <a>CreateAccount</a> request to create the
     * account.</p> <p>The <a href="http://wikipedia.org/wiki/regex">regex pattern</a>
     * for a create account request ID string requires "car-" followed by from 8 to 32
     * lowercase letters or digits.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The unique identifier (ID) that references this request. You get this value
     * from the response of the initial <a>CreateAccount</a> request to create the
     * account.</p> <p>The <a href="http://wikipedia.org/wiki/regex">regex pattern</a>
     * for a create account request ID string requires "car-" followed by from 8 to 32
     * lowercase letters or digits.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The unique identifier (ID) that references this request. You get this value
     * from the response of the initial <a>CreateAccount</a> request to create the
     * account.</p> <p>The <a href="http://wikipedia.org/wiki/regex">regex pattern</a>
     * for a create account request ID string requires "car-" followed by from 8 to 32
     * lowercase letters or digits.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The unique identifier (ID) that references this request. You get this value
     * from the response of the initial <a>CreateAccount</a> request to create the
     * account.</p> <p>The <a href="http://wikipedia.org/wiki/regex">regex pattern</a>
     * for a create account request ID string requires "car-" followed by from 8 to 32
     * lowercase letters or digits.</p>
     */
    inline CreateAccountStatus& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The unique identifier (ID) that references this request. You get this value
     * from the response of the initial <a>CreateAccount</a> request to create the
     * account.</p> <p>The <a href="http://wikipedia.org/wiki/regex">regex pattern</a>
     * for a create account request ID string requires "car-" followed by from 8 to 32
     * lowercase letters or digits.</p>
     */
    inline CreateAccountStatus& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier (ID) that references this request. You get this value
     * from the response of the initial <a>CreateAccount</a> request to create the
     * account.</p> <p>The <a href="http://wikipedia.org/wiki/regex">regex pattern</a>
     * for a create account request ID string requires "car-" followed by from 8 to 32
     * lowercase letters or digits.</p>
     */
    inline CreateAccountStatus& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The account name given to the account when it was created.</p>
     */
    inline const Aws::String& GetAccountName() const{ return m_accountName; }

    /**
     * <p>The account name given to the account when it was created.</p>
     */
    inline bool AccountNameHasBeenSet() const { return m_accountNameHasBeenSet; }

    /**
     * <p>The account name given to the account when it was created.</p>
     */
    inline void SetAccountName(const Aws::String& value) { m_accountNameHasBeenSet = true; m_accountName = value; }

    /**
     * <p>The account name given to the account when it was created.</p>
     */
    inline void SetAccountName(Aws::String&& value) { m_accountNameHasBeenSet = true; m_accountName = std::move(value); }

    /**
     * <p>The account name given to the account when it was created.</p>
     */
    inline void SetAccountName(const char* value) { m_accountNameHasBeenSet = true; m_accountName.assign(value); }

    /**
     * <p>The account name given to the account when it was created.</p>
     */
    inline CreateAccountStatus& WithAccountName(const Aws::String& value) { SetAccountName(value); return *this;}

    /**
     * <p>The account name given to the account when it was created.</p>
     */
    inline CreateAccountStatus& WithAccountName(Aws::String&& value) { SetAccountName(std::move(value)); return *this;}

    /**
     * <p>The account name given to the account when it was created.</p>
     */
    inline CreateAccountStatus& WithAccountName(const char* value) { SetAccountName(value); return *this;}


    /**
     * <p>The status of the asynchronous request to create an Amazon Web Services
     * account.</p>
     */
    inline const CreateAccountState& GetState() const{ return m_state; }

    /**
     * <p>The status of the asynchronous request to create an Amazon Web Services
     * account.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The status of the asynchronous request to create an Amazon Web Services
     * account.</p>
     */
    inline void SetState(const CreateAccountState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The status of the asynchronous request to create an Amazon Web Services
     * account.</p>
     */
    inline void SetState(CreateAccountState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The status of the asynchronous request to create an Amazon Web Services
     * account.</p>
     */
    inline CreateAccountStatus& WithState(const CreateAccountState& value) { SetState(value); return *this;}

    /**
     * <p>The status of the asynchronous request to create an Amazon Web Services
     * account.</p>
     */
    inline CreateAccountStatus& WithState(CreateAccountState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>The date and time that the request was made for the account creation.</p>
     */
    inline const Aws::Utils::DateTime& GetRequestedTimestamp() const{ return m_requestedTimestamp; }

    /**
     * <p>The date and time that the request was made for the account creation.</p>
     */
    inline bool RequestedTimestampHasBeenSet() const { return m_requestedTimestampHasBeenSet; }

    /**
     * <p>The date and time that the request was made for the account creation.</p>
     */
    inline void SetRequestedTimestamp(const Aws::Utils::DateTime& value) { m_requestedTimestampHasBeenSet = true; m_requestedTimestamp = value; }

    /**
     * <p>The date and time that the request was made for the account creation.</p>
     */
    inline void SetRequestedTimestamp(Aws::Utils::DateTime&& value) { m_requestedTimestampHasBeenSet = true; m_requestedTimestamp = std::move(value); }

    /**
     * <p>The date and time that the request was made for the account creation.</p>
     */
    inline CreateAccountStatus& WithRequestedTimestamp(const Aws::Utils::DateTime& value) { SetRequestedTimestamp(value); return *this;}

    /**
     * <p>The date and time that the request was made for the account creation.</p>
     */
    inline CreateAccountStatus& WithRequestedTimestamp(Aws::Utils::DateTime&& value) { SetRequestedTimestamp(std::move(value)); return *this;}


    /**
     * <p>The date and time that the account was created and the request completed.</p>
     */
    inline const Aws::Utils::DateTime& GetCompletedTimestamp() const{ return m_completedTimestamp; }

    /**
     * <p>The date and time that the account was created and the request completed.</p>
     */
    inline bool CompletedTimestampHasBeenSet() const { return m_completedTimestampHasBeenSet; }

    /**
     * <p>The date and time that the account was created and the request completed.</p>
     */
    inline void SetCompletedTimestamp(const Aws::Utils::DateTime& value) { m_completedTimestampHasBeenSet = true; m_completedTimestamp = value; }

    /**
     * <p>The date and time that the account was created and the request completed.</p>
     */
    inline void SetCompletedTimestamp(Aws::Utils::DateTime&& value) { m_completedTimestampHasBeenSet = true; m_completedTimestamp = std::move(value); }

    /**
     * <p>The date and time that the account was created and the request completed.</p>
     */
    inline CreateAccountStatus& WithCompletedTimestamp(const Aws::Utils::DateTime& value) { SetCompletedTimestamp(value); return *this;}

    /**
     * <p>The date and time that the account was created and the request completed.</p>
     */
    inline CreateAccountStatus& WithCompletedTimestamp(Aws::Utils::DateTime&& value) { SetCompletedTimestamp(std::move(value)); return *this;}


    /**
     * <p>If the account was created successfully, the unique identifier (ID) of the
     * new account.</p> <p>The <a href="http://wikipedia.org/wiki/regex">regex
     * pattern</a> for an account ID string requires exactly 12 digits.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p>If the account was created successfully, the unique identifier (ID) of the
     * new account.</p> <p>The <a href="http://wikipedia.org/wiki/regex">regex
     * pattern</a> for an account ID string requires exactly 12 digits.</p>
     */
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    /**
     * <p>If the account was created successfully, the unique identifier (ID) of the
     * new account.</p> <p>The <a href="http://wikipedia.org/wiki/regex">regex
     * pattern</a> for an account ID string requires exactly 12 digits.</p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>If the account was created successfully, the unique identifier (ID) of the
     * new account.</p> <p>The <a href="http://wikipedia.org/wiki/regex">regex
     * pattern</a> for an account ID string requires exactly 12 digits.</p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    /**
     * <p>If the account was created successfully, the unique identifier (ID) of the
     * new account.</p> <p>The <a href="http://wikipedia.org/wiki/regex">regex
     * pattern</a> for an account ID string requires exactly 12 digits.</p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p>If the account was created successfully, the unique identifier (ID) of the
     * new account.</p> <p>The <a href="http://wikipedia.org/wiki/regex">regex
     * pattern</a> for an account ID string requires exactly 12 digits.</p>
     */
    inline CreateAccountStatus& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>If the account was created successfully, the unique identifier (ID) of the
     * new account.</p> <p>The <a href="http://wikipedia.org/wiki/regex">regex
     * pattern</a> for an account ID string requires exactly 12 digits.</p>
     */
    inline CreateAccountStatus& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p>If the account was created successfully, the unique identifier (ID) of the
     * new account.</p> <p>The <a href="http://wikipedia.org/wiki/regex">regex
     * pattern</a> for an account ID string requires exactly 12 digits.</p>
     */
    inline CreateAccountStatus& WithAccountId(const char* value) { SetAccountId(value); return *this;}


    /**
     * <p>If the account was created successfully, the unique identifier (ID) of the
     * new account in the Amazon Web Services GovCloud (US) Region.</p>
     */
    inline const Aws::String& GetGovCloudAccountId() const{ return m_govCloudAccountId; }

    /**
     * <p>If the account was created successfully, the unique identifier (ID) of the
     * new account in the Amazon Web Services GovCloud (US) Region.</p>
     */
    inline bool GovCloudAccountIdHasBeenSet() const { return m_govCloudAccountIdHasBeenSet; }

    /**
     * <p>If the account was created successfully, the unique identifier (ID) of the
     * new account in the Amazon Web Services GovCloud (US) Region.</p>
     */
    inline void SetGovCloudAccountId(const Aws::String& value) { m_govCloudAccountIdHasBeenSet = true; m_govCloudAccountId = value; }

    /**
     * <p>If the account was created successfully, the unique identifier (ID) of the
     * new account in the Amazon Web Services GovCloud (US) Region.</p>
     */
    inline void SetGovCloudAccountId(Aws::String&& value) { m_govCloudAccountIdHasBeenSet = true; m_govCloudAccountId = std::move(value); }

    /**
     * <p>If the account was created successfully, the unique identifier (ID) of the
     * new account in the Amazon Web Services GovCloud (US) Region.</p>
     */
    inline void SetGovCloudAccountId(const char* value) { m_govCloudAccountIdHasBeenSet = true; m_govCloudAccountId.assign(value); }

    /**
     * <p>If the account was created successfully, the unique identifier (ID) of the
     * new account in the Amazon Web Services GovCloud (US) Region.</p>
     */
    inline CreateAccountStatus& WithGovCloudAccountId(const Aws::String& value) { SetGovCloudAccountId(value); return *this;}

    /**
     * <p>If the account was created successfully, the unique identifier (ID) of the
     * new account in the Amazon Web Services GovCloud (US) Region.</p>
     */
    inline CreateAccountStatus& WithGovCloudAccountId(Aws::String&& value) { SetGovCloudAccountId(std::move(value)); return *this;}

    /**
     * <p>If the account was created successfully, the unique identifier (ID) of the
     * new account in the Amazon Web Services GovCloud (US) Region.</p>
     */
    inline CreateAccountStatus& WithGovCloudAccountId(const char* value) { SetGovCloudAccountId(value); return *this;}


    /**
     * <p>If the request failed, a description of the reason for the failure.</p> <ul>
     * <li> <p>ACCOUNT_LIMIT_EXCEEDED: The account couldn't be created because you
     * reached the limit on the number of accounts in your organization.</p> </li> <li>
     * <p>CONCURRENT_ACCOUNT_MODIFICATION: You already submitted a request with the
     * same information.</p> </li> <li> <p>EMAIL_ALREADY_EXISTS: The account could not
     * be created because another Amazon Web Services account with that email address
     * already exists.</p> </li> <li> <p>FAILED_BUSINESS_VALIDATION: The Amazon Web
     * Services account that owns your organization failed to receive business license
     * validation.</p> </li> <li> <p>GOVCLOUD_ACCOUNT_ALREADY_EXISTS: The account in
     * the Amazon Web Services GovCloud (US) Region could not be created because this
     * Region already includes an account with that email address.</p> </li> <li>
     * <p>IDENTITY_INVALID_BUSINESS_VALIDATION: The Amazon Web Services account that
     * owns your organization can't complete business license validation because it
     * doesn't have valid identity data.</p> </li> <li> <p>INVALID_ADDRESS: The account
     * could not be created because the address you provided is not valid.</p> </li>
     * <li> <p>INVALID_EMAIL: The account could not be created because the email
     * address you provided is not valid.</p> </li> <li> <p>INVALID_PAYMENT_INSTRUMENT:
     * The Amazon Web Services account that owns your organization does not have a
     * supported payment method associated with the account. Amazon Web Services does
     * not support cards issued by financial institutions in Russia or Belarus. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/manage-general.html">Managing
     * your Amazon Web Services payments</a>.</p> </li> <li> <p>INTERNAL_FAILURE: The
     * account could not be created because of an internal failure. Try again later. If
     * the problem persists, contact Amazon Web Services Customer Support.</p> </li>
     * <li> <p>MISSING_BUSINESS_VALIDATION: The Amazon Web Services account that owns
     * your organization has not received Business Validation.</p> </li> <li> <p>
     * MISSING_PAYMENT_INSTRUMENT: You must configure the management account with a
     * valid payment method, such as a credit card.</p> </li> <li>
     * <p>PENDING_BUSINESS_VALIDATION: The Amazon Web Services account that owns your
     * organization is still in the process of completing business license
     * validation.</p> </li> <li> <p>UNKNOWN_BUSINESS_VALIDATION: The Amazon Web
     * Services account that owns your organization has an unknown issue with business
     * license validation.</p> </li> </ul>
     */
    inline const CreateAccountFailureReason& GetFailureReason() const{ return m_failureReason; }

    /**
     * <p>If the request failed, a description of the reason for the failure.</p> <ul>
     * <li> <p>ACCOUNT_LIMIT_EXCEEDED: The account couldn't be created because you
     * reached the limit on the number of accounts in your organization.</p> </li> <li>
     * <p>CONCURRENT_ACCOUNT_MODIFICATION: You already submitted a request with the
     * same information.</p> </li> <li> <p>EMAIL_ALREADY_EXISTS: The account could not
     * be created because another Amazon Web Services account with that email address
     * already exists.</p> </li> <li> <p>FAILED_BUSINESS_VALIDATION: The Amazon Web
     * Services account that owns your organization failed to receive business license
     * validation.</p> </li> <li> <p>GOVCLOUD_ACCOUNT_ALREADY_EXISTS: The account in
     * the Amazon Web Services GovCloud (US) Region could not be created because this
     * Region already includes an account with that email address.</p> </li> <li>
     * <p>IDENTITY_INVALID_BUSINESS_VALIDATION: The Amazon Web Services account that
     * owns your organization can't complete business license validation because it
     * doesn't have valid identity data.</p> </li> <li> <p>INVALID_ADDRESS: The account
     * could not be created because the address you provided is not valid.</p> </li>
     * <li> <p>INVALID_EMAIL: The account could not be created because the email
     * address you provided is not valid.</p> </li> <li> <p>INVALID_PAYMENT_INSTRUMENT:
     * The Amazon Web Services account that owns your organization does not have a
     * supported payment method associated with the account. Amazon Web Services does
     * not support cards issued by financial institutions in Russia or Belarus. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/manage-general.html">Managing
     * your Amazon Web Services payments</a>.</p> </li> <li> <p>INTERNAL_FAILURE: The
     * account could not be created because of an internal failure. Try again later. If
     * the problem persists, contact Amazon Web Services Customer Support.</p> </li>
     * <li> <p>MISSING_BUSINESS_VALIDATION: The Amazon Web Services account that owns
     * your organization has not received Business Validation.</p> </li> <li> <p>
     * MISSING_PAYMENT_INSTRUMENT: You must configure the management account with a
     * valid payment method, such as a credit card.</p> </li> <li>
     * <p>PENDING_BUSINESS_VALIDATION: The Amazon Web Services account that owns your
     * organization is still in the process of completing business license
     * validation.</p> </li> <li> <p>UNKNOWN_BUSINESS_VALIDATION: The Amazon Web
     * Services account that owns your organization has an unknown issue with business
     * license validation.</p> </li> </ul>
     */
    inline bool FailureReasonHasBeenSet() const { return m_failureReasonHasBeenSet; }

    /**
     * <p>If the request failed, a description of the reason for the failure.</p> <ul>
     * <li> <p>ACCOUNT_LIMIT_EXCEEDED: The account couldn't be created because you
     * reached the limit on the number of accounts in your organization.</p> </li> <li>
     * <p>CONCURRENT_ACCOUNT_MODIFICATION: You already submitted a request with the
     * same information.</p> </li> <li> <p>EMAIL_ALREADY_EXISTS: The account could not
     * be created because another Amazon Web Services account with that email address
     * already exists.</p> </li> <li> <p>FAILED_BUSINESS_VALIDATION: The Amazon Web
     * Services account that owns your organization failed to receive business license
     * validation.</p> </li> <li> <p>GOVCLOUD_ACCOUNT_ALREADY_EXISTS: The account in
     * the Amazon Web Services GovCloud (US) Region could not be created because this
     * Region already includes an account with that email address.</p> </li> <li>
     * <p>IDENTITY_INVALID_BUSINESS_VALIDATION: The Amazon Web Services account that
     * owns your organization can't complete business license validation because it
     * doesn't have valid identity data.</p> </li> <li> <p>INVALID_ADDRESS: The account
     * could not be created because the address you provided is not valid.</p> </li>
     * <li> <p>INVALID_EMAIL: The account could not be created because the email
     * address you provided is not valid.</p> </li> <li> <p>INVALID_PAYMENT_INSTRUMENT:
     * The Amazon Web Services account that owns your organization does not have a
     * supported payment method associated with the account. Amazon Web Services does
     * not support cards issued by financial institutions in Russia or Belarus. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/manage-general.html">Managing
     * your Amazon Web Services payments</a>.</p> </li> <li> <p>INTERNAL_FAILURE: The
     * account could not be created because of an internal failure. Try again later. If
     * the problem persists, contact Amazon Web Services Customer Support.</p> </li>
     * <li> <p>MISSING_BUSINESS_VALIDATION: The Amazon Web Services account that owns
     * your organization has not received Business Validation.</p> </li> <li> <p>
     * MISSING_PAYMENT_INSTRUMENT: You must configure the management account with a
     * valid payment method, such as a credit card.</p> </li> <li>
     * <p>PENDING_BUSINESS_VALIDATION: The Amazon Web Services account that owns your
     * organization is still in the process of completing business license
     * validation.</p> </li> <li> <p>UNKNOWN_BUSINESS_VALIDATION: The Amazon Web
     * Services account that owns your organization has an unknown issue with business
     * license validation.</p> </li> </ul>
     */
    inline void SetFailureReason(const CreateAccountFailureReason& value) { m_failureReasonHasBeenSet = true; m_failureReason = value; }

    /**
     * <p>If the request failed, a description of the reason for the failure.</p> <ul>
     * <li> <p>ACCOUNT_LIMIT_EXCEEDED: The account couldn't be created because you
     * reached the limit on the number of accounts in your organization.</p> </li> <li>
     * <p>CONCURRENT_ACCOUNT_MODIFICATION: You already submitted a request with the
     * same information.</p> </li> <li> <p>EMAIL_ALREADY_EXISTS: The account could not
     * be created because another Amazon Web Services account with that email address
     * already exists.</p> </li> <li> <p>FAILED_BUSINESS_VALIDATION: The Amazon Web
     * Services account that owns your organization failed to receive business license
     * validation.</p> </li> <li> <p>GOVCLOUD_ACCOUNT_ALREADY_EXISTS: The account in
     * the Amazon Web Services GovCloud (US) Region could not be created because this
     * Region already includes an account with that email address.</p> </li> <li>
     * <p>IDENTITY_INVALID_BUSINESS_VALIDATION: The Amazon Web Services account that
     * owns your organization can't complete business license validation because it
     * doesn't have valid identity data.</p> </li> <li> <p>INVALID_ADDRESS: The account
     * could not be created because the address you provided is not valid.</p> </li>
     * <li> <p>INVALID_EMAIL: The account could not be created because the email
     * address you provided is not valid.</p> </li> <li> <p>INVALID_PAYMENT_INSTRUMENT:
     * The Amazon Web Services account that owns your organization does not have a
     * supported payment method associated with the account. Amazon Web Services does
     * not support cards issued by financial institutions in Russia or Belarus. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/manage-general.html">Managing
     * your Amazon Web Services payments</a>.</p> </li> <li> <p>INTERNAL_FAILURE: The
     * account could not be created because of an internal failure. Try again later. If
     * the problem persists, contact Amazon Web Services Customer Support.</p> </li>
     * <li> <p>MISSING_BUSINESS_VALIDATION: The Amazon Web Services account that owns
     * your organization has not received Business Validation.</p> </li> <li> <p>
     * MISSING_PAYMENT_INSTRUMENT: You must configure the management account with a
     * valid payment method, such as a credit card.</p> </li> <li>
     * <p>PENDING_BUSINESS_VALIDATION: The Amazon Web Services account that owns your
     * organization is still in the process of completing business license
     * validation.</p> </li> <li> <p>UNKNOWN_BUSINESS_VALIDATION: The Amazon Web
     * Services account that owns your organization has an unknown issue with business
     * license validation.</p> </li> </ul>
     */
    inline void SetFailureReason(CreateAccountFailureReason&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::move(value); }

    /**
     * <p>If the request failed, a description of the reason for the failure.</p> <ul>
     * <li> <p>ACCOUNT_LIMIT_EXCEEDED: The account couldn't be created because you
     * reached the limit on the number of accounts in your organization.</p> </li> <li>
     * <p>CONCURRENT_ACCOUNT_MODIFICATION: You already submitted a request with the
     * same information.</p> </li> <li> <p>EMAIL_ALREADY_EXISTS: The account could not
     * be created because another Amazon Web Services account with that email address
     * already exists.</p> </li> <li> <p>FAILED_BUSINESS_VALIDATION: The Amazon Web
     * Services account that owns your organization failed to receive business license
     * validation.</p> </li> <li> <p>GOVCLOUD_ACCOUNT_ALREADY_EXISTS: The account in
     * the Amazon Web Services GovCloud (US) Region could not be created because this
     * Region already includes an account with that email address.</p> </li> <li>
     * <p>IDENTITY_INVALID_BUSINESS_VALIDATION: The Amazon Web Services account that
     * owns your organization can't complete business license validation because it
     * doesn't have valid identity data.</p> </li> <li> <p>INVALID_ADDRESS: The account
     * could not be created because the address you provided is not valid.</p> </li>
     * <li> <p>INVALID_EMAIL: The account could not be created because the email
     * address you provided is not valid.</p> </li> <li> <p>INVALID_PAYMENT_INSTRUMENT:
     * The Amazon Web Services account that owns your organization does not have a
     * supported payment method associated with the account. Amazon Web Services does
     * not support cards issued by financial institutions in Russia or Belarus. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/manage-general.html">Managing
     * your Amazon Web Services payments</a>.</p> </li> <li> <p>INTERNAL_FAILURE: The
     * account could not be created because of an internal failure. Try again later. If
     * the problem persists, contact Amazon Web Services Customer Support.</p> </li>
     * <li> <p>MISSING_BUSINESS_VALIDATION: The Amazon Web Services account that owns
     * your organization has not received Business Validation.</p> </li> <li> <p>
     * MISSING_PAYMENT_INSTRUMENT: You must configure the management account with a
     * valid payment method, such as a credit card.</p> </li> <li>
     * <p>PENDING_BUSINESS_VALIDATION: The Amazon Web Services account that owns your
     * organization is still in the process of completing business license
     * validation.</p> </li> <li> <p>UNKNOWN_BUSINESS_VALIDATION: The Amazon Web
     * Services account that owns your organization has an unknown issue with business
     * license validation.</p> </li> </ul>
     */
    inline CreateAccountStatus& WithFailureReason(const CreateAccountFailureReason& value) { SetFailureReason(value); return *this;}

    /**
     * <p>If the request failed, a description of the reason for the failure.</p> <ul>
     * <li> <p>ACCOUNT_LIMIT_EXCEEDED: The account couldn't be created because you
     * reached the limit on the number of accounts in your organization.</p> </li> <li>
     * <p>CONCURRENT_ACCOUNT_MODIFICATION: You already submitted a request with the
     * same information.</p> </li> <li> <p>EMAIL_ALREADY_EXISTS: The account could not
     * be created because another Amazon Web Services account with that email address
     * already exists.</p> </li> <li> <p>FAILED_BUSINESS_VALIDATION: The Amazon Web
     * Services account that owns your organization failed to receive business license
     * validation.</p> </li> <li> <p>GOVCLOUD_ACCOUNT_ALREADY_EXISTS: The account in
     * the Amazon Web Services GovCloud (US) Region could not be created because this
     * Region already includes an account with that email address.</p> </li> <li>
     * <p>IDENTITY_INVALID_BUSINESS_VALIDATION: The Amazon Web Services account that
     * owns your organization can't complete business license validation because it
     * doesn't have valid identity data.</p> </li> <li> <p>INVALID_ADDRESS: The account
     * could not be created because the address you provided is not valid.</p> </li>
     * <li> <p>INVALID_EMAIL: The account could not be created because the email
     * address you provided is not valid.</p> </li> <li> <p>INVALID_PAYMENT_INSTRUMENT:
     * The Amazon Web Services account that owns your organization does not have a
     * supported payment method associated with the account. Amazon Web Services does
     * not support cards issued by financial institutions in Russia or Belarus. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/manage-general.html">Managing
     * your Amazon Web Services payments</a>.</p> </li> <li> <p>INTERNAL_FAILURE: The
     * account could not be created because of an internal failure. Try again later. If
     * the problem persists, contact Amazon Web Services Customer Support.</p> </li>
     * <li> <p>MISSING_BUSINESS_VALIDATION: The Amazon Web Services account that owns
     * your organization has not received Business Validation.</p> </li> <li> <p>
     * MISSING_PAYMENT_INSTRUMENT: You must configure the management account with a
     * valid payment method, such as a credit card.</p> </li> <li>
     * <p>PENDING_BUSINESS_VALIDATION: The Amazon Web Services account that owns your
     * organization is still in the process of completing business license
     * validation.</p> </li> <li> <p>UNKNOWN_BUSINESS_VALIDATION: The Amazon Web
     * Services account that owns your organization has an unknown issue with business
     * license validation.</p> </li> </ul>
     */
    inline CreateAccountStatus& WithFailureReason(CreateAccountFailureReason&& value) { SetFailureReason(std::move(value)); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_accountName;
    bool m_accountNameHasBeenSet = false;

    CreateAccountState m_state;
    bool m_stateHasBeenSet = false;

    Aws::Utils::DateTime m_requestedTimestamp;
    bool m_requestedTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_completedTimestamp;
    bool m_completedTimestampHasBeenSet = false;

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::String m_govCloudAccountId;
    bool m_govCloudAccountIdHasBeenSet = false;

    CreateAccountFailureReason m_failureReason;
    bool m_failureReasonHasBeenSet = false;
  };

} // namespace Model
} // namespace Organizations
} // namespace Aws

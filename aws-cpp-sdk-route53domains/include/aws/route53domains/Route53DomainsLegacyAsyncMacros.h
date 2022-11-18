/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define AcceptDomainTransferFromAnotherAwsAccountAsync(...)  SubmitAsync(&Route53DomainsClient::AcceptDomainTransferFromAnotherAwsAccount, __VA_ARGS__)
#define AcceptDomainTransferFromAnotherAwsAccountCallable(REQUEST)  SubmitCallable(&Route53DomainsClient::AcceptDomainTransferFromAnotherAwsAccount, REQUEST)

#define CancelDomainTransferToAnotherAwsAccountAsync(...)  SubmitAsync(&Route53DomainsClient::CancelDomainTransferToAnotherAwsAccount, __VA_ARGS__)
#define CancelDomainTransferToAnotherAwsAccountCallable(REQUEST)  SubmitCallable(&Route53DomainsClient::CancelDomainTransferToAnotherAwsAccount, REQUEST)

#define CheckDomainAvailabilityAsync(...)  SubmitAsync(&Route53DomainsClient::CheckDomainAvailability, __VA_ARGS__)
#define CheckDomainAvailabilityCallable(REQUEST)  SubmitCallable(&Route53DomainsClient::CheckDomainAvailability, REQUEST)

#define CheckDomainTransferabilityAsync(...)  SubmitAsync(&Route53DomainsClient::CheckDomainTransferability, __VA_ARGS__)
#define CheckDomainTransferabilityCallable(REQUEST)  SubmitCallable(&Route53DomainsClient::CheckDomainTransferability, REQUEST)

#define DeleteDomainAsync(...)  SubmitAsync(&Route53DomainsClient::DeleteDomain, __VA_ARGS__)
#define DeleteDomainCallable(REQUEST)  SubmitCallable(&Route53DomainsClient::DeleteDomain, REQUEST)

#define DeleteTagsForDomainAsync(...)  SubmitAsync(&Route53DomainsClient::DeleteTagsForDomain, __VA_ARGS__)
#define DeleteTagsForDomainCallable(REQUEST)  SubmitCallable(&Route53DomainsClient::DeleteTagsForDomain, REQUEST)

#define DisableDomainAutoRenewAsync(...)  SubmitAsync(&Route53DomainsClient::DisableDomainAutoRenew, __VA_ARGS__)
#define DisableDomainAutoRenewCallable(REQUEST)  SubmitCallable(&Route53DomainsClient::DisableDomainAutoRenew, REQUEST)

#define DisableDomainTransferLockAsync(...)  SubmitAsync(&Route53DomainsClient::DisableDomainTransferLock, __VA_ARGS__)
#define DisableDomainTransferLockCallable(REQUEST)  SubmitCallable(&Route53DomainsClient::DisableDomainTransferLock, REQUEST)

#define EnableDomainAutoRenewAsync(...)  SubmitAsync(&Route53DomainsClient::EnableDomainAutoRenew, __VA_ARGS__)
#define EnableDomainAutoRenewCallable(REQUEST)  SubmitCallable(&Route53DomainsClient::EnableDomainAutoRenew, REQUEST)

#define EnableDomainTransferLockAsync(...)  SubmitAsync(&Route53DomainsClient::EnableDomainTransferLock, __VA_ARGS__)
#define EnableDomainTransferLockCallable(REQUEST)  SubmitCallable(&Route53DomainsClient::EnableDomainTransferLock, REQUEST)

#define GetContactReachabilityStatusAsync(...)  SubmitAsync(&Route53DomainsClient::GetContactReachabilityStatus, __VA_ARGS__)
#define GetContactReachabilityStatusCallable(REQUEST)  SubmitCallable(&Route53DomainsClient::GetContactReachabilityStatus, REQUEST)

#define GetDomainDetailAsync(...)  SubmitAsync(&Route53DomainsClient::GetDomainDetail, __VA_ARGS__)
#define GetDomainDetailCallable(REQUEST)  SubmitCallable(&Route53DomainsClient::GetDomainDetail, REQUEST)

#define GetDomainSuggestionsAsync(...)  SubmitAsync(&Route53DomainsClient::GetDomainSuggestions, __VA_ARGS__)
#define GetDomainSuggestionsCallable(REQUEST)  SubmitCallable(&Route53DomainsClient::GetDomainSuggestions, REQUEST)

#define GetOperationDetailAsync(...)  SubmitAsync(&Route53DomainsClient::GetOperationDetail, __VA_ARGS__)
#define GetOperationDetailCallable(REQUEST)  SubmitCallable(&Route53DomainsClient::GetOperationDetail, REQUEST)

#define ListDomainsAsync(...)  SubmitAsync(&Route53DomainsClient::ListDomains, __VA_ARGS__)
#define ListDomainsCallable(REQUEST)  SubmitCallable(&Route53DomainsClient::ListDomains, REQUEST)

#define ListOperationsAsync(...)  SubmitAsync(&Route53DomainsClient::ListOperations, __VA_ARGS__)
#define ListOperationsCallable(REQUEST)  SubmitCallable(&Route53DomainsClient::ListOperations, REQUEST)

#define ListPricesAsync(...)  SubmitAsync(&Route53DomainsClient::ListPrices, __VA_ARGS__)
#define ListPricesCallable(REQUEST)  SubmitCallable(&Route53DomainsClient::ListPrices, REQUEST)

#define ListTagsForDomainAsync(...)  SubmitAsync(&Route53DomainsClient::ListTagsForDomain, __VA_ARGS__)
#define ListTagsForDomainCallable(REQUEST)  SubmitCallable(&Route53DomainsClient::ListTagsForDomain, REQUEST)

#define RegisterDomainAsync(...)  SubmitAsync(&Route53DomainsClient::RegisterDomain, __VA_ARGS__)
#define RegisterDomainCallable(REQUEST)  SubmitCallable(&Route53DomainsClient::RegisterDomain, REQUEST)

#define RejectDomainTransferFromAnotherAwsAccountAsync(...)  SubmitAsync(&Route53DomainsClient::RejectDomainTransferFromAnotherAwsAccount, __VA_ARGS__)
#define RejectDomainTransferFromAnotherAwsAccountCallable(REQUEST)  SubmitCallable(&Route53DomainsClient::RejectDomainTransferFromAnotherAwsAccount, REQUEST)

#define RenewDomainAsync(...)  SubmitAsync(&Route53DomainsClient::RenewDomain, __VA_ARGS__)
#define RenewDomainCallable(REQUEST)  SubmitCallable(&Route53DomainsClient::RenewDomain, REQUEST)

#define ResendContactReachabilityEmailAsync(...)  SubmitAsync(&Route53DomainsClient::ResendContactReachabilityEmail, __VA_ARGS__)
#define ResendContactReachabilityEmailCallable(REQUEST)  SubmitCallable(&Route53DomainsClient::ResendContactReachabilityEmail, REQUEST)

#define RetrieveDomainAuthCodeAsync(...)  SubmitAsync(&Route53DomainsClient::RetrieveDomainAuthCode, __VA_ARGS__)
#define RetrieveDomainAuthCodeCallable(REQUEST)  SubmitCallable(&Route53DomainsClient::RetrieveDomainAuthCode, REQUEST)

#define TransferDomainAsync(...)  SubmitAsync(&Route53DomainsClient::TransferDomain, __VA_ARGS__)
#define TransferDomainCallable(REQUEST)  SubmitCallable(&Route53DomainsClient::TransferDomain, REQUEST)

#define TransferDomainToAnotherAwsAccountAsync(...)  SubmitAsync(&Route53DomainsClient::TransferDomainToAnotherAwsAccount, __VA_ARGS__)
#define TransferDomainToAnotherAwsAccountCallable(REQUEST)  SubmitCallable(&Route53DomainsClient::TransferDomainToAnotherAwsAccount, REQUEST)

#define UpdateDomainContactAsync(...)  SubmitAsync(&Route53DomainsClient::UpdateDomainContact, __VA_ARGS__)
#define UpdateDomainContactCallable(REQUEST)  SubmitCallable(&Route53DomainsClient::UpdateDomainContact, REQUEST)

#define UpdateDomainContactPrivacyAsync(...)  SubmitAsync(&Route53DomainsClient::UpdateDomainContactPrivacy, __VA_ARGS__)
#define UpdateDomainContactPrivacyCallable(REQUEST)  SubmitCallable(&Route53DomainsClient::UpdateDomainContactPrivacy, REQUEST)

#define UpdateDomainNameserversAsync(...)  SubmitAsync(&Route53DomainsClient::UpdateDomainNameservers, __VA_ARGS__)
#define UpdateDomainNameserversCallable(REQUEST)  SubmitCallable(&Route53DomainsClient::UpdateDomainNameservers, REQUEST)

#define UpdateTagsForDomainAsync(...)  SubmitAsync(&Route53DomainsClient::UpdateTagsForDomain, __VA_ARGS__)
#define UpdateTagsForDomainCallable(REQUEST)  SubmitCallable(&Route53DomainsClient::UpdateTagsForDomain, REQUEST)

#define ViewBillingAsync(...)  SubmitAsync(&Route53DomainsClient::ViewBilling, __VA_ARGS__)
#define ViewBillingCallable(REQUEST)  SubmitCallable(&Route53DomainsClient::ViewBilling, REQUEST)


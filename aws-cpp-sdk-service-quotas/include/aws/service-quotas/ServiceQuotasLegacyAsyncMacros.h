/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define AssociateServiceQuotaTemplateAsync(...)  SubmitAsync(&ServiceQuotasClient::AssociateServiceQuotaTemplate, __VA_ARGS__)
#define AssociateServiceQuotaTemplateCallable(REQUEST)  SubmitCallable(&ServiceQuotasClient::AssociateServiceQuotaTemplate, REQUEST)

#define DeleteServiceQuotaIncreaseRequestFromTemplateAsync(...)  SubmitAsync(&ServiceQuotasClient::DeleteServiceQuotaIncreaseRequestFromTemplate, __VA_ARGS__)
#define DeleteServiceQuotaIncreaseRequestFromTemplateCallable(REQUEST)  SubmitCallable(&ServiceQuotasClient::DeleteServiceQuotaIncreaseRequestFromTemplate, REQUEST)

#define DisassociateServiceQuotaTemplateAsync(...)  SubmitAsync(&ServiceQuotasClient::DisassociateServiceQuotaTemplate, __VA_ARGS__)
#define DisassociateServiceQuotaTemplateCallable(REQUEST)  SubmitCallable(&ServiceQuotasClient::DisassociateServiceQuotaTemplate, REQUEST)

#define GetAWSDefaultServiceQuotaAsync(...)  SubmitAsync(&ServiceQuotasClient::GetAWSDefaultServiceQuota, __VA_ARGS__)
#define GetAWSDefaultServiceQuotaCallable(REQUEST)  SubmitCallable(&ServiceQuotasClient::GetAWSDefaultServiceQuota, REQUEST)

#define GetAssociationForServiceQuotaTemplateAsync(...)  SubmitAsync(&ServiceQuotasClient::GetAssociationForServiceQuotaTemplate, __VA_ARGS__)
#define GetAssociationForServiceQuotaTemplateCallable(REQUEST)  SubmitCallable(&ServiceQuotasClient::GetAssociationForServiceQuotaTemplate, REQUEST)

#define GetRequestedServiceQuotaChangeAsync(...)  SubmitAsync(&ServiceQuotasClient::GetRequestedServiceQuotaChange, __VA_ARGS__)
#define GetRequestedServiceQuotaChangeCallable(REQUEST)  SubmitCallable(&ServiceQuotasClient::GetRequestedServiceQuotaChange, REQUEST)

#define GetServiceQuotaAsync(...)  SubmitAsync(&ServiceQuotasClient::GetServiceQuota, __VA_ARGS__)
#define GetServiceQuotaCallable(REQUEST)  SubmitCallable(&ServiceQuotasClient::GetServiceQuota, REQUEST)

#define GetServiceQuotaIncreaseRequestFromTemplateAsync(...)  SubmitAsync(&ServiceQuotasClient::GetServiceQuotaIncreaseRequestFromTemplate, __VA_ARGS__)
#define GetServiceQuotaIncreaseRequestFromTemplateCallable(REQUEST)  SubmitCallable(&ServiceQuotasClient::GetServiceQuotaIncreaseRequestFromTemplate, REQUEST)

#define ListAWSDefaultServiceQuotasAsync(...)  SubmitAsync(&ServiceQuotasClient::ListAWSDefaultServiceQuotas, __VA_ARGS__)
#define ListAWSDefaultServiceQuotasCallable(REQUEST)  SubmitCallable(&ServiceQuotasClient::ListAWSDefaultServiceQuotas, REQUEST)

#define ListRequestedServiceQuotaChangeHistoryAsync(...)  SubmitAsync(&ServiceQuotasClient::ListRequestedServiceQuotaChangeHistory, __VA_ARGS__)
#define ListRequestedServiceQuotaChangeHistoryCallable(REQUEST)  SubmitCallable(&ServiceQuotasClient::ListRequestedServiceQuotaChangeHistory, REQUEST)

#define ListRequestedServiceQuotaChangeHistoryByQuotaAsync(...)  SubmitAsync(&ServiceQuotasClient::ListRequestedServiceQuotaChangeHistoryByQuota, __VA_ARGS__)
#define ListRequestedServiceQuotaChangeHistoryByQuotaCallable(REQUEST)  SubmitCallable(&ServiceQuotasClient::ListRequestedServiceQuotaChangeHistoryByQuota, REQUEST)

#define ListServiceQuotaIncreaseRequestsInTemplateAsync(...)  SubmitAsync(&ServiceQuotasClient::ListServiceQuotaIncreaseRequestsInTemplate, __VA_ARGS__)
#define ListServiceQuotaIncreaseRequestsInTemplateCallable(REQUEST)  SubmitCallable(&ServiceQuotasClient::ListServiceQuotaIncreaseRequestsInTemplate, REQUEST)

#define ListServiceQuotasAsync(...)  SubmitAsync(&ServiceQuotasClient::ListServiceQuotas, __VA_ARGS__)
#define ListServiceQuotasCallable(REQUEST)  SubmitCallable(&ServiceQuotasClient::ListServiceQuotas, REQUEST)

#define ListServicesAsync(...)  SubmitAsync(&ServiceQuotasClient::ListServices, __VA_ARGS__)
#define ListServicesCallable(REQUEST)  SubmitCallable(&ServiceQuotasClient::ListServices, REQUEST)

#define ListTagsForResourceAsync(...)  SubmitAsync(&ServiceQuotasClient::ListTagsForResource, __VA_ARGS__)
#define ListTagsForResourceCallable(REQUEST)  SubmitCallable(&ServiceQuotasClient::ListTagsForResource, REQUEST)

#define PutServiceQuotaIncreaseRequestIntoTemplateAsync(...)  SubmitAsync(&ServiceQuotasClient::PutServiceQuotaIncreaseRequestIntoTemplate, __VA_ARGS__)
#define PutServiceQuotaIncreaseRequestIntoTemplateCallable(REQUEST)  SubmitCallable(&ServiceQuotasClient::PutServiceQuotaIncreaseRequestIntoTemplate, REQUEST)

#define RequestServiceQuotaIncreaseAsync(...)  SubmitAsync(&ServiceQuotasClient::RequestServiceQuotaIncrease, __VA_ARGS__)
#define RequestServiceQuotaIncreaseCallable(REQUEST)  SubmitCallable(&ServiceQuotasClient::RequestServiceQuotaIncrease, REQUEST)

#define TagResourceAsync(...)  SubmitAsync(&ServiceQuotasClient::TagResource, __VA_ARGS__)
#define TagResourceCallable(REQUEST)  SubmitCallable(&ServiceQuotasClient::TagResource, REQUEST)

#define UntagResourceAsync(...)  SubmitAsync(&ServiceQuotasClient::UntagResource, __VA_ARGS__)
#define UntagResourceCallable(REQUEST)  SubmitCallable(&ServiceQuotasClient::UntagResource, REQUEST)


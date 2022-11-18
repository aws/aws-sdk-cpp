/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define AssociateUserAsync(...)  SubmitAsync(&LicenseManagerUserSubscriptionsClient::AssociateUser, __VA_ARGS__)
#define AssociateUserCallable(REQUEST)  SubmitCallable(&LicenseManagerUserSubscriptionsClient::AssociateUser, REQUEST)

#define DeregisterIdentityProviderAsync(...)  SubmitAsync(&LicenseManagerUserSubscriptionsClient::DeregisterIdentityProvider, __VA_ARGS__)
#define DeregisterIdentityProviderCallable(REQUEST)  SubmitCallable(&LicenseManagerUserSubscriptionsClient::DeregisterIdentityProvider, REQUEST)

#define DisassociateUserAsync(...)  SubmitAsync(&LicenseManagerUserSubscriptionsClient::DisassociateUser, __VA_ARGS__)
#define DisassociateUserCallable(REQUEST)  SubmitCallable(&LicenseManagerUserSubscriptionsClient::DisassociateUser, REQUEST)

#define ListIdentityProvidersAsync(...)  SubmitAsync(&LicenseManagerUserSubscriptionsClient::ListIdentityProviders, __VA_ARGS__)
#define ListIdentityProvidersCallable(REQUEST)  SubmitCallable(&LicenseManagerUserSubscriptionsClient::ListIdentityProviders, REQUEST)

#define ListInstancesAsync(...)  SubmitAsync(&LicenseManagerUserSubscriptionsClient::ListInstances, __VA_ARGS__)
#define ListInstancesCallable(REQUEST)  SubmitCallable(&LicenseManagerUserSubscriptionsClient::ListInstances, REQUEST)

#define ListProductSubscriptionsAsync(...)  SubmitAsync(&LicenseManagerUserSubscriptionsClient::ListProductSubscriptions, __VA_ARGS__)
#define ListProductSubscriptionsCallable(REQUEST)  SubmitCallable(&LicenseManagerUserSubscriptionsClient::ListProductSubscriptions, REQUEST)

#define ListUserAssociationsAsync(...)  SubmitAsync(&LicenseManagerUserSubscriptionsClient::ListUserAssociations, __VA_ARGS__)
#define ListUserAssociationsCallable(REQUEST)  SubmitCallable(&LicenseManagerUserSubscriptionsClient::ListUserAssociations, REQUEST)

#define RegisterIdentityProviderAsync(...)  SubmitAsync(&LicenseManagerUserSubscriptionsClient::RegisterIdentityProvider, __VA_ARGS__)
#define RegisterIdentityProviderCallable(REQUEST)  SubmitCallable(&LicenseManagerUserSubscriptionsClient::RegisterIdentityProvider, REQUEST)

#define StartProductSubscriptionAsync(...)  SubmitAsync(&LicenseManagerUserSubscriptionsClient::StartProductSubscription, __VA_ARGS__)
#define StartProductSubscriptionCallable(REQUEST)  SubmitCallable(&LicenseManagerUserSubscriptionsClient::StartProductSubscription, REQUEST)

#define StopProductSubscriptionAsync(...)  SubmitAsync(&LicenseManagerUserSubscriptionsClient::StopProductSubscription, __VA_ARGS__)
#define StopProductSubscriptionCallable(REQUEST)  SubmitCallable(&LicenseManagerUserSubscriptionsClient::StopProductSubscription, REQUEST)


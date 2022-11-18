/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define CreateIdentityPoolAsync(...)  SubmitAsync(&CognitoIdentityClient::CreateIdentityPool, __VA_ARGS__)
#define CreateIdentityPoolCallable(REQUEST)  SubmitCallable(&CognitoIdentityClient::CreateIdentityPool, REQUEST)

#define DeleteIdentitiesAsync(...)  SubmitAsync(&CognitoIdentityClient::DeleteIdentities, __VA_ARGS__)
#define DeleteIdentitiesCallable(REQUEST)  SubmitCallable(&CognitoIdentityClient::DeleteIdentities, REQUEST)

#define DeleteIdentityPoolAsync(...)  SubmitAsync(&CognitoIdentityClient::DeleteIdentityPool, __VA_ARGS__)
#define DeleteIdentityPoolCallable(REQUEST)  SubmitCallable(&CognitoIdentityClient::DeleteIdentityPool, REQUEST)

#define DescribeIdentityAsync(...)  SubmitAsync(&CognitoIdentityClient::DescribeIdentity, __VA_ARGS__)
#define DescribeIdentityCallable(REQUEST)  SubmitCallable(&CognitoIdentityClient::DescribeIdentity, REQUEST)

#define DescribeIdentityPoolAsync(...)  SubmitAsync(&CognitoIdentityClient::DescribeIdentityPool, __VA_ARGS__)
#define DescribeIdentityPoolCallable(REQUEST)  SubmitCallable(&CognitoIdentityClient::DescribeIdentityPool, REQUEST)

#define GetCredentialsForIdentityAsync(...)  SubmitAsync(&CognitoIdentityClient::GetCredentialsForIdentity, __VA_ARGS__)
#define GetCredentialsForIdentityCallable(REQUEST)  SubmitCallable(&CognitoIdentityClient::GetCredentialsForIdentity, REQUEST)

#define GetIdAsync(...)  SubmitAsync(&CognitoIdentityClient::GetId, __VA_ARGS__)
#define GetIdCallable(REQUEST)  SubmitCallable(&CognitoIdentityClient::GetId, REQUEST)

#define GetIdentityPoolRolesAsync(...)  SubmitAsync(&CognitoIdentityClient::GetIdentityPoolRoles, __VA_ARGS__)
#define GetIdentityPoolRolesCallable(REQUEST)  SubmitCallable(&CognitoIdentityClient::GetIdentityPoolRoles, REQUEST)

#define GetOpenIdTokenAsync(...)  SubmitAsync(&CognitoIdentityClient::GetOpenIdToken, __VA_ARGS__)
#define GetOpenIdTokenCallable(REQUEST)  SubmitCallable(&CognitoIdentityClient::GetOpenIdToken, REQUEST)

#define GetOpenIdTokenForDeveloperIdentityAsync(...)  SubmitAsync(&CognitoIdentityClient::GetOpenIdTokenForDeveloperIdentity, __VA_ARGS__)
#define GetOpenIdTokenForDeveloperIdentityCallable(REQUEST)  SubmitCallable(&CognitoIdentityClient::GetOpenIdTokenForDeveloperIdentity, REQUEST)

#define GetPrincipalTagAttributeMapAsync(...)  SubmitAsync(&CognitoIdentityClient::GetPrincipalTagAttributeMap, __VA_ARGS__)
#define GetPrincipalTagAttributeMapCallable(REQUEST)  SubmitCallable(&CognitoIdentityClient::GetPrincipalTagAttributeMap, REQUEST)

#define ListIdentitiesAsync(...)  SubmitAsync(&CognitoIdentityClient::ListIdentities, __VA_ARGS__)
#define ListIdentitiesCallable(REQUEST)  SubmitCallable(&CognitoIdentityClient::ListIdentities, REQUEST)

#define ListIdentityPoolsAsync(...)  SubmitAsync(&CognitoIdentityClient::ListIdentityPools, __VA_ARGS__)
#define ListIdentityPoolsCallable(REQUEST)  SubmitCallable(&CognitoIdentityClient::ListIdentityPools, REQUEST)

#define ListTagsForResourceAsync(...)  SubmitAsync(&CognitoIdentityClient::ListTagsForResource, __VA_ARGS__)
#define ListTagsForResourceCallable(REQUEST)  SubmitCallable(&CognitoIdentityClient::ListTagsForResource, REQUEST)

#define LookupDeveloperIdentityAsync(...)  SubmitAsync(&CognitoIdentityClient::LookupDeveloperIdentity, __VA_ARGS__)
#define LookupDeveloperIdentityCallable(REQUEST)  SubmitCallable(&CognitoIdentityClient::LookupDeveloperIdentity, REQUEST)

#define MergeDeveloperIdentitiesAsync(...)  SubmitAsync(&CognitoIdentityClient::MergeDeveloperIdentities, __VA_ARGS__)
#define MergeDeveloperIdentitiesCallable(REQUEST)  SubmitCallable(&CognitoIdentityClient::MergeDeveloperIdentities, REQUEST)

#define SetIdentityPoolRolesAsync(...)  SubmitAsync(&CognitoIdentityClient::SetIdentityPoolRoles, __VA_ARGS__)
#define SetIdentityPoolRolesCallable(REQUEST)  SubmitCallable(&CognitoIdentityClient::SetIdentityPoolRoles, REQUEST)

#define SetPrincipalTagAttributeMapAsync(...)  SubmitAsync(&CognitoIdentityClient::SetPrincipalTagAttributeMap, __VA_ARGS__)
#define SetPrincipalTagAttributeMapCallable(REQUEST)  SubmitCallable(&CognitoIdentityClient::SetPrincipalTagAttributeMap, REQUEST)

#define TagResourceAsync(...)  SubmitAsync(&CognitoIdentityClient::TagResource, __VA_ARGS__)
#define TagResourceCallable(REQUEST)  SubmitCallable(&CognitoIdentityClient::TagResource, REQUEST)

#define UnlinkDeveloperIdentityAsync(...)  SubmitAsync(&CognitoIdentityClient::UnlinkDeveloperIdentity, __VA_ARGS__)
#define UnlinkDeveloperIdentityCallable(REQUEST)  SubmitCallable(&CognitoIdentityClient::UnlinkDeveloperIdentity, REQUEST)

#define UnlinkIdentityAsync(...)  SubmitAsync(&CognitoIdentityClient::UnlinkIdentity, __VA_ARGS__)
#define UnlinkIdentityCallable(REQUEST)  SubmitCallable(&CognitoIdentityClient::UnlinkIdentity, REQUEST)

#define UntagResourceAsync(...)  SubmitAsync(&CognitoIdentityClient::UntagResource, __VA_ARGS__)
#define UntagResourceCallable(REQUEST)  SubmitCallable(&CognitoIdentityClient::UntagResource, REQUEST)

#define UpdateIdentityPoolAsync(...)  SubmitAsync(&CognitoIdentityClient::UpdateIdentityPool, __VA_ARGS__)
#define UpdateIdentityPoolCallable(REQUEST)  SubmitCallable(&CognitoIdentityClient::UpdateIdentityPool, REQUEST)


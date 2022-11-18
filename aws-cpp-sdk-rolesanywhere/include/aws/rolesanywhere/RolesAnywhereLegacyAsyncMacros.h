/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define CreateProfileAsync(...)  SubmitAsync(&RolesAnywhereClient::CreateProfile, __VA_ARGS__)
#define CreateProfileCallable(REQUEST)  SubmitCallable(&RolesAnywhereClient::CreateProfile, REQUEST)

#define CreateTrustAnchorAsync(...)  SubmitAsync(&RolesAnywhereClient::CreateTrustAnchor, __VA_ARGS__)
#define CreateTrustAnchorCallable(REQUEST)  SubmitCallable(&RolesAnywhereClient::CreateTrustAnchor, REQUEST)

#define DeleteCrlAsync(...)  SubmitAsync(&RolesAnywhereClient::DeleteCrl, __VA_ARGS__)
#define DeleteCrlCallable(REQUEST)  SubmitCallable(&RolesAnywhereClient::DeleteCrl, REQUEST)

#define DeleteProfileAsync(...)  SubmitAsync(&RolesAnywhereClient::DeleteProfile, __VA_ARGS__)
#define DeleteProfileCallable(REQUEST)  SubmitCallable(&RolesAnywhereClient::DeleteProfile, REQUEST)

#define DeleteTrustAnchorAsync(...)  SubmitAsync(&RolesAnywhereClient::DeleteTrustAnchor, __VA_ARGS__)
#define DeleteTrustAnchorCallable(REQUEST)  SubmitCallable(&RolesAnywhereClient::DeleteTrustAnchor, REQUEST)

#define DisableCrlAsync(...)  SubmitAsync(&RolesAnywhereClient::DisableCrl, __VA_ARGS__)
#define DisableCrlCallable(REQUEST)  SubmitCallable(&RolesAnywhereClient::DisableCrl, REQUEST)

#define DisableProfileAsync(...)  SubmitAsync(&RolesAnywhereClient::DisableProfile, __VA_ARGS__)
#define DisableProfileCallable(REQUEST)  SubmitCallable(&RolesAnywhereClient::DisableProfile, REQUEST)

#define DisableTrustAnchorAsync(...)  SubmitAsync(&RolesAnywhereClient::DisableTrustAnchor, __VA_ARGS__)
#define DisableTrustAnchorCallable(REQUEST)  SubmitCallable(&RolesAnywhereClient::DisableTrustAnchor, REQUEST)

#define EnableCrlAsync(...)  SubmitAsync(&RolesAnywhereClient::EnableCrl, __VA_ARGS__)
#define EnableCrlCallable(REQUEST)  SubmitCallable(&RolesAnywhereClient::EnableCrl, REQUEST)

#define EnableProfileAsync(...)  SubmitAsync(&RolesAnywhereClient::EnableProfile, __VA_ARGS__)
#define EnableProfileCallable(REQUEST)  SubmitCallable(&RolesAnywhereClient::EnableProfile, REQUEST)

#define EnableTrustAnchorAsync(...)  SubmitAsync(&RolesAnywhereClient::EnableTrustAnchor, __VA_ARGS__)
#define EnableTrustAnchorCallable(REQUEST)  SubmitCallable(&RolesAnywhereClient::EnableTrustAnchor, REQUEST)

#define GetCrlAsync(...)  SubmitAsync(&RolesAnywhereClient::GetCrl, __VA_ARGS__)
#define GetCrlCallable(REQUEST)  SubmitCallable(&RolesAnywhereClient::GetCrl, REQUEST)

#define GetProfileAsync(...)  SubmitAsync(&RolesAnywhereClient::GetProfile, __VA_ARGS__)
#define GetProfileCallable(REQUEST)  SubmitCallable(&RolesAnywhereClient::GetProfile, REQUEST)

#define GetSubjectAsync(...)  SubmitAsync(&RolesAnywhereClient::GetSubject, __VA_ARGS__)
#define GetSubjectCallable(REQUEST)  SubmitCallable(&RolesAnywhereClient::GetSubject, REQUEST)

#define GetTrustAnchorAsync(...)  SubmitAsync(&RolesAnywhereClient::GetTrustAnchor, __VA_ARGS__)
#define GetTrustAnchorCallable(REQUEST)  SubmitCallable(&RolesAnywhereClient::GetTrustAnchor, REQUEST)

#define ImportCrlAsync(...)  SubmitAsync(&RolesAnywhereClient::ImportCrl, __VA_ARGS__)
#define ImportCrlCallable(REQUEST)  SubmitCallable(&RolesAnywhereClient::ImportCrl, REQUEST)

#define ListCrlsAsync(...)  SubmitAsync(&RolesAnywhereClient::ListCrls, __VA_ARGS__)
#define ListCrlsCallable(REQUEST)  SubmitCallable(&RolesAnywhereClient::ListCrls, REQUEST)

#define ListProfilesAsync(...)  SubmitAsync(&RolesAnywhereClient::ListProfiles, __VA_ARGS__)
#define ListProfilesCallable(REQUEST)  SubmitCallable(&RolesAnywhereClient::ListProfiles, REQUEST)

#define ListSubjectsAsync(...)  SubmitAsync(&RolesAnywhereClient::ListSubjects, __VA_ARGS__)
#define ListSubjectsCallable(REQUEST)  SubmitCallable(&RolesAnywhereClient::ListSubjects, REQUEST)

#define ListTagsForResourceAsync(...)  SubmitAsync(&RolesAnywhereClient::ListTagsForResource, __VA_ARGS__)
#define ListTagsForResourceCallable(REQUEST)  SubmitCallable(&RolesAnywhereClient::ListTagsForResource, REQUEST)

#define ListTrustAnchorsAsync(...)  SubmitAsync(&RolesAnywhereClient::ListTrustAnchors, __VA_ARGS__)
#define ListTrustAnchorsCallable(REQUEST)  SubmitCallable(&RolesAnywhereClient::ListTrustAnchors, REQUEST)

#define TagResourceAsync(...)  SubmitAsync(&RolesAnywhereClient::TagResource, __VA_ARGS__)
#define TagResourceCallable(REQUEST)  SubmitCallable(&RolesAnywhereClient::TagResource, REQUEST)

#define UntagResourceAsync(...)  SubmitAsync(&RolesAnywhereClient::UntagResource, __VA_ARGS__)
#define UntagResourceCallable(REQUEST)  SubmitCallable(&RolesAnywhereClient::UntagResource, REQUEST)

#define UpdateCrlAsync(...)  SubmitAsync(&RolesAnywhereClient::UpdateCrl, __VA_ARGS__)
#define UpdateCrlCallable(REQUEST)  SubmitCallable(&RolesAnywhereClient::UpdateCrl, REQUEST)

#define UpdateProfileAsync(...)  SubmitAsync(&RolesAnywhereClient::UpdateProfile, __VA_ARGS__)
#define UpdateProfileCallable(REQUEST)  SubmitCallable(&RolesAnywhereClient::UpdateProfile, REQUEST)

#define UpdateTrustAnchorAsync(...)  SubmitAsync(&RolesAnywhereClient::UpdateTrustAnchor, __VA_ARGS__)
#define UpdateTrustAnchorCallable(REQUEST)  SubmitCallable(&RolesAnywhereClient::UpdateTrustAnchor, REQUEST)


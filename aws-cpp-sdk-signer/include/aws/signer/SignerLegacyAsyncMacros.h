/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define AddProfilePermissionAsync(...)  SubmitAsync(&SignerClient::AddProfilePermission, __VA_ARGS__)
#define AddProfilePermissionCallable(REQUEST)  SubmitCallable(&SignerClient::AddProfilePermission, REQUEST)

#define CancelSigningProfileAsync(...)  SubmitAsync(&SignerClient::CancelSigningProfile, __VA_ARGS__)
#define CancelSigningProfileCallable(REQUEST)  SubmitCallable(&SignerClient::CancelSigningProfile, REQUEST)

#define DescribeSigningJobAsync(...)  SubmitAsync(&SignerClient::DescribeSigningJob, __VA_ARGS__)
#define DescribeSigningJobCallable(REQUEST)  SubmitCallable(&SignerClient::DescribeSigningJob, REQUEST)

#define GetSigningPlatformAsync(...)  SubmitAsync(&SignerClient::GetSigningPlatform, __VA_ARGS__)
#define GetSigningPlatformCallable(REQUEST)  SubmitCallable(&SignerClient::GetSigningPlatform, REQUEST)

#define GetSigningProfileAsync(...)  SubmitAsync(&SignerClient::GetSigningProfile, __VA_ARGS__)
#define GetSigningProfileCallable(REQUEST)  SubmitCallable(&SignerClient::GetSigningProfile, REQUEST)

#define ListProfilePermissionsAsync(...)  SubmitAsync(&SignerClient::ListProfilePermissions, __VA_ARGS__)
#define ListProfilePermissionsCallable(REQUEST)  SubmitCallable(&SignerClient::ListProfilePermissions, REQUEST)

#define ListSigningJobsAsync(...)  SubmitAsync(&SignerClient::ListSigningJobs, __VA_ARGS__)
#define ListSigningJobsCallable(REQUEST)  SubmitCallable(&SignerClient::ListSigningJobs, REQUEST)

#define ListSigningPlatformsAsync(...)  SubmitAsync(&SignerClient::ListSigningPlatforms, __VA_ARGS__)
#define ListSigningPlatformsCallable(REQUEST)  SubmitCallable(&SignerClient::ListSigningPlatforms, REQUEST)

#define ListSigningProfilesAsync(...)  SubmitAsync(&SignerClient::ListSigningProfiles, __VA_ARGS__)
#define ListSigningProfilesCallable(REQUEST)  SubmitCallable(&SignerClient::ListSigningProfiles, REQUEST)

#define ListTagsForResourceAsync(...)  SubmitAsync(&SignerClient::ListTagsForResource, __VA_ARGS__)
#define ListTagsForResourceCallable(REQUEST)  SubmitCallable(&SignerClient::ListTagsForResource, REQUEST)

#define PutSigningProfileAsync(...)  SubmitAsync(&SignerClient::PutSigningProfile, __VA_ARGS__)
#define PutSigningProfileCallable(REQUEST)  SubmitCallable(&SignerClient::PutSigningProfile, REQUEST)

#define RemoveProfilePermissionAsync(...)  SubmitAsync(&SignerClient::RemoveProfilePermission, __VA_ARGS__)
#define RemoveProfilePermissionCallable(REQUEST)  SubmitCallable(&SignerClient::RemoveProfilePermission, REQUEST)

#define RevokeSignatureAsync(...)  SubmitAsync(&SignerClient::RevokeSignature, __VA_ARGS__)
#define RevokeSignatureCallable(REQUEST)  SubmitCallable(&SignerClient::RevokeSignature, REQUEST)

#define RevokeSigningProfileAsync(...)  SubmitAsync(&SignerClient::RevokeSigningProfile, __VA_ARGS__)
#define RevokeSigningProfileCallable(REQUEST)  SubmitCallable(&SignerClient::RevokeSigningProfile, REQUEST)

#define StartSigningJobAsync(...)  SubmitAsync(&SignerClient::StartSigningJob, __VA_ARGS__)
#define StartSigningJobCallable(REQUEST)  SubmitCallable(&SignerClient::StartSigningJob, REQUEST)

#define TagResourceAsync(...)  SubmitAsync(&SignerClient::TagResource, __VA_ARGS__)
#define TagResourceCallable(REQUEST)  SubmitCallable(&SignerClient::TagResource, REQUEST)

#define UntagResourceAsync(...)  SubmitAsync(&SignerClient::UntagResource, __VA_ARGS__)
#define UntagResourceCallable(REQUEST)  SubmitCallable(&SignerClient::UntagResource, REQUEST)


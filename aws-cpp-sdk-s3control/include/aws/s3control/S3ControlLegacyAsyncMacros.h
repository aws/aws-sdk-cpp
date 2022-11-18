/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define CreateAccessPointAsync(...)  SubmitAsync(&S3ControlClient::CreateAccessPoint, __VA_ARGS__)
#define CreateAccessPointCallable(REQUEST)  SubmitCallable(&S3ControlClient::CreateAccessPoint, REQUEST)

#define CreateAccessPointForObjectLambdaAsync(...)  SubmitAsync(&S3ControlClient::CreateAccessPointForObjectLambda, __VA_ARGS__)
#define CreateAccessPointForObjectLambdaCallable(REQUEST)  SubmitCallable(&S3ControlClient::CreateAccessPointForObjectLambda, REQUEST)

#define CreateBucketAsync(...)  SubmitAsync(&S3ControlClient::CreateBucket, __VA_ARGS__)
#define CreateBucketCallable(REQUEST)  SubmitCallable(&S3ControlClient::CreateBucket, REQUEST)

#define CreateJobAsync(...)  SubmitAsync(&S3ControlClient::CreateJob, __VA_ARGS__)
#define CreateJobCallable(REQUEST)  SubmitCallable(&S3ControlClient::CreateJob, REQUEST)

#define CreateMultiRegionAccessPointAsync(...)  SubmitAsync(&S3ControlClient::CreateMultiRegionAccessPoint, __VA_ARGS__)
#define CreateMultiRegionAccessPointCallable(REQUEST)  SubmitCallable(&S3ControlClient::CreateMultiRegionAccessPoint, REQUEST)

#define DeleteAccessPointAsync(...)  SubmitAsync(&S3ControlClient::DeleteAccessPoint, __VA_ARGS__)
#define DeleteAccessPointCallable(REQUEST)  SubmitCallable(&S3ControlClient::DeleteAccessPoint, REQUEST)

#define DeleteAccessPointForObjectLambdaAsync(...)  SubmitAsync(&S3ControlClient::DeleteAccessPointForObjectLambda, __VA_ARGS__)
#define DeleteAccessPointForObjectLambdaCallable(REQUEST)  SubmitCallable(&S3ControlClient::DeleteAccessPointForObjectLambda, REQUEST)

#define DeleteAccessPointPolicyAsync(...)  SubmitAsync(&S3ControlClient::DeleteAccessPointPolicy, __VA_ARGS__)
#define DeleteAccessPointPolicyCallable(REQUEST)  SubmitCallable(&S3ControlClient::DeleteAccessPointPolicy, REQUEST)

#define DeleteAccessPointPolicyForObjectLambdaAsync(...)  SubmitAsync(&S3ControlClient::DeleteAccessPointPolicyForObjectLambda, __VA_ARGS__)
#define DeleteAccessPointPolicyForObjectLambdaCallable(REQUEST)  SubmitCallable(&S3ControlClient::DeleteAccessPointPolicyForObjectLambda, REQUEST)

#define DeleteBucketAsync(...)  SubmitAsync(&S3ControlClient::DeleteBucket, __VA_ARGS__)
#define DeleteBucketCallable(REQUEST)  SubmitCallable(&S3ControlClient::DeleteBucket, REQUEST)

#define DeleteBucketLifecycleConfigurationAsync(...)  SubmitAsync(&S3ControlClient::DeleteBucketLifecycleConfiguration, __VA_ARGS__)
#define DeleteBucketLifecycleConfigurationCallable(REQUEST)  SubmitCallable(&S3ControlClient::DeleteBucketLifecycleConfiguration, REQUEST)

#define DeleteBucketPolicyAsync(...)  SubmitAsync(&S3ControlClient::DeleteBucketPolicy, __VA_ARGS__)
#define DeleteBucketPolicyCallable(REQUEST)  SubmitCallable(&S3ControlClient::DeleteBucketPolicy, REQUEST)

#define DeleteBucketTaggingAsync(...)  SubmitAsync(&S3ControlClient::DeleteBucketTagging, __VA_ARGS__)
#define DeleteBucketTaggingCallable(REQUEST)  SubmitCallable(&S3ControlClient::DeleteBucketTagging, REQUEST)

#define DeleteJobTaggingAsync(...)  SubmitAsync(&S3ControlClient::DeleteJobTagging, __VA_ARGS__)
#define DeleteJobTaggingCallable(REQUEST)  SubmitCallable(&S3ControlClient::DeleteJobTagging, REQUEST)

#define DeleteMultiRegionAccessPointAsync(...)  SubmitAsync(&S3ControlClient::DeleteMultiRegionAccessPoint, __VA_ARGS__)
#define DeleteMultiRegionAccessPointCallable(REQUEST)  SubmitCallable(&S3ControlClient::DeleteMultiRegionAccessPoint, REQUEST)

#define DeletePublicAccessBlockAsync(...)  SubmitAsync(&S3ControlClient::DeletePublicAccessBlock, __VA_ARGS__)
#define DeletePublicAccessBlockCallable(REQUEST)  SubmitCallable(&S3ControlClient::DeletePublicAccessBlock, REQUEST)

#define DeleteStorageLensConfigurationAsync(...)  SubmitAsync(&S3ControlClient::DeleteStorageLensConfiguration, __VA_ARGS__)
#define DeleteStorageLensConfigurationCallable(REQUEST)  SubmitCallable(&S3ControlClient::DeleteStorageLensConfiguration, REQUEST)

#define DeleteStorageLensConfigurationTaggingAsync(...)  SubmitAsync(&S3ControlClient::DeleteStorageLensConfigurationTagging, __VA_ARGS__)
#define DeleteStorageLensConfigurationTaggingCallable(REQUEST)  SubmitCallable(&S3ControlClient::DeleteStorageLensConfigurationTagging, REQUEST)

#define DescribeJobAsync(...)  SubmitAsync(&S3ControlClient::DescribeJob, __VA_ARGS__)
#define DescribeJobCallable(REQUEST)  SubmitCallable(&S3ControlClient::DescribeJob, REQUEST)

#define DescribeMultiRegionAccessPointOperationAsync(...)  SubmitAsync(&S3ControlClient::DescribeMultiRegionAccessPointOperation, __VA_ARGS__)
#define DescribeMultiRegionAccessPointOperationCallable(REQUEST)  SubmitCallable(&S3ControlClient::DescribeMultiRegionAccessPointOperation, REQUEST)

#define GetAccessPointAsync(...)  SubmitAsync(&S3ControlClient::GetAccessPoint, __VA_ARGS__)
#define GetAccessPointCallable(REQUEST)  SubmitCallable(&S3ControlClient::GetAccessPoint, REQUEST)

#define GetAccessPointConfigurationForObjectLambdaAsync(...)  SubmitAsync(&S3ControlClient::GetAccessPointConfigurationForObjectLambda, __VA_ARGS__)
#define GetAccessPointConfigurationForObjectLambdaCallable(REQUEST)  SubmitCallable(&S3ControlClient::GetAccessPointConfigurationForObjectLambda, REQUEST)

#define GetAccessPointForObjectLambdaAsync(...)  SubmitAsync(&S3ControlClient::GetAccessPointForObjectLambda, __VA_ARGS__)
#define GetAccessPointForObjectLambdaCallable(REQUEST)  SubmitCallable(&S3ControlClient::GetAccessPointForObjectLambda, REQUEST)

#define GetAccessPointPolicyAsync(...)  SubmitAsync(&S3ControlClient::GetAccessPointPolicy, __VA_ARGS__)
#define GetAccessPointPolicyCallable(REQUEST)  SubmitCallable(&S3ControlClient::GetAccessPointPolicy, REQUEST)

#define GetAccessPointPolicyForObjectLambdaAsync(...)  SubmitAsync(&S3ControlClient::GetAccessPointPolicyForObjectLambda, __VA_ARGS__)
#define GetAccessPointPolicyForObjectLambdaCallable(REQUEST)  SubmitCallable(&S3ControlClient::GetAccessPointPolicyForObjectLambda, REQUEST)

#define GetAccessPointPolicyStatusAsync(...)  SubmitAsync(&S3ControlClient::GetAccessPointPolicyStatus, __VA_ARGS__)
#define GetAccessPointPolicyStatusCallable(REQUEST)  SubmitCallable(&S3ControlClient::GetAccessPointPolicyStatus, REQUEST)

#define GetAccessPointPolicyStatusForObjectLambdaAsync(...)  SubmitAsync(&S3ControlClient::GetAccessPointPolicyStatusForObjectLambda, __VA_ARGS__)
#define GetAccessPointPolicyStatusForObjectLambdaCallable(REQUEST)  SubmitCallable(&S3ControlClient::GetAccessPointPolicyStatusForObjectLambda, REQUEST)

#define GetBucketAsync(...)  SubmitAsync(&S3ControlClient::GetBucket, __VA_ARGS__)
#define GetBucketCallable(REQUEST)  SubmitCallable(&S3ControlClient::GetBucket, REQUEST)

#define GetBucketLifecycleConfigurationAsync(...)  SubmitAsync(&S3ControlClient::GetBucketLifecycleConfiguration, __VA_ARGS__)
#define GetBucketLifecycleConfigurationCallable(REQUEST)  SubmitCallable(&S3ControlClient::GetBucketLifecycleConfiguration, REQUEST)

#define GetBucketPolicyAsync(...)  SubmitAsync(&S3ControlClient::GetBucketPolicy, __VA_ARGS__)
#define GetBucketPolicyCallable(REQUEST)  SubmitCallable(&S3ControlClient::GetBucketPolicy, REQUEST)

#define GetBucketTaggingAsync(...)  SubmitAsync(&S3ControlClient::GetBucketTagging, __VA_ARGS__)
#define GetBucketTaggingCallable(REQUEST)  SubmitCallable(&S3ControlClient::GetBucketTagging, REQUEST)

#define GetBucketVersioningAsync(...)  SubmitAsync(&S3ControlClient::GetBucketVersioning, __VA_ARGS__)
#define GetBucketVersioningCallable(REQUEST)  SubmitCallable(&S3ControlClient::GetBucketVersioning, REQUEST)

#define GetJobTaggingAsync(...)  SubmitAsync(&S3ControlClient::GetJobTagging, __VA_ARGS__)
#define GetJobTaggingCallable(REQUEST)  SubmitCallable(&S3ControlClient::GetJobTagging, REQUEST)

#define GetMultiRegionAccessPointAsync(...)  SubmitAsync(&S3ControlClient::GetMultiRegionAccessPoint, __VA_ARGS__)
#define GetMultiRegionAccessPointCallable(REQUEST)  SubmitCallable(&S3ControlClient::GetMultiRegionAccessPoint, REQUEST)

#define GetMultiRegionAccessPointPolicyAsync(...)  SubmitAsync(&S3ControlClient::GetMultiRegionAccessPointPolicy, __VA_ARGS__)
#define GetMultiRegionAccessPointPolicyCallable(REQUEST)  SubmitCallable(&S3ControlClient::GetMultiRegionAccessPointPolicy, REQUEST)

#define GetMultiRegionAccessPointPolicyStatusAsync(...)  SubmitAsync(&S3ControlClient::GetMultiRegionAccessPointPolicyStatus, __VA_ARGS__)
#define GetMultiRegionAccessPointPolicyStatusCallable(REQUEST)  SubmitCallable(&S3ControlClient::GetMultiRegionAccessPointPolicyStatus, REQUEST)

#define GetPublicAccessBlockAsync(...)  SubmitAsync(&S3ControlClient::GetPublicAccessBlock, __VA_ARGS__)
#define GetPublicAccessBlockCallable(REQUEST)  SubmitCallable(&S3ControlClient::GetPublicAccessBlock, REQUEST)

#define GetStorageLensConfigurationAsync(...)  SubmitAsync(&S3ControlClient::GetStorageLensConfiguration, __VA_ARGS__)
#define GetStorageLensConfigurationCallable(REQUEST)  SubmitCallable(&S3ControlClient::GetStorageLensConfiguration, REQUEST)

#define GetStorageLensConfigurationTaggingAsync(...)  SubmitAsync(&S3ControlClient::GetStorageLensConfigurationTagging, __VA_ARGS__)
#define GetStorageLensConfigurationTaggingCallable(REQUEST)  SubmitCallable(&S3ControlClient::GetStorageLensConfigurationTagging, REQUEST)

#define ListAccessPointsAsync(...)  SubmitAsync(&S3ControlClient::ListAccessPoints, __VA_ARGS__)
#define ListAccessPointsCallable(REQUEST)  SubmitCallable(&S3ControlClient::ListAccessPoints, REQUEST)

#define ListAccessPointsForObjectLambdaAsync(...)  SubmitAsync(&S3ControlClient::ListAccessPointsForObjectLambda, __VA_ARGS__)
#define ListAccessPointsForObjectLambdaCallable(REQUEST)  SubmitCallable(&S3ControlClient::ListAccessPointsForObjectLambda, REQUEST)

#define ListJobsAsync(...)  SubmitAsync(&S3ControlClient::ListJobs, __VA_ARGS__)
#define ListJobsCallable(REQUEST)  SubmitCallable(&S3ControlClient::ListJobs, REQUEST)

#define ListMultiRegionAccessPointsAsync(...)  SubmitAsync(&S3ControlClient::ListMultiRegionAccessPoints, __VA_ARGS__)
#define ListMultiRegionAccessPointsCallable(REQUEST)  SubmitCallable(&S3ControlClient::ListMultiRegionAccessPoints, REQUEST)

#define ListRegionalBucketsAsync(...)  SubmitAsync(&S3ControlClient::ListRegionalBuckets, __VA_ARGS__)
#define ListRegionalBucketsCallable(REQUEST)  SubmitCallable(&S3ControlClient::ListRegionalBuckets, REQUEST)

#define ListStorageLensConfigurationsAsync(...)  SubmitAsync(&S3ControlClient::ListStorageLensConfigurations, __VA_ARGS__)
#define ListStorageLensConfigurationsCallable(REQUEST)  SubmitCallable(&S3ControlClient::ListStorageLensConfigurations, REQUEST)

#define PutAccessPointConfigurationForObjectLambdaAsync(...)  SubmitAsync(&S3ControlClient::PutAccessPointConfigurationForObjectLambda, __VA_ARGS__)
#define PutAccessPointConfigurationForObjectLambdaCallable(REQUEST)  SubmitCallable(&S3ControlClient::PutAccessPointConfigurationForObjectLambda, REQUEST)

#define PutAccessPointPolicyAsync(...)  SubmitAsync(&S3ControlClient::PutAccessPointPolicy, __VA_ARGS__)
#define PutAccessPointPolicyCallable(REQUEST)  SubmitCallable(&S3ControlClient::PutAccessPointPolicy, REQUEST)

#define PutAccessPointPolicyForObjectLambdaAsync(...)  SubmitAsync(&S3ControlClient::PutAccessPointPolicyForObjectLambda, __VA_ARGS__)
#define PutAccessPointPolicyForObjectLambdaCallable(REQUEST)  SubmitCallable(&S3ControlClient::PutAccessPointPolicyForObjectLambda, REQUEST)

#define PutBucketLifecycleConfigurationAsync(...)  SubmitAsync(&S3ControlClient::PutBucketLifecycleConfiguration, __VA_ARGS__)
#define PutBucketLifecycleConfigurationCallable(REQUEST)  SubmitCallable(&S3ControlClient::PutBucketLifecycleConfiguration, REQUEST)

#define PutBucketPolicyAsync(...)  SubmitAsync(&S3ControlClient::PutBucketPolicy, __VA_ARGS__)
#define PutBucketPolicyCallable(REQUEST)  SubmitCallable(&S3ControlClient::PutBucketPolicy, REQUEST)

#define PutBucketTaggingAsync(...)  SubmitAsync(&S3ControlClient::PutBucketTagging, __VA_ARGS__)
#define PutBucketTaggingCallable(REQUEST)  SubmitCallable(&S3ControlClient::PutBucketTagging, REQUEST)

#define PutBucketVersioningAsync(...)  SubmitAsync(&S3ControlClient::PutBucketVersioning, __VA_ARGS__)
#define PutBucketVersioningCallable(REQUEST)  SubmitCallable(&S3ControlClient::PutBucketVersioning, REQUEST)

#define PutJobTaggingAsync(...)  SubmitAsync(&S3ControlClient::PutJobTagging, __VA_ARGS__)
#define PutJobTaggingCallable(REQUEST)  SubmitCallable(&S3ControlClient::PutJobTagging, REQUEST)

#define PutMultiRegionAccessPointPolicyAsync(...)  SubmitAsync(&S3ControlClient::PutMultiRegionAccessPointPolicy, __VA_ARGS__)
#define PutMultiRegionAccessPointPolicyCallable(REQUEST)  SubmitCallable(&S3ControlClient::PutMultiRegionAccessPointPolicy, REQUEST)

#define PutPublicAccessBlockAsync(...)  SubmitAsync(&S3ControlClient::PutPublicAccessBlock, __VA_ARGS__)
#define PutPublicAccessBlockCallable(REQUEST)  SubmitCallable(&S3ControlClient::PutPublicAccessBlock, REQUEST)

#define PutStorageLensConfigurationAsync(...)  SubmitAsync(&S3ControlClient::PutStorageLensConfiguration, __VA_ARGS__)
#define PutStorageLensConfigurationCallable(REQUEST)  SubmitCallable(&S3ControlClient::PutStorageLensConfiguration, REQUEST)

#define PutStorageLensConfigurationTaggingAsync(...)  SubmitAsync(&S3ControlClient::PutStorageLensConfigurationTagging, __VA_ARGS__)
#define PutStorageLensConfigurationTaggingCallable(REQUEST)  SubmitCallable(&S3ControlClient::PutStorageLensConfigurationTagging, REQUEST)

#define UpdateJobPriorityAsync(...)  SubmitAsync(&S3ControlClient::UpdateJobPriority, __VA_ARGS__)
#define UpdateJobPriorityCallable(REQUEST)  SubmitCallable(&S3ControlClient::UpdateJobPriority, REQUEST)

#define UpdateJobStatusAsync(...)  SubmitAsync(&S3ControlClient::UpdateJobStatus, __VA_ARGS__)
#define UpdateJobStatusCallable(REQUEST)  SubmitCallable(&S3ControlClient::UpdateJobStatus, REQUEST)


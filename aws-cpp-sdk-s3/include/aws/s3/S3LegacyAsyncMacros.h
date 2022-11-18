/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define AbortMultipartUploadAsync(...)  SubmitAsync(&S3Client::AbortMultipartUpload, __VA_ARGS__)
#define AbortMultipartUploadCallable(REQUEST)  SubmitCallable(&S3Client::AbortMultipartUpload, REQUEST)

#define CompleteMultipartUploadAsync(...)  SubmitAsync(&S3Client::CompleteMultipartUpload, __VA_ARGS__)
#define CompleteMultipartUploadCallable(REQUEST)  SubmitCallable(&S3Client::CompleteMultipartUpload, REQUEST)

#define CopyObjectAsync(...)  SubmitAsync(&S3Client::CopyObject, __VA_ARGS__)
#define CopyObjectCallable(REQUEST)  SubmitCallable(&S3Client::CopyObject, REQUEST)

#define CreateBucketAsync(...)  SubmitAsync(&S3Client::CreateBucket, __VA_ARGS__)
#define CreateBucketCallable(REQUEST)  SubmitCallable(&S3Client::CreateBucket, REQUEST)

#define CreateMultipartUploadAsync(...)  SubmitAsync(&S3Client::CreateMultipartUpload, __VA_ARGS__)
#define CreateMultipartUploadCallable(REQUEST)  SubmitCallable(&S3Client::CreateMultipartUpload, REQUEST)

#define DeleteBucketAsync(...)  SubmitAsync(&S3Client::DeleteBucket, __VA_ARGS__)
#define DeleteBucketCallable(REQUEST)  SubmitCallable(&S3Client::DeleteBucket, REQUEST)

#define DeleteBucketAnalyticsConfigurationAsync(...)  SubmitAsync(&S3Client::DeleteBucketAnalyticsConfiguration, __VA_ARGS__)
#define DeleteBucketAnalyticsConfigurationCallable(REQUEST)  SubmitCallable(&S3Client::DeleteBucketAnalyticsConfiguration, REQUEST)

#define DeleteBucketCorsAsync(...)  SubmitAsync(&S3Client::DeleteBucketCors, __VA_ARGS__)
#define DeleteBucketCorsCallable(REQUEST)  SubmitCallable(&S3Client::DeleteBucketCors, REQUEST)

#define DeleteBucketEncryptionAsync(...)  SubmitAsync(&S3Client::DeleteBucketEncryption, __VA_ARGS__)
#define DeleteBucketEncryptionCallable(REQUEST)  SubmitCallable(&S3Client::DeleteBucketEncryption, REQUEST)

#define DeleteBucketIntelligentTieringConfigurationAsync(...)  SubmitAsync(&S3Client::DeleteBucketIntelligentTieringConfiguration, __VA_ARGS__)
#define DeleteBucketIntelligentTieringConfigurationCallable(REQUEST)  SubmitCallable(&S3Client::DeleteBucketIntelligentTieringConfiguration, REQUEST)

#define DeleteBucketInventoryConfigurationAsync(...)  SubmitAsync(&S3Client::DeleteBucketInventoryConfiguration, __VA_ARGS__)
#define DeleteBucketInventoryConfigurationCallable(REQUEST)  SubmitCallable(&S3Client::DeleteBucketInventoryConfiguration, REQUEST)

#define DeleteBucketLifecycleAsync(...)  SubmitAsync(&S3Client::DeleteBucketLifecycle, __VA_ARGS__)
#define DeleteBucketLifecycleCallable(REQUEST)  SubmitCallable(&S3Client::DeleteBucketLifecycle, REQUEST)

#define DeleteBucketMetricsConfigurationAsync(...)  SubmitAsync(&S3Client::DeleteBucketMetricsConfiguration, __VA_ARGS__)
#define DeleteBucketMetricsConfigurationCallable(REQUEST)  SubmitCallable(&S3Client::DeleteBucketMetricsConfiguration, REQUEST)

#define DeleteBucketOwnershipControlsAsync(...)  SubmitAsync(&S3Client::DeleteBucketOwnershipControls, __VA_ARGS__)
#define DeleteBucketOwnershipControlsCallable(REQUEST)  SubmitCallable(&S3Client::DeleteBucketOwnershipControls, REQUEST)

#define DeleteBucketPolicyAsync(...)  SubmitAsync(&S3Client::DeleteBucketPolicy, __VA_ARGS__)
#define DeleteBucketPolicyCallable(REQUEST)  SubmitCallable(&S3Client::DeleteBucketPolicy, REQUEST)

#define DeleteBucketReplicationAsync(...)  SubmitAsync(&S3Client::DeleteBucketReplication, __VA_ARGS__)
#define DeleteBucketReplicationCallable(REQUEST)  SubmitCallable(&S3Client::DeleteBucketReplication, REQUEST)

#define DeleteBucketTaggingAsync(...)  SubmitAsync(&S3Client::DeleteBucketTagging, __VA_ARGS__)
#define DeleteBucketTaggingCallable(REQUEST)  SubmitCallable(&S3Client::DeleteBucketTagging, REQUEST)

#define DeleteBucketWebsiteAsync(...)  SubmitAsync(&S3Client::DeleteBucketWebsite, __VA_ARGS__)
#define DeleteBucketWebsiteCallable(REQUEST)  SubmitCallable(&S3Client::DeleteBucketWebsite, REQUEST)

#define DeleteObjectAsync(...)  SubmitAsync(&S3Client::DeleteObject, __VA_ARGS__)
#define DeleteObjectCallable(REQUEST)  SubmitCallable(&S3Client::DeleteObject, REQUEST)

#define DeleteObjectTaggingAsync(...)  SubmitAsync(&S3Client::DeleteObjectTagging, __VA_ARGS__)
#define DeleteObjectTaggingCallable(REQUEST)  SubmitCallable(&S3Client::DeleteObjectTagging, REQUEST)

#define DeleteObjectsAsync(...)  SubmitAsync(&S3Client::DeleteObjects, __VA_ARGS__)
#define DeleteObjectsCallable(REQUEST)  SubmitCallable(&S3Client::DeleteObjects, REQUEST)

#define DeletePublicAccessBlockAsync(...)  SubmitAsync(&S3Client::DeletePublicAccessBlock, __VA_ARGS__)
#define DeletePublicAccessBlockCallable(REQUEST)  SubmitCallable(&S3Client::DeletePublicAccessBlock, REQUEST)

#define GetBucketAccelerateConfigurationAsync(...)  SubmitAsync(&S3Client::GetBucketAccelerateConfiguration, __VA_ARGS__)
#define GetBucketAccelerateConfigurationCallable(REQUEST)  SubmitCallable(&S3Client::GetBucketAccelerateConfiguration, REQUEST)

#define GetBucketAclAsync(...)  SubmitAsync(&S3Client::GetBucketAcl, __VA_ARGS__)
#define GetBucketAclCallable(REQUEST)  SubmitCallable(&S3Client::GetBucketAcl, REQUEST)

#define GetBucketAnalyticsConfigurationAsync(...)  SubmitAsync(&S3Client::GetBucketAnalyticsConfiguration, __VA_ARGS__)
#define GetBucketAnalyticsConfigurationCallable(REQUEST)  SubmitCallable(&S3Client::GetBucketAnalyticsConfiguration, REQUEST)

#define GetBucketCorsAsync(...)  SubmitAsync(&S3Client::GetBucketCors, __VA_ARGS__)
#define GetBucketCorsCallable(REQUEST)  SubmitCallable(&S3Client::GetBucketCors, REQUEST)

#define GetBucketEncryptionAsync(...)  SubmitAsync(&S3Client::GetBucketEncryption, __VA_ARGS__)
#define GetBucketEncryptionCallable(REQUEST)  SubmitCallable(&S3Client::GetBucketEncryption, REQUEST)

#define GetBucketIntelligentTieringConfigurationAsync(...)  SubmitAsync(&S3Client::GetBucketIntelligentTieringConfiguration, __VA_ARGS__)
#define GetBucketIntelligentTieringConfigurationCallable(REQUEST)  SubmitCallable(&S3Client::GetBucketIntelligentTieringConfiguration, REQUEST)

#define GetBucketInventoryConfigurationAsync(...)  SubmitAsync(&S3Client::GetBucketInventoryConfiguration, __VA_ARGS__)
#define GetBucketInventoryConfigurationCallable(REQUEST)  SubmitCallable(&S3Client::GetBucketInventoryConfiguration, REQUEST)

#define GetBucketLifecycleConfigurationAsync(...)  SubmitAsync(&S3Client::GetBucketLifecycleConfiguration, __VA_ARGS__)
#define GetBucketLifecycleConfigurationCallable(REQUEST)  SubmitCallable(&S3Client::GetBucketLifecycleConfiguration, REQUEST)

#define GetBucketLocationAsync(...)  SubmitAsync(&S3Client::GetBucketLocation, __VA_ARGS__)
#define GetBucketLocationCallable(REQUEST)  SubmitCallable(&S3Client::GetBucketLocation, REQUEST)

#define GetBucketLoggingAsync(...)  SubmitAsync(&S3Client::GetBucketLogging, __VA_ARGS__)
#define GetBucketLoggingCallable(REQUEST)  SubmitCallable(&S3Client::GetBucketLogging, REQUEST)

#define GetBucketMetricsConfigurationAsync(...)  SubmitAsync(&S3Client::GetBucketMetricsConfiguration, __VA_ARGS__)
#define GetBucketMetricsConfigurationCallable(REQUEST)  SubmitCallable(&S3Client::GetBucketMetricsConfiguration, REQUEST)

#define GetBucketNotificationConfigurationAsync(...)  SubmitAsync(&S3Client::GetBucketNotificationConfiguration, __VA_ARGS__)
#define GetBucketNotificationConfigurationCallable(REQUEST)  SubmitCallable(&S3Client::GetBucketNotificationConfiguration, REQUEST)

#define GetBucketOwnershipControlsAsync(...)  SubmitAsync(&S3Client::GetBucketOwnershipControls, __VA_ARGS__)
#define GetBucketOwnershipControlsCallable(REQUEST)  SubmitCallable(&S3Client::GetBucketOwnershipControls, REQUEST)

#define GetBucketPolicyAsync(...)  SubmitAsync(&S3Client::GetBucketPolicy, __VA_ARGS__)
#define GetBucketPolicyCallable(REQUEST)  SubmitCallable(&S3Client::GetBucketPolicy, REQUEST)

#define GetBucketPolicyStatusAsync(...)  SubmitAsync(&S3Client::GetBucketPolicyStatus, __VA_ARGS__)
#define GetBucketPolicyStatusCallable(REQUEST)  SubmitCallable(&S3Client::GetBucketPolicyStatus, REQUEST)

#define GetBucketReplicationAsync(...)  SubmitAsync(&S3Client::GetBucketReplication, __VA_ARGS__)
#define GetBucketReplicationCallable(REQUEST)  SubmitCallable(&S3Client::GetBucketReplication, REQUEST)

#define GetBucketRequestPaymentAsync(...)  SubmitAsync(&S3Client::GetBucketRequestPayment, __VA_ARGS__)
#define GetBucketRequestPaymentCallable(REQUEST)  SubmitCallable(&S3Client::GetBucketRequestPayment, REQUEST)

#define GetBucketTaggingAsync(...)  SubmitAsync(&S3Client::GetBucketTagging, __VA_ARGS__)
#define GetBucketTaggingCallable(REQUEST)  SubmitCallable(&S3Client::GetBucketTagging, REQUEST)

#define GetBucketVersioningAsync(...)  SubmitAsync(&S3Client::GetBucketVersioning, __VA_ARGS__)
#define GetBucketVersioningCallable(REQUEST)  SubmitCallable(&S3Client::GetBucketVersioning, REQUEST)

#define GetBucketWebsiteAsync(...)  SubmitAsync(&S3Client::GetBucketWebsite, __VA_ARGS__)
#define GetBucketWebsiteCallable(REQUEST)  SubmitCallable(&S3Client::GetBucketWebsite, REQUEST)

#define GetObjectAsync(...)  SubmitAsync(&S3Client::GetObject, __VA_ARGS__)
#define GetObjectCallable(REQUEST)  SubmitCallable(&S3Client::GetObject, REQUEST)

#define GetObjectAclAsync(...)  SubmitAsync(&S3Client::GetObjectAcl, __VA_ARGS__)
#define GetObjectAclCallable(REQUEST)  SubmitCallable(&S3Client::GetObjectAcl, REQUEST)

#define GetObjectAttributesAsync(...)  SubmitAsync(&S3Client::GetObjectAttributes, __VA_ARGS__)
#define GetObjectAttributesCallable(REQUEST)  SubmitCallable(&S3Client::GetObjectAttributes, REQUEST)

#define GetObjectLegalHoldAsync(...)  SubmitAsync(&S3Client::GetObjectLegalHold, __VA_ARGS__)
#define GetObjectLegalHoldCallable(REQUEST)  SubmitCallable(&S3Client::GetObjectLegalHold, REQUEST)

#define GetObjectLockConfigurationAsync(...)  SubmitAsync(&S3Client::GetObjectLockConfiguration, __VA_ARGS__)
#define GetObjectLockConfigurationCallable(REQUEST)  SubmitCallable(&S3Client::GetObjectLockConfiguration, REQUEST)

#define GetObjectRetentionAsync(...)  SubmitAsync(&S3Client::GetObjectRetention, __VA_ARGS__)
#define GetObjectRetentionCallable(REQUEST)  SubmitCallable(&S3Client::GetObjectRetention, REQUEST)

#define GetObjectTaggingAsync(...)  SubmitAsync(&S3Client::GetObjectTagging, __VA_ARGS__)
#define GetObjectTaggingCallable(REQUEST)  SubmitCallable(&S3Client::GetObjectTagging, REQUEST)

#define GetObjectTorrentAsync(...)  SubmitAsync(&S3Client::GetObjectTorrent, __VA_ARGS__)
#define GetObjectTorrentCallable(REQUEST)  SubmitCallable(&S3Client::GetObjectTorrent, REQUEST)

#define GetPublicAccessBlockAsync(...)  SubmitAsync(&S3Client::GetPublicAccessBlock, __VA_ARGS__)
#define GetPublicAccessBlockCallable(REQUEST)  SubmitCallable(&S3Client::GetPublicAccessBlock, REQUEST)

#define HeadBucketAsync(...)  SubmitAsync(&S3Client::HeadBucket, __VA_ARGS__)
#define HeadBucketCallable(REQUEST)  SubmitCallable(&S3Client::HeadBucket, REQUEST)

#define HeadObjectAsync(...)  SubmitAsync(&S3Client::HeadObject, __VA_ARGS__)
#define HeadObjectCallable(REQUEST)  SubmitCallable(&S3Client::HeadObject, REQUEST)

#define ListBucketAnalyticsConfigurationsAsync(...)  SubmitAsync(&S3Client::ListBucketAnalyticsConfigurations, __VA_ARGS__)
#define ListBucketAnalyticsConfigurationsCallable(REQUEST)  SubmitCallable(&S3Client::ListBucketAnalyticsConfigurations, REQUEST)

#define ListBucketIntelligentTieringConfigurationsAsync(...)  SubmitAsync(&S3Client::ListBucketIntelligentTieringConfigurations, __VA_ARGS__)
#define ListBucketIntelligentTieringConfigurationsCallable(REQUEST)  SubmitCallable(&S3Client::ListBucketIntelligentTieringConfigurations, REQUEST)

#define ListBucketInventoryConfigurationsAsync(...)  SubmitAsync(&S3Client::ListBucketInventoryConfigurations, __VA_ARGS__)
#define ListBucketInventoryConfigurationsCallable(REQUEST)  SubmitCallable(&S3Client::ListBucketInventoryConfigurations, REQUEST)

#define ListBucketMetricsConfigurationsAsync(...)  SubmitAsync(&S3Client::ListBucketMetricsConfigurations, __VA_ARGS__)
#define ListBucketMetricsConfigurationsCallable(REQUEST)  SubmitCallable(&S3Client::ListBucketMetricsConfigurations, REQUEST)


#define ListMultipartUploadsAsync(...)  SubmitAsync(&S3Client::ListMultipartUploads, __VA_ARGS__)
#define ListMultipartUploadsCallable(REQUEST)  SubmitCallable(&S3Client::ListMultipartUploads, REQUEST)

#define ListObjectVersionsAsync(...)  SubmitAsync(&S3Client::ListObjectVersions, __VA_ARGS__)
#define ListObjectVersionsCallable(REQUEST)  SubmitCallable(&S3Client::ListObjectVersions, REQUEST)

#define ListObjectsAsync(...)  SubmitAsync(&S3Client::ListObjects, __VA_ARGS__)
#define ListObjectsCallable(REQUEST)  SubmitCallable(&S3Client::ListObjects, REQUEST)

#define ListObjectsV2Async(...)  SubmitAsync(&S3Client::ListObjectsV2, __VA_ARGS__)
#define ListObjectsV2Callable(REQUEST)  SubmitCallable(&S3Client::ListObjectsV2, REQUEST)

#define ListPartsAsync(...)  SubmitAsync(&S3Client::ListParts, __VA_ARGS__)
#define ListPartsCallable(REQUEST)  SubmitCallable(&S3Client::ListParts, REQUEST)

#define PutBucketAccelerateConfigurationAsync(...)  SubmitAsync(&S3Client::PutBucketAccelerateConfiguration, __VA_ARGS__)
#define PutBucketAccelerateConfigurationCallable(REQUEST)  SubmitCallable(&S3Client::PutBucketAccelerateConfiguration, REQUEST)

#define PutBucketAclAsync(...)  SubmitAsync(&S3Client::PutBucketAcl, __VA_ARGS__)
#define PutBucketAclCallable(REQUEST)  SubmitCallable(&S3Client::PutBucketAcl, REQUEST)

#define PutBucketAnalyticsConfigurationAsync(...)  SubmitAsync(&S3Client::PutBucketAnalyticsConfiguration, __VA_ARGS__)
#define PutBucketAnalyticsConfigurationCallable(REQUEST)  SubmitCallable(&S3Client::PutBucketAnalyticsConfiguration, REQUEST)

#define PutBucketCorsAsync(...)  SubmitAsync(&S3Client::PutBucketCors, __VA_ARGS__)
#define PutBucketCorsCallable(REQUEST)  SubmitCallable(&S3Client::PutBucketCors, REQUEST)

#define PutBucketEncryptionAsync(...)  SubmitAsync(&S3Client::PutBucketEncryption, __VA_ARGS__)
#define PutBucketEncryptionCallable(REQUEST)  SubmitCallable(&S3Client::PutBucketEncryption, REQUEST)

#define PutBucketIntelligentTieringConfigurationAsync(...)  SubmitAsync(&S3Client::PutBucketIntelligentTieringConfiguration, __VA_ARGS__)
#define PutBucketIntelligentTieringConfigurationCallable(REQUEST)  SubmitCallable(&S3Client::PutBucketIntelligentTieringConfiguration, REQUEST)

#define PutBucketInventoryConfigurationAsync(...)  SubmitAsync(&S3Client::PutBucketInventoryConfiguration, __VA_ARGS__)
#define PutBucketInventoryConfigurationCallable(REQUEST)  SubmitCallable(&S3Client::PutBucketInventoryConfiguration, REQUEST)

#define PutBucketLifecycleConfigurationAsync(...)  SubmitAsync(&S3Client::PutBucketLifecycleConfiguration, __VA_ARGS__)
#define PutBucketLifecycleConfigurationCallable(REQUEST)  SubmitCallable(&S3Client::PutBucketLifecycleConfiguration, REQUEST)

#define PutBucketLoggingAsync(...)  SubmitAsync(&S3Client::PutBucketLogging, __VA_ARGS__)
#define PutBucketLoggingCallable(REQUEST)  SubmitCallable(&S3Client::PutBucketLogging, REQUEST)

#define PutBucketMetricsConfigurationAsync(...)  SubmitAsync(&S3Client::PutBucketMetricsConfiguration, __VA_ARGS__)
#define PutBucketMetricsConfigurationCallable(REQUEST)  SubmitCallable(&S3Client::PutBucketMetricsConfiguration, REQUEST)

#define PutBucketNotificationConfigurationAsync(...)  SubmitAsync(&S3Client::PutBucketNotificationConfiguration, __VA_ARGS__)
#define PutBucketNotificationConfigurationCallable(REQUEST)  SubmitCallable(&S3Client::PutBucketNotificationConfiguration, REQUEST)

#define PutBucketOwnershipControlsAsync(...)  SubmitAsync(&S3Client::PutBucketOwnershipControls, __VA_ARGS__)
#define PutBucketOwnershipControlsCallable(REQUEST)  SubmitCallable(&S3Client::PutBucketOwnershipControls, REQUEST)

#define PutBucketPolicyAsync(...)  SubmitAsync(&S3Client::PutBucketPolicy, __VA_ARGS__)
#define PutBucketPolicyCallable(REQUEST)  SubmitCallable(&S3Client::PutBucketPolicy, REQUEST)

#define PutBucketReplicationAsync(...)  SubmitAsync(&S3Client::PutBucketReplication, __VA_ARGS__)
#define PutBucketReplicationCallable(REQUEST)  SubmitCallable(&S3Client::PutBucketReplication, REQUEST)

#define PutBucketRequestPaymentAsync(...)  SubmitAsync(&S3Client::PutBucketRequestPayment, __VA_ARGS__)
#define PutBucketRequestPaymentCallable(REQUEST)  SubmitCallable(&S3Client::PutBucketRequestPayment, REQUEST)

#define PutBucketTaggingAsync(...)  SubmitAsync(&S3Client::PutBucketTagging, __VA_ARGS__)
#define PutBucketTaggingCallable(REQUEST)  SubmitCallable(&S3Client::PutBucketTagging, REQUEST)

#define PutBucketVersioningAsync(...)  SubmitAsync(&S3Client::PutBucketVersioning, __VA_ARGS__)
#define PutBucketVersioningCallable(REQUEST)  SubmitCallable(&S3Client::PutBucketVersioning, REQUEST)

#define PutBucketWebsiteAsync(...)  SubmitAsync(&S3Client::PutBucketWebsite, __VA_ARGS__)
#define PutBucketWebsiteCallable(REQUEST)  SubmitCallable(&S3Client::PutBucketWebsite, REQUEST)

#define PutObjectAsync(...)  SubmitAsync(&S3Client::PutObject, __VA_ARGS__)
#define PutObjectCallable(REQUEST)  SubmitCallable(&S3Client::PutObject, REQUEST)

#define PutObjectAclAsync(...)  SubmitAsync(&S3Client::PutObjectAcl, __VA_ARGS__)
#define PutObjectAclCallable(REQUEST)  SubmitCallable(&S3Client::PutObjectAcl, REQUEST)

#define PutObjectLegalHoldAsync(...)  SubmitAsync(&S3Client::PutObjectLegalHold, __VA_ARGS__)
#define PutObjectLegalHoldCallable(REQUEST)  SubmitCallable(&S3Client::PutObjectLegalHold, REQUEST)

#define PutObjectLockConfigurationAsync(...)  SubmitAsync(&S3Client::PutObjectLockConfiguration, __VA_ARGS__)
#define PutObjectLockConfigurationCallable(REQUEST)  SubmitCallable(&S3Client::PutObjectLockConfiguration, REQUEST)

#define PutObjectRetentionAsync(...)  SubmitAsync(&S3Client::PutObjectRetention, __VA_ARGS__)
#define PutObjectRetentionCallable(REQUEST)  SubmitCallable(&S3Client::PutObjectRetention, REQUEST)

#define PutObjectTaggingAsync(...)  SubmitAsync(&S3Client::PutObjectTagging, __VA_ARGS__)
#define PutObjectTaggingCallable(REQUEST)  SubmitCallable(&S3Client::PutObjectTagging, REQUEST)

#define PutPublicAccessBlockAsync(...)  SubmitAsync(&S3Client::PutPublicAccessBlock, __VA_ARGS__)
#define PutPublicAccessBlockCallable(REQUEST)  SubmitCallable(&S3Client::PutPublicAccessBlock, REQUEST)

#define RestoreObjectAsync(...)  SubmitAsync(&S3Client::RestoreObject, __VA_ARGS__)
#define RestoreObjectCallable(REQUEST)  SubmitCallable(&S3Client::RestoreObject, REQUEST)

#define SelectObjectContentAsync(...)  SubmitAsync(&S3Client::SelectObjectContent, __VA_ARGS__)
#define SelectObjectContentCallable(REQUEST)  SubmitCallable(&S3Client::SelectObjectContent, REQUEST)

#define UploadPartAsync(...)  SubmitAsync(&S3Client::UploadPart, __VA_ARGS__)
#define UploadPartCallable(REQUEST)  SubmitCallable(&S3Client::UploadPart, REQUEST)

#define UploadPartCopyAsync(...)  SubmitAsync(&S3Client::UploadPartCopy, __VA_ARGS__)
#define UploadPartCopyCallable(REQUEST)  SubmitCallable(&S3Client::UploadPartCopy, REQUEST)

#define WriteGetObjectResponseAsync(...)  SubmitAsync(&S3Client::WriteGetObjectResponse, __VA_ARGS__)
#define WriteGetObjectResponseCallable(REQUEST)  SubmitCallable(&S3Client::WriteGetObjectResponse, REQUEST)


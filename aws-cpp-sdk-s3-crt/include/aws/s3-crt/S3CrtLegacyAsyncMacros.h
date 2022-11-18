/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define AbortMultipartUploadAsync(...)  SubmitAsync(&S3CrtClient::AbortMultipartUpload, __VA_ARGS__)
#define AbortMultipartUploadCallable(REQUEST)  SubmitCallable(&S3CrtClient::AbortMultipartUpload, REQUEST)

#define CompleteMultipartUploadAsync(...)  SubmitAsync(&S3CrtClient::CompleteMultipartUpload, __VA_ARGS__)
#define CompleteMultipartUploadCallable(REQUEST)  SubmitCallable(&S3CrtClient::CompleteMultipartUpload, REQUEST)

#define CopyObjectAsync(...)  SubmitAsync(&S3CrtClient::CopyObject, __VA_ARGS__)
#define CopyObjectCallable(REQUEST)  SubmitCallable(&S3CrtClient::CopyObject, REQUEST)

#define CreateBucketAsync(...)  SubmitAsync(&S3CrtClient::CreateBucket, __VA_ARGS__)
#define CreateBucketCallable(REQUEST)  SubmitCallable(&S3CrtClient::CreateBucket, REQUEST)

#define CreateMultipartUploadAsync(...)  SubmitAsync(&S3CrtClient::CreateMultipartUpload, __VA_ARGS__)
#define CreateMultipartUploadCallable(REQUEST)  SubmitCallable(&S3CrtClient::CreateMultipartUpload, REQUEST)

#define DeleteBucketAsync(...)  SubmitAsync(&S3CrtClient::DeleteBucket, __VA_ARGS__)
#define DeleteBucketCallable(REQUEST)  SubmitCallable(&S3CrtClient::DeleteBucket, REQUEST)

#define DeleteBucketAnalyticsConfigurationAsync(...)  SubmitAsync(&S3CrtClient::DeleteBucketAnalyticsConfiguration, __VA_ARGS__)
#define DeleteBucketAnalyticsConfigurationCallable(REQUEST)  SubmitCallable(&S3CrtClient::DeleteBucketAnalyticsConfiguration, REQUEST)

#define DeleteBucketCorsAsync(...)  SubmitAsync(&S3CrtClient::DeleteBucketCors, __VA_ARGS__)
#define DeleteBucketCorsCallable(REQUEST)  SubmitCallable(&S3CrtClient::DeleteBucketCors, REQUEST)

#define DeleteBucketEncryptionAsync(...)  SubmitAsync(&S3CrtClient::DeleteBucketEncryption, __VA_ARGS__)
#define DeleteBucketEncryptionCallable(REQUEST)  SubmitCallable(&S3CrtClient::DeleteBucketEncryption, REQUEST)

#define DeleteBucketIntelligentTieringConfigurationAsync(...)  SubmitAsync(&S3CrtClient::DeleteBucketIntelligentTieringConfiguration, __VA_ARGS__)
#define DeleteBucketIntelligentTieringConfigurationCallable(REQUEST)  SubmitCallable(&S3CrtClient::DeleteBucketIntelligentTieringConfiguration, REQUEST)

#define DeleteBucketInventoryConfigurationAsync(...)  SubmitAsync(&S3CrtClient::DeleteBucketInventoryConfiguration, __VA_ARGS__)
#define DeleteBucketInventoryConfigurationCallable(REQUEST)  SubmitCallable(&S3CrtClient::DeleteBucketInventoryConfiguration, REQUEST)

#define DeleteBucketLifecycleAsync(...)  SubmitAsync(&S3CrtClient::DeleteBucketLifecycle, __VA_ARGS__)
#define DeleteBucketLifecycleCallable(REQUEST)  SubmitCallable(&S3CrtClient::DeleteBucketLifecycle, REQUEST)

#define DeleteBucketMetricsConfigurationAsync(...)  SubmitAsync(&S3CrtClient::DeleteBucketMetricsConfiguration, __VA_ARGS__)
#define DeleteBucketMetricsConfigurationCallable(REQUEST)  SubmitCallable(&S3CrtClient::DeleteBucketMetricsConfiguration, REQUEST)

#define DeleteBucketOwnershipControlsAsync(...)  SubmitAsync(&S3CrtClient::DeleteBucketOwnershipControls, __VA_ARGS__)
#define DeleteBucketOwnershipControlsCallable(REQUEST)  SubmitCallable(&S3CrtClient::DeleteBucketOwnershipControls, REQUEST)

#define DeleteBucketPolicyAsync(...)  SubmitAsync(&S3CrtClient::DeleteBucketPolicy, __VA_ARGS__)
#define DeleteBucketPolicyCallable(REQUEST)  SubmitCallable(&S3CrtClient::DeleteBucketPolicy, REQUEST)

#define DeleteBucketReplicationAsync(...)  SubmitAsync(&S3CrtClient::DeleteBucketReplication, __VA_ARGS__)
#define DeleteBucketReplicationCallable(REQUEST)  SubmitCallable(&S3CrtClient::DeleteBucketReplication, REQUEST)

#define DeleteBucketTaggingAsync(...)  SubmitAsync(&S3CrtClient::DeleteBucketTagging, __VA_ARGS__)
#define DeleteBucketTaggingCallable(REQUEST)  SubmitCallable(&S3CrtClient::DeleteBucketTagging, REQUEST)

#define DeleteBucketWebsiteAsync(...)  SubmitAsync(&S3CrtClient::DeleteBucketWebsite, __VA_ARGS__)
#define DeleteBucketWebsiteCallable(REQUEST)  SubmitCallable(&S3CrtClient::DeleteBucketWebsite, REQUEST)

#define DeleteObjectAsync(...)  SubmitAsync(&S3CrtClient::DeleteObject, __VA_ARGS__)
#define DeleteObjectCallable(REQUEST)  SubmitCallable(&S3CrtClient::DeleteObject, REQUEST)

#define DeleteObjectTaggingAsync(...)  SubmitAsync(&S3CrtClient::DeleteObjectTagging, __VA_ARGS__)
#define DeleteObjectTaggingCallable(REQUEST)  SubmitCallable(&S3CrtClient::DeleteObjectTagging, REQUEST)

#define DeleteObjectsAsync(...)  SubmitAsync(&S3CrtClient::DeleteObjects, __VA_ARGS__)
#define DeleteObjectsCallable(REQUEST)  SubmitCallable(&S3CrtClient::DeleteObjects, REQUEST)

#define DeletePublicAccessBlockAsync(...)  SubmitAsync(&S3CrtClient::DeletePublicAccessBlock, __VA_ARGS__)
#define DeletePublicAccessBlockCallable(REQUEST)  SubmitCallable(&S3CrtClient::DeletePublicAccessBlock, REQUEST)

#define GetBucketAccelerateConfigurationAsync(...)  SubmitAsync(&S3CrtClient::GetBucketAccelerateConfiguration, __VA_ARGS__)
#define GetBucketAccelerateConfigurationCallable(REQUEST)  SubmitCallable(&S3CrtClient::GetBucketAccelerateConfiguration, REQUEST)

#define GetBucketAclAsync(...)  SubmitAsync(&S3CrtClient::GetBucketAcl, __VA_ARGS__)
#define GetBucketAclCallable(REQUEST)  SubmitCallable(&S3CrtClient::GetBucketAcl, REQUEST)

#define GetBucketAnalyticsConfigurationAsync(...)  SubmitAsync(&S3CrtClient::GetBucketAnalyticsConfiguration, __VA_ARGS__)
#define GetBucketAnalyticsConfigurationCallable(REQUEST)  SubmitCallable(&S3CrtClient::GetBucketAnalyticsConfiguration, REQUEST)

#define GetBucketCorsAsync(...)  SubmitAsync(&S3CrtClient::GetBucketCors, __VA_ARGS__)
#define GetBucketCorsCallable(REQUEST)  SubmitCallable(&S3CrtClient::GetBucketCors, REQUEST)

#define GetBucketEncryptionAsync(...)  SubmitAsync(&S3CrtClient::GetBucketEncryption, __VA_ARGS__)
#define GetBucketEncryptionCallable(REQUEST)  SubmitCallable(&S3CrtClient::GetBucketEncryption, REQUEST)

#define GetBucketIntelligentTieringConfigurationAsync(...)  SubmitAsync(&S3CrtClient::GetBucketIntelligentTieringConfiguration, __VA_ARGS__)
#define GetBucketIntelligentTieringConfigurationCallable(REQUEST)  SubmitCallable(&S3CrtClient::GetBucketIntelligentTieringConfiguration, REQUEST)

#define GetBucketInventoryConfigurationAsync(...)  SubmitAsync(&S3CrtClient::GetBucketInventoryConfiguration, __VA_ARGS__)
#define GetBucketInventoryConfigurationCallable(REQUEST)  SubmitCallable(&S3CrtClient::GetBucketInventoryConfiguration, REQUEST)

#define GetBucketLifecycleConfigurationAsync(...)  SubmitAsync(&S3CrtClient::GetBucketLifecycleConfiguration, __VA_ARGS__)
#define GetBucketLifecycleConfigurationCallable(REQUEST)  SubmitCallable(&S3CrtClient::GetBucketLifecycleConfiguration, REQUEST)

#define GetBucketLocationAsync(...)  SubmitAsync(&S3CrtClient::GetBucketLocation, __VA_ARGS__)
#define GetBucketLocationCallable(REQUEST)  SubmitCallable(&S3CrtClient::GetBucketLocation, REQUEST)

#define GetBucketLoggingAsync(...)  SubmitAsync(&S3CrtClient::GetBucketLogging, __VA_ARGS__)
#define GetBucketLoggingCallable(REQUEST)  SubmitCallable(&S3CrtClient::GetBucketLogging, REQUEST)

#define GetBucketMetricsConfigurationAsync(...)  SubmitAsync(&S3CrtClient::GetBucketMetricsConfiguration, __VA_ARGS__)
#define GetBucketMetricsConfigurationCallable(REQUEST)  SubmitCallable(&S3CrtClient::GetBucketMetricsConfiguration, REQUEST)

#define GetBucketNotificationConfigurationAsync(...)  SubmitAsync(&S3CrtClient::GetBucketNotificationConfiguration, __VA_ARGS__)
#define GetBucketNotificationConfigurationCallable(REQUEST)  SubmitCallable(&S3CrtClient::GetBucketNotificationConfiguration, REQUEST)

#define GetBucketOwnershipControlsAsync(...)  SubmitAsync(&S3CrtClient::GetBucketOwnershipControls, __VA_ARGS__)
#define GetBucketOwnershipControlsCallable(REQUEST)  SubmitCallable(&S3CrtClient::GetBucketOwnershipControls, REQUEST)

#define GetBucketPolicyAsync(...)  SubmitAsync(&S3CrtClient::GetBucketPolicy, __VA_ARGS__)
#define GetBucketPolicyCallable(REQUEST)  SubmitCallable(&S3CrtClient::GetBucketPolicy, REQUEST)

#define GetBucketPolicyStatusAsync(...)  SubmitAsync(&S3CrtClient::GetBucketPolicyStatus, __VA_ARGS__)
#define GetBucketPolicyStatusCallable(REQUEST)  SubmitCallable(&S3CrtClient::GetBucketPolicyStatus, REQUEST)

#define GetBucketReplicationAsync(...)  SubmitAsync(&S3CrtClient::GetBucketReplication, __VA_ARGS__)
#define GetBucketReplicationCallable(REQUEST)  SubmitCallable(&S3CrtClient::GetBucketReplication, REQUEST)

#define GetBucketRequestPaymentAsync(...)  SubmitAsync(&S3CrtClient::GetBucketRequestPayment, __VA_ARGS__)
#define GetBucketRequestPaymentCallable(REQUEST)  SubmitCallable(&S3CrtClient::GetBucketRequestPayment, REQUEST)

#define GetBucketTaggingAsync(...)  SubmitAsync(&S3CrtClient::GetBucketTagging, __VA_ARGS__)
#define GetBucketTaggingCallable(REQUEST)  SubmitCallable(&S3CrtClient::GetBucketTagging, REQUEST)

#define GetBucketVersioningAsync(...)  SubmitAsync(&S3CrtClient::GetBucketVersioning, __VA_ARGS__)
#define GetBucketVersioningCallable(REQUEST)  SubmitCallable(&S3CrtClient::GetBucketVersioning, REQUEST)

#define GetBucketWebsiteAsync(...)  SubmitAsync(&S3CrtClient::GetBucketWebsite, __VA_ARGS__)
#define GetBucketWebsiteCallable(REQUEST)  SubmitCallable(&S3CrtClient::GetBucketWebsite, REQUEST)

#define GetObjectAsync(...)  SubmitAsync(&S3CrtClient::GetObject, __VA_ARGS__)
#define GetObjectCallable(REQUEST)  SubmitCallable(&S3CrtClient::GetObject, REQUEST)

#define GetObjectAclAsync(...)  SubmitAsync(&S3CrtClient::GetObjectAcl, __VA_ARGS__)
#define GetObjectAclCallable(REQUEST)  SubmitCallable(&S3CrtClient::GetObjectAcl, REQUEST)

#define GetObjectAttributesAsync(...)  SubmitAsync(&S3CrtClient::GetObjectAttributes, __VA_ARGS__)
#define GetObjectAttributesCallable(REQUEST)  SubmitCallable(&S3CrtClient::GetObjectAttributes, REQUEST)

#define GetObjectLegalHoldAsync(...)  SubmitAsync(&S3CrtClient::GetObjectLegalHold, __VA_ARGS__)
#define GetObjectLegalHoldCallable(REQUEST)  SubmitCallable(&S3CrtClient::GetObjectLegalHold, REQUEST)

#define GetObjectLockConfigurationAsync(...)  SubmitAsync(&S3CrtClient::GetObjectLockConfiguration, __VA_ARGS__)
#define GetObjectLockConfigurationCallable(REQUEST)  SubmitCallable(&S3CrtClient::GetObjectLockConfiguration, REQUEST)

#define GetObjectRetentionAsync(...)  SubmitAsync(&S3CrtClient::GetObjectRetention, __VA_ARGS__)
#define GetObjectRetentionCallable(REQUEST)  SubmitCallable(&S3CrtClient::GetObjectRetention, REQUEST)

#define GetObjectTaggingAsync(...)  SubmitAsync(&S3CrtClient::GetObjectTagging, __VA_ARGS__)
#define GetObjectTaggingCallable(REQUEST)  SubmitCallable(&S3CrtClient::GetObjectTagging, REQUEST)

#define GetObjectTorrentAsync(...)  SubmitAsync(&S3CrtClient::GetObjectTorrent, __VA_ARGS__)
#define GetObjectTorrentCallable(REQUEST)  SubmitCallable(&S3CrtClient::GetObjectTorrent, REQUEST)

#define GetPublicAccessBlockAsync(...)  SubmitAsync(&S3CrtClient::GetPublicAccessBlock, __VA_ARGS__)
#define GetPublicAccessBlockCallable(REQUEST)  SubmitCallable(&S3CrtClient::GetPublicAccessBlock, REQUEST)

#define HeadBucketAsync(...)  SubmitAsync(&S3CrtClient::HeadBucket, __VA_ARGS__)
#define HeadBucketCallable(REQUEST)  SubmitCallable(&S3CrtClient::HeadBucket, REQUEST)

#define HeadObjectAsync(...)  SubmitAsync(&S3CrtClient::HeadObject, __VA_ARGS__)
#define HeadObjectCallable(REQUEST)  SubmitCallable(&S3CrtClient::HeadObject, REQUEST)

#define ListBucketAnalyticsConfigurationsAsync(...)  SubmitAsync(&S3CrtClient::ListBucketAnalyticsConfigurations, __VA_ARGS__)
#define ListBucketAnalyticsConfigurationsCallable(REQUEST)  SubmitCallable(&S3CrtClient::ListBucketAnalyticsConfigurations, REQUEST)

#define ListBucketIntelligentTieringConfigurationsAsync(...)  SubmitAsync(&S3CrtClient::ListBucketIntelligentTieringConfigurations, __VA_ARGS__)
#define ListBucketIntelligentTieringConfigurationsCallable(REQUEST)  SubmitCallable(&S3CrtClient::ListBucketIntelligentTieringConfigurations, REQUEST)

#define ListBucketInventoryConfigurationsAsync(...)  SubmitAsync(&S3CrtClient::ListBucketInventoryConfigurations, __VA_ARGS__)
#define ListBucketInventoryConfigurationsCallable(REQUEST)  SubmitCallable(&S3CrtClient::ListBucketInventoryConfigurations, REQUEST)

#define ListBucketMetricsConfigurationsAsync(...)  SubmitAsync(&S3CrtClient::ListBucketMetricsConfigurations, __VA_ARGS__)
#define ListBucketMetricsConfigurationsCallable(REQUEST)  SubmitCallable(&S3CrtClient::ListBucketMetricsConfigurations, REQUEST)


#define ListMultipartUploadsAsync(...)  SubmitAsync(&S3CrtClient::ListMultipartUploads, __VA_ARGS__)
#define ListMultipartUploadsCallable(REQUEST)  SubmitCallable(&S3CrtClient::ListMultipartUploads, REQUEST)

#define ListObjectVersionsAsync(...)  SubmitAsync(&S3CrtClient::ListObjectVersions, __VA_ARGS__)
#define ListObjectVersionsCallable(REQUEST)  SubmitCallable(&S3CrtClient::ListObjectVersions, REQUEST)

#define ListObjectsAsync(...)  SubmitAsync(&S3CrtClient::ListObjects, __VA_ARGS__)
#define ListObjectsCallable(REQUEST)  SubmitCallable(&S3CrtClient::ListObjects, REQUEST)

#define ListObjectsV2Async(...)  SubmitAsync(&S3CrtClient::ListObjectsV2, __VA_ARGS__)
#define ListObjectsV2Callable(REQUEST)  SubmitCallable(&S3CrtClient::ListObjectsV2, REQUEST)

#define ListPartsAsync(...)  SubmitAsync(&S3CrtClient::ListParts, __VA_ARGS__)
#define ListPartsCallable(REQUEST)  SubmitCallable(&S3CrtClient::ListParts, REQUEST)

#define PutBucketAccelerateConfigurationAsync(...)  SubmitAsync(&S3CrtClient::PutBucketAccelerateConfiguration, __VA_ARGS__)
#define PutBucketAccelerateConfigurationCallable(REQUEST)  SubmitCallable(&S3CrtClient::PutBucketAccelerateConfiguration, REQUEST)

#define PutBucketAclAsync(...)  SubmitAsync(&S3CrtClient::PutBucketAcl, __VA_ARGS__)
#define PutBucketAclCallable(REQUEST)  SubmitCallable(&S3CrtClient::PutBucketAcl, REQUEST)

#define PutBucketAnalyticsConfigurationAsync(...)  SubmitAsync(&S3CrtClient::PutBucketAnalyticsConfiguration, __VA_ARGS__)
#define PutBucketAnalyticsConfigurationCallable(REQUEST)  SubmitCallable(&S3CrtClient::PutBucketAnalyticsConfiguration, REQUEST)

#define PutBucketCorsAsync(...)  SubmitAsync(&S3CrtClient::PutBucketCors, __VA_ARGS__)
#define PutBucketCorsCallable(REQUEST)  SubmitCallable(&S3CrtClient::PutBucketCors, REQUEST)

#define PutBucketEncryptionAsync(...)  SubmitAsync(&S3CrtClient::PutBucketEncryption, __VA_ARGS__)
#define PutBucketEncryptionCallable(REQUEST)  SubmitCallable(&S3CrtClient::PutBucketEncryption, REQUEST)

#define PutBucketIntelligentTieringConfigurationAsync(...)  SubmitAsync(&S3CrtClient::PutBucketIntelligentTieringConfiguration, __VA_ARGS__)
#define PutBucketIntelligentTieringConfigurationCallable(REQUEST)  SubmitCallable(&S3CrtClient::PutBucketIntelligentTieringConfiguration, REQUEST)

#define PutBucketInventoryConfigurationAsync(...)  SubmitAsync(&S3CrtClient::PutBucketInventoryConfiguration, __VA_ARGS__)
#define PutBucketInventoryConfigurationCallable(REQUEST)  SubmitCallable(&S3CrtClient::PutBucketInventoryConfiguration, REQUEST)

#define PutBucketLifecycleConfigurationAsync(...)  SubmitAsync(&S3CrtClient::PutBucketLifecycleConfiguration, __VA_ARGS__)
#define PutBucketLifecycleConfigurationCallable(REQUEST)  SubmitCallable(&S3CrtClient::PutBucketLifecycleConfiguration, REQUEST)

#define PutBucketLoggingAsync(...)  SubmitAsync(&S3CrtClient::PutBucketLogging, __VA_ARGS__)
#define PutBucketLoggingCallable(REQUEST)  SubmitCallable(&S3CrtClient::PutBucketLogging, REQUEST)

#define PutBucketMetricsConfigurationAsync(...)  SubmitAsync(&S3CrtClient::PutBucketMetricsConfiguration, __VA_ARGS__)
#define PutBucketMetricsConfigurationCallable(REQUEST)  SubmitCallable(&S3CrtClient::PutBucketMetricsConfiguration, REQUEST)

#define PutBucketNotificationConfigurationAsync(...)  SubmitAsync(&S3CrtClient::PutBucketNotificationConfiguration, __VA_ARGS__)
#define PutBucketNotificationConfigurationCallable(REQUEST)  SubmitCallable(&S3CrtClient::PutBucketNotificationConfiguration, REQUEST)

#define PutBucketOwnershipControlsAsync(...)  SubmitAsync(&S3CrtClient::PutBucketOwnershipControls, __VA_ARGS__)
#define PutBucketOwnershipControlsCallable(REQUEST)  SubmitCallable(&S3CrtClient::PutBucketOwnershipControls, REQUEST)

#define PutBucketPolicyAsync(...)  SubmitAsync(&S3CrtClient::PutBucketPolicy, __VA_ARGS__)
#define PutBucketPolicyCallable(REQUEST)  SubmitCallable(&S3CrtClient::PutBucketPolicy, REQUEST)

#define PutBucketReplicationAsync(...)  SubmitAsync(&S3CrtClient::PutBucketReplication, __VA_ARGS__)
#define PutBucketReplicationCallable(REQUEST)  SubmitCallable(&S3CrtClient::PutBucketReplication, REQUEST)

#define PutBucketRequestPaymentAsync(...)  SubmitAsync(&S3CrtClient::PutBucketRequestPayment, __VA_ARGS__)
#define PutBucketRequestPaymentCallable(REQUEST)  SubmitCallable(&S3CrtClient::PutBucketRequestPayment, REQUEST)

#define PutBucketTaggingAsync(...)  SubmitAsync(&S3CrtClient::PutBucketTagging, __VA_ARGS__)
#define PutBucketTaggingCallable(REQUEST)  SubmitCallable(&S3CrtClient::PutBucketTagging, REQUEST)

#define PutBucketVersioningAsync(...)  SubmitAsync(&S3CrtClient::PutBucketVersioning, __VA_ARGS__)
#define PutBucketVersioningCallable(REQUEST)  SubmitCallable(&S3CrtClient::PutBucketVersioning, REQUEST)

#define PutBucketWebsiteAsync(...)  SubmitAsync(&S3CrtClient::PutBucketWebsite, __VA_ARGS__)
#define PutBucketWebsiteCallable(REQUEST)  SubmitCallable(&S3CrtClient::PutBucketWebsite, REQUEST)

#define PutObjectAsync(...)  SubmitAsync(&S3CrtClient::PutObject, __VA_ARGS__)
#define PutObjectCallable(REQUEST)  SubmitCallable(&S3CrtClient::PutObject, REQUEST)

#define PutObjectAclAsync(...)  SubmitAsync(&S3CrtClient::PutObjectAcl, __VA_ARGS__)
#define PutObjectAclCallable(REQUEST)  SubmitCallable(&S3CrtClient::PutObjectAcl, REQUEST)

#define PutObjectLegalHoldAsync(...)  SubmitAsync(&S3CrtClient::PutObjectLegalHold, __VA_ARGS__)
#define PutObjectLegalHoldCallable(REQUEST)  SubmitCallable(&S3CrtClient::PutObjectLegalHold, REQUEST)

#define PutObjectLockConfigurationAsync(...)  SubmitAsync(&S3CrtClient::PutObjectLockConfiguration, __VA_ARGS__)
#define PutObjectLockConfigurationCallable(REQUEST)  SubmitCallable(&S3CrtClient::PutObjectLockConfiguration, REQUEST)

#define PutObjectRetentionAsync(...)  SubmitAsync(&S3CrtClient::PutObjectRetention, __VA_ARGS__)
#define PutObjectRetentionCallable(REQUEST)  SubmitCallable(&S3CrtClient::PutObjectRetention, REQUEST)

#define PutObjectTaggingAsync(...)  SubmitAsync(&S3CrtClient::PutObjectTagging, __VA_ARGS__)
#define PutObjectTaggingCallable(REQUEST)  SubmitCallable(&S3CrtClient::PutObjectTagging, REQUEST)

#define PutPublicAccessBlockAsync(...)  SubmitAsync(&S3CrtClient::PutPublicAccessBlock, __VA_ARGS__)
#define PutPublicAccessBlockCallable(REQUEST)  SubmitCallable(&S3CrtClient::PutPublicAccessBlock, REQUEST)

#define RestoreObjectAsync(...)  SubmitAsync(&S3CrtClient::RestoreObject, __VA_ARGS__)
#define RestoreObjectCallable(REQUEST)  SubmitCallable(&S3CrtClient::RestoreObject, REQUEST)

#define SelectObjectContentAsync(...)  SubmitAsync(&S3CrtClient::SelectObjectContent, __VA_ARGS__)
#define SelectObjectContentCallable(REQUEST)  SubmitCallable(&S3CrtClient::SelectObjectContent, REQUEST)

#define UploadPartAsync(...)  SubmitAsync(&S3CrtClient::UploadPart, __VA_ARGS__)
#define UploadPartCallable(REQUEST)  SubmitCallable(&S3CrtClient::UploadPart, REQUEST)

#define UploadPartCopyAsync(...)  SubmitAsync(&S3CrtClient::UploadPartCopy, __VA_ARGS__)
#define UploadPartCopyCallable(REQUEST)  SubmitCallable(&S3CrtClient::UploadPartCopy, REQUEST)

#define WriteGetObjectResponseAsync(...)  SubmitAsync(&S3CrtClient::WriteGetObjectResponse, __VA_ARGS__)
#define WriteGetObjectResponseCallable(REQUEST)  SubmitCallable(&S3CrtClient::WriteGetObjectResponse, REQUEST)


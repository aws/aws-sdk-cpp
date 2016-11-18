﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/s3/S3_EXPORTS.h>
#include <aws/s3/S3Request.h>
#include <aws/s3/model/ObjectCannedACL.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/s3/model/ServerSideEncryption.h>
#include <aws/s3/model/StorageClass.h>
#include <aws/s3/model/RequestPayer.h>

namespace Aws
{
namespace S3
{
namespace Model
{

  /**
   */
  class AWS_S3_API CreateMultipartUploadRequest : public S3Request
  {
  public:
    CreateMultipartUploadRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * The canned ACL to apply to the object.
     */
    inline const ObjectCannedACL& GetACL() const{ return m_aCL; }

    /**
     * The canned ACL to apply to the object.
     */
    inline void SetACL(const ObjectCannedACL& value) { m_aCLHasBeenSet = true; m_aCL = value; }

    /**
     * The canned ACL to apply to the object.
     */
    inline void SetACL(ObjectCannedACL&& value) { m_aCLHasBeenSet = true; m_aCL = value; }

    /**
     * The canned ACL to apply to the object.
     */
    inline CreateMultipartUploadRequest& WithACL(const ObjectCannedACL& value) { SetACL(value); return *this;}

    /**
     * The canned ACL to apply to the object.
     */
    inline CreateMultipartUploadRequest& WithACL(ObjectCannedACL&& value) { SetACL(value); return *this;}

    
    inline const Aws::String& GetBucket() const{ return m_bucket; }

    
    inline void SetBucket(const Aws::String& value) { m_bucketHasBeenSet = true; m_bucket = value; }

    
    inline void SetBucket(Aws::String&& value) { m_bucketHasBeenSet = true; m_bucket = value; }

    
    inline void SetBucket(const char* value) { m_bucketHasBeenSet = true; m_bucket.assign(value); }

    
    inline CreateMultipartUploadRequest& WithBucket(const Aws::String& value) { SetBucket(value); return *this;}

    
    inline CreateMultipartUploadRequest& WithBucket(Aws::String&& value) { SetBucket(value); return *this;}

    
    inline CreateMultipartUploadRequest& WithBucket(const char* value) { SetBucket(value); return *this;}

    /**
     * Specifies caching behavior along the request/reply chain.
     */
    inline const Aws::String& GetCacheControl() const{ return m_cacheControl; }

    /**
     * Specifies caching behavior along the request/reply chain.
     */
    inline void SetCacheControl(const Aws::String& value) { m_cacheControlHasBeenSet = true; m_cacheControl = value; }

    /**
     * Specifies caching behavior along the request/reply chain.
     */
    inline void SetCacheControl(Aws::String&& value) { m_cacheControlHasBeenSet = true; m_cacheControl = value; }

    /**
     * Specifies caching behavior along the request/reply chain.
     */
    inline void SetCacheControl(const char* value) { m_cacheControlHasBeenSet = true; m_cacheControl.assign(value); }

    /**
     * Specifies caching behavior along the request/reply chain.
     */
    inline CreateMultipartUploadRequest& WithCacheControl(const Aws::String& value) { SetCacheControl(value); return *this;}

    /**
     * Specifies caching behavior along the request/reply chain.
     */
    inline CreateMultipartUploadRequest& WithCacheControl(Aws::String&& value) { SetCacheControl(value); return *this;}

    /**
     * Specifies caching behavior along the request/reply chain.
     */
    inline CreateMultipartUploadRequest& WithCacheControl(const char* value) { SetCacheControl(value); return *this;}

    /**
     * Specifies presentational information for the object.
     */
    inline const Aws::String& GetContentDisposition() const{ return m_contentDisposition; }

    /**
     * Specifies presentational information for the object.
     */
    inline void SetContentDisposition(const Aws::String& value) { m_contentDispositionHasBeenSet = true; m_contentDisposition = value; }

    /**
     * Specifies presentational information for the object.
     */
    inline void SetContentDisposition(Aws::String&& value) { m_contentDispositionHasBeenSet = true; m_contentDisposition = value; }

    /**
     * Specifies presentational information for the object.
     */
    inline void SetContentDisposition(const char* value) { m_contentDispositionHasBeenSet = true; m_contentDisposition.assign(value); }

    /**
     * Specifies presentational information for the object.
     */
    inline CreateMultipartUploadRequest& WithContentDisposition(const Aws::String& value) { SetContentDisposition(value); return *this;}

    /**
     * Specifies presentational information for the object.
     */
    inline CreateMultipartUploadRequest& WithContentDisposition(Aws::String&& value) { SetContentDisposition(value); return *this;}

    /**
     * Specifies presentational information for the object.
     */
    inline CreateMultipartUploadRequest& WithContentDisposition(const char* value) { SetContentDisposition(value); return *this;}

    /**
     * Specifies what content encodings have been applied to the object and thus what
     * decoding mechanisms must be applied to obtain the media-type referenced by the
     * Content-Type header field.
     */
    inline const Aws::String& GetContentEncoding() const{ return m_contentEncoding; }

    /**
     * Specifies what content encodings have been applied to the object and thus what
     * decoding mechanisms must be applied to obtain the media-type referenced by the
     * Content-Type header field.
     */
    inline void SetContentEncoding(const Aws::String& value) { m_contentEncodingHasBeenSet = true; m_contentEncoding = value; }

    /**
     * Specifies what content encodings have been applied to the object and thus what
     * decoding mechanisms must be applied to obtain the media-type referenced by the
     * Content-Type header field.
     */
    inline void SetContentEncoding(Aws::String&& value) { m_contentEncodingHasBeenSet = true; m_contentEncoding = value; }

    /**
     * Specifies what content encodings have been applied to the object and thus what
     * decoding mechanisms must be applied to obtain the media-type referenced by the
     * Content-Type header field.
     */
    inline void SetContentEncoding(const char* value) { m_contentEncodingHasBeenSet = true; m_contentEncoding.assign(value); }

    /**
     * Specifies what content encodings have been applied to the object and thus what
     * decoding mechanisms must be applied to obtain the media-type referenced by the
     * Content-Type header field.
     */
    inline CreateMultipartUploadRequest& WithContentEncoding(const Aws::String& value) { SetContentEncoding(value); return *this;}

    /**
     * Specifies what content encodings have been applied to the object and thus what
     * decoding mechanisms must be applied to obtain the media-type referenced by the
     * Content-Type header field.
     */
    inline CreateMultipartUploadRequest& WithContentEncoding(Aws::String&& value) { SetContentEncoding(value); return *this;}

    /**
     * Specifies what content encodings have been applied to the object and thus what
     * decoding mechanisms must be applied to obtain the media-type referenced by the
     * Content-Type header field.
     */
    inline CreateMultipartUploadRequest& WithContentEncoding(const char* value) { SetContentEncoding(value); return *this;}

    /**
     * The language the content is in.
     */
    inline const Aws::String& GetContentLanguage() const{ return m_contentLanguage; }

    /**
     * The language the content is in.
     */
    inline void SetContentLanguage(const Aws::String& value) { m_contentLanguageHasBeenSet = true; m_contentLanguage = value; }

    /**
     * The language the content is in.
     */
    inline void SetContentLanguage(Aws::String&& value) { m_contentLanguageHasBeenSet = true; m_contentLanguage = value; }

    /**
     * The language the content is in.
     */
    inline void SetContentLanguage(const char* value) { m_contentLanguageHasBeenSet = true; m_contentLanguage.assign(value); }

    /**
     * The language the content is in.
     */
    inline CreateMultipartUploadRequest& WithContentLanguage(const Aws::String& value) { SetContentLanguage(value); return *this;}

    /**
     * The language the content is in.
     */
    inline CreateMultipartUploadRequest& WithContentLanguage(Aws::String&& value) { SetContentLanguage(value); return *this;}

    /**
     * The language the content is in.
     */
    inline CreateMultipartUploadRequest& WithContentLanguage(const char* value) { SetContentLanguage(value); return *this;}

    /**
     * A standard MIME type describing the format of the object data.
     */
    inline const Aws::String& GetContentType() const{ return m_contentType; }

    /**
     * A standard MIME type describing the format of the object data.
     */
    inline void SetContentType(const Aws::String& value) { m_contentTypeHasBeenSet = true; m_contentType = value; }

    /**
     * A standard MIME type describing the format of the object data.
     */
    inline void SetContentType(Aws::String&& value) { m_contentTypeHasBeenSet = true; m_contentType = value; }

    /**
     * A standard MIME type describing the format of the object data.
     */
    inline void SetContentType(const char* value) { m_contentTypeHasBeenSet = true; m_contentType.assign(value); }

    /**
     * A standard MIME type describing the format of the object data.
     */
    inline CreateMultipartUploadRequest& WithContentType(const Aws::String& value) { SetContentType(value); return *this;}

    /**
     * A standard MIME type describing the format of the object data.
     */
    inline CreateMultipartUploadRequest& WithContentType(Aws::String&& value) { SetContentType(value); return *this;}

    /**
     * A standard MIME type describing the format of the object data.
     */
    inline CreateMultipartUploadRequest& WithContentType(const char* value) { SetContentType(value); return *this;}

    /**
     * The date and time at which the object is no longer cacheable.
     */
    inline const Aws::Utils::DateTime& GetExpires() const{ return m_expires; }

    /**
     * The date and time at which the object is no longer cacheable.
     */
    inline void SetExpires(const Aws::Utils::DateTime& value) { m_expiresHasBeenSet = true; m_expires = value; }

    /**
     * The date and time at which the object is no longer cacheable.
     */
    inline void SetExpires(Aws::Utils::DateTime&& value) { m_expiresHasBeenSet = true; m_expires = value; }

    /**
     * The date and time at which the object is no longer cacheable.
     */
    inline CreateMultipartUploadRequest& WithExpires(const Aws::Utils::DateTime& value) { SetExpires(value); return *this;}

    /**
     * The date and time at which the object is no longer cacheable.
     */
    inline CreateMultipartUploadRequest& WithExpires(Aws::Utils::DateTime&& value) { SetExpires(value); return *this;}

    /**
     * Gives the grantee READ, READ_ACP, and WRITE_ACP permissions on the object.
     */
    inline const Aws::String& GetGrantFullControl() const{ return m_grantFullControl; }

    /**
     * Gives the grantee READ, READ_ACP, and WRITE_ACP permissions on the object.
     */
    inline void SetGrantFullControl(const Aws::String& value) { m_grantFullControlHasBeenSet = true; m_grantFullControl = value; }

    /**
     * Gives the grantee READ, READ_ACP, and WRITE_ACP permissions on the object.
     */
    inline void SetGrantFullControl(Aws::String&& value) { m_grantFullControlHasBeenSet = true; m_grantFullControl = value; }

    /**
     * Gives the grantee READ, READ_ACP, and WRITE_ACP permissions on the object.
     */
    inline void SetGrantFullControl(const char* value) { m_grantFullControlHasBeenSet = true; m_grantFullControl.assign(value); }

    /**
     * Gives the grantee READ, READ_ACP, and WRITE_ACP permissions on the object.
     */
    inline CreateMultipartUploadRequest& WithGrantFullControl(const Aws::String& value) { SetGrantFullControl(value); return *this;}

    /**
     * Gives the grantee READ, READ_ACP, and WRITE_ACP permissions on the object.
     */
    inline CreateMultipartUploadRequest& WithGrantFullControl(Aws::String&& value) { SetGrantFullControl(value); return *this;}

    /**
     * Gives the grantee READ, READ_ACP, and WRITE_ACP permissions on the object.
     */
    inline CreateMultipartUploadRequest& WithGrantFullControl(const char* value) { SetGrantFullControl(value); return *this;}

    /**
     * Allows grantee to read the object data and its metadata.
     */
    inline const Aws::String& GetGrantRead() const{ return m_grantRead; }

    /**
     * Allows grantee to read the object data and its metadata.
     */
    inline void SetGrantRead(const Aws::String& value) { m_grantReadHasBeenSet = true; m_grantRead = value; }

    /**
     * Allows grantee to read the object data and its metadata.
     */
    inline void SetGrantRead(Aws::String&& value) { m_grantReadHasBeenSet = true; m_grantRead = value; }

    /**
     * Allows grantee to read the object data and its metadata.
     */
    inline void SetGrantRead(const char* value) { m_grantReadHasBeenSet = true; m_grantRead.assign(value); }

    /**
     * Allows grantee to read the object data and its metadata.
     */
    inline CreateMultipartUploadRequest& WithGrantRead(const Aws::String& value) { SetGrantRead(value); return *this;}

    /**
     * Allows grantee to read the object data and its metadata.
     */
    inline CreateMultipartUploadRequest& WithGrantRead(Aws::String&& value) { SetGrantRead(value); return *this;}

    /**
     * Allows grantee to read the object data and its metadata.
     */
    inline CreateMultipartUploadRequest& WithGrantRead(const char* value) { SetGrantRead(value); return *this;}

    /**
     * Allows grantee to read the object ACL.
     */
    inline const Aws::String& GetGrantReadACP() const{ return m_grantReadACP; }

    /**
     * Allows grantee to read the object ACL.
     */
    inline void SetGrantReadACP(const Aws::String& value) { m_grantReadACPHasBeenSet = true; m_grantReadACP = value; }

    /**
     * Allows grantee to read the object ACL.
     */
    inline void SetGrantReadACP(Aws::String&& value) { m_grantReadACPHasBeenSet = true; m_grantReadACP = value; }

    /**
     * Allows grantee to read the object ACL.
     */
    inline void SetGrantReadACP(const char* value) { m_grantReadACPHasBeenSet = true; m_grantReadACP.assign(value); }

    /**
     * Allows grantee to read the object ACL.
     */
    inline CreateMultipartUploadRequest& WithGrantReadACP(const Aws::String& value) { SetGrantReadACP(value); return *this;}

    /**
     * Allows grantee to read the object ACL.
     */
    inline CreateMultipartUploadRequest& WithGrantReadACP(Aws::String&& value) { SetGrantReadACP(value); return *this;}

    /**
     * Allows grantee to read the object ACL.
     */
    inline CreateMultipartUploadRequest& WithGrantReadACP(const char* value) { SetGrantReadACP(value); return *this;}

    /**
     * Allows grantee to write the ACL for the applicable object.
     */
    inline const Aws::String& GetGrantWriteACP() const{ return m_grantWriteACP; }

    /**
     * Allows grantee to write the ACL for the applicable object.
     */
    inline void SetGrantWriteACP(const Aws::String& value) { m_grantWriteACPHasBeenSet = true; m_grantWriteACP = value; }

    /**
     * Allows grantee to write the ACL for the applicable object.
     */
    inline void SetGrantWriteACP(Aws::String&& value) { m_grantWriteACPHasBeenSet = true; m_grantWriteACP = value; }

    /**
     * Allows grantee to write the ACL for the applicable object.
     */
    inline void SetGrantWriteACP(const char* value) { m_grantWriteACPHasBeenSet = true; m_grantWriteACP.assign(value); }

    /**
     * Allows grantee to write the ACL for the applicable object.
     */
    inline CreateMultipartUploadRequest& WithGrantWriteACP(const Aws::String& value) { SetGrantWriteACP(value); return *this;}

    /**
     * Allows grantee to write the ACL for the applicable object.
     */
    inline CreateMultipartUploadRequest& WithGrantWriteACP(Aws::String&& value) { SetGrantWriteACP(value); return *this;}

    /**
     * Allows grantee to write the ACL for the applicable object.
     */
    inline CreateMultipartUploadRequest& WithGrantWriteACP(const char* value) { SetGrantWriteACP(value); return *this;}

    
    inline const Aws::String& GetKey() const{ return m_key; }

    
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }

    
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = value; }

    
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }

    
    inline CreateMultipartUploadRequest& WithKey(const Aws::String& value) { SetKey(value); return *this;}

    
    inline CreateMultipartUploadRequest& WithKey(Aws::String&& value) { SetKey(value); return *this;}

    
    inline CreateMultipartUploadRequest& WithKey(const char* value) { SetKey(value); return *this;}

    /**
     * A map of metadata to store with the object in S3.
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetMetadata() const{ return m_metadata; }

    /**
     * A map of metadata to store with the object in S3.
     */
    inline void SetMetadata(const Aws::Map<Aws::String, Aws::String>& value) { m_metadataHasBeenSet = true; m_metadata = value; }

    /**
     * A map of metadata to store with the object in S3.
     */
    inline void SetMetadata(Aws::Map<Aws::String, Aws::String>&& value) { m_metadataHasBeenSet = true; m_metadata = value; }

    /**
     * A map of metadata to store with the object in S3.
     */
    inline CreateMultipartUploadRequest& WithMetadata(const Aws::Map<Aws::String, Aws::String>& value) { SetMetadata(value); return *this;}

    /**
     * A map of metadata to store with the object in S3.
     */
    inline CreateMultipartUploadRequest& WithMetadata(Aws::Map<Aws::String, Aws::String>&& value) { SetMetadata(value); return *this;}

    /**
     * A map of metadata to store with the object in S3.
     */
    inline CreateMultipartUploadRequest& AddMetadata(const Aws::String& key, const Aws::String& value) { m_metadataHasBeenSet = true; m_metadata[key] = value; return *this; }

    /**
     * A map of metadata to store with the object in S3.
     */
    inline CreateMultipartUploadRequest& AddMetadata(Aws::String&& key, const Aws::String& value) { m_metadataHasBeenSet = true; m_metadata[key] = value; return *this; }

    /**
     * A map of metadata to store with the object in S3.
     */
    inline CreateMultipartUploadRequest& AddMetadata(const Aws::String& key, Aws::String&& value) { m_metadataHasBeenSet = true; m_metadata[key] = value; return *this; }

    /**
     * A map of metadata to store with the object in S3.
     */
    inline CreateMultipartUploadRequest& AddMetadata(Aws::String&& key, Aws::String&& value) { m_metadataHasBeenSet = true; m_metadata[key] = value; return *this; }

    /**
     * A map of metadata to store with the object in S3.
     */
    inline CreateMultipartUploadRequest& AddMetadata(const char* key, Aws::String&& value) { m_metadataHasBeenSet = true; m_metadata[key] = value; return *this; }

    /**
     * A map of metadata to store with the object in S3.
     */
    inline CreateMultipartUploadRequest& AddMetadata(Aws::String&& key, const char* value) { m_metadataHasBeenSet = true; m_metadata[key] = value; return *this; }

    /**
     * A map of metadata to store with the object in S3.
     */
    inline CreateMultipartUploadRequest& AddMetadata(const char* key, const char* value) { m_metadataHasBeenSet = true; m_metadata[key] = value; return *this; }

    /**
     * The Server-side encryption algorithm used when storing this object in S3 (e.g.,
     * AES256, aws:kms).
     */
    inline const ServerSideEncryption& GetServerSideEncryption() const{ return m_serverSideEncryption; }

    /**
     * The Server-side encryption algorithm used when storing this object in S3 (e.g.,
     * AES256, aws:kms).
     */
    inline void SetServerSideEncryption(const ServerSideEncryption& value) { m_serverSideEncryptionHasBeenSet = true; m_serverSideEncryption = value; }

    /**
     * The Server-side encryption algorithm used when storing this object in S3 (e.g.,
     * AES256, aws:kms).
     */
    inline void SetServerSideEncryption(ServerSideEncryption&& value) { m_serverSideEncryptionHasBeenSet = true; m_serverSideEncryption = value; }

    /**
     * The Server-side encryption algorithm used when storing this object in S3 (e.g.,
     * AES256, aws:kms).
     */
    inline CreateMultipartUploadRequest& WithServerSideEncryption(const ServerSideEncryption& value) { SetServerSideEncryption(value); return *this;}

    /**
     * The Server-side encryption algorithm used when storing this object in S3 (e.g.,
     * AES256, aws:kms).
     */
    inline CreateMultipartUploadRequest& WithServerSideEncryption(ServerSideEncryption&& value) { SetServerSideEncryption(value); return *this;}

    /**
     * The type of storage to use for the object. Defaults to 'STANDARD'.
     */
    inline const StorageClass& GetStorageClass() const{ return m_storageClass; }

    /**
     * The type of storage to use for the object. Defaults to 'STANDARD'.
     */
    inline void SetStorageClass(const StorageClass& value) { m_storageClassHasBeenSet = true; m_storageClass = value; }

    /**
     * The type of storage to use for the object. Defaults to 'STANDARD'.
     */
    inline void SetStorageClass(StorageClass&& value) { m_storageClassHasBeenSet = true; m_storageClass = value; }

    /**
     * The type of storage to use for the object. Defaults to 'STANDARD'.
     */
    inline CreateMultipartUploadRequest& WithStorageClass(const StorageClass& value) { SetStorageClass(value); return *this;}

    /**
     * The type of storage to use for the object. Defaults to 'STANDARD'.
     */
    inline CreateMultipartUploadRequest& WithStorageClass(StorageClass&& value) { SetStorageClass(value); return *this;}

    /**
     * If the bucket is configured as a website, redirects requests for this object to
     * another object in the same bucket or to an external URL. Amazon S3 stores the
     * value of this header in the object metadata.
     */
    inline const Aws::String& GetWebsiteRedirectLocation() const{ return m_websiteRedirectLocation; }

    /**
     * If the bucket is configured as a website, redirects requests for this object to
     * another object in the same bucket or to an external URL. Amazon S3 stores the
     * value of this header in the object metadata.
     */
    inline void SetWebsiteRedirectLocation(const Aws::String& value) { m_websiteRedirectLocationHasBeenSet = true; m_websiteRedirectLocation = value; }

    /**
     * If the bucket is configured as a website, redirects requests for this object to
     * another object in the same bucket or to an external URL. Amazon S3 stores the
     * value of this header in the object metadata.
     */
    inline void SetWebsiteRedirectLocation(Aws::String&& value) { m_websiteRedirectLocationHasBeenSet = true; m_websiteRedirectLocation = value; }

    /**
     * If the bucket is configured as a website, redirects requests for this object to
     * another object in the same bucket or to an external URL. Amazon S3 stores the
     * value of this header in the object metadata.
     */
    inline void SetWebsiteRedirectLocation(const char* value) { m_websiteRedirectLocationHasBeenSet = true; m_websiteRedirectLocation.assign(value); }

    /**
     * If the bucket is configured as a website, redirects requests for this object to
     * another object in the same bucket or to an external URL. Amazon S3 stores the
     * value of this header in the object metadata.
     */
    inline CreateMultipartUploadRequest& WithWebsiteRedirectLocation(const Aws::String& value) { SetWebsiteRedirectLocation(value); return *this;}

    /**
     * If the bucket is configured as a website, redirects requests for this object to
     * another object in the same bucket or to an external URL. Amazon S3 stores the
     * value of this header in the object metadata.
     */
    inline CreateMultipartUploadRequest& WithWebsiteRedirectLocation(Aws::String&& value) { SetWebsiteRedirectLocation(value); return *this;}

    /**
     * If the bucket is configured as a website, redirects requests for this object to
     * another object in the same bucket or to an external URL. Amazon S3 stores the
     * value of this header in the object metadata.
     */
    inline CreateMultipartUploadRequest& WithWebsiteRedirectLocation(const char* value) { SetWebsiteRedirectLocation(value); return *this;}

    /**
     * Specifies the algorithm to use to when encrypting the object (e.g., AES256).
     */
    inline const Aws::String& GetSSECustomerAlgorithm() const{ return m_sSECustomerAlgorithm; }

    /**
     * Specifies the algorithm to use to when encrypting the object (e.g., AES256).
     */
    inline void SetSSECustomerAlgorithm(const Aws::String& value) { m_sSECustomerAlgorithmHasBeenSet = true; m_sSECustomerAlgorithm = value; }

    /**
     * Specifies the algorithm to use to when encrypting the object (e.g., AES256).
     */
    inline void SetSSECustomerAlgorithm(Aws::String&& value) { m_sSECustomerAlgorithmHasBeenSet = true; m_sSECustomerAlgorithm = value; }

    /**
     * Specifies the algorithm to use to when encrypting the object (e.g., AES256).
     */
    inline void SetSSECustomerAlgorithm(const char* value) { m_sSECustomerAlgorithmHasBeenSet = true; m_sSECustomerAlgorithm.assign(value); }

    /**
     * Specifies the algorithm to use to when encrypting the object (e.g., AES256).
     */
    inline CreateMultipartUploadRequest& WithSSECustomerAlgorithm(const Aws::String& value) { SetSSECustomerAlgorithm(value); return *this;}

    /**
     * Specifies the algorithm to use to when encrypting the object (e.g., AES256).
     */
    inline CreateMultipartUploadRequest& WithSSECustomerAlgorithm(Aws::String&& value) { SetSSECustomerAlgorithm(value); return *this;}

    /**
     * Specifies the algorithm to use to when encrypting the object (e.g., AES256).
     */
    inline CreateMultipartUploadRequest& WithSSECustomerAlgorithm(const char* value) { SetSSECustomerAlgorithm(value); return *this;}

    /**
     * Specifies the customer-provided encryption key for Amazon S3 to use in
     * encrypting data. This value is used to store the object and then it is
     * discarded; Amazon does not store the encryption key. The key must be appropriate
     * for use with the algorithm specified in the
     * x-amz-server-side​-encryption​-customer-algorithm header.
     */
    inline const Aws::String& GetSSECustomerKey() const{ return m_sSECustomerKey; }

    /**
     * Specifies the customer-provided encryption key for Amazon S3 to use in
     * encrypting data. This value is used to store the object and then it is
     * discarded; Amazon does not store the encryption key. The key must be appropriate
     * for use with the algorithm specified in the
     * x-amz-server-side​-encryption​-customer-algorithm header.
     */
    inline void SetSSECustomerKey(const Aws::String& value) { m_sSECustomerKeyHasBeenSet = true; m_sSECustomerKey = value; }

    /**
     * Specifies the customer-provided encryption key for Amazon S3 to use in
     * encrypting data. This value is used to store the object and then it is
     * discarded; Amazon does not store the encryption key. The key must be appropriate
     * for use with the algorithm specified in the
     * x-amz-server-side​-encryption​-customer-algorithm header.
     */
    inline void SetSSECustomerKey(Aws::String&& value) { m_sSECustomerKeyHasBeenSet = true; m_sSECustomerKey = value; }

    /**
     * Specifies the customer-provided encryption key for Amazon S3 to use in
     * encrypting data. This value is used to store the object and then it is
     * discarded; Amazon does not store the encryption key. The key must be appropriate
     * for use with the algorithm specified in the
     * x-amz-server-side​-encryption​-customer-algorithm header.
     */
    inline void SetSSECustomerKey(const char* value) { m_sSECustomerKeyHasBeenSet = true; m_sSECustomerKey.assign(value); }

    /**
     * Specifies the customer-provided encryption key for Amazon S3 to use in
     * encrypting data. This value is used to store the object and then it is
     * discarded; Amazon does not store the encryption key. The key must be appropriate
     * for use with the algorithm specified in the
     * x-amz-server-side​-encryption​-customer-algorithm header.
     */
    inline CreateMultipartUploadRequest& WithSSECustomerKey(const Aws::String& value) { SetSSECustomerKey(value); return *this;}

    /**
     * Specifies the customer-provided encryption key for Amazon S3 to use in
     * encrypting data. This value is used to store the object and then it is
     * discarded; Amazon does not store the encryption key. The key must be appropriate
     * for use with the algorithm specified in the
     * x-amz-server-side​-encryption​-customer-algorithm header.
     */
    inline CreateMultipartUploadRequest& WithSSECustomerKey(Aws::String&& value) { SetSSECustomerKey(value); return *this;}

    /**
     * Specifies the customer-provided encryption key for Amazon S3 to use in
     * encrypting data. This value is used to store the object and then it is
     * discarded; Amazon does not store the encryption key. The key must be appropriate
     * for use with the algorithm specified in the
     * x-amz-server-side​-encryption​-customer-algorithm header.
     */
    inline CreateMultipartUploadRequest& WithSSECustomerKey(const char* value) { SetSSECustomerKey(value); return *this;}

    /**
     * Specifies the 128-bit MD5 digest of the encryption key according to RFC 1321.
     * Amazon S3 uses this header for a message integrity check to ensure the
     * encryption key was transmitted without error.
     */
    inline const Aws::String& GetSSECustomerKeyMD5() const{ return m_sSECustomerKeyMD5; }

    /**
     * Specifies the 128-bit MD5 digest of the encryption key according to RFC 1321.
     * Amazon S3 uses this header for a message integrity check to ensure the
     * encryption key was transmitted without error.
     */
    inline void SetSSECustomerKeyMD5(const Aws::String& value) { m_sSECustomerKeyMD5HasBeenSet = true; m_sSECustomerKeyMD5 = value; }

    /**
     * Specifies the 128-bit MD5 digest of the encryption key according to RFC 1321.
     * Amazon S3 uses this header for a message integrity check to ensure the
     * encryption key was transmitted without error.
     */
    inline void SetSSECustomerKeyMD5(Aws::String&& value) { m_sSECustomerKeyMD5HasBeenSet = true; m_sSECustomerKeyMD5 = value; }

    /**
     * Specifies the 128-bit MD5 digest of the encryption key according to RFC 1321.
     * Amazon S3 uses this header for a message integrity check to ensure the
     * encryption key was transmitted without error.
     */
    inline void SetSSECustomerKeyMD5(const char* value) { m_sSECustomerKeyMD5HasBeenSet = true; m_sSECustomerKeyMD5.assign(value); }

    /**
     * Specifies the 128-bit MD5 digest of the encryption key according to RFC 1321.
     * Amazon S3 uses this header for a message integrity check to ensure the
     * encryption key was transmitted without error.
     */
    inline CreateMultipartUploadRequest& WithSSECustomerKeyMD5(const Aws::String& value) { SetSSECustomerKeyMD5(value); return *this;}

    /**
     * Specifies the 128-bit MD5 digest of the encryption key according to RFC 1321.
     * Amazon S3 uses this header for a message integrity check to ensure the
     * encryption key was transmitted without error.
     */
    inline CreateMultipartUploadRequest& WithSSECustomerKeyMD5(Aws::String&& value) { SetSSECustomerKeyMD5(value); return *this;}

    /**
     * Specifies the 128-bit MD5 digest of the encryption key according to RFC 1321.
     * Amazon S3 uses this header for a message integrity check to ensure the
     * encryption key was transmitted without error.
     */
    inline CreateMultipartUploadRequest& WithSSECustomerKeyMD5(const char* value) { SetSSECustomerKeyMD5(value); return *this;}

    /**
     * Specifies the AWS KMS key ID to use for object encryption. All GET and PUT
     * requests for an object protected by AWS KMS will fail if not made via SSL or
     * using SigV4. Documentation on configuring any of the officially supported AWS
     * SDKs and CLI can be found at
     * http://docs.aws.amazon.com/AmazonS3/latest/dev/UsingAWSSDK.html#specify-signature-version
     */
    inline const Aws::String& GetSSEKMSKeyId() const{ return m_sSEKMSKeyId; }

    /**
     * Specifies the AWS KMS key ID to use for object encryption. All GET and PUT
     * requests for an object protected by AWS KMS will fail if not made via SSL or
     * using SigV4. Documentation on configuring any of the officially supported AWS
     * SDKs and CLI can be found at
     * http://docs.aws.amazon.com/AmazonS3/latest/dev/UsingAWSSDK.html#specify-signature-version
     */
    inline void SetSSEKMSKeyId(const Aws::String& value) { m_sSEKMSKeyIdHasBeenSet = true; m_sSEKMSKeyId = value; }

    /**
     * Specifies the AWS KMS key ID to use for object encryption. All GET and PUT
     * requests for an object protected by AWS KMS will fail if not made via SSL or
     * using SigV4. Documentation on configuring any of the officially supported AWS
     * SDKs and CLI can be found at
     * http://docs.aws.amazon.com/AmazonS3/latest/dev/UsingAWSSDK.html#specify-signature-version
     */
    inline void SetSSEKMSKeyId(Aws::String&& value) { m_sSEKMSKeyIdHasBeenSet = true; m_sSEKMSKeyId = value; }

    /**
     * Specifies the AWS KMS key ID to use for object encryption. All GET and PUT
     * requests for an object protected by AWS KMS will fail if not made via SSL or
     * using SigV4. Documentation on configuring any of the officially supported AWS
     * SDKs and CLI can be found at
     * http://docs.aws.amazon.com/AmazonS3/latest/dev/UsingAWSSDK.html#specify-signature-version
     */
    inline void SetSSEKMSKeyId(const char* value) { m_sSEKMSKeyIdHasBeenSet = true; m_sSEKMSKeyId.assign(value); }

    /**
     * Specifies the AWS KMS key ID to use for object encryption. All GET and PUT
     * requests for an object protected by AWS KMS will fail if not made via SSL or
     * using SigV4. Documentation on configuring any of the officially supported AWS
     * SDKs and CLI can be found at
     * http://docs.aws.amazon.com/AmazonS3/latest/dev/UsingAWSSDK.html#specify-signature-version
     */
    inline CreateMultipartUploadRequest& WithSSEKMSKeyId(const Aws::String& value) { SetSSEKMSKeyId(value); return *this;}

    /**
     * Specifies the AWS KMS key ID to use for object encryption. All GET and PUT
     * requests for an object protected by AWS KMS will fail if not made via SSL or
     * using SigV4. Documentation on configuring any of the officially supported AWS
     * SDKs and CLI can be found at
     * http://docs.aws.amazon.com/AmazonS3/latest/dev/UsingAWSSDK.html#specify-signature-version
     */
    inline CreateMultipartUploadRequest& WithSSEKMSKeyId(Aws::String&& value) { SetSSEKMSKeyId(value); return *this;}

    /**
     * Specifies the AWS KMS key ID to use for object encryption. All GET and PUT
     * requests for an object protected by AWS KMS will fail if not made via SSL or
     * using SigV4. Documentation on configuring any of the officially supported AWS
     * SDKs and CLI can be found at
     * http://docs.aws.amazon.com/AmazonS3/latest/dev/UsingAWSSDK.html#specify-signature-version
     */
    inline CreateMultipartUploadRequest& WithSSEKMSKeyId(const char* value) { SetSSEKMSKeyId(value); return *this;}

    
    inline const RequestPayer& GetRequestPayer() const{ return m_requestPayer; }

    
    inline void SetRequestPayer(const RequestPayer& value) { m_requestPayerHasBeenSet = true; m_requestPayer = value; }

    
    inline void SetRequestPayer(RequestPayer&& value) { m_requestPayerHasBeenSet = true; m_requestPayer = value; }

    
    inline CreateMultipartUploadRequest& WithRequestPayer(const RequestPayer& value) { SetRequestPayer(value); return *this;}

    
    inline CreateMultipartUploadRequest& WithRequestPayer(RequestPayer&& value) { SetRequestPayer(value); return *this;}

  private:
    ObjectCannedACL m_aCL;
    bool m_aCLHasBeenSet;
    Aws::String m_bucket;
    bool m_bucketHasBeenSet;
    Aws::String m_cacheControl;
    bool m_cacheControlHasBeenSet;
    Aws::String m_contentDisposition;
    bool m_contentDispositionHasBeenSet;
    Aws::String m_contentEncoding;
    bool m_contentEncodingHasBeenSet;
    Aws::String m_contentLanguage;
    bool m_contentLanguageHasBeenSet;
    Aws::String m_contentType;
    bool m_contentTypeHasBeenSet;
    Aws::Utils::DateTime m_expires;
    bool m_expiresHasBeenSet;
    Aws::String m_grantFullControl;
    bool m_grantFullControlHasBeenSet;
    Aws::String m_grantRead;
    bool m_grantReadHasBeenSet;
    Aws::String m_grantReadACP;
    bool m_grantReadACPHasBeenSet;
    Aws::String m_grantWriteACP;
    bool m_grantWriteACPHasBeenSet;
    Aws::String m_key;
    bool m_keyHasBeenSet;
    Aws::Map<Aws::String, Aws::String> m_metadata;
    bool m_metadataHasBeenSet;
    ServerSideEncryption m_serverSideEncryption;
    bool m_serverSideEncryptionHasBeenSet;
    StorageClass m_storageClass;
    bool m_storageClassHasBeenSet;
    Aws::String m_websiteRedirectLocation;
    bool m_websiteRedirectLocationHasBeenSet;
    Aws::String m_sSECustomerAlgorithm;
    bool m_sSECustomerAlgorithmHasBeenSet;
    Aws::String m_sSECustomerKey;
    bool m_sSECustomerKeyHasBeenSet;
    Aws::String m_sSECustomerKeyMD5;
    bool m_sSECustomerKeyMD5HasBeenSet;
    Aws::String m_sSEKMSKeyId;
    bool m_sSEKMSKeyIdHasBeenSet;
    RequestPayer m_requestPayer;
    bool m_requestPayerHasBeenSet;
  };

} // namespace Model
} // namespace S3
} // namespace Aws

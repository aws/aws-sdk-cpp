﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3/S3_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3/model/ServerSideEncryption.h>
#include <aws/s3/model/RequestCharged.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace S3
{
namespace Model
{
  class AWS_S3_API CompleteMultipartUploadResult
  {
  public:
    CompleteMultipartUploadResult();
    CompleteMultipartUploadResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    CompleteMultipartUploadResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The URI that identifies the newly created object.</p>
     */
    inline const Aws::String& GetLocation() const{ return m_location; }

    /**
     * <p>The URI that identifies the newly created object.</p>
     */
    inline void SetLocation(const Aws::String& value) { m_location = value; }

    /**
     * <p>The URI that identifies the newly created object.</p>
     */
    inline void SetLocation(Aws::String&& value) { m_location = std::move(value); }

    /**
     * <p>The URI that identifies the newly created object.</p>
     */
    inline void SetLocation(const char* value) { m_location.assign(value); }

    /**
     * <p>The URI that identifies the newly created object.</p>
     */
    inline CompleteMultipartUploadResult& WithLocation(const Aws::String& value) { SetLocation(value); return *this;}

    /**
     * <p>The URI that identifies the newly created object.</p>
     */
    inline CompleteMultipartUploadResult& WithLocation(Aws::String&& value) { SetLocation(std::move(value)); return *this;}

    /**
     * <p>The URI that identifies the newly created object.</p>
     */
    inline CompleteMultipartUploadResult& WithLocation(const char* value) { SetLocation(value); return *this;}


    /**
     * <p>The name of the bucket that contains the newly created object. Does not
     * return the access point ARN or access point alias if used.</p> <p>When using
     * this action with an access point, you must direct requests to the access point
     * hostname. The access point hostname takes the form
     * <i>AccessPointName</i>-<i>AccountId</i>.s3-accesspoint.<i>Region</i>.amazonaws.com.
     * When using this action with an access point through the Amazon Web Services
     * SDKs, you provide the access point ARN in place of the bucket name. For more
     * information about access point ARNs, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/using-access-points.html">Using
     * access points</a> in the <i>Amazon S3 User Guide</i>.</p> <p>When using this
     * action with Amazon S3 on Outposts, you must direct requests to the S3 on
     * Outposts hostname. The S3 on Outposts hostname takes the form
     * <i>AccessPointName</i>-<i>AccountId</i>.<i>outpostID</i>.s3-outposts.<i>Region</i>.amazonaws.com.
     * When using this action using S3 on Outposts through the Amazon Web Services
     * SDKs, you provide the Outposts bucket ARN in place of the bucket name. For more
     * information about S3 on Outposts ARNs, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/S3onOutposts.html">Using
     * S3 on Outposts</a> in the <i>Amazon S3 User Guide</i>.</p>
     */
    inline const Aws::String& GetBucket() const{ return m_bucket; }

    /**
     * <p>The name of the bucket that contains the newly created object. Does not
     * return the access point ARN or access point alias if used.</p> <p>When using
     * this action with an access point, you must direct requests to the access point
     * hostname. The access point hostname takes the form
     * <i>AccessPointName</i>-<i>AccountId</i>.s3-accesspoint.<i>Region</i>.amazonaws.com.
     * When using this action with an access point through the Amazon Web Services
     * SDKs, you provide the access point ARN in place of the bucket name. For more
     * information about access point ARNs, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/using-access-points.html">Using
     * access points</a> in the <i>Amazon S3 User Guide</i>.</p> <p>When using this
     * action with Amazon S3 on Outposts, you must direct requests to the S3 on
     * Outposts hostname. The S3 on Outposts hostname takes the form
     * <i>AccessPointName</i>-<i>AccountId</i>.<i>outpostID</i>.s3-outposts.<i>Region</i>.amazonaws.com.
     * When using this action using S3 on Outposts through the Amazon Web Services
     * SDKs, you provide the Outposts bucket ARN in place of the bucket name. For more
     * information about S3 on Outposts ARNs, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/S3onOutposts.html">Using
     * S3 on Outposts</a> in the <i>Amazon S3 User Guide</i>.</p>
     */
    inline void SetBucket(const Aws::String& value) { m_bucket = value; }

    /**
     * <p>The name of the bucket that contains the newly created object. Does not
     * return the access point ARN or access point alias if used.</p> <p>When using
     * this action with an access point, you must direct requests to the access point
     * hostname. The access point hostname takes the form
     * <i>AccessPointName</i>-<i>AccountId</i>.s3-accesspoint.<i>Region</i>.amazonaws.com.
     * When using this action with an access point through the Amazon Web Services
     * SDKs, you provide the access point ARN in place of the bucket name. For more
     * information about access point ARNs, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/using-access-points.html">Using
     * access points</a> in the <i>Amazon S3 User Guide</i>.</p> <p>When using this
     * action with Amazon S3 on Outposts, you must direct requests to the S3 on
     * Outposts hostname. The S3 on Outposts hostname takes the form
     * <i>AccessPointName</i>-<i>AccountId</i>.<i>outpostID</i>.s3-outposts.<i>Region</i>.amazonaws.com.
     * When using this action using S3 on Outposts through the Amazon Web Services
     * SDKs, you provide the Outposts bucket ARN in place of the bucket name. For more
     * information about S3 on Outposts ARNs, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/S3onOutposts.html">Using
     * S3 on Outposts</a> in the <i>Amazon S3 User Guide</i>.</p>
     */
    inline void SetBucket(Aws::String&& value) { m_bucket = std::move(value); }

    /**
     * <p>The name of the bucket that contains the newly created object. Does not
     * return the access point ARN or access point alias if used.</p> <p>When using
     * this action with an access point, you must direct requests to the access point
     * hostname. The access point hostname takes the form
     * <i>AccessPointName</i>-<i>AccountId</i>.s3-accesspoint.<i>Region</i>.amazonaws.com.
     * When using this action with an access point through the Amazon Web Services
     * SDKs, you provide the access point ARN in place of the bucket name. For more
     * information about access point ARNs, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/using-access-points.html">Using
     * access points</a> in the <i>Amazon S3 User Guide</i>.</p> <p>When using this
     * action with Amazon S3 on Outposts, you must direct requests to the S3 on
     * Outposts hostname. The S3 on Outposts hostname takes the form
     * <i>AccessPointName</i>-<i>AccountId</i>.<i>outpostID</i>.s3-outposts.<i>Region</i>.amazonaws.com.
     * When using this action using S3 on Outposts through the Amazon Web Services
     * SDKs, you provide the Outposts bucket ARN in place of the bucket name. For more
     * information about S3 on Outposts ARNs, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/S3onOutposts.html">Using
     * S3 on Outposts</a> in the <i>Amazon S3 User Guide</i>.</p>
     */
    inline void SetBucket(const char* value) { m_bucket.assign(value); }

    /**
     * <p>The name of the bucket that contains the newly created object. Does not
     * return the access point ARN or access point alias if used.</p> <p>When using
     * this action with an access point, you must direct requests to the access point
     * hostname. The access point hostname takes the form
     * <i>AccessPointName</i>-<i>AccountId</i>.s3-accesspoint.<i>Region</i>.amazonaws.com.
     * When using this action with an access point through the Amazon Web Services
     * SDKs, you provide the access point ARN in place of the bucket name. For more
     * information about access point ARNs, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/using-access-points.html">Using
     * access points</a> in the <i>Amazon S3 User Guide</i>.</p> <p>When using this
     * action with Amazon S3 on Outposts, you must direct requests to the S3 on
     * Outposts hostname. The S3 on Outposts hostname takes the form
     * <i>AccessPointName</i>-<i>AccountId</i>.<i>outpostID</i>.s3-outposts.<i>Region</i>.amazonaws.com.
     * When using this action using S3 on Outposts through the Amazon Web Services
     * SDKs, you provide the Outposts bucket ARN in place of the bucket name. For more
     * information about S3 on Outposts ARNs, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/S3onOutposts.html">Using
     * S3 on Outposts</a> in the <i>Amazon S3 User Guide</i>.</p>
     */
    inline CompleteMultipartUploadResult& WithBucket(const Aws::String& value) { SetBucket(value); return *this;}

    /**
     * <p>The name of the bucket that contains the newly created object. Does not
     * return the access point ARN or access point alias if used.</p> <p>When using
     * this action with an access point, you must direct requests to the access point
     * hostname. The access point hostname takes the form
     * <i>AccessPointName</i>-<i>AccountId</i>.s3-accesspoint.<i>Region</i>.amazonaws.com.
     * When using this action with an access point through the Amazon Web Services
     * SDKs, you provide the access point ARN in place of the bucket name. For more
     * information about access point ARNs, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/using-access-points.html">Using
     * access points</a> in the <i>Amazon S3 User Guide</i>.</p> <p>When using this
     * action with Amazon S3 on Outposts, you must direct requests to the S3 on
     * Outposts hostname. The S3 on Outposts hostname takes the form
     * <i>AccessPointName</i>-<i>AccountId</i>.<i>outpostID</i>.s3-outposts.<i>Region</i>.amazonaws.com.
     * When using this action using S3 on Outposts through the Amazon Web Services
     * SDKs, you provide the Outposts bucket ARN in place of the bucket name. For more
     * information about S3 on Outposts ARNs, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/S3onOutposts.html">Using
     * S3 on Outposts</a> in the <i>Amazon S3 User Guide</i>.</p>
     */
    inline CompleteMultipartUploadResult& WithBucket(Aws::String&& value) { SetBucket(std::move(value)); return *this;}

    /**
     * <p>The name of the bucket that contains the newly created object. Does not
     * return the access point ARN or access point alias if used.</p> <p>When using
     * this action with an access point, you must direct requests to the access point
     * hostname. The access point hostname takes the form
     * <i>AccessPointName</i>-<i>AccountId</i>.s3-accesspoint.<i>Region</i>.amazonaws.com.
     * When using this action with an access point through the Amazon Web Services
     * SDKs, you provide the access point ARN in place of the bucket name. For more
     * information about access point ARNs, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/using-access-points.html">Using
     * access points</a> in the <i>Amazon S3 User Guide</i>.</p> <p>When using this
     * action with Amazon S3 on Outposts, you must direct requests to the S3 on
     * Outposts hostname. The S3 on Outposts hostname takes the form
     * <i>AccessPointName</i>-<i>AccountId</i>.<i>outpostID</i>.s3-outposts.<i>Region</i>.amazonaws.com.
     * When using this action using S3 on Outposts through the Amazon Web Services
     * SDKs, you provide the Outposts bucket ARN in place of the bucket name. For more
     * information about S3 on Outposts ARNs, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/S3onOutposts.html">Using
     * S3 on Outposts</a> in the <i>Amazon S3 User Guide</i>.</p>
     */
    inline CompleteMultipartUploadResult& WithBucket(const char* value) { SetBucket(value); return *this;}


    /**
     * <p>The object key of the newly created object.</p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }

    /**
     * <p>The object key of the newly created object.</p>
     */
    inline void SetKey(const Aws::String& value) { m_key = value; }

    /**
     * <p>The object key of the newly created object.</p>
     */
    inline void SetKey(Aws::String&& value) { m_key = std::move(value); }

    /**
     * <p>The object key of the newly created object.</p>
     */
    inline void SetKey(const char* value) { m_key.assign(value); }

    /**
     * <p>The object key of the newly created object.</p>
     */
    inline CompleteMultipartUploadResult& WithKey(const Aws::String& value) { SetKey(value); return *this;}

    /**
     * <p>The object key of the newly created object.</p>
     */
    inline CompleteMultipartUploadResult& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}

    /**
     * <p>The object key of the newly created object.</p>
     */
    inline CompleteMultipartUploadResult& WithKey(const char* value) { SetKey(value); return *this;}


    /**
     * <p>If the object expiration is configured, this will contain the expiration date
     * (expiry-date) and rule ID (rule-id). The value of rule-id is URL encoded.</p>
     */
    inline const Aws::String& GetExpiration() const{ return m_expiration; }

    /**
     * <p>If the object expiration is configured, this will contain the expiration date
     * (expiry-date) and rule ID (rule-id). The value of rule-id is URL encoded.</p>
     */
    inline void SetExpiration(const Aws::String& value) { m_expiration = value; }

    /**
     * <p>If the object expiration is configured, this will contain the expiration date
     * (expiry-date) and rule ID (rule-id). The value of rule-id is URL encoded.</p>
     */
    inline void SetExpiration(Aws::String&& value) { m_expiration = std::move(value); }

    /**
     * <p>If the object expiration is configured, this will contain the expiration date
     * (expiry-date) and rule ID (rule-id). The value of rule-id is URL encoded.</p>
     */
    inline void SetExpiration(const char* value) { m_expiration.assign(value); }

    /**
     * <p>If the object expiration is configured, this will contain the expiration date
     * (expiry-date) and rule ID (rule-id). The value of rule-id is URL encoded.</p>
     */
    inline CompleteMultipartUploadResult& WithExpiration(const Aws::String& value) { SetExpiration(value); return *this;}

    /**
     * <p>If the object expiration is configured, this will contain the expiration date
     * (expiry-date) and rule ID (rule-id). The value of rule-id is URL encoded.</p>
     */
    inline CompleteMultipartUploadResult& WithExpiration(Aws::String&& value) { SetExpiration(std::move(value)); return *this;}

    /**
     * <p>If the object expiration is configured, this will contain the expiration date
     * (expiry-date) and rule ID (rule-id). The value of rule-id is URL encoded.</p>
     */
    inline CompleteMultipartUploadResult& WithExpiration(const char* value) { SetExpiration(value); return *this;}


    /**
     * <p>Entity tag that identifies the newly created object's data. Objects with
     * different object data will have different entity tags. The entity tag is an
     * opaque string. The entity tag may or may not be an MD5 digest of the object
     * data. If the entity tag is not an MD5 digest of the object data, it will contain
     * one or more nonhexadecimal characters and/or will consist of less than 32 or
     * more than 32 hexadecimal digits.</p>
     */
    inline const Aws::String& GetETag() const{ return m_eTag; }

    /**
     * <p>Entity tag that identifies the newly created object's data. Objects with
     * different object data will have different entity tags. The entity tag is an
     * opaque string. The entity tag may or may not be an MD5 digest of the object
     * data. If the entity tag is not an MD5 digest of the object data, it will contain
     * one or more nonhexadecimal characters and/or will consist of less than 32 or
     * more than 32 hexadecimal digits.</p>
     */
    inline void SetETag(const Aws::String& value) { m_eTag = value; }

    /**
     * <p>Entity tag that identifies the newly created object's data. Objects with
     * different object data will have different entity tags. The entity tag is an
     * opaque string. The entity tag may or may not be an MD5 digest of the object
     * data. If the entity tag is not an MD5 digest of the object data, it will contain
     * one or more nonhexadecimal characters and/or will consist of less than 32 or
     * more than 32 hexadecimal digits.</p>
     */
    inline void SetETag(Aws::String&& value) { m_eTag = std::move(value); }

    /**
     * <p>Entity tag that identifies the newly created object's data. Objects with
     * different object data will have different entity tags. The entity tag is an
     * opaque string. The entity tag may or may not be an MD5 digest of the object
     * data. If the entity tag is not an MD5 digest of the object data, it will contain
     * one or more nonhexadecimal characters and/or will consist of less than 32 or
     * more than 32 hexadecimal digits.</p>
     */
    inline void SetETag(const char* value) { m_eTag.assign(value); }

    /**
     * <p>Entity tag that identifies the newly created object's data. Objects with
     * different object data will have different entity tags. The entity tag is an
     * opaque string. The entity tag may or may not be an MD5 digest of the object
     * data. If the entity tag is not an MD5 digest of the object data, it will contain
     * one or more nonhexadecimal characters and/or will consist of less than 32 or
     * more than 32 hexadecimal digits.</p>
     */
    inline CompleteMultipartUploadResult& WithETag(const Aws::String& value) { SetETag(value); return *this;}

    /**
     * <p>Entity tag that identifies the newly created object's data. Objects with
     * different object data will have different entity tags. The entity tag is an
     * opaque string. The entity tag may or may not be an MD5 digest of the object
     * data. If the entity tag is not an MD5 digest of the object data, it will contain
     * one or more nonhexadecimal characters and/or will consist of less than 32 or
     * more than 32 hexadecimal digits.</p>
     */
    inline CompleteMultipartUploadResult& WithETag(Aws::String&& value) { SetETag(std::move(value)); return *this;}

    /**
     * <p>Entity tag that identifies the newly created object's data. Objects with
     * different object data will have different entity tags. The entity tag is an
     * opaque string. The entity tag may or may not be an MD5 digest of the object
     * data. If the entity tag is not an MD5 digest of the object data, it will contain
     * one or more nonhexadecimal characters and/or will consist of less than 32 or
     * more than 32 hexadecimal digits.</p>
     */
    inline CompleteMultipartUploadResult& WithETag(const char* value) { SetETag(value); return *this;}


    /**
     * <p>If you specified server-side encryption either with an Amazon S3-managed
     * encryption key or an Amazon Web Services KMS customer master key (CMK) in your
     * initiate multipart upload request, the response includes this header. It
     * confirms the encryption algorithm that Amazon S3 used to encrypt the object.</p>
     */
    inline const ServerSideEncryption& GetServerSideEncryption() const{ return m_serverSideEncryption; }

    /**
     * <p>If you specified server-side encryption either with an Amazon S3-managed
     * encryption key or an Amazon Web Services KMS customer master key (CMK) in your
     * initiate multipart upload request, the response includes this header. It
     * confirms the encryption algorithm that Amazon S3 used to encrypt the object.</p>
     */
    inline void SetServerSideEncryption(const ServerSideEncryption& value) { m_serverSideEncryption = value; }

    /**
     * <p>If you specified server-side encryption either with an Amazon S3-managed
     * encryption key or an Amazon Web Services KMS customer master key (CMK) in your
     * initiate multipart upload request, the response includes this header. It
     * confirms the encryption algorithm that Amazon S3 used to encrypt the object.</p>
     */
    inline void SetServerSideEncryption(ServerSideEncryption&& value) { m_serverSideEncryption = std::move(value); }

    /**
     * <p>If you specified server-side encryption either with an Amazon S3-managed
     * encryption key or an Amazon Web Services KMS customer master key (CMK) in your
     * initiate multipart upload request, the response includes this header. It
     * confirms the encryption algorithm that Amazon S3 used to encrypt the object.</p>
     */
    inline CompleteMultipartUploadResult& WithServerSideEncryption(const ServerSideEncryption& value) { SetServerSideEncryption(value); return *this;}

    /**
     * <p>If you specified server-side encryption either with an Amazon S3-managed
     * encryption key or an Amazon Web Services KMS customer master key (CMK) in your
     * initiate multipart upload request, the response includes this header. It
     * confirms the encryption algorithm that Amazon S3 used to encrypt the object.</p>
     */
    inline CompleteMultipartUploadResult& WithServerSideEncryption(ServerSideEncryption&& value) { SetServerSideEncryption(std::move(value)); return *this;}


    /**
     * <p>Version ID of the newly created object, in case the bucket has versioning
     * turned on.</p>
     */
    inline const Aws::String& GetVersionId() const{ return m_versionId; }

    /**
     * <p>Version ID of the newly created object, in case the bucket has versioning
     * turned on.</p>
     */
    inline void SetVersionId(const Aws::String& value) { m_versionId = value; }

    /**
     * <p>Version ID of the newly created object, in case the bucket has versioning
     * turned on.</p>
     */
    inline void SetVersionId(Aws::String&& value) { m_versionId = std::move(value); }

    /**
     * <p>Version ID of the newly created object, in case the bucket has versioning
     * turned on.</p>
     */
    inline void SetVersionId(const char* value) { m_versionId.assign(value); }

    /**
     * <p>Version ID of the newly created object, in case the bucket has versioning
     * turned on.</p>
     */
    inline CompleteMultipartUploadResult& WithVersionId(const Aws::String& value) { SetVersionId(value); return *this;}

    /**
     * <p>Version ID of the newly created object, in case the bucket has versioning
     * turned on.</p>
     */
    inline CompleteMultipartUploadResult& WithVersionId(Aws::String&& value) { SetVersionId(std::move(value)); return *this;}

    /**
     * <p>Version ID of the newly created object, in case the bucket has versioning
     * turned on.</p>
     */
    inline CompleteMultipartUploadResult& WithVersionId(const char* value) { SetVersionId(value); return *this;}


    /**
     * <p>If present, specifies the ID of the Amazon Web Services Key Management
     * Service (Amazon Web Services KMS) symmetric customer managed customer master key
     * (CMK) that was used for the object.</p>
     */
    inline const Aws::String& GetSSEKMSKeyId() const{ return m_sSEKMSKeyId; }

    /**
     * <p>If present, specifies the ID of the Amazon Web Services Key Management
     * Service (Amazon Web Services KMS) symmetric customer managed customer master key
     * (CMK) that was used for the object.</p>
     */
    inline void SetSSEKMSKeyId(const Aws::String& value) { m_sSEKMSKeyId = value; }

    /**
     * <p>If present, specifies the ID of the Amazon Web Services Key Management
     * Service (Amazon Web Services KMS) symmetric customer managed customer master key
     * (CMK) that was used for the object.</p>
     */
    inline void SetSSEKMSKeyId(Aws::String&& value) { m_sSEKMSKeyId = std::move(value); }

    /**
     * <p>If present, specifies the ID of the Amazon Web Services Key Management
     * Service (Amazon Web Services KMS) symmetric customer managed customer master key
     * (CMK) that was used for the object.</p>
     */
    inline void SetSSEKMSKeyId(const char* value) { m_sSEKMSKeyId.assign(value); }

    /**
     * <p>If present, specifies the ID of the Amazon Web Services Key Management
     * Service (Amazon Web Services KMS) symmetric customer managed customer master key
     * (CMK) that was used for the object.</p>
     */
    inline CompleteMultipartUploadResult& WithSSEKMSKeyId(const Aws::String& value) { SetSSEKMSKeyId(value); return *this;}

    /**
     * <p>If present, specifies the ID of the Amazon Web Services Key Management
     * Service (Amazon Web Services KMS) symmetric customer managed customer master key
     * (CMK) that was used for the object.</p>
     */
    inline CompleteMultipartUploadResult& WithSSEKMSKeyId(Aws::String&& value) { SetSSEKMSKeyId(std::move(value)); return *this;}

    /**
     * <p>If present, specifies the ID of the Amazon Web Services Key Management
     * Service (Amazon Web Services KMS) symmetric customer managed customer master key
     * (CMK) that was used for the object.</p>
     */
    inline CompleteMultipartUploadResult& WithSSEKMSKeyId(const char* value) { SetSSEKMSKeyId(value); return *this;}


    /**
     * <p>Indicates whether the multipart upload uses an S3 Bucket Key for server-side
     * encryption with Amazon Web Services KMS (SSE-KMS).</p>
     */
    inline bool GetBucketKeyEnabled() const{ return m_bucketKeyEnabled; }

    /**
     * <p>Indicates whether the multipart upload uses an S3 Bucket Key for server-side
     * encryption with Amazon Web Services KMS (SSE-KMS).</p>
     */
    inline void SetBucketKeyEnabled(bool value) { m_bucketKeyEnabled = value; }

    /**
     * <p>Indicates whether the multipart upload uses an S3 Bucket Key for server-side
     * encryption with Amazon Web Services KMS (SSE-KMS).</p>
     */
    inline CompleteMultipartUploadResult& WithBucketKeyEnabled(bool value) { SetBucketKeyEnabled(value); return *this;}


    
    inline const RequestCharged& GetRequestCharged() const{ return m_requestCharged; }

    
    inline void SetRequestCharged(const RequestCharged& value) { m_requestCharged = value; }

    
    inline void SetRequestCharged(RequestCharged&& value) { m_requestCharged = std::move(value); }

    
    inline CompleteMultipartUploadResult& WithRequestCharged(const RequestCharged& value) { SetRequestCharged(value); return *this;}

    
    inline CompleteMultipartUploadResult& WithRequestCharged(RequestCharged&& value) { SetRequestCharged(std::move(value)); return *this;}

  private:

    Aws::String m_location;

    Aws::String m_bucket;

    Aws::String m_key;

    Aws::String m_expiration;

    Aws::String m_eTag;

    ServerSideEncryption m_serverSideEncryption;

    Aws::String m_versionId;

    Aws::String m_sSEKMSKeyId;

    bool m_bucketKeyEnabled;

    RequestCharged m_requestCharged;
  };

} // namespace Model
} // namespace S3
} // namespace Aws

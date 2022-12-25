/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/s3control/model/LifecycleExpiration.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3control/model/LifecycleRuleFilter.h>
#include <aws/s3control/model/ExpirationStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/s3control/model/NoncurrentVersionExpiration.h>
#include <aws/s3control/model/AbortIncompleteMultipartUpload.h>
#include <aws/s3control/model/Transition.h>
#include <aws/s3control/model/NoncurrentVersionTransition.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace S3Control
{
namespace Model
{

  /**
   * <p>The container for the Outposts bucket lifecycle rule.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/LifecycleRule">AWS
   * API Reference</a></p>
   */
  class LifecycleRule
  {
  public:
    AWS_S3CONTROL_API LifecycleRule();
    AWS_S3CONTROL_API LifecycleRule(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3CONTROL_API LifecycleRule& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3CONTROL_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>Specifies the expiration for the lifecycle of the object in the form of date,
     * days and, whether the object has a delete marker.</p>
     */
    inline const LifecycleExpiration& GetExpiration() const{ return m_expiration; }

    /**
     * <p>Specifies the expiration for the lifecycle of the object in the form of date,
     * days and, whether the object has a delete marker.</p>
     */
    inline bool ExpirationHasBeenSet() const { return m_expirationHasBeenSet; }

    /**
     * <p>Specifies the expiration for the lifecycle of the object in the form of date,
     * days and, whether the object has a delete marker.</p>
     */
    inline void SetExpiration(const LifecycleExpiration& value) { m_expirationHasBeenSet = true; m_expiration = value; }

    /**
     * <p>Specifies the expiration for the lifecycle of the object in the form of date,
     * days and, whether the object has a delete marker.</p>
     */
    inline void SetExpiration(LifecycleExpiration&& value) { m_expirationHasBeenSet = true; m_expiration = std::move(value); }

    /**
     * <p>Specifies the expiration for the lifecycle of the object in the form of date,
     * days and, whether the object has a delete marker.</p>
     */
    inline LifecycleRule& WithExpiration(const LifecycleExpiration& value) { SetExpiration(value); return *this;}

    /**
     * <p>Specifies the expiration for the lifecycle of the object in the form of date,
     * days and, whether the object has a delete marker.</p>
     */
    inline LifecycleRule& WithExpiration(LifecycleExpiration&& value) { SetExpiration(std::move(value)); return *this;}


    /**
     * <p>Unique identifier for the rule. The value cannot be longer than 255
     * characters.</p>
     */
    inline const Aws::String& GetID() const{ return m_iD; }

    /**
     * <p>Unique identifier for the rule. The value cannot be longer than 255
     * characters.</p>
     */
    inline bool IDHasBeenSet() const { return m_iDHasBeenSet; }

    /**
     * <p>Unique identifier for the rule. The value cannot be longer than 255
     * characters.</p>
     */
    inline void SetID(const Aws::String& value) { m_iDHasBeenSet = true; m_iD = value; }

    /**
     * <p>Unique identifier for the rule. The value cannot be longer than 255
     * characters.</p>
     */
    inline void SetID(Aws::String&& value) { m_iDHasBeenSet = true; m_iD = std::move(value); }

    /**
     * <p>Unique identifier for the rule. The value cannot be longer than 255
     * characters.</p>
     */
    inline void SetID(const char* value) { m_iDHasBeenSet = true; m_iD.assign(value); }

    /**
     * <p>Unique identifier for the rule. The value cannot be longer than 255
     * characters.</p>
     */
    inline LifecycleRule& WithID(const Aws::String& value) { SetID(value); return *this;}

    /**
     * <p>Unique identifier for the rule. The value cannot be longer than 255
     * characters.</p>
     */
    inline LifecycleRule& WithID(Aws::String&& value) { SetID(std::move(value)); return *this;}

    /**
     * <p>Unique identifier for the rule. The value cannot be longer than 255
     * characters.</p>
     */
    inline LifecycleRule& WithID(const char* value) { SetID(value); return *this;}


    /**
     * <p>The container for the filter of lifecycle rule.</p>
     */
    inline const LifecycleRuleFilter& GetFilter() const{ return m_filter; }

    /**
     * <p>The container for the filter of lifecycle rule.</p>
     */
    inline bool FilterHasBeenSet() const { return m_filterHasBeenSet; }

    /**
     * <p>The container for the filter of lifecycle rule.</p>
     */
    inline void SetFilter(const LifecycleRuleFilter& value) { m_filterHasBeenSet = true; m_filter = value; }

    /**
     * <p>The container for the filter of lifecycle rule.</p>
     */
    inline void SetFilter(LifecycleRuleFilter&& value) { m_filterHasBeenSet = true; m_filter = std::move(value); }

    /**
     * <p>The container for the filter of lifecycle rule.</p>
     */
    inline LifecycleRule& WithFilter(const LifecycleRuleFilter& value) { SetFilter(value); return *this;}

    /**
     * <p>The container for the filter of lifecycle rule.</p>
     */
    inline LifecycleRule& WithFilter(LifecycleRuleFilter&& value) { SetFilter(std::move(value)); return *this;}


    /**
     * <p>If 'Enabled', the rule is currently being applied. If 'Disabled', the rule is
     * not currently being applied.</p>
     */
    inline const ExpirationStatus& GetStatus() const{ return m_status; }

    /**
     * <p>If 'Enabled', the rule is currently being applied. If 'Disabled', the rule is
     * not currently being applied.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>If 'Enabled', the rule is currently being applied. If 'Disabled', the rule is
     * not currently being applied.</p>
     */
    inline void SetStatus(const ExpirationStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>If 'Enabled', the rule is currently being applied. If 'Disabled', the rule is
     * not currently being applied.</p>
     */
    inline void SetStatus(ExpirationStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>If 'Enabled', the rule is currently being applied. If 'Disabled', the rule is
     * not currently being applied.</p>
     */
    inline LifecycleRule& WithStatus(const ExpirationStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>If 'Enabled', the rule is currently being applied. If 'Disabled', the rule is
     * not currently being applied.</p>
     */
    inline LifecycleRule& WithStatus(ExpirationStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>Specifies when an Amazon S3 object transitions to a specified storage
     * class.</p>  <p>This is not supported by Amazon S3 on Outposts buckets.</p>
     * 
     */
    inline const Aws::Vector<Transition>& GetTransitions() const{ return m_transitions; }

    /**
     * <p>Specifies when an Amazon S3 object transitions to a specified storage
     * class.</p>  <p>This is not supported by Amazon S3 on Outposts buckets.</p>
     * 
     */
    inline bool TransitionsHasBeenSet() const { return m_transitionsHasBeenSet; }

    /**
     * <p>Specifies when an Amazon S3 object transitions to a specified storage
     * class.</p>  <p>This is not supported by Amazon S3 on Outposts buckets.</p>
     * 
     */
    inline void SetTransitions(const Aws::Vector<Transition>& value) { m_transitionsHasBeenSet = true; m_transitions = value; }

    /**
     * <p>Specifies when an Amazon S3 object transitions to a specified storage
     * class.</p>  <p>This is not supported by Amazon S3 on Outposts buckets.</p>
     * 
     */
    inline void SetTransitions(Aws::Vector<Transition>&& value) { m_transitionsHasBeenSet = true; m_transitions = std::move(value); }

    /**
     * <p>Specifies when an Amazon S3 object transitions to a specified storage
     * class.</p>  <p>This is not supported by Amazon S3 on Outposts buckets.</p>
     * 
     */
    inline LifecycleRule& WithTransitions(const Aws::Vector<Transition>& value) { SetTransitions(value); return *this;}

    /**
     * <p>Specifies when an Amazon S3 object transitions to a specified storage
     * class.</p>  <p>This is not supported by Amazon S3 on Outposts buckets.</p>
     * 
     */
    inline LifecycleRule& WithTransitions(Aws::Vector<Transition>&& value) { SetTransitions(std::move(value)); return *this;}

    /**
     * <p>Specifies when an Amazon S3 object transitions to a specified storage
     * class.</p>  <p>This is not supported by Amazon S3 on Outposts buckets.</p>
     * 
     */
    inline LifecycleRule& AddTransitions(const Transition& value) { m_transitionsHasBeenSet = true; m_transitions.push_back(value); return *this; }

    /**
     * <p>Specifies when an Amazon S3 object transitions to a specified storage
     * class.</p>  <p>This is not supported by Amazon S3 on Outposts buckets.</p>
     * 
     */
    inline LifecycleRule& AddTransitions(Transition&& value) { m_transitionsHasBeenSet = true; m_transitions.push_back(std::move(value)); return *this; }


    /**
     * <p> Specifies the transition rule for the lifecycle rule that describes when
     * noncurrent objects transition to a specific storage class. If your bucket is
     * versioning-enabled (or versioning is suspended), you can set this action to
     * request that Amazon S3 transition noncurrent object versions to a specific
     * storage class at a set period in the object's lifetime. </p>  <p>This is
     * not supported by Amazon S3 on Outposts buckets.</p> 
     */
    inline const Aws::Vector<NoncurrentVersionTransition>& GetNoncurrentVersionTransitions() const{ return m_noncurrentVersionTransitions; }

    /**
     * <p> Specifies the transition rule for the lifecycle rule that describes when
     * noncurrent objects transition to a specific storage class. If your bucket is
     * versioning-enabled (or versioning is suspended), you can set this action to
     * request that Amazon S3 transition noncurrent object versions to a specific
     * storage class at a set period in the object's lifetime. </p>  <p>This is
     * not supported by Amazon S3 on Outposts buckets.</p> 
     */
    inline bool NoncurrentVersionTransitionsHasBeenSet() const { return m_noncurrentVersionTransitionsHasBeenSet; }

    /**
     * <p> Specifies the transition rule for the lifecycle rule that describes when
     * noncurrent objects transition to a specific storage class. If your bucket is
     * versioning-enabled (or versioning is suspended), you can set this action to
     * request that Amazon S3 transition noncurrent object versions to a specific
     * storage class at a set period in the object's lifetime. </p>  <p>This is
     * not supported by Amazon S3 on Outposts buckets.</p> 
     */
    inline void SetNoncurrentVersionTransitions(const Aws::Vector<NoncurrentVersionTransition>& value) { m_noncurrentVersionTransitionsHasBeenSet = true; m_noncurrentVersionTransitions = value; }

    /**
     * <p> Specifies the transition rule for the lifecycle rule that describes when
     * noncurrent objects transition to a specific storage class. If your bucket is
     * versioning-enabled (or versioning is suspended), you can set this action to
     * request that Amazon S3 transition noncurrent object versions to a specific
     * storage class at a set period in the object's lifetime. </p>  <p>This is
     * not supported by Amazon S3 on Outposts buckets.</p> 
     */
    inline void SetNoncurrentVersionTransitions(Aws::Vector<NoncurrentVersionTransition>&& value) { m_noncurrentVersionTransitionsHasBeenSet = true; m_noncurrentVersionTransitions = std::move(value); }

    /**
     * <p> Specifies the transition rule for the lifecycle rule that describes when
     * noncurrent objects transition to a specific storage class. If your bucket is
     * versioning-enabled (or versioning is suspended), you can set this action to
     * request that Amazon S3 transition noncurrent object versions to a specific
     * storage class at a set period in the object's lifetime. </p>  <p>This is
     * not supported by Amazon S3 on Outposts buckets.</p> 
     */
    inline LifecycleRule& WithNoncurrentVersionTransitions(const Aws::Vector<NoncurrentVersionTransition>& value) { SetNoncurrentVersionTransitions(value); return *this;}

    /**
     * <p> Specifies the transition rule for the lifecycle rule that describes when
     * noncurrent objects transition to a specific storage class. If your bucket is
     * versioning-enabled (or versioning is suspended), you can set this action to
     * request that Amazon S3 transition noncurrent object versions to a specific
     * storage class at a set period in the object's lifetime. </p>  <p>This is
     * not supported by Amazon S3 on Outposts buckets.</p> 
     */
    inline LifecycleRule& WithNoncurrentVersionTransitions(Aws::Vector<NoncurrentVersionTransition>&& value) { SetNoncurrentVersionTransitions(std::move(value)); return *this;}

    /**
     * <p> Specifies the transition rule for the lifecycle rule that describes when
     * noncurrent objects transition to a specific storage class. If your bucket is
     * versioning-enabled (or versioning is suspended), you can set this action to
     * request that Amazon S3 transition noncurrent object versions to a specific
     * storage class at a set period in the object's lifetime. </p>  <p>This is
     * not supported by Amazon S3 on Outposts buckets.</p> 
     */
    inline LifecycleRule& AddNoncurrentVersionTransitions(const NoncurrentVersionTransition& value) { m_noncurrentVersionTransitionsHasBeenSet = true; m_noncurrentVersionTransitions.push_back(value); return *this; }

    /**
     * <p> Specifies the transition rule for the lifecycle rule that describes when
     * noncurrent objects transition to a specific storage class. If your bucket is
     * versioning-enabled (or versioning is suspended), you can set this action to
     * request that Amazon S3 transition noncurrent object versions to a specific
     * storage class at a set period in the object's lifetime. </p>  <p>This is
     * not supported by Amazon S3 on Outposts buckets.</p> 
     */
    inline LifecycleRule& AddNoncurrentVersionTransitions(NoncurrentVersionTransition&& value) { m_noncurrentVersionTransitionsHasBeenSet = true; m_noncurrentVersionTransitions.push_back(std::move(value)); return *this; }


    /**
     * <p>The noncurrent version expiration of the lifecycle rule.</p>
     */
    inline const NoncurrentVersionExpiration& GetNoncurrentVersionExpiration() const{ return m_noncurrentVersionExpiration; }

    /**
     * <p>The noncurrent version expiration of the lifecycle rule.</p>
     */
    inline bool NoncurrentVersionExpirationHasBeenSet() const { return m_noncurrentVersionExpirationHasBeenSet; }

    /**
     * <p>The noncurrent version expiration of the lifecycle rule.</p>
     */
    inline void SetNoncurrentVersionExpiration(const NoncurrentVersionExpiration& value) { m_noncurrentVersionExpirationHasBeenSet = true; m_noncurrentVersionExpiration = value; }

    /**
     * <p>The noncurrent version expiration of the lifecycle rule.</p>
     */
    inline void SetNoncurrentVersionExpiration(NoncurrentVersionExpiration&& value) { m_noncurrentVersionExpirationHasBeenSet = true; m_noncurrentVersionExpiration = std::move(value); }

    /**
     * <p>The noncurrent version expiration of the lifecycle rule.</p>
     */
    inline LifecycleRule& WithNoncurrentVersionExpiration(const NoncurrentVersionExpiration& value) { SetNoncurrentVersionExpiration(value); return *this;}

    /**
     * <p>The noncurrent version expiration of the lifecycle rule.</p>
     */
    inline LifecycleRule& WithNoncurrentVersionExpiration(NoncurrentVersionExpiration&& value) { SetNoncurrentVersionExpiration(std::move(value)); return *this;}


    /**
     * <p>Specifies the days since the initiation of an incomplete multipart upload
     * that Amazon S3 waits before permanently removing all parts of the upload. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/mpuoverview.html#mpu-abort-incomplete-mpu-lifecycle-config">
     * Aborting Incomplete Multipart Uploads Using a Bucket Lifecycle Policy</a> in the
     * <i>Amazon S3 User Guide</i>.</p>
     */
    inline const AbortIncompleteMultipartUpload& GetAbortIncompleteMultipartUpload() const{ return m_abortIncompleteMultipartUpload; }

    /**
     * <p>Specifies the days since the initiation of an incomplete multipart upload
     * that Amazon S3 waits before permanently removing all parts of the upload. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/mpuoverview.html#mpu-abort-incomplete-mpu-lifecycle-config">
     * Aborting Incomplete Multipart Uploads Using a Bucket Lifecycle Policy</a> in the
     * <i>Amazon S3 User Guide</i>.</p>
     */
    inline bool AbortIncompleteMultipartUploadHasBeenSet() const { return m_abortIncompleteMultipartUploadHasBeenSet; }

    /**
     * <p>Specifies the days since the initiation of an incomplete multipart upload
     * that Amazon S3 waits before permanently removing all parts of the upload. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/mpuoverview.html#mpu-abort-incomplete-mpu-lifecycle-config">
     * Aborting Incomplete Multipart Uploads Using a Bucket Lifecycle Policy</a> in the
     * <i>Amazon S3 User Guide</i>.</p>
     */
    inline void SetAbortIncompleteMultipartUpload(const AbortIncompleteMultipartUpload& value) { m_abortIncompleteMultipartUploadHasBeenSet = true; m_abortIncompleteMultipartUpload = value; }

    /**
     * <p>Specifies the days since the initiation of an incomplete multipart upload
     * that Amazon S3 waits before permanently removing all parts of the upload. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/mpuoverview.html#mpu-abort-incomplete-mpu-lifecycle-config">
     * Aborting Incomplete Multipart Uploads Using a Bucket Lifecycle Policy</a> in the
     * <i>Amazon S3 User Guide</i>.</p>
     */
    inline void SetAbortIncompleteMultipartUpload(AbortIncompleteMultipartUpload&& value) { m_abortIncompleteMultipartUploadHasBeenSet = true; m_abortIncompleteMultipartUpload = std::move(value); }

    /**
     * <p>Specifies the days since the initiation of an incomplete multipart upload
     * that Amazon S3 waits before permanently removing all parts of the upload. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/mpuoverview.html#mpu-abort-incomplete-mpu-lifecycle-config">
     * Aborting Incomplete Multipart Uploads Using a Bucket Lifecycle Policy</a> in the
     * <i>Amazon S3 User Guide</i>.</p>
     */
    inline LifecycleRule& WithAbortIncompleteMultipartUpload(const AbortIncompleteMultipartUpload& value) { SetAbortIncompleteMultipartUpload(value); return *this;}

    /**
     * <p>Specifies the days since the initiation of an incomplete multipart upload
     * that Amazon S3 waits before permanently removing all parts of the upload. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/mpuoverview.html#mpu-abort-incomplete-mpu-lifecycle-config">
     * Aborting Incomplete Multipart Uploads Using a Bucket Lifecycle Policy</a> in the
     * <i>Amazon S3 User Guide</i>.</p>
     */
    inline LifecycleRule& WithAbortIncompleteMultipartUpload(AbortIncompleteMultipartUpload&& value) { SetAbortIncompleteMultipartUpload(std::move(value)); return *this;}

  private:

    LifecycleExpiration m_expiration;
    bool m_expirationHasBeenSet = false;

    Aws::String m_iD;
    bool m_iDHasBeenSet = false;

    LifecycleRuleFilter m_filter;
    bool m_filterHasBeenSet = false;

    ExpirationStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Vector<Transition> m_transitions;
    bool m_transitionsHasBeenSet = false;

    Aws::Vector<NoncurrentVersionTransition> m_noncurrentVersionTransitions;
    bool m_noncurrentVersionTransitionsHasBeenSet = false;

    NoncurrentVersionExpiration m_noncurrentVersionExpiration;
    bool m_noncurrentVersionExpirationHasBeenSet = false;

    AbortIncompleteMultipartUpload m_abortIncompleteMultipartUpload;
    bool m_abortIncompleteMultipartUploadHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws

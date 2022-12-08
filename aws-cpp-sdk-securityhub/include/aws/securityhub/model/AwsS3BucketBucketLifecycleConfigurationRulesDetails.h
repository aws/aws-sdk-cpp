/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/AwsS3BucketBucketLifecycleConfigurationRulesAbortIncompleteMultipartUploadDetails.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/AwsS3BucketBucketLifecycleConfigurationRulesFilterDetails.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityhub/model/AwsS3BucketBucketLifecycleConfigurationRulesNoncurrentVersionTransitionsDetails.h>
#include <aws/securityhub/model/AwsS3BucketBucketLifecycleConfigurationRulesTransitionsDetails.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>Configuration for a lifecycle rule.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsS3BucketBucketLifecycleConfigurationRulesDetails">AWS
   * API Reference</a></p>
   */
  class AwsS3BucketBucketLifecycleConfigurationRulesDetails
  {
  public:
    AWS_SECURITYHUB_API AwsS3BucketBucketLifecycleConfigurationRulesDetails();
    AWS_SECURITYHUB_API AwsS3BucketBucketLifecycleConfigurationRulesDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsS3BucketBucketLifecycleConfigurationRulesDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>How Amazon S3 responds when a multipart upload is incomplete. Specifically,
     * provides a number of days before Amazon S3 cancels the entire upload.</p>
     */
    inline const AwsS3BucketBucketLifecycleConfigurationRulesAbortIncompleteMultipartUploadDetails& GetAbortIncompleteMultipartUpload() const{ return m_abortIncompleteMultipartUpload; }

    /**
     * <p>How Amazon S3 responds when a multipart upload is incomplete. Specifically,
     * provides a number of days before Amazon S3 cancels the entire upload.</p>
     */
    inline bool AbortIncompleteMultipartUploadHasBeenSet() const { return m_abortIncompleteMultipartUploadHasBeenSet; }

    /**
     * <p>How Amazon S3 responds when a multipart upload is incomplete. Specifically,
     * provides a number of days before Amazon S3 cancels the entire upload.</p>
     */
    inline void SetAbortIncompleteMultipartUpload(const AwsS3BucketBucketLifecycleConfigurationRulesAbortIncompleteMultipartUploadDetails& value) { m_abortIncompleteMultipartUploadHasBeenSet = true; m_abortIncompleteMultipartUpload = value; }

    /**
     * <p>How Amazon S3 responds when a multipart upload is incomplete. Specifically,
     * provides a number of days before Amazon S3 cancels the entire upload.</p>
     */
    inline void SetAbortIncompleteMultipartUpload(AwsS3BucketBucketLifecycleConfigurationRulesAbortIncompleteMultipartUploadDetails&& value) { m_abortIncompleteMultipartUploadHasBeenSet = true; m_abortIncompleteMultipartUpload = std::move(value); }

    /**
     * <p>How Amazon S3 responds when a multipart upload is incomplete. Specifically,
     * provides a number of days before Amazon S3 cancels the entire upload.</p>
     */
    inline AwsS3BucketBucketLifecycleConfigurationRulesDetails& WithAbortIncompleteMultipartUpload(const AwsS3BucketBucketLifecycleConfigurationRulesAbortIncompleteMultipartUploadDetails& value) { SetAbortIncompleteMultipartUpload(value); return *this;}

    /**
     * <p>How Amazon S3 responds when a multipart upload is incomplete. Specifically,
     * provides a number of days before Amazon S3 cancels the entire upload.</p>
     */
    inline AwsS3BucketBucketLifecycleConfigurationRulesDetails& WithAbortIncompleteMultipartUpload(AwsS3BucketBucketLifecycleConfigurationRulesAbortIncompleteMultipartUploadDetails&& value) { SetAbortIncompleteMultipartUpload(std::move(value)); return *this;}


    /**
     * <p>The date when objects are moved or deleted.</p> <p>Uses the
     * <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline const Aws::String& GetExpirationDate() const{ return m_expirationDate; }

    /**
     * <p>The date when objects are moved or deleted.</p> <p>Uses the
     * <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline bool ExpirationDateHasBeenSet() const { return m_expirationDateHasBeenSet; }

    /**
     * <p>The date when objects are moved or deleted.</p> <p>Uses the
     * <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline void SetExpirationDate(const Aws::String& value) { m_expirationDateHasBeenSet = true; m_expirationDate = value; }

    /**
     * <p>The date when objects are moved or deleted.</p> <p>Uses the
     * <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline void SetExpirationDate(Aws::String&& value) { m_expirationDateHasBeenSet = true; m_expirationDate = std::move(value); }

    /**
     * <p>The date when objects are moved or deleted.</p> <p>Uses the
     * <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline void SetExpirationDate(const char* value) { m_expirationDateHasBeenSet = true; m_expirationDate.assign(value); }

    /**
     * <p>The date when objects are moved or deleted.</p> <p>Uses the
     * <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline AwsS3BucketBucketLifecycleConfigurationRulesDetails& WithExpirationDate(const Aws::String& value) { SetExpirationDate(value); return *this;}

    /**
     * <p>The date when objects are moved or deleted.</p> <p>Uses the
     * <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline AwsS3BucketBucketLifecycleConfigurationRulesDetails& WithExpirationDate(Aws::String&& value) { SetExpirationDate(std::move(value)); return *this;}

    /**
     * <p>The date when objects are moved or deleted.</p> <p>Uses the
     * <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline AwsS3BucketBucketLifecycleConfigurationRulesDetails& WithExpirationDate(const char* value) { SetExpirationDate(value); return *this;}


    /**
     * <p>The length in days of the lifetime for objects that are subject to the
     * rule.</p>
     */
    inline int GetExpirationInDays() const{ return m_expirationInDays; }

    /**
     * <p>The length in days of the lifetime for objects that are subject to the
     * rule.</p>
     */
    inline bool ExpirationInDaysHasBeenSet() const { return m_expirationInDaysHasBeenSet; }

    /**
     * <p>The length in days of the lifetime for objects that are subject to the
     * rule.</p>
     */
    inline void SetExpirationInDays(int value) { m_expirationInDaysHasBeenSet = true; m_expirationInDays = value; }

    /**
     * <p>The length in days of the lifetime for objects that are subject to the
     * rule.</p>
     */
    inline AwsS3BucketBucketLifecycleConfigurationRulesDetails& WithExpirationInDays(int value) { SetExpirationInDays(value); return *this;}


    /**
     * <p>Whether Amazon S3 removes a delete marker that has no noncurrent versions. If
     * set to <code>true</code>, the delete marker is expired. If set to
     * <code>false</code>, the policy takes no action.</p> <p>If you provide
     * <code>ExpiredObjectDeleteMarker</code>, you cannot provide
     * <code>ExpirationInDays</code> or <code>ExpirationDate</code>.</p>
     */
    inline bool GetExpiredObjectDeleteMarker() const{ return m_expiredObjectDeleteMarker; }

    /**
     * <p>Whether Amazon S3 removes a delete marker that has no noncurrent versions. If
     * set to <code>true</code>, the delete marker is expired. If set to
     * <code>false</code>, the policy takes no action.</p> <p>If you provide
     * <code>ExpiredObjectDeleteMarker</code>, you cannot provide
     * <code>ExpirationInDays</code> or <code>ExpirationDate</code>.</p>
     */
    inline bool ExpiredObjectDeleteMarkerHasBeenSet() const { return m_expiredObjectDeleteMarkerHasBeenSet; }

    /**
     * <p>Whether Amazon S3 removes a delete marker that has no noncurrent versions. If
     * set to <code>true</code>, the delete marker is expired. If set to
     * <code>false</code>, the policy takes no action.</p> <p>If you provide
     * <code>ExpiredObjectDeleteMarker</code>, you cannot provide
     * <code>ExpirationInDays</code> or <code>ExpirationDate</code>.</p>
     */
    inline void SetExpiredObjectDeleteMarker(bool value) { m_expiredObjectDeleteMarkerHasBeenSet = true; m_expiredObjectDeleteMarker = value; }

    /**
     * <p>Whether Amazon S3 removes a delete marker that has no noncurrent versions. If
     * set to <code>true</code>, the delete marker is expired. If set to
     * <code>false</code>, the policy takes no action.</p> <p>If you provide
     * <code>ExpiredObjectDeleteMarker</code>, you cannot provide
     * <code>ExpirationInDays</code> or <code>ExpirationDate</code>.</p>
     */
    inline AwsS3BucketBucketLifecycleConfigurationRulesDetails& WithExpiredObjectDeleteMarker(bool value) { SetExpiredObjectDeleteMarker(value); return *this;}


    /**
     * <p>Identifies the objects that a rule applies to.</p>
     */
    inline const AwsS3BucketBucketLifecycleConfigurationRulesFilterDetails& GetFilter() const{ return m_filter; }

    /**
     * <p>Identifies the objects that a rule applies to.</p>
     */
    inline bool FilterHasBeenSet() const { return m_filterHasBeenSet; }

    /**
     * <p>Identifies the objects that a rule applies to.</p>
     */
    inline void SetFilter(const AwsS3BucketBucketLifecycleConfigurationRulesFilterDetails& value) { m_filterHasBeenSet = true; m_filter = value; }

    /**
     * <p>Identifies the objects that a rule applies to.</p>
     */
    inline void SetFilter(AwsS3BucketBucketLifecycleConfigurationRulesFilterDetails&& value) { m_filterHasBeenSet = true; m_filter = std::move(value); }

    /**
     * <p>Identifies the objects that a rule applies to.</p>
     */
    inline AwsS3BucketBucketLifecycleConfigurationRulesDetails& WithFilter(const AwsS3BucketBucketLifecycleConfigurationRulesFilterDetails& value) { SetFilter(value); return *this;}

    /**
     * <p>Identifies the objects that a rule applies to.</p>
     */
    inline AwsS3BucketBucketLifecycleConfigurationRulesDetails& WithFilter(AwsS3BucketBucketLifecycleConfigurationRulesFilterDetails&& value) { SetFilter(std::move(value)); return *this;}


    /**
     * <p>The unique identifier of the rule.</p>
     */
    inline const Aws::String& GetID() const{ return m_iD; }

    /**
     * <p>The unique identifier of the rule.</p>
     */
    inline bool IDHasBeenSet() const { return m_iDHasBeenSet; }

    /**
     * <p>The unique identifier of the rule.</p>
     */
    inline void SetID(const Aws::String& value) { m_iDHasBeenSet = true; m_iD = value; }

    /**
     * <p>The unique identifier of the rule.</p>
     */
    inline void SetID(Aws::String&& value) { m_iDHasBeenSet = true; m_iD = std::move(value); }

    /**
     * <p>The unique identifier of the rule.</p>
     */
    inline void SetID(const char* value) { m_iDHasBeenSet = true; m_iD.assign(value); }

    /**
     * <p>The unique identifier of the rule.</p>
     */
    inline AwsS3BucketBucketLifecycleConfigurationRulesDetails& WithID(const Aws::String& value) { SetID(value); return *this;}

    /**
     * <p>The unique identifier of the rule.</p>
     */
    inline AwsS3BucketBucketLifecycleConfigurationRulesDetails& WithID(Aws::String&& value) { SetID(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the rule.</p>
     */
    inline AwsS3BucketBucketLifecycleConfigurationRulesDetails& WithID(const char* value) { SetID(value); return *this;}


    /**
     * <p>The number of days that an object is noncurrent before Amazon S3 can perform
     * the associated action.</p>
     */
    inline int GetNoncurrentVersionExpirationInDays() const{ return m_noncurrentVersionExpirationInDays; }

    /**
     * <p>The number of days that an object is noncurrent before Amazon S3 can perform
     * the associated action.</p>
     */
    inline bool NoncurrentVersionExpirationInDaysHasBeenSet() const { return m_noncurrentVersionExpirationInDaysHasBeenSet; }

    /**
     * <p>The number of days that an object is noncurrent before Amazon S3 can perform
     * the associated action.</p>
     */
    inline void SetNoncurrentVersionExpirationInDays(int value) { m_noncurrentVersionExpirationInDaysHasBeenSet = true; m_noncurrentVersionExpirationInDays = value; }

    /**
     * <p>The number of days that an object is noncurrent before Amazon S3 can perform
     * the associated action.</p>
     */
    inline AwsS3BucketBucketLifecycleConfigurationRulesDetails& WithNoncurrentVersionExpirationInDays(int value) { SetNoncurrentVersionExpirationInDays(value); return *this;}


    /**
     * <p>Transition rules that describe when noncurrent objects transition to a
     * specified storage class.</p>
     */
    inline const Aws::Vector<AwsS3BucketBucketLifecycleConfigurationRulesNoncurrentVersionTransitionsDetails>& GetNoncurrentVersionTransitions() const{ return m_noncurrentVersionTransitions; }

    /**
     * <p>Transition rules that describe when noncurrent objects transition to a
     * specified storage class.</p>
     */
    inline bool NoncurrentVersionTransitionsHasBeenSet() const { return m_noncurrentVersionTransitionsHasBeenSet; }

    /**
     * <p>Transition rules that describe when noncurrent objects transition to a
     * specified storage class.</p>
     */
    inline void SetNoncurrentVersionTransitions(const Aws::Vector<AwsS3BucketBucketLifecycleConfigurationRulesNoncurrentVersionTransitionsDetails>& value) { m_noncurrentVersionTransitionsHasBeenSet = true; m_noncurrentVersionTransitions = value; }

    /**
     * <p>Transition rules that describe when noncurrent objects transition to a
     * specified storage class.</p>
     */
    inline void SetNoncurrentVersionTransitions(Aws::Vector<AwsS3BucketBucketLifecycleConfigurationRulesNoncurrentVersionTransitionsDetails>&& value) { m_noncurrentVersionTransitionsHasBeenSet = true; m_noncurrentVersionTransitions = std::move(value); }

    /**
     * <p>Transition rules that describe when noncurrent objects transition to a
     * specified storage class.</p>
     */
    inline AwsS3BucketBucketLifecycleConfigurationRulesDetails& WithNoncurrentVersionTransitions(const Aws::Vector<AwsS3BucketBucketLifecycleConfigurationRulesNoncurrentVersionTransitionsDetails>& value) { SetNoncurrentVersionTransitions(value); return *this;}

    /**
     * <p>Transition rules that describe when noncurrent objects transition to a
     * specified storage class.</p>
     */
    inline AwsS3BucketBucketLifecycleConfigurationRulesDetails& WithNoncurrentVersionTransitions(Aws::Vector<AwsS3BucketBucketLifecycleConfigurationRulesNoncurrentVersionTransitionsDetails>&& value) { SetNoncurrentVersionTransitions(std::move(value)); return *this;}

    /**
     * <p>Transition rules that describe when noncurrent objects transition to a
     * specified storage class.</p>
     */
    inline AwsS3BucketBucketLifecycleConfigurationRulesDetails& AddNoncurrentVersionTransitions(const AwsS3BucketBucketLifecycleConfigurationRulesNoncurrentVersionTransitionsDetails& value) { m_noncurrentVersionTransitionsHasBeenSet = true; m_noncurrentVersionTransitions.push_back(value); return *this; }

    /**
     * <p>Transition rules that describe when noncurrent objects transition to a
     * specified storage class.</p>
     */
    inline AwsS3BucketBucketLifecycleConfigurationRulesDetails& AddNoncurrentVersionTransitions(AwsS3BucketBucketLifecycleConfigurationRulesNoncurrentVersionTransitionsDetails&& value) { m_noncurrentVersionTransitionsHasBeenSet = true; m_noncurrentVersionTransitions.push_back(std::move(value)); return *this; }


    /**
     * <p>A prefix that identifies one or more objects that the rule applies to.</p>
     */
    inline const Aws::String& GetPrefix() const{ return m_prefix; }

    /**
     * <p>A prefix that identifies one or more objects that the rule applies to.</p>
     */
    inline bool PrefixHasBeenSet() const { return m_prefixHasBeenSet; }

    /**
     * <p>A prefix that identifies one or more objects that the rule applies to.</p>
     */
    inline void SetPrefix(const Aws::String& value) { m_prefixHasBeenSet = true; m_prefix = value; }

    /**
     * <p>A prefix that identifies one or more objects that the rule applies to.</p>
     */
    inline void SetPrefix(Aws::String&& value) { m_prefixHasBeenSet = true; m_prefix = std::move(value); }

    /**
     * <p>A prefix that identifies one or more objects that the rule applies to.</p>
     */
    inline void SetPrefix(const char* value) { m_prefixHasBeenSet = true; m_prefix.assign(value); }

    /**
     * <p>A prefix that identifies one or more objects that the rule applies to.</p>
     */
    inline AwsS3BucketBucketLifecycleConfigurationRulesDetails& WithPrefix(const Aws::String& value) { SetPrefix(value); return *this;}

    /**
     * <p>A prefix that identifies one or more objects that the rule applies to.</p>
     */
    inline AwsS3BucketBucketLifecycleConfigurationRulesDetails& WithPrefix(Aws::String&& value) { SetPrefix(std::move(value)); return *this;}

    /**
     * <p>A prefix that identifies one or more objects that the rule applies to.</p>
     */
    inline AwsS3BucketBucketLifecycleConfigurationRulesDetails& WithPrefix(const char* value) { SetPrefix(value); return *this;}


    /**
     * <p>The current status of the rule. Indicates whether the rule is currently being
     * applied.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>The current status of the rule. Indicates whether the rule is currently being
     * applied.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The current status of the rule. Indicates whether the rule is currently being
     * applied.</p>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The current status of the rule. Indicates whether the rule is currently being
     * applied.</p>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The current status of the rule. Indicates whether the rule is currently being
     * applied.</p>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p>The current status of the rule. Indicates whether the rule is currently being
     * applied.</p>
     */
    inline AwsS3BucketBucketLifecycleConfigurationRulesDetails& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>The current status of the rule. Indicates whether the rule is currently being
     * applied.</p>
     */
    inline AwsS3BucketBucketLifecycleConfigurationRulesDetails& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>The current status of the rule. Indicates whether the rule is currently being
     * applied.</p>
     */
    inline AwsS3BucketBucketLifecycleConfigurationRulesDetails& WithStatus(const char* value) { SetStatus(value); return *this;}


    /**
     * <p>Transition rules that indicate when objects transition to a specified storage
     * class.</p>
     */
    inline const Aws::Vector<AwsS3BucketBucketLifecycleConfigurationRulesTransitionsDetails>& GetTransitions() const{ return m_transitions; }

    /**
     * <p>Transition rules that indicate when objects transition to a specified storage
     * class.</p>
     */
    inline bool TransitionsHasBeenSet() const { return m_transitionsHasBeenSet; }

    /**
     * <p>Transition rules that indicate when objects transition to a specified storage
     * class.</p>
     */
    inline void SetTransitions(const Aws::Vector<AwsS3BucketBucketLifecycleConfigurationRulesTransitionsDetails>& value) { m_transitionsHasBeenSet = true; m_transitions = value; }

    /**
     * <p>Transition rules that indicate when objects transition to a specified storage
     * class.</p>
     */
    inline void SetTransitions(Aws::Vector<AwsS3BucketBucketLifecycleConfigurationRulesTransitionsDetails>&& value) { m_transitionsHasBeenSet = true; m_transitions = std::move(value); }

    /**
     * <p>Transition rules that indicate when objects transition to a specified storage
     * class.</p>
     */
    inline AwsS3BucketBucketLifecycleConfigurationRulesDetails& WithTransitions(const Aws::Vector<AwsS3BucketBucketLifecycleConfigurationRulesTransitionsDetails>& value) { SetTransitions(value); return *this;}

    /**
     * <p>Transition rules that indicate when objects transition to a specified storage
     * class.</p>
     */
    inline AwsS3BucketBucketLifecycleConfigurationRulesDetails& WithTransitions(Aws::Vector<AwsS3BucketBucketLifecycleConfigurationRulesTransitionsDetails>&& value) { SetTransitions(std::move(value)); return *this;}

    /**
     * <p>Transition rules that indicate when objects transition to a specified storage
     * class.</p>
     */
    inline AwsS3BucketBucketLifecycleConfigurationRulesDetails& AddTransitions(const AwsS3BucketBucketLifecycleConfigurationRulesTransitionsDetails& value) { m_transitionsHasBeenSet = true; m_transitions.push_back(value); return *this; }

    /**
     * <p>Transition rules that indicate when objects transition to a specified storage
     * class.</p>
     */
    inline AwsS3BucketBucketLifecycleConfigurationRulesDetails& AddTransitions(AwsS3BucketBucketLifecycleConfigurationRulesTransitionsDetails&& value) { m_transitionsHasBeenSet = true; m_transitions.push_back(std::move(value)); return *this; }

  private:

    AwsS3BucketBucketLifecycleConfigurationRulesAbortIncompleteMultipartUploadDetails m_abortIncompleteMultipartUpload;
    bool m_abortIncompleteMultipartUploadHasBeenSet = false;

    Aws::String m_expirationDate;
    bool m_expirationDateHasBeenSet = false;

    int m_expirationInDays;
    bool m_expirationInDaysHasBeenSet = false;

    bool m_expiredObjectDeleteMarker;
    bool m_expiredObjectDeleteMarkerHasBeenSet = false;

    AwsS3BucketBucketLifecycleConfigurationRulesFilterDetails m_filter;
    bool m_filterHasBeenSet = false;

    Aws::String m_iD;
    bool m_iDHasBeenSet = false;

    int m_noncurrentVersionExpirationInDays;
    bool m_noncurrentVersionExpirationInDaysHasBeenSet = false;

    Aws::Vector<AwsS3BucketBucketLifecycleConfigurationRulesNoncurrentVersionTransitionsDetails> m_noncurrentVersionTransitions;
    bool m_noncurrentVersionTransitionsHasBeenSet = false;

    Aws::String m_prefix;
    bool m_prefixHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    Aws::Vector<AwsS3BucketBucketLifecycleConfigurationRulesTransitionsDetails> m_transitions;
    bool m_transitionsHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws

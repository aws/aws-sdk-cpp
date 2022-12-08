/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>A rule for when objects transition to specific storage classes.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsS3BucketBucketLifecycleConfigurationRulesTransitionsDetails">AWS
   * API Reference</a></p>
   */
  class AwsS3BucketBucketLifecycleConfigurationRulesTransitionsDetails
  {
  public:
    AWS_SECURITYHUB_API AwsS3BucketBucketLifecycleConfigurationRulesTransitionsDetails();
    AWS_SECURITYHUB_API AwsS3BucketBucketLifecycleConfigurationRulesTransitionsDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsS3BucketBucketLifecycleConfigurationRulesTransitionsDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A date on which to transition objects to the specified storage class. If you
     * provide <code>Date</code>, you cannot provide <code>Days</code>.</p> <p>Uses the
     * <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline const Aws::String& GetDate() const{ return m_date; }

    /**
     * <p>A date on which to transition objects to the specified storage class. If you
     * provide <code>Date</code>, you cannot provide <code>Days</code>.</p> <p>Uses the
     * <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline bool DateHasBeenSet() const { return m_dateHasBeenSet; }

    /**
     * <p>A date on which to transition objects to the specified storage class. If you
     * provide <code>Date</code>, you cannot provide <code>Days</code>.</p> <p>Uses the
     * <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline void SetDate(const Aws::String& value) { m_dateHasBeenSet = true; m_date = value; }

    /**
     * <p>A date on which to transition objects to the specified storage class. If you
     * provide <code>Date</code>, you cannot provide <code>Days</code>.</p> <p>Uses the
     * <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline void SetDate(Aws::String&& value) { m_dateHasBeenSet = true; m_date = std::move(value); }

    /**
     * <p>A date on which to transition objects to the specified storage class. If you
     * provide <code>Date</code>, you cannot provide <code>Days</code>.</p> <p>Uses the
     * <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline void SetDate(const char* value) { m_dateHasBeenSet = true; m_date.assign(value); }

    /**
     * <p>A date on which to transition objects to the specified storage class. If you
     * provide <code>Date</code>, you cannot provide <code>Days</code>.</p> <p>Uses the
     * <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline AwsS3BucketBucketLifecycleConfigurationRulesTransitionsDetails& WithDate(const Aws::String& value) { SetDate(value); return *this;}

    /**
     * <p>A date on which to transition objects to the specified storage class. If you
     * provide <code>Date</code>, you cannot provide <code>Days</code>.</p> <p>Uses the
     * <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline AwsS3BucketBucketLifecycleConfigurationRulesTransitionsDetails& WithDate(Aws::String&& value) { SetDate(std::move(value)); return *this;}

    /**
     * <p>A date on which to transition objects to the specified storage class. If you
     * provide <code>Date</code>, you cannot provide <code>Days</code>.</p> <p>Uses the
     * <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline AwsS3BucketBucketLifecycleConfigurationRulesTransitionsDetails& WithDate(const char* value) { SetDate(value); return *this;}


    /**
     * <p>The number of days after which to transition the object to the specified
     * storage class. If you provide <code>Days</code>, you cannot provide
     * <code>Date</code>.</p>
     */
    inline int GetDays() const{ return m_days; }

    /**
     * <p>The number of days after which to transition the object to the specified
     * storage class. If you provide <code>Days</code>, you cannot provide
     * <code>Date</code>.</p>
     */
    inline bool DaysHasBeenSet() const { return m_daysHasBeenSet; }

    /**
     * <p>The number of days after which to transition the object to the specified
     * storage class. If you provide <code>Days</code>, you cannot provide
     * <code>Date</code>.</p>
     */
    inline void SetDays(int value) { m_daysHasBeenSet = true; m_days = value; }

    /**
     * <p>The number of days after which to transition the object to the specified
     * storage class. If you provide <code>Days</code>, you cannot provide
     * <code>Date</code>.</p>
     */
    inline AwsS3BucketBucketLifecycleConfigurationRulesTransitionsDetails& WithDays(int value) { SetDays(value); return *this;}


    /**
     * <p>The storage class to transition the object to. Valid values are as
     * follows:</p> <ul> <li> <p> <code>DEEP_ARCHIVE</code> </p> </li> <li> <p>
     * <code>GLACIER</code> </p> </li> <li> <p> <code>INTELLIGENT_TIERING</code> </p>
     * </li> <li> <p> <code>ONEZONE_IA</code> </p> </li> <li> <p>
     * <code>STANDARD_IA</code> </p> </li> </ul>
     */
    inline const Aws::String& GetStorageClass() const{ return m_storageClass; }

    /**
     * <p>The storage class to transition the object to. Valid values are as
     * follows:</p> <ul> <li> <p> <code>DEEP_ARCHIVE</code> </p> </li> <li> <p>
     * <code>GLACIER</code> </p> </li> <li> <p> <code>INTELLIGENT_TIERING</code> </p>
     * </li> <li> <p> <code>ONEZONE_IA</code> </p> </li> <li> <p>
     * <code>STANDARD_IA</code> </p> </li> </ul>
     */
    inline bool StorageClassHasBeenSet() const { return m_storageClassHasBeenSet; }

    /**
     * <p>The storage class to transition the object to. Valid values are as
     * follows:</p> <ul> <li> <p> <code>DEEP_ARCHIVE</code> </p> </li> <li> <p>
     * <code>GLACIER</code> </p> </li> <li> <p> <code>INTELLIGENT_TIERING</code> </p>
     * </li> <li> <p> <code>ONEZONE_IA</code> </p> </li> <li> <p>
     * <code>STANDARD_IA</code> </p> </li> </ul>
     */
    inline void SetStorageClass(const Aws::String& value) { m_storageClassHasBeenSet = true; m_storageClass = value; }

    /**
     * <p>The storage class to transition the object to. Valid values are as
     * follows:</p> <ul> <li> <p> <code>DEEP_ARCHIVE</code> </p> </li> <li> <p>
     * <code>GLACIER</code> </p> </li> <li> <p> <code>INTELLIGENT_TIERING</code> </p>
     * </li> <li> <p> <code>ONEZONE_IA</code> </p> </li> <li> <p>
     * <code>STANDARD_IA</code> </p> </li> </ul>
     */
    inline void SetStorageClass(Aws::String&& value) { m_storageClassHasBeenSet = true; m_storageClass = std::move(value); }

    /**
     * <p>The storage class to transition the object to. Valid values are as
     * follows:</p> <ul> <li> <p> <code>DEEP_ARCHIVE</code> </p> </li> <li> <p>
     * <code>GLACIER</code> </p> </li> <li> <p> <code>INTELLIGENT_TIERING</code> </p>
     * </li> <li> <p> <code>ONEZONE_IA</code> </p> </li> <li> <p>
     * <code>STANDARD_IA</code> </p> </li> </ul>
     */
    inline void SetStorageClass(const char* value) { m_storageClassHasBeenSet = true; m_storageClass.assign(value); }

    /**
     * <p>The storage class to transition the object to. Valid values are as
     * follows:</p> <ul> <li> <p> <code>DEEP_ARCHIVE</code> </p> </li> <li> <p>
     * <code>GLACIER</code> </p> </li> <li> <p> <code>INTELLIGENT_TIERING</code> </p>
     * </li> <li> <p> <code>ONEZONE_IA</code> </p> </li> <li> <p>
     * <code>STANDARD_IA</code> </p> </li> </ul>
     */
    inline AwsS3BucketBucketLifecycleConfigurationRulesTransitionsDetails& WithStorageClass(const Aws::String& value) { SetStorageClass(value); return *this;}

    /**
     * <p>The storage class to transition the object to. Valid values are as
     * follows:</p> <ul> <li> <p> <code>DEEP_ARCHIVE</code> </p> </li> <li> <p>
     * <code>GLACIER</code> </p> </li> <li> <p> <code>INTELLIGENT_TIERING</code> </p>
     * </li> <li> <p> <code>ONEZONE_IA</code> </p> </li> <li> <p>
     * <code>STANDARD_IA</code> </p> </li> </ul>
     */
    inline AwsS3BucketBucketLifecycleConfigurationRulesTransitionsDetails& WithStorageClass(Aws::String&& value) { SetStorageClass(std::move(value)); return *this;}

    /**
     * <p>The storage class to transition the object to. Valid values are as
     * follows:</p> <ul> <li> <p> <code>DEEP_ARCHIVE</code> </p> </li> <li> <p>
     * <code>GLACIER</code> </p> </li> <li> <p> <code>INTELLIGENT_TIERING</code> </p>
     * </li> <li> <p> <code>ONEZONE_IA</code> </p> </li> <li> <p>
     * <code>STANDARD_IA</code> </p> </li> </ul>
     */
    inline AwsS3BucketBucketLifecycleConfigurationRulesTransitionsDetails& WithStorageClass(const char* value) { SetStorageClass(value); return *this;}

  private:

    Aws::String m_date;
    bool m_dateHasBeenSet = false;

    int m_days;
    bool m_daysHasBeenSet = false;

    Aws::String m_storageClass;
    bool m_storageClassHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws

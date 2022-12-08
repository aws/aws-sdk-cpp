/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/AwsS3BucketBucketLifecycleConfigurationRulesFilterPredicateOperandsTagDetails.h>
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
   * <p>A value to use for the filter.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsS3BucketBucketLifecycleConfigurationRulesFilterPredicateOperandsDetails">AWS
   * API Reference</a></p>
   */
  class AwsS3BucketBucketLifecycleConfigurationRulesFilterPredicateOperandsDetails
  {
  public:
    AWS_SECURITYHUB_API AwsS3BucketBucketLifecycleConfigurationRulesFilterPredicateOperandsDetails();
    AWS_SECURITYHUB_API AwsS3BucketBucketLifecycleConfigurationRulesFilterPredicateOperandsDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsS3BucketBucketLifecycleConfigurationRulesFilterPredicateOperandsDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Prefix text for matching objects.</p>
     */
    inline const Aws::String& GetPrefix() const{ return m_prefix; }

    /**
     * <p>Prefix text for matching objects.</p>
     */
    inline bool PrefixHasBeenSet() const { return m_prefixHasBeenSet; }

    /**
     * <p>Prefix text for matching objects.</p>
     */
    inline void SetPrefix(const Aws::String& value) { m_prefixHasBeenSet = true; m_prefix = value; }

    /**
     * <p>Prefix text for matching objects.</p>
     */
    inline void SetPrefix(Aws::String&& value) { m_prefixHasBeenSet = true; m_prefix = std::move(value); }

    /**
     * <p>Prefix text for matching objects.</p>
     */
    inline void SetPrefix(const char* value) { m_prefixHasBeenSet = true; m_prefix.assign(value); }

    /**
     * <p>Prefix text for matching objects.</p>
     */
    inline AwsS3BucketBucketLifecycleConfigurationRulesFilterPredicateOperandsDetails& WithPrefix(const Aws::String& value) { SetPrefix(value); return *this;}

    /**
     * <p>Prefix text for matching objects.</p>
     */
    inline AwsS3BucketBucketLifecycleConfigurationRulesFilterPredicateOperandsDetails& WithPrefix(Aws::String&& value) { SetPrefix(std::move(value)); return *this;}

    /**
     * <p>Prefix text for matching objects.</p>
     */
    inline AwsS3BucketBucketLifecycleConfigurationRulesFilterPredicateOperandsDetails& WithPrefix(const char* value) { SetPrefix(value); return *this;}


    /**
     * <p>A tag that is assigned to matching objects.</p>
     */
    inline const AwsS3BucketBucketLifecycleConfigurationRulesFilterPredicateOperandsTagDetails& GetTag() const{ return m_tag; }

    /**
     * <p>A tag that is assigned to matching objects.</p>
     */
    inline bool TagHasBeenSet() const { return m_tagHasBeenSet; }

    /**
     * <p>A tag that is assigned to matching objects.</p>
     */
    inline void SetTag(const AwsS3BucketBucketLifecycleConfigurationRulesFilterPredicateOperandsTagDetails& value) { m_tagHasBeenSet = true; m_tag = value; }

    /**
     * <p>A tag that is assigned to matching objects.</p>
     */
    inline void SetTag(AwsS3BucketBucketLifecycleConfigurationRulesFilterPredicateOperandsTagDetails&& value) { m_tagHasBeenSet = true; m_tag = std::move(value); }

    /**
     * <p>A tag that is assigned to matching objects.</p>
     */
    inline AwsS3BucketBucketLifecycleConfigurationRulesFilterPredicateOperandsDetails& WithTag(const AwsS3BucketBucketLifecycleConfigurationRulesFilterPredicateOperandsTagDetails& value) { SetTag(value); return *this;}

    /**
     * <p>A tag that is assigned to matching objects.</p>
     */
    inline AwsS3BucketBucketLifecycleConfigurationRulesFilterPredicateOperandsDetails& WithTag(AwsS3BucketBucketLifecycleConfigurationRulesFilterPredicateOperandsTagDetails&& value) { SetTag(std::move(value)); return *this;}


    /**
     * <p>The type of filter value. Valid values are
     * <code>LifecyclePrefixPredicate</code> or <code>LifecycleTagPredicate</code>.</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }

    /**
     * <p>The type of filter value. Valid values are
     * <code>LifecyclePrefixPredicate</code> or <code>LifecycleTagPredicate</code>.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of filter value. Valid values are
     * <code>LifecyclePrefixPredicate</code> or <code>LifecycleTagPredicate</code>.</p>
     */
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of filter value. Valid values are
     * <code>LifecyclePrefixPredicate</code> or <code>LifecycleTagPredicate</code>.</p>
     */
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of filter value. Valid values are
     * <code>LifecyclePrefixPredicate</code> or <code>LifecycleTagPredicate</code>.</p>
     */
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }

    /**
     * <p>The type of filter value. Valid values are
     * <code>LifecyclePrefixPredicate</code> or <code>LifecycleTagPredicate</code>.</p>
     */
    inline AwsS3BucketBucketLifecycleConfigurationRulesFilterPredicateOperandsDetails& WithType(const Aws::String& value) { SetType(value); return *this;}

    /**
     * <p>The type of filter value. Valid values are
     * <code>LifecyclePrefixPredicate</code> or <code>LifecycleTagPredicate</code>.</p>
     */
    inline AwsS3BucketBucketLifecycleConfigurationRulesFilterPredicateOperandsDetails& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}

    /**
     * <p>The type of filter value. Valid values are
     * <code>LifecyclePrefixPredicate</code> or <code>LifecycleTagPredicate</code>.</p>
     */
    inline AwsS3BucketBucketLifecycleConfigurationRulesFilterPredicateOperandsDetails& WithType(const char* value) { SetType(value); return *this;}

  private:

    Aws::String m_prefix;
    bool m_prefixHasBeenSet = false;

    AwsS3BucketBucketLifecycleConfigurationRulesFilterPredicateOperandsTagDetails m_tag;
    bool m_tagHasBeenSet = false;

    Aws::String m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws

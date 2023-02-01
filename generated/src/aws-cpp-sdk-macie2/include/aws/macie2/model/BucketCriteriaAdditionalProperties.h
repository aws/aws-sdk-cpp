/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace Macie2
{
namespace Model
{

  /**
   * <p>Specifies the operator to use in a property-based condition that filters the
   * results of a query for information about S3 buckets.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/BucketCriteriaAdditionalProperties">AWS
   * API Reference</a></p>
   */
  class BucketCriteriaAdditionalProperties
  {
  public:
    AWS_MACIE2_API BucketCriteriaAdditionalProperties();
    AWS_MACIE2_API BucketCriteriaAdditionalProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API BucketCriteriaAdditionalProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The value for the property matches (equals) the specified value. If you
     * specify multiple values, Amazon Macie uses OR logic to join the values.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEq() const{ return m_eq; }

    /**
     * <p>The value for the property matches (equals) the specified value. If you
     * specify multiple values, Amazon Macie uses OR logic to join the values.</p>
     */
    inline bool EqHasBeenSet() const { return m_eqHasBeenSet; }

    /**
     * <p>The value for the property matches (equals) the specified value. If you
     * specify multiple values, Amazon Macie uses OR logic to join the values.</p>
     */
    inline void SetEq(const Aws::Vector<Aws::String>& value) { m_eqHasBeenSet = true; m_eq = value; }

    /**
     * <p>The value for the property matches (equals) the specified value. If you
     * specify multiple values, Amazon Macie uses OR logic to join the values.</p>
     */
    inline void SetEq(Aws::Vector<Aws::String>&& value) { m_eqHasBeenSet = true; m_eq = std::move(value); }

    /**
     * <p>The value for the property matches (equals) the specified value. If you
     * specify multiple values, Amazon Macie uses OR logic to join the values.</p>
     */
    inline BucketCriteriaAdditionalProperties& WithEq(const Aws::Vector<Aws::String>& value) { SetEq(value); return *this;}

    /**
     * <p>The value for the property matches (equals) the specified value. If you
     * specify multiple values, Amazon Macie uses OR logic to join the values.</p>
     */
    inline BucketCriteriaAdditionalProperties& WithEq(Aws::Vector<Aws::String>&& value) { SetEq(std::move(value)); return *this;}

    /**
     * <p>The value for the property matches (equals) the specified value. If you
     * specify multiple values, Amazon Macie uses OR logic to join the values.</p>
     */
    inline BucketCriteriaAdditionalProperties& AddEq(const Aws::String& value) { m_eqHasBeenSet = true; m_eq.push_back(value); return *this; }

    /**
     * <p>The value for the property matches (equals) the specified value. If you
     * specify multiple values, Amazon Macie uses OR logic to join the values.</p>
     */
    inline BucketCriteriaAdditionalProperties& AddEq(Aws::String&& value) { m_eqHasBeenSet = true; m_eq.push_back(std::move(value)); return *this; }

    /**
     * <p>The value for the property matches (equals) the specified value. If you
     * specify multiple values, Amazon Macie uses OR logic to join the values.</p>
     */
    inline BucketCriteriaAdditionalProperties& AddEq(const char* value) { m_eqHasBeenSet = true; m_eq.push_back(value); return *this; }


    /**
     * <p>The value for the property is greater than the specified value.</p>
     */
    inline long long GetGt() const{ return m_gt; }

    /**
     * <p>The value for the property is greater than the specified value.</p>
     */
    inline bool GtHasBeenSet() const { return m_gtHasBeenSet; }

    /**
     * <p>The value for the property is greater than the specified value.</p>
     */
    inline void SetGt(long long value) { m_gtHasBeenSet = true; m_gt = value; }

    /**
     * <p>The value for the property is greater than the specified value.</p>
     */
    inline BucketCriteriaAdditionalProperties& WithGt(long long value) { SetGt(value); return *this;}


    /**
     * <p>The value for the property is greater than or equal to the specified
     * value.</p>
     */
    inline long long GetGte() const{ return m_gte; }

    /**
     * <p>The value for the property is greater than or equal to the specified
     * value.</p>
     */
    inline bool GteHasBeenSet() const { return m_gteHasBeenSet; }

    /**
     * <p>The value for the property is greater than or equal to the specified
     * value.</p>
     */
    inline void SetGte(long long value) { m_gteHasBeenSet = true; m_gte = value; }

    /**
     * <p>The value for the property is greater than or equal to the specified
     * value.</p>
     */
    inline BucketCriteriaAdditionalProperties& WithGte(long long value) { SetGte(value); return *this;}


    /**
     * <p>The value for the property is less than the specified value.</p>
     */
    inline long long GetLt() const{ return m_lt; }

    /**
     * <p>The value for the property is less than the specified value.</p>
     */
    inline bool LtHasBeenSet() const { return m_ltHasBeenSet; }

    /**
     * <p>The value for the property is less than the specified value.</p>
     */
    inline void SetLt(long long value) { m_ltHasBeenSet = true; m_lt = value; }

    /**
     * <p>The value for the property is less than the specified value.</p>
     */
    inline BucketCriteriaAdditionalProperties& WithLt(long long value) { SetLt(value); return *this;}


    /**
     * <p>The value for the property is less than or equal to the specified value.</p>
     */
    inline long long GetLte() const{ return m_lte; }

    /**
     * <p>The value for the property is less than or equal to the specified value.</p>
     */
    inline bool LteHasBeenSet() const { return m_lteHasBeenSet; }

    /**
     * <p>The value for the property is less than or equal to the specified value.</p>
     */
    inline void SetLte(long long value) { m_lteHasBeenSet = true; m_lte = value; }

    /**
     * <p>The value for the property is less than or equal to the specified value.</p>
     */
    inline BucketCriteriaAdditionalProperties& WithLte(long long value) { SetLte(value); return *this;}


    /**
     * <p>The value for the property doesn't match (doesn't equal) the specified value.
     * If you specify multiple values, Amazon Macie uses OR logic to join the
     * values.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNeq() const{ return m_neq; }

    /**
     * <p>The value for the property doesn't match (doesn't equal) the specified value.
     * If you specify multiple values, Amazon Macie uses OR logic to join the
     * values.</p>
     */
    inline bool NeqHasBeenSet() const { return m_neqHasBeenSet; }

    /**
     * <p>The value for the property doesn't match (doesn't equal) the specified value.
     * If you specify multiple values, Amazon Macie uses OR logic to join the
     * values.</p>
     */
    inline void SetNeq(const Aws::Vector<Aws::String>& value) { m_neqHasBeenSet = true; m_neq = value; }

    /**
     * <p>The value for the property doesn't match (doesn't equal) the specified value.
     * If you specify multiple values, Amazon Macie uses OR logic to join the
     * values.</p>
     */
    inline void SetNeq(Aws::Vector<Aws::String>&& value) { m_neqHasBeenSet = true; m_neq = std::move(value); }

    /**
     * <p>The value for the property doesn't match (doesn't equal) the specified value.
     * If you specify multiple values, Amazon Macie uses OR logic to join the
     * values.</p>
     */
    inline BucketCriteriaAdditionalProperties& WithNeq(const Aws::Vector<Aws::String>& value) { SetNeq(value); return *this;}

    /**
     * <p>The value for the property doesn't match (doesn't equal) the specified value.
     * If you specify multiple values, Amazon Macie uses OR logic to join the
     * values.</p>
     */
    inline BucketCriteriaAdditionalProperties& WithNeq(Aws::Vector<Aws::String>&& value) { SetNeq(std::move(value)); return *this;}

    /**
     * <p>The value for the property doesn't match (doesn't equal) the specified value.
     * If you specify multiple values, Amazon Macie uses OR logic to join the
     * values.</p>
     */
    inline BucketCriteriaAdditionalProperties& AddNeq(const Aws::String& value) { m_neqHasBeenSet = true; m_neq.push_back(value); return *this; }

    /**
     * <p>The value for the property doesn't match (doesn't equal) the specified value.
     * If you specify multiple values, Amazon Macie uses OR logic to join the
     * values.</p>
     */
    inline BucketCriteriaAdditionalProperties& AddNeq(Aws::String&& value) { m_neqHasBeenSet = true; m_neq.push_back(std::move(value)); return *this; }

    /**
     * <p>The value for the property doesn't match (doesn't equal) the specified value.
     * If you specify multiple values, Amazon Macie uses OR logic to join the
     * values.</p>
     */
    inline BucketCriteriaAdditionalProperties& AddNeq(const char* value) { m_neqHasBeenSet = true; m_neq.push_back(value); return *this; }


    /**
     * <p>The name of the bucket begins with the specified value.</p>
     */
    inline const Aws::String& GetPrefix() const{ return m_prefix; }

    /**
     * <p>The name of the bucket begins with the specified value.</p>
     */
    inline bool PrefixHasBeenSet() const { return m_prefixHasBeenSet; }

    /**
     * <p>The name of the bucket begins with the specified value.</p>
     */
    inline void SetPrefix(const Aws::String& value) { m_prefixHasBeenSet = true; m_prefix = value; }

    /**
     * <p>The name of the bucket begins with the specified value.</p>
     */
    inline void SetPrefix(Aws::String&& value) { m_prefixHasBeenSet = true; m_prefix = std::move(value); }

    /**
     * <p>The name of the bucket begins with the specified value.</p>
     */
    inline void SetPrefix(const char* value) { m_prefixHasBeenSet = true; m_prefix.assign(value); }

    /**
     * <p>The name of the bucket begins with the specified value.</p>
     */
    inline BucketCriteriaAdditionalProperties& WithPrefix(const Aws::String& value) { SetPrefix(value); return *this;}

    /**
     * <p>The name of the bucket begins with the specified value.</p>
     */
    inline BucketCriteriaAdditionalProperties& WithPrefix(Aws::String&& value) { SetPrefix(std::move(value)); return *this;}

    /**
     * <p>The name of the bucket begins with the specified value.</p>
     */
    inline BucketCriteriaAdditionalProperties& WithPrefix(const char* value) { SetPrefix(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_eq;
    bool m_eqHasBeenSet = false;

    long long m_gt;
    bool m_gtHasBeenSet = false;

    long long m_gte;
    bool m_gteHasBeenSet = false;

    long long m_lt;
    bool m_ltHasBeenSet = false;

    long long m_lte;
    bool m_lteHasBeenSet = false;

    Aws::Vector<Aws::String> m_neq;
    bool m_neqHasBeenSet = false;

    Aws::String m_prefix;
    bool m_prefixHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws

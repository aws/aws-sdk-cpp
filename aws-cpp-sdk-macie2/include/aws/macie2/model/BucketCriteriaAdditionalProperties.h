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
   * <p>Specifies the operator to use in an attribute-based condition that filters
   * the results of a query for information about S3 buckets.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/BucketCriteriaAdditionalProperties">AWS
   * API Reference</a></p>
   */
  class AWS_MACIE2_API BucketCriteriaAdditionalProperties
  {
  public:
    BucketCriteriaAdditionalProperties();
    BucketCriteriaAdditionalProperties(Aws::Utils::Json::JsonView jsonValue);
    BucketCriteriaAdditionalProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An equal to condition to apply to a specified attribute value for
     * buckets.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEq() const{ return m_eq; }

    /**
     * <p>An equal to condition to apply to a specified attribute value for
     * buckets.</p>
     */
    inline bool EqHasBeenSet() const { return m_eqHasBeenSet; }

    /**
     * <p>An equal to condition to apply to a specified attribute value for
     * buckets.</p>
     */
    inline void SetEq(const Aws::Vector<Aws::String>& value) { m_eqHasBeenSet = true; m_eq = value; }

    /**
     * <p>An equal to condition to apply to a specified attribute value for
     * buckets.</p>
     */
    inline void SetEq(Aws::Vector<Aws::String>&& value) { m_eqHasBeenSet = true; m_eq = std::move(value); }

    /**
     * <p>An equal to condition to apply to a specified attribute value for
     * buckets.</p>
     */
    inline BucketCriteriaAdditionalProperties& WithEq(const Aws::Vector<Aws::String>& value) { SetEq(value); return *this;}

    /**
     * <p>An equal to condition to apply to a specified attribute value for
     * buckets.</p>
     */
    inline BucketCriteriaAdditionalProperties& WithEq(Aws::Vector<Aws::String>&& value) { SetEq(std::move(value)); return *this;}

    /**
     * <p>An equal to condition to apply to a specified attribute value for
     * buckets.</p>
     */
    inline BucketCriteriaAdditionalProperties& AddEq(const Aws::String& value) { m_eqHasBeenSet = true; m_eq.push_back(value); return *this; }

    /**
     * <p>An equal to condition to apply to a specified attribute value for
     * buckets.</p>
     */
    inline BucketCriteriaAdditionalProperties& AddEq(Aws::String&& value) { m_eqHasBeenSet = true; m_eq.push_back(std::move(value)); return *this; }

    /**
     * <p>An equal to condition to apply to a specified attribute value for
     * buckets.</p>
     */
    inline BucketCriteriaAdditionalProperties& AddEq(const char* value) { m_eqHasBeenSet = true; m_eq.push_back(value); return *this; }


    /**
     * <p>A greater than condition to apply to a specified attribute value for
     * buckets.</p>
     */
    inline long long GetGt() const{ return m_gt; }

    /**
     * <p>A greater than condition to apply to a specified attribute value for
     * buckets.</p>
     */
    inline bool GtHasBeenSet() const { return m_gtHasBeenSet; }

    /**
     * <p>A greater than condition to apply to a specified attribute value for
     * buckets.</p>
     */
    inline void SetGt(long long value) { m_gtHasBeenSet = true; m_gt = value; }

    /**
     * <p>A greater than condition to apply to a specified attribute value for
     * buckets.</p>
     */
    inline BucketCriteriaAdditionalProperties& WithGt(long long value) { SetGt(value); return *this;}


    /**
     * <p>A greater than or equal to condition to apply to a specified attribute value
     * for buckets.</p>
     */
    inline long long GetGte() const{ return m_gte; }

    /**
     * <p>A greater than or equal to condition to apply to a specified attribute value
     * for buckets.</p>
     */
    inline bool GteHasBeenSet() const { return m_gteHasBeenSet; }

    /**
     * <p>A greater than or equal to condition to apply to a specified attribute value
     * for buckets.</p>
     */
    inline void SetGte(long long value) { m_gteHasBeenSet = true; m_gte = value; }

    /**
     * <p>A greater than or equal to condition to apply to a specified attribute value
     * for buckets.</p>
     */
    inline BucketCriteriaAdditionalProperties& WithGte(long long value) { SetGte(value); return *this;}


    /**
     * <p>A less than condition to apply to a specified attribute value for
     * buckets.</p>
     */
    inline long long GetLt() const{ return m_lt; }

    /**
     * <p>A less than condition to apply to a specified attribute value for
     * buckets.</p>
     */
    inline bool LtHasBeenSet() const { return m_ltHasBeenSet; }

    /**
     * <p>A less than condition to apply to a specified attribute value for
     * buckets.</p>
     */
    inline void SetLt(long long value) { m_ltHasBeenSet = true; m_lt = value; }

    /**
     * <p>A less than condition to apply to a specified attribute value for
     * buckets.</p>
     */
    inline BucketCriteriaAdditionalProperties& WithLt(long long value) { SetLt(value); return *this;}


    /**
     * <p>A less than or equal to condition to apply to a specified attribute value for
     * buckets.</p>
     */
    inline long long GetLte() const{ return m_lte; }

    /**
     * <p>A less than or equal to condition to apply to a specified attribute value for
     * buckets.</p>
     */
    inline bool LteHasBeenSet() const { return m_lteHasBeenSet; }

    /**
     * <p>A less than or equal to condition to apply to a specified attribute value for
     * buckets.</p>
     */
    inline void SetLte(long long value) { m_lteHasBeenSet = true; m_lte = value; }

    /**
     * <p>A less than or equal to condition to apply to a specified attribute value for
     * buckets.</p>
     */
    inline BucketCriteriaAdditionalProperties& WithLte(long long value) { SetLte(value); return *this;}


    /**
     * <p>A not equal to condition to apply to a specified attribute value for
     * buckets.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNeq() const{ return m_neq; }

    /**
     * <p>A not equal to condition to apply to a specified attribute value for
     * buckets.</p>
     */
    inline bool NeqHasBeenSet() const { return m_neqHasBeenSet; }

    /**
     * <p>A not equal to condition to apply to a specified attribute value for
     * buckets.</p>
     */
    inline void SetNeq(const Aws::Vector<Aws::String>& value) { m_neqHasBeenSet = true; m_neq = value; }

    /**
     * <p>A not equal to condition to apply to a specified attribute value for
     * buckets.</p>
     */
    inline void SetNeq(Aws::Vector<Aws::String>&& value) { m_neqHasBeenSet = true; m_neq = std::move(value); }

    /**
     * <p>A not equal to condition to apply to a specified attribute value for
     * buckets.</p>
     */
    inline BucketCriteriaAdditionalProperties& WithNeq(const Aws::Vector<Aws::String>& value) { SetNeq(value); return *this;}

    /**
     * <p>A not equal to condition to apply to a specified attribute value for
     * buckets.</p>
     */
    inline BucketCriteriaAdditionalProperties& WithNeq(Aws::Vector<Aws::String>&& value) { SetNeq(std::move(value)); return *this;}

    /**
     * <p>A not equal to condition to apply to a specified attribute value for
     * buckets.</p>
     */
    inline BucketCriteriaAdditionalProperties& AddNeq(const Aws::String& value) { m_neqHasBeenSet = true; m_neq.push_back(value); return *this; }

    /**
     * <p>A not equal to condition to apply to a specified attribute value for
     * buckets.</p>
     */
    inline BucketCriteriaAdditionalProperties& AddNeq(Aws::String&& value) { m_neqHasBeenSet = true; m_neq.push_back(std::move(value)); return *this; }

    /**
     * <p>A not equal to condition to apply to a specified attribute value for
     * buckets.</p>
     */
    inline BucketCriteriaAdditionalProperties& AddNeq(const char* value) { m_neqHasBeenSet = true; m_neq.push_back(value); return *this; }


    /**
     * <p>The prefix of the buckets to include in the results.</p>
     */
    inline const Aws::String& GetPrefix() const{ return m_prefix; }

    /**
     * <p>The prefix of the buckets to include in the results.</p>
     */
    inline bool PrefixHasBeenSet() const { return m_prefixHasBeenSet; }

    /**
     * <p>The prefix of the buckets to include in the results.</p>
     */
    inline void SetPrefix(const Aws::String& value) { m_prefixHasBeenSet = true; m_prefix = value; }

    /**
     * <p>The prefix of the buckets to include in the results.</p>
     */
    inline void SetPrefix(Aws::String&& value) { m_prefixHasBeenSet = true; m_prefix = std::move(value); }

    /**
     * <p>The prefix of the buckets to include in the results.</p>
     */
    inline void SetPrefix(const char* value) { m_prefixHasBeenSet = true; m_prefix.assign(value); }

    /**
     * <p>The prefix of the buckets to include in the results.</p>
     */
    inline BucketCriteriaAdditionalProperties& WithPrefix(const Aws::String& value) { SetPrefix(value); return *this;}

    /**
     * <p>The prefix of the buckets to include in the results.</p>
     */
    inline BucketCriteriaAdditionalProperties& WithPrefix(Aws::String&& value) { SetPrefix(std::move(value)); return *this;}

    /**
     * <p>The prefix of the buckets to include in the results.</p>
     */
    inline BucketCriteriaAdditionalProperties& WithPrefix(const char* value) { SetPrefix(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_eq;
    bool m_eqHasBeenSet;

    long long m_gt;
    bool m_gtHasBeenSet;

    long long m_gte;
    bool m_gteHasBeenSet;

    long long m_lt;
    bool m_ltHasBeenSet;

    long long m_lte;
    bool m_lteHasBeenSet;

    Aws::Vector<Aws::String> m_neq;
    bool m_neqHasBeenSet;

    Aws::String m_prefix;
    bool m_prefixHasBeenSet;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws

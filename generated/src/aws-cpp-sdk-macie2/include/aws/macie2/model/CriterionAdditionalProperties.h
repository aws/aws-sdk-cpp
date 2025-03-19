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
   * results of a query for findings. For detailed information and examples of each
   * operator, see <a
   * href="https://docs.aws.amazon.com/macie/latest/user/findings-filter-basics.html">Fundamentals
   * of filtering findings</a> in the <i>Amazon Macie User Guide</i>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/CriterionAdditionalProperties">AWS
   * API Reference</a></p>
   */
  class CriterionAdditionalProperties
  {
  public:
    AWS_MACIE2_API CriterionAdditionalProperties() = default;
    AWS_MACIE2_API CriterionAdditionalProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API CriterionAdditionalProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The value for the property matches (equals) the specified value. If you
     * specify multiple values, Macie uses OR logic to join the values.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEq() const { return m_eq; }
    inline bool EqHasBeenSet() const { return m_eqHasBeenSet; }
    template<typename EqT = Aws::Vector<Aws::String>>
    void SetEq(EqT&& value) { m_eqHasBeenSet = true; m_eq = std::forward<EqT>(value); }
    template<typename EqT = Aws::Vector<Aws::String>>
    CriterionAdditionalProperties& WithEq(EqT&& value) { SetEq(std::forward<EqT>(value)); return *this;}
    template<typename EqT = Aws::String>
    CriterionAdditionalProperties& AddEq(EqT&& value) { m_eqHasBeenSet = true; m_eq.emplace_back(std::forward<EqT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The value for the property exclusively matches (equals an exact match for)
     * all the specified values. If you specify multiple values, Amazon Macie uses AND
     * logic to join the values.</p> <p>You can use this operator with the following
     * properties: customDataIdentifiers.detections.arn,
     * customDataIdentifiers.detections.name, resourcesAffected.s3Bucket.tags.key,
     * resourcesAffected.s3Bucket.tags.value, resourcesAffected.s3Object.tags.key,
     * resourcesAffected.s3Object.tags.value, sensitiveData.category, and
     * sensitiveData.detections.type.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEqExactMatch() const { return m_eqExactMatch; }
    inline bool EqExactMatchHasBeenSet() const { return m_eqExactMatchHasBeenSet; }
    template<typename EqExactMatchT = Aws::Vector<Aws::String>>
    void SetEqExactMatch(EqExactMatchT&& value) { m_eqExactMatchHasBeenSet = true; m_eqExactMatch = std::forward<EqExactMatchT>(value); }
    template<typename EqExactMatchT = Aws::Vector<Aws::String>>
    CriterionAdditionalProperties& WithEqExactMatch(EqExactMatchT&& value) { SetEqExactMatch(std::forward<EqExactMatchT>(value)); return *this;}
    template<typename EqExactMatchT = Aws::String>
    CriterionAdditionalProperties& AddEqExactMatch(EqExactMatchT&& value) { m_eqExactMatchHasBeenSet = true; m_eqExactMatch.emplace_back(std::forward<EqExactMatchT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The value for the property is greater than the specified value.</p>
     */
    inline long long GetGt() const { return m_gt; }
    inline bool GtHasBeenSet() const { return m_gtHasBeenSet; }
    inline void SetGt(long long value) { m_gtHasBeenSet = true; m_gt = value; }
    inline CriterionAdditionalProperties& WithGt(long long value) { SetGt(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value for the property is greater than or equal to the specified
     * value.</p>
     */
    inline long long GetGte() const { return m_gte; }
    inline bool GteHasBeenSet() const { return m_gteHasBeenSet; }
    inline void SetGte(long long value) { m_gteHasBeenSet = true; m_gte = value; }
    inline CriterionAdditionalProperties& WithGte(long long value) { SetGte(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value for the property is less than the specified value.</p>
     */
    inline long long GetLt() const { return m_lt; }
    inline bool LtHasBeenSet() const { return m_ltHasBeenSet; }
    inline void SetLt(long long value) { m_ltHasBeenSet = true; m_lt = value; }
    inline CriterionAdditionalProperties& WithLt(long long value) { SetLt(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value for the property is less than or equal to the specified value.</p>
     */
    inline long long GetLte() const { return m_lte; }
    inline bool LteHasBeenSet() const { return m_lteHasBeenSet; }
    inline void SetLte(long long value) { m_lteHasBeenSet = true; m_lte = value; }
    inline CriterionAdditionalProperties& WithLte(long long value) { SetLte(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value for the property doesn't match (doesn't equal) the specified value.
     * If you specify multiple values, Macie uses OR logic to join the values.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNeq() const { return m_neq; }
    inline bool NeqHasBeenSet() const { return m_neqHasBeenSet; }
    template<typename NeqT = Aws::Vector<Aws::String>>
    void SetNeq(NeqT&& value) { m_neqHasBeenSet = true; m_neq = std::forward<NeqT>(value); }
    template<typename NeqT = Aws::Vector<Aws::String>>
    CriterionAdditionalProperties& WithNeq(NeqT&& value) { SetNeq(std::forward<NeqT>(value)); return *this;}
    template<typename NeqT = Aws::String>
    CriterionAdditionalProperties& AddNeq(NeqT&& value) { m_neqHasBeenSet = true; m_neq.emplace_back(std::forward<NeqT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_eq;
    bool m_eqHasBeenSet = false;

    Aws::Vector<Aws::String> m_eqExactMatch;
    bool m_eqExactMatchHasBeenSet = false;

    long long m_gt{0};
    bool m_gtHasBeenSet = false;

    long long m_gte{0};
    bool m_gteHasBeenSet = false;

    long long m_lt{0};
    bool m_ltHasBeenSet = false;

    long long m_lte{0};
    bool m_lteHasBeenSet = false;

    Aws::Vector<Aws::String> m_neq;
    bool m_neqHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/accessanalyzer/AccessAnalyzer_EXPORTS.h>
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
namespace AccessAnalyzer
{
namespace Model
{

  /**
   * <p>The criteria to use in the filter that defines the archive rule. For more
   * information on available filter keys, see <a
   * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access-analyzer-reference-filter-keys.html">IAM
   * Access Analyzer filter keys</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/Criterion">AWS
   * API Reference</a></p>
   */
  class Criterion
  {
  public:
    AWS_ACCESSANALYZER_API Criterion() = default;
    AWS_ACCESSANALYZER_API Criterion(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API Criterion& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An "equals" operator to match for the filter used to create the rule.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEq() const { return m_eq; }
    inline bool EqHasBeenSet() const { return m_eqHasBeenSet; }
    template<typename EqT = Aws::Vector<Aws::String>>
    void SetEq(EqT&& value) { m_eqHasBeenSet = true; m_eq = std::forward<EqT>(value); }
    template<typename EqT = Aws::Vector<Aws::String>>
    Criterion& WithEq(EqT&& value) { SetEq(std::forward<EqT>(value)); return *this;}
    template<typename EqT = Aws::String>
    Criterion& AddEq(EqT&& value) { m_eqHasBeenSet = true; m_eq.emplace_back(std::forward<EqT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A "not equals" operator to match for the filter used to create the rule.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNeq() const { return m_neq; }
    inline bool NeqHasBeenSet() const { return m_neqHasBeenSet; }
    template<typename NeqT = Aws::Vector<Aws::String>>
    void SetNeq(NeqT&& value) { m_neqHasBeenSet = true; m_neq = std::forward<NeqT>(value); }
    template<typename NeqT = Aws::Vector<Aws::String>>
    Criterion& WithNeq(NeqT&& value) { SetNeq(std::forward<NeqT>(value)); return *this;}
    template<typename NeqT = Aws::String>
    Criterion& AddNeq(NeqT&& value) { m_neqHasBeenSet = true; m_neq.emplace_back(std::forward<NeqT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A "contains" operator to match for the filter used to create the rule.</p>
     */
    inline const Aws::Vector<Aws::String>& GetContains() const { return m_contains; }
    inline bool ContainsHasBeenSet() const { return m_containsHasBeenSet; }
    template<typename ContainsT = Aws::Vector<Aws::String>>
    void SetContains(ContainsT&& value) { m_containsHasBeenSet = true; m_contains = std::forward<ContainsT>(value); }
    template<typename ContainsT = Aws::Vector<Aws::String>>
    Criterion& WithContains(ContainsT&& value) { SetContains(std::forward<ContainsT>(value)); return *this;}
    template<typename ContainsT = Aws::String>
    Criterion& AddContains(ContainsT&& value) { m_containsHasBeenSet = true; m_contains.emplace_back(std::forward<ContainsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An "exists" operator to match for the filter used to create the rule. </p>
     */
    inline bool GetExists() const { return m_exists; }
    inline bool ExistsHasBeenSet() const { return m_existsHasBeenSet; }
    inline void SetExists(bool value) { m_existsHasBeenSet = true; m_exists = value; }
    inline Criterion& WithExists(bool value) { SetExists(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_eq;
    bool m_eqHasBeenSet = false;

    Aws::Vector<Aws::String> m_neq;
    bool m_neqHasBeenSet = false;

    Aws::Vector<Aws::String> m_contains;
    bool m_containsHasBeenSet = false;

    bool m_exists{false};
    bool m_existsHasBeenSet = false;
  };

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws

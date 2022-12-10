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
    AWS_ACCESSANALYZER_API Criterion();
    AWS_ACCESSANALYZER_API Criterion(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API Criterion& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An "equals" operator to match for the filter used to create the rule.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEq() const{ return m_eq; }

    /**
     * <p>An "equals" operator to match for the filter used to create the rule.</p>
     */
    inline bool EqHasBeenSet() const { return m_eqHasBeenSet; }

    /**
     * <p>An "equals" operator to match for the filter used to create the rule.</p>
     */
    inline void SetEq(const Aws::Vector<Aws::String>& value) { m_eqHasBeenSet = true; m_eq = value; }

    /**
     * <p>An "equals" operator to match for the filter used to create the rule.</p>
     */
    inline void SetEq(Aws::Vector<Aws::String>&& value) { m_eqHasBeenSet = true; m_eq = std::move(value); }

    /**
     * <p>An "equals" operator to match for the filter used to create the rule.</p>
     */
    inline Criterion& WithEq(const Aws::Vector<Aws::String>& value) { SetEq(value); return *this;}

    /**
     * <p>An "equals" operator to match for the filter used to create the rule.</p>
     */
    inline Criterion& WithEq(Aws::Vector<Aws::String>&& value) { SetEq(std::move(value)); return *this;}

    /**
     * <p>An "equals" operator to match for the filter used to create the rule.</p>
     */
    inline Criterion& AddEq(const Aws::String& value) { m_eqHasBeenSet = true; m_eq.push_back(value); return *this; }

    /**
     * <p>An "equals" operator to match for the filter used to create the rule.</p>
     */
    inline Criterion& AddEq(Aws::String&& value) { m_eqHasBeenSet = true; m_eq.push_back(std::move(value)); return *this; }

    /**
     * <p>An "equals" operator to match for the filter used to create the rule.</p>
     */
    inline Criterion& AddEq(const char* value) { m_eqHasBeenSet = true; m_eq.push_back(value); return *this; }


    /**
     * <p>A "not equals" operator to match for the filter used to create the rule.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNeq() const{ return m_neq; }

    /**
     * <p>A "not equals" operator to match for the filter used to create the rule.</p>
     */
    inline bool NeqHasBeenSet() const { return m_neqHasBeenSet; }

    /**
     * <p>A "not equals" operator to match for the filter used to create the rule.</p>
     */
    inline void SetNeq(const Aws::Vector<Aws::String>& value) { m_neqHasBeenSet = true; m_neq = value; }

    /**
     * <p>A "not equals" operator to match for the filter used to create the rule.</p>
     */
    inline void SetNeq(Aws::Vector<Aws::String>&& value) { m_neqHasBeenSet = true; m_neq = std::move(value); }

    /**
     * <p>A "not equals" operator to match for the filter used to create the rule.</p>
     */
    inline Criterion& WithNeq(const Aws::Vector<Aws::String>& value) { SetNeq(value); return *this;}

    /**
     * <p>A "not equals" operator to match for the filter used to create the rule.</p>
     */
    inline Criterion& WithNeq(Aws::Vector<Aws::String>&& value) { SetNeq(std::move(value)); return *this;}

    /**
     * <p>A "not equals" operator to match for the filter used to create the rule.</p>
     */
    inline Criterion& AddNeq(const Aws::String& value) { m_neqHasBeenSet = true; m_neq.push_back(value); return *this; }

    /**
     * <p>A "not equals" operator to match for the filter used to create the rule.</p>
     */
    inline Criterion& AddNeq(Aws::String&& value) { m_neqHasBeenSet = true; m_neq.push_back(std::move(value)); return *this; }

    /**
     * <p>A "not equals" operator to match for the filter used to create the rule.</p>
     */
    inline Criterion& AddNeq(const char* value) { m_neqHasBeenSet = true; m_neq.push_back(value); return *this; }


    /**
     * <p>A "contains" operator to match for the filter used to create the rule.</p>
     */
    inline const Aws::Vector<Aws::String>& GetContains() const{ return m_contains; }

    /**
     * <p>A "contains" operator to match for the filter used to create the rule.</p>
     */
    inline bool ContainsHasBeenSet() const { return m_containsHasBeenSet; }

    /**
     * <p>A "contains" operator to match for the filter used to create the rule.</p>
     */
    inline void SetContains(const Aws::Vector<Aws::String>& value) { m_containsHasBeenSet = true; m_contains = value; }

    /**
     * <p>A "contains" operator to match for the filter used to create the rule.</p>
     */
    inline void SetContains(Aws::Vector<Aws::String>&& value) { m_containsHasBeenSet = true; m_contains = std::move(value); }

    /**
     * <p>A "contains" operator to match for the filter used to create the rule.</p>
     */
    inline Criterion& WithContains(const Aws::Vector<Aws::String>& value) { SetContains(value); return *this;}

    /**
     * <p>A "contains" operator to match for the filter used to create the rule.</p>
     */
    inline Criterion& WithContains(Aws::Vector<Aws::String>&& value) { SetContains(std::move(value)); return *this;}

    /**
     * <p>A "contains" operator to match for the filter used to create the rule.</p>
     */
    inline Criterion& AddContains(const Aws::String& value) { m_containsHasBeenSet = true; m_contains.push_back(value); return *this; }

    /**
     * <p>A "contains" operator to match for the filter used to create the rule.</p>
     */
    inline Criterion& AddContains(Aws::String&& value) { m_containsHasBeenSet = true; m_contains.push_back(std::move(value)); return *this; }

    /**
     * <p>A "contains" operator to match for the filter used to create the rule.</p>
     */
    inline Criterion& AddContains(const char* value) { m_containsHasBeenSet = true; m_contains.push_back(value); return *this; }


    /**
     * <p>An "exists" operator to match for the filter used to create the rule. </p>
     */
    inline bool GetExists() const{ return m_exists; }

    /**
     * <p>An "exists" operator to match for the filter used to create the rule. </p>
     */
    inline bool ExistsHasBeenSet() const { return m_existsHasBeenSet; }

    /**
     * <p>An "exists" operator to match for the filter used to create the rule. </p>
     */
    inline void SetExists(bool value) { m_existsHasBeenSet = true; m_exists = value; }

    /**
     * <p>An "exists" operator to match for the filter used to create the rule. </p>
     */
    inline Criterion& WithExists(bool value) { SetExists(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_eq;
    bool m_eqHasBeenSet = false;

    Aws::Vector<Aws::String> m_neq;
    bool m_neqHasBeenSet = false;

    Aws::Vector<Aws::String> m_contains;
    bool m_containsHasBeenSet = false;

    bool m_exists;
    bool m_existsHasBeenSet = false;
  };

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws

/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
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
namespace GuardDuty
{
namespace Model
{

  /**
   * Finding attribute (for example, accountId) for which conditions and values must
   * be specified when querying findings.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/Condition">AWS
   * API Reference</a></p>
   */
  class AWS_GUARDDUTY_API Condition
  {
  public:
    Condition();
    Condition(Aws::Utils::Json::JsonView jsonValue);
    Condition& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Represents the equal condition to be applied to a single field when querying for
     * findings.
     */
    inline const Aws::Vector<Aws::String>& GetEq() const{ return m_eq; }

    /**
     * Represents the equal condition to be applied to a single field when querying for
     * findings.
     */
    inline bool EqHasBeenSet() const { return m_eqHasBeenSet; }

    /**
     * Represents the equal condition to be applied to a single field when querying for
     * findings.
     */
    inline void SetEq(const Aws::Vector<Aws::String>& value) { m_eqHasBeenSet = true; m_eq = value; }

    /**
     * Represents the equal condition to be applied to a single field when querying for
     * findings.
     */
    inline void SetEq(Aws::Vector<Aws::String>&& value) { m_eqHasBeenSet = true; m_eq = std::move(value); }

    /**
     * Represents the equal condition to be applied to a single field when querying for
     * findings.
     */
    inline Condition& WithEq(const Aws::Vector<Aws::String>& value) { SetEq(value); return *this;}

    /**
     * Represents the equal condition to be applied to a single field when querying for
     * findings.
     */
    inline Condition& WithEq(Aws::Vector<Aws::String>&& value) { SetEq(std::move(value)); return *this;}

    /**
     * Represents the equal condition to be applied to a single field when querying for
     * findings.
     */
    inline Condition& AddEq(const Aws::String& value) { m_eqHasBeenSet = true; m_eq.push_back(value); return *this; }

    /**
     * Represents the equal condition to be applied to a single field when querying for
     * findings.
     */
    inline Condition& AddEq(Aws::String&& value) { m_eqHasBeenSet = true; m_eq.push_back(std::move(value)); return *this; }

    /**
     * Represents the equal condition to be applied to a single field when querying for
     * findings.
     */
    inline Condition& AddEq(const char* value) { m_eqHasBeenSet = true; m_eq.push_back(value); return *this; }


    /**
     * Represents the greater than condition to be applied to a single field when
     * querying for findings.
     */
    inline int GetGt() const{ return m_gt; }

    /**
     * Represents the greater than condition to be applied to a single field when
     * querying for findings.
     */
    inline bool GtHasBeenSet() const { return m_gtHasBeenSet; }

    /**
     * Represents the greater than condition to be applied to a single field when
     * querying for findings.
     */
    inline void SetGt(int value) { m_gtHasBeenSet = true; m_gt = value; }

    /**
     * Represents the greater than condition to be applied to a single field when
     * querying for findings.
     */
    inline Condition& WithGt(int value) { SetGt(value); return *this;}


    /**
     * Represents the greater than equal condition to be applied to a single field when
     * querying for findings.
     */
    inline int GetGte() const{ return m_gte; }

    /**
     * Represents the greater than equal condition to be applied to a single field when
     * querying for findings.
     */
    inline bool GteHasBeenSet() const { return m_gteHasBeenSet; }

    /**
     * Represents the greater than equal condition to be applied to a single field when
     * querying for findings.
     */
    inline void SetGte(int value) { m_gteHasBeenSet = true; m_gte = value; }

    /**
     * Represents the greater than equal condition to be applied to a single field when
     * querying for findings.
     */
    inline Condition& WithGte(int value) { SetGte(value); return *this;}


    /**
     * Represents the less than condition to be applied to a single field when querying
     * for findings.
     */
    inline int GetLt() const{ return m_lt; }

    /**
     * Represents the less than condition to be applied to a single field when querying
     * for findings.
     */
    inline bool LtHasBeenSet() const { return m_ltHasBeenSet; }

    /**
     * Represents the less than condition to be applied to a single field when querying
     * for findings.
     */
    inline void SetLt(int value) { m_ltHasBeenSet = true; m_lt = value; }

    /**
     * Represents the less than condition to be applied to a single field when querying
     * for findings.
     */
    inline Condition& WithLt(int value) { SetLt(value); return *this;}


    /**
     * Represents the less than equal condition to be applied to a single field when
     * querying for findings.
     */
    inline int GetLte() const{ return m_lte; }

    /**
     * Represents the less than equal condition to be applied to a single field when
     * querying for findings.
     */
    inline bool LteHasBeenSet() const { return m_lteHasBeenSet; }

    /**
     * Represents the less than equal condition to be applied to a single field when
     * querying for findings.
     */
    inline void SetLte(int value) { m_lteHasBeenSet = true; m_lte = value; }

    /**
     * Represents the less than equal condition to be applied to a single field when
     * querying for findings.
     */
    inline Condition& WithLte(int value) { SetLte(value); return *this;}


    /**
     * Represents the not equal condition to be applied to a single field when querying
     * for findings.
     */
    inline const Aws::Vector<Aws::String>& GetNeq() const{ return m_neq; }

    /**
     * Represents the not equal condition to be applied to a single field when querying
     * for findings.
     */
    inline bool NeqHasBeenSet() const { return m_neqHasBeenSet; }

    /**
     * Represents the not equal condition to be applied to a single field when querying
     * for findings.
     */
    inline void SetNeq(const Aws::Vector<Aws::String>& value) { m_neqHasBeenSet = true; m_neq = value; }

    /**
     * Represents the not equal condition to be applied to a single field when querying
     * for findings.
     */
    inline void SetNeq(Aws::Vector<Aws::String>&& value) { m_neqHasBeenSet = true; m_neq = std::move(value); }

    /**
     * Represents the not equal condition to be applied to a single field when querying
     * for findings.
     */
    inline Condition& WithNeq(const Aws::Vector<Aws::String>& value) { SetNeq(value); return *this;}

    /**
     * Represents the not equal condition to be applied to a single field when querying
     * for findings.
     */
    inline Condition& WithNeq(Aws::Vector<Aws::String>&& value) { SetNeq(std::move(value)); return *this;}

    /**
     * Represents the not equal condition to be applied to a single field when querying
     * for findings.
     */
    inline Condition& AddNeq(const Aws::String& value) { m_neqHasBeenSet = true; m_neq.push_back(value); return *this; }

    /**
     * Represents the not equal condition to be applied to a single field when querying
     * for findings.
     */
    inline Condition& AddNeq(Aws::String&& value) { m_neqHasBeenSet = true; m_neq.push_back(std::move(value)); return *this; }

    /**
     * Represents the not equal condition to be applied to a single field when querying
     * for findings.
     */
    inline Condition& AddNeq(const char* value) { m_neqHasBeenSet = true; m_neq.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_eq;
    bool m_eqHasBeenSet;

    int m_gt;
    bool m_gtHasBeenSet;

    int m_gte;
    bool m_gteHasBeenSet;

    int m_lt;
    bool m_ltHasBeenSet;

    int m_lte;
    bool m_lteHasBeenSet;

    Aws::Vector<Aws::String> m_neq;
    bool m_neqHasBeenSet;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws

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
#include <aws/securityhub/SecurityHub_EXPORTS.h>

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
   * <p>A number filter for querying findings.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/NumberFilter">AWS
   * API Reference</a></p>
   */
  class AWS_SECURITYHUB_API NumberFilter
  {
  public:
    NumberFilter();
    NumberFilter(Aws::Utils::Json::JsonView jsonValue);
    NumberFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The greater-than-equal condition to be applied to a single field when
     * querying for findings. </p>
     */
    inline double GetGte() const{ return m_gte; }

    /**
     * <p>The greater-than-equal condition to be applied to a single field when
     * querying for findings. </p>
     */
    inline bool GteHasBeenSet() const { return m_gteHasBeenSet; }

    /**
     * <p>The greater-than-equal condition to be applied to a single field when
     * querying for findings. </p>
     */
    inline void SetGte(double value) { m_gteHasBeenSet = true; m_gte = value; }

    /**
     * <p>The greater-than-equal condition to be applied to a single field when
     * querying for findings. </p>
     */
    inline NumberFilter& WithGte(double value) { SetGte(value); return *this;}


    /**
     * <p>The less-than-equal condition to be applied to a single field when querying
     * for findings. </p>
     */
    inline double GetLte() const{ return m_lte; }

    /**
     * <p>The less-than-equal condition to be applied to a single field when querying
     * for findings. </p>
     */
    inline bool LteHasBeenSet() const { return m_lteHasBeenSet; }

    /**
     * <p>The less-than-equal condition to be applied to a single field when querying
     * for findings. </p>
     */
    inline void SetLte(double value) { m_lteHasBeenSet = true; m_lte = value; }

    /**
     * <p>The less-than-equal condition to be applied to a single field when querying
     * for findings. </p>
     */
    inline NumberFilter& WithLte(double value) { SetLte(value); return *this;}


    /**
     * <p>The equal-to condition to be applied to a single field when querying for
     * findings.</p>
     */
    inline double GetEq() const{ return m_eq; }

    /**
     * <p>The equal-to condition to be applied to a single field when querying for
     * findings.</p>
     */
    inline bool EqHasBeenSet() const { return m_eqHasBeenSet; }

    /**
     * <p>The equal-to condition to be applied to a single field when querying for
     * findings.</p>
     */
    inline void SetEq(double value) { m_eqHasBeenSet = true; m_eq = value; }

    /**
     * <p>The equal-to condition to be applied to a single field when querying for
     * findings.</p>
     */
    inline NumberFilter& WithEq(double value) { SetEq(value); return *this;}

  private:

    double m_gte;
    bool m_gteHasBeenSet;

    double m_lte;
    bool m_lteHasBeenSet;

    double m_eq;
    bool m_eqHasBeenSet;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws

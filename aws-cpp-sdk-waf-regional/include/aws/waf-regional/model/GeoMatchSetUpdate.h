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
#include <aws/waf-regional/WAFRegional_EXPORTS.h>
#include <aws/waf-regional/model/ChangeAction.h>
#include <aws/waf-regional/model/GeoMatchConstraint.h>
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
namespace WAFRegional
{
namespace Model
{

  /**
   * <p>Specifies the type of update to perform to an <a>GeoMatchSet</a> with
   * <a>UpdateGeoMatchSet</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/GeoMatchSetUpdate">AWS
   * API Reference</a></p>
   */
  class AWS_WAFREGIONAL_API GeoMatchSetUpdate
  {
  public:
    GeoMatchSetUpdate();
    GeoMatchSetUpdate(Aws::Utils::Json::JsonView jsonValue);
    GeoMatchSetUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies whether to insert or delete a country with
     * <a>UpdateGeoMatchSet</a>.</p>
     */
    inline const ChangeAction& GetAction() const{ return m_action; }

    /**
     * <p>Specifies whether to insert or delete a country with
     * <a>UpdateGeoMatchSet</a>.</p>
     */
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }

    /**
     * <p>Specifies whether to insert or delete a country with
     * <a>UpdateGeoMatchSet</a>.</p>
     */
    inline void SetAction(const ChangeAction& value) { m_actionHasBeenSet = true; m_action = value; }

    /**
     * <p>Specifies whether to insert or delete a country with
     * <a>UpdateGeoMatchSet</a>.</p>
     */
    inline void SetAction(ChangeAction&& value) { m_actionHasBeenSet = true; m_action = std::move(value); }

    /**
     * <p>Specifies whether to insert or delete a country with
     * <a>UpdateGeoMatchSet</a>.</p>
     */
    inline GeoMatchSetUpdate& WithAction(const ChangeAction& value) { SetAction(value); return *this;}

    /**
     * <p>Specifies whether to insert or delete a country with
     * <a>UpdateGeoMatchSet</a>.</p>
     */
    inline GeoMatchSetUpdate& WithAction(ChangeAction&& value) { SetAction(std::move(value)); return *this;}


    /**
     * <p>The country from which web requests originate that you want AWS WAF to search
     * for.</p>
     */
    inline const GeoMatchConstraint& GetGeoMatchConstraint() const{ return m_geoMatchConstraint; }

    /**
     * <p>The country from which web requests originate that you want AWS WAF to search
     * for.</p>
     */
    inline bool GeoMatchConstraintHasBeenSet() const { return m_geoMatchConstraintHasBeenSet; }

    /**
     * <p>The country from which web requests originate that you want AWS WAF to search
     * for.</p>
     */
    inline void SetGeoMatchConstraint(const GeoMatchConstraint& value) { m_geoMatchConstraintHasBeenSet = true; m_geoMatchConstraint = value; }

    /**
     * <p>The country from which web requests originate that you want AWS WAF to search
     * for.</p>
     */
    inline void SetGeoMatchConstraint(GeoMatchConstraint&& value) { m_geoMatchConstraintHasBeenSet = true; m_geoMatchConstraint = std::move(value); }

    /**
     * <p>The country from which web requests originate that you want AWS WAF to search
     * for.</p>
     */
    inline GeoMatchSetUpdate& WithGeoMatchConstraint(const GeoMatchConstraint& value) { SetGeoMatchConstraint(value); return *this;}

    /**
     * <p>The country from which web requests originate that you want AWS WAF to search
     * for.</p>
     */
    inline GeoMatchSetUpdate& WithGeoMatchConstraint(GeoMatchConstraint&& value) { SetGeoMatchConstraint(std::move(value)); return *this;}

  private:

    ChangeAction m_action;
    bool m_actionHasBeenSet;

    GeoMatchConstraint m_geoMatchConstraint;
    bool m_geoMatchConstraintHasBeenSet;
  };

} // namespace Model
} // namespace WAFRegional
} // namespace Aws

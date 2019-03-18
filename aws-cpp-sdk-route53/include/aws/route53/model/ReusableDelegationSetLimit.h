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
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/route53/model/ReusableDelegationSetLimitType.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace Route53
{
namespace Model
{

  /**
   * <p>A complex type that contains the type of limit that you specified in the
   * request and the current value for that limit.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/ReusableDelegationSetLimit">AWS
   * API Reference</a></p>
   */
  class AWS_ROUTE53_API ReusableDelegationSetLimit
  {
  public:
    ReusableDelegationSetLimit();
    ReusableDelegationSetLimit(const Aws::Utils::Xml::XmlNode& xmlNode);
    ReusableDelegationSetLimit& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>The limit that you requested:
     * <code>MAX_ZONES_BY_REUSABLE_DELEGATION_SET</code>, the maximum number of hosted
     * zones that you can associate with the specified reusable delegation set.</p>
     */
    inline const ReusableDelegationSetLimitType& GetType() const{ return m_type; }

    /**
     * <p>The limit that you requested:
     * <code>MAX_ZONES_BY_REUSABLE_DELEGATION_SET</code>, the maximum number of hosted
     * zones that you can associate with the specified reusable delegation set.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The limit that you requested:
     * <code>MAX_ZONES_BY_REUSABLE_DELEGATION_SET</code>, the maximum number of hosted
     * zones that you can associate with the specified reusable delegation set.</p>
     */
    inline void SetType(const ReusableDelegationSetLimitType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The limit that you requested:
     * <code>MAX_ZONES_BY_REUSABLE_DELEGATION_SET</code>, the maximum number of hosted
     * zones that you can associate with the specified reusable delegation set.</p>
     */
    inline void SetType(ReusableDelegationSetLimitType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The limit that you requested:
     * <code>MAX_ZONES_BY_REUSABLE_DELEGATION_SET</code>, the maximum number of hosted
     * zones that you can associate with the specified reusable delegation set.</p>
     */
    inline ReusableDelegationSetLimit& WithType(const ReusableDelegationSetLimitType& value) { SetType(value); return *this;}

    /**
     * <p>The limit that you requested:
     * <code>MAX_ZONES_BY_REUSABLE_DELEGATION_SET</code>, the maximum number of hosted
     * zones that you can associate with the specified reusable delegation set.</p>
     */
    inline ReusableDelegationSetLimit& WithType(ReusableDelegationSetLimitType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The current value for the <code>MAX_ZONES_BY_REUSABLE_DELEGATION_SET</code>
     * limit.</p>
     */
    inline long long GetValue() const{ return m_value; }

    /**
     * <p>The current value for the <code>MAX_ZONES_BY_REUSABLE_DELEGATION_SET</code>
     * limit.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The current value for the <code>MAX_ZONES_BY_REUSABLE_DELEGATION_SET</code>
     * limit.</p>
     */
    inline void SetValue(long long value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The current value for the <code>MAX_ZONES_BY_REUSABLE_DELEGATION_SET</code>
     * limit.</p>
     */
    inline ReusableDelegationSetLimit& WithValue(long long value) { SetValue(value); return *this;}

  private:

    ReusableDelegationSetLimitType m_type;
    bool m_typeHasBeenSet;

    long long m_value;
    bool m_valueHasBeenSet;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws

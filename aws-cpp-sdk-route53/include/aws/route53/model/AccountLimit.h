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
#include <aws/route53/model/AccountLimitType.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/AccountLimit">AWS
   * API Reference</a></p>
   */
  class AWS_ROUTE53_API AccountLimit
  {
  public:
    AccountLimit();
    AccountLimit(const Aws::Utils::Xml::XmlNode& xmlNode);
    AccountLimit& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>The limit that you requested. Valid values include the following:</p> <ul>
     * <li> <p> <b>MAX_HEALTH_CHECKS_BY_OWNER</b>: The maximum number of health checks
     * that you can create using the current account.</p> </li> <li> <p>
     * <b>MAX_HOSTED_ZONES_BY_OWNER</b>: The maximum number of hosted zones that you
     * can create using the current account.</p> </li> <li> <p>
     * <b>MAX_REUSABLE_DELEGATION_SETS_BY_OWNER</b>: The maximum number of reusable
     * delegation sets that you can create using the current account.</p> </li> <li>
     * <p> <b>MAX_TRAFFIC_POLICIES_BY_OWNER</b>: The maximum number of traffic policies
     * that you can create using the current account.</p> </li> <li> <p>
     * <b>MAX_TRAFFIC_POLICY_INSTANCES_BY_OWNER</b>: The maximum number of traffic
     * policy instances that you can create using the current account. (Traffic policy
     * instances are referred to as traffic flow policy records in the Amazon Route 53
     * console.)</p> </li> </ul>
     */
    inline const AccountLimitType& GetType() const{ return m_type; }

    /**
     * <p>The limit that you requested. Valid values include the following:</p> <ul>
     * <li> <p> <b>MAX_HEALTH_CHECKS_BY_OWNER</b>: The maximum number of health checks
     * that you can create using the current account.</p> </li> <li> <p>
     * <b>MAX_HOSTED_ZONES_BY_OWNER</b>: The maximum number of hosted zones that you
     * can create using the current account.</p> </li> <li> <p>
     * <b>MAX_REUSABLE_DELEGATION_SETS_BY_OWNER</b>: The maximum number of reusable
     * delegation sets that you can create using the current account.</p> </li> <li>
     * <p> <b>MAX_TRAFFIC_POLICIES_BY_OWNER</b>: The maximum number of traffic policies
     * that you can create using the current account.</p> </li> <li> <p>
     * <b>MAX_TRAFFIC_POLICY_INSTANCES_BY_OWNER</b>: The maximum number of traffic
     * policy instances that you can create using the current account. (Traffic policy
     * instances are referred to as traffic flow policy records in the Amazon Route 53
     * console.)</p> </li> </ul>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The limit that you requested. Valid values include the following:</p> <ul>
     * <li> <p> <b>MAX_HEALTH_CHECKS_BY_OWNER</b>: The maximum number of health checks
     * that you can create using the current account.</p> </li> <li> <p>
     * <b>MAX_HOSTED_ZONES_BY_OWNER</b>: The maximum number of hosted zones that you
     * can create using the current account.</p> </li> <li> <p>
     * <b>MAX_REUSABLE_DELEGATION_SETS_BY_OWNER</b>: The maximum number of reusable
     * delegation sets that you can create using the current account.</p> </li> <li>
     * <p> <b>MAX_TRAFFIC_POLICIES_BY_OWNER</b>: The maximum number of traffic policies
     * that you can create using the current account.</p> </li> <li> <p>
     * <b>MAX_TRAFFIC_POLICY_INSTANCES_BY_OWNER</b>: The maximum number of traffic
     * policy instances that you can create using the current account. (Traffic policy
     * instances are referred to as traffic flow policy records in the Amazon Route 53
     * console.)</p> </li> </ul>
     */
    inline void SetType(const AccountLimitType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The limit that you requested. Valid values include the following:</p> <ul>
     * <li> <p> <b>MAX_HEALTH_CHECKS_BY_OWNER</b>: The maximum number of health checks
     * that you can create using the current account.</p> </li> <li> <p>
     * <b>MAX_HOSTED_ZONES_BY_OWNER</b>: The maximum number of hosted zones that you
     * can create using the current account.</p> </li> <li> <p>
     * <b>MAX_REUSABLE_DELEGATION_SETS_BY_OWNER</b>: The maximum number of reusable
     * delegation sets that you can create using the current account.</p> </li> <li>
     * <p> <b>MAX_TRAFFIC_POLICIES_BY_OWNER</b>: The maximum number of traffic policies
     * that you can create using the current account.</p> </li> <li> <p>
     * <b>MAX_TRAFFIC_POLICY_INSTANCES_BY_OWNER</b>: The maximum number of traffic
     * policy instances that you can create using the current account. (Traffic policy
     * instances are referred to as traffic flow policy records in the Amazon Route 53
     * console.)</p> </li> </ul>
     */
    inline void SetType(AccountLimitType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The limit that you requested. Valid values include the following:</p> <ul>
     * <li> <p> <b>MAX_HEALTH_CHECKS_BY_OWNER</b>: The maximum number of health checks
     * that you can create using the current account.</p> </li> <li> <p>
     * <b>MAX_HOSTED_ZONES_BY_OWNER</b>: The maximum number of hosted zones that you
     * can create using the current account.</p> </li> <li> <p>
     * <b>MAX_REUSABLE_DELEGATION_SETS_BY_OWNER</b>: The maximum number of reusable
     * delegation sets that you can create using the current account.</p> </li> <li>
     * <p> <b>MAX_TRAFFIC_POLICIES_BY_OWNER</b>: The maximum number of traffic policies
     * that you can create using the current account.</p> </li> <li> <p>
     * <b>MAX_TRAFFIC_POLICY_INSTANCES_BY_OWNER</b>: The maximum number of traffic
     * policy instances that you can create using the current account. (Traffic policy
     * instances are referred to as traffic flow policy records in the Amazon Route 53
     * console.)</p> </li> </ul>
     */
    inline AccountLimit& WithType(const AccountLimitType& value) { SetType(value); return *this;}

    /**
     * <p>The limit that you requested. Valid values include the following:</p> <ul>
     * <li> <p> <b>MAX_HEALTH_CHECKS_BY_OWNER</b>: The maximum number of health checks
     * that you can create using the current account.</p> </li> <li> <p>
     * <b>MAX_HOSTED_ZONES_BY_OWNER</b>: The maximum number of hosted zones that you
     * can create using the current account.</p> </li> <li> <p>
     * <b>MAX_REUSABLE_DELEGATION_SETS_BY_OWNER</b>: The maximum number of reusable
     * delegation sets that you can create using the current account.</p> </li> <li>
     * <p> <b>MAX_TRAFFIC_POLICIES_BY_OWNER</b>: The maximum number of traffic policies
     * that you can create using the current account.</p> </li> <li> <p>
     * <b>MAX_TRAFFIC_POLICY_INSTANCES_BY_OWNER</b>: The maximum number of traffic
     * policy instances that you can create using the current account. (Traffic policy
     * instances are referred to as traffic flow policy records in the Amazon Route 53
     * console.)</p> </li> </ul>
     */
    inline AccountLimit& WithType(AccountLimitType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The current value for the limit that is specified by <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_AccountLimit.html#Route53-Type-AccountLimit-Type">Type</a>.</p>
     */
    inline long long GetValue() const{ return m_value; }

    /**
     * <p>The current value for the limit that is specified by <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_AccountLimit.html#Route53-Type-AccountLimit-Type">Type</a>.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The current value for the limit that is specified by <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_AccountLimit.html#Route53-Type-AccountLimit-Type">Type</a>.</p>
     */
    inline void SetValue(long long value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The current value for the limit that is specified by <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_AccountLimit.html#Route53-Type-AccountLimit-Type">Type</a>.</p>
     */
    inline AccountLimit& WithValue(long long value) { SetValue(value); return *this;}

  private:

    AccountLimitType m_type;
    bool m_typeHasBeenSet;

    long long m_value;
    bool m_valueHasBeenSet;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws

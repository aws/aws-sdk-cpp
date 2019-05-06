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
#include <aws/route53/Route53Request.h>
#include <aws/route53/model/AccountLimitType.h>
#include <utility>

namespace Aws
{
namespace Route53
{
namespace Model
{

  /**
   * <p>A complex type that contains information about the request to create a hosted
   * zone.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/GetAccountLimitRequest">AWS
   * API Reference</a></p>
   */
  class AWS_ROUTE53_API GetAccountLimitRequest : public Route53Request
  {
  public:
    GetAccountLimitRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetAccountLimit"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The limit that you want to get. Valid values include the following:</p> <ul>
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
     * <p>The limit that you want to get. Valid values include the following:</p> <ul>
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
     * <p>The limit that you want to get. Valid values include the following:</p> <ul>
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
     * <p>The limit that you want to get. Valid values include the following:</p> <ul>
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
     * <p>The limit that you want to get. Valid values include the following:</p> <ul>
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
    inline GetAccountLimitRequest& WithType(const AccountLimitType& value) { SetType(value); return *this;}

    /**
     * <p>The limit that you want to get. Valid values include the following:</p> <ul>
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
    inline GetAccountLimitRequest& WithType(AccountLimitType&& value) { SetType(std::move(value)); return *this;}

  private:

    AccountLimitType m_type;
    bool m_typeHasBeenSet;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws

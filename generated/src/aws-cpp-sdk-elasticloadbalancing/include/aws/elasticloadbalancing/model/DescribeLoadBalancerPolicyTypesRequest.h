/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticloadbalancing/ElasticLoadBalancing_EXPORTS.h>
#include <aws/elasticloadbalancing/ElasticLoadBalancingRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ElasticLoadBalancing
{
namespace Model
{

  /**
   * <p>Contains the parameters for DescribeLoadBalancerPolicyTypes.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancing-2012-06-01/DescribeLoadBalancerPolicyTypesInput">AWS
   * API Reference</a></p>
   */
  class DescribeLoadBalancerPolicyTypesRequest : public ElasticLoadBalancingRequest
  {
  public:
    AWS_ELASTICLOADBALANCING_API DescribeLoadBalancerPolicyTypesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeLoadBalancerPolicyTypes"; }

    AWS_ELASTICLOADBALANCING_API Aws::String SerializePayload() const override;

  protected:
    AWS_ELASTICLOADBALANCING_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The names of the policy types. If no names are specified, describes all
     * policy types defined by Elastic Load Balancing.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPolicyTypeNames() const{ return m_policyTypeNames; }

    /**
     * <p>The names of the policy types. If no names are specified, describes all
     * policy types defined by Elastic Load Balancing.</p>
     */
    inline bool PolicyTypeNamesHasBeenSet() const { return m_policyTypeNamesHasBeenSet; }

    /**
     * <p>The names of the policy types. If no names are specified, describes all
     * policy types defined by Elastic Load Balancing.</p>
     */
    inline void SetPolicyTypeNames(const Aws::Vector<Aws::String>& value) { m_policyTypeNamesHasBeenSet = true; m_policyTypeNames = value; }

    /**
     * <p>The names of the policy types. If no names are specified, describes all
     * policy types defined by Elastic Load Balancing.</p>
     */
    inline void SetPolicyTypeNames(Aws::Vector<Aws::String>&& value) { m_policyTypeNamesHasBeenSet = true; m_policyTypeNames = std::move(value); }

    /**
     * <p>The names of the policy types. If no names are specified, describes all
     * policy types defined by Elastic Load Balancing.</p>
     */
    inline DescribeLoadBalancerPolicyTypesRequest& WithPolicyTypeNames(const Aws::Vector<Aws::String>& value) { SetPolicyTypeNames(value); return *this;}

    /**
     * <p>The names of the policy types. If no names are specified, describes all
     * policy types defined by Elastic Load Balancing.</p>
     */
    inline DescribeLoadBalancerPolicyTypesRequest& WithPolicyTypeNames(Aws::Vector<Aws::String>&& value) { SetPolicyTypeNames(std::move(value)); return *this;}

    /**
     * <p>The names of the policy types. If no names are specified, describes all
     * policy types defined by Elastic Load Balancing.</p>
     */
    inline DescribeLoadBalancerPolicyTypesRequest& AddPolicyTypeNames(const Aws::String& value) { m_policyTypeNamesHasBeenSet = true; m_policyTypeNames.push_back(value); return *this; }

    /**
     * <p>The names of the policy types. If no names are specified, describes all
     * policy types defined by Elastic Load Balancing.</p>
     */
    inline DescribeLoadBalancerPolicyTypesRequest& AddPolicyTypeNames(Aws::String&& value) { m_policyTypeNamesHasBeenSet = true; m_policyTypeNames.push_back(std::move(value)); return *this; }

    /**
     * <p>The names of the policy types. If no names are specified, describes all
     * policy types defined by Elastic Load Balancing.</p>
     */
    inline DescribeLoadBalancerPolicyTypesRequest& AddPolicyTypeNames(const char* value) { m_policyTypeNamesHasBeenSet = true; m_policyTypeNames.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_policyTypeNames;
    bool m_policyTypeNamesHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticLoadBalancing
} // namespace Aws
